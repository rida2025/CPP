/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 06:44:16 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/22 15:09:35 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
 
double convert_date(std::string date){
    std::string value = "";
    size_t i = 0;
    while (i < date.length()){
        if (date[i] != '-')
            value += date[i];
        i++;
    }
    double result;
    std::stringstream ss(value);
    ss >> result;
    return (result);
}

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

bool isValidDate(int year, int month, int day) {
    if (year <= 0 || year > INT_MAX)
        return (true);
    if (month < 1 || month > 12)
        return (true);
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year))
        daysInMonth[1] = 29;
    if (day < 1 || day > daysInMonth[month - 1])
        return (true);
    return (false);
}


std::string   remove_spaces(std::string &day){
    std::string new_str;
    int i = 0;
    while (day[i]){
        if (day[i] == ' ' || (day[i] <= 9 && day[i] >= 13))
            i++;
        else
        {
            new_str += day[i];
            i++;
        }
    }
    return (new_str);
}

bool check_everything(std::string year, std::string month, std::string day){
    int year_value;
    int month_value;
    int day_value;
    day = remove_spaces(day);
    std::stringstream ss1(year);
    std::stringstream ss2(month);
    std::stringstream ss3(day);
    ss1 >> year_value;
    ss2 >> month_value;
    ss3 >> day_value;

    if (ss1.fail() || !ss1.eof() || ss2.fail() || !ss2.eof() || ss3.fail() || !ss3.eof())
        return (true);
    if (isValidDate(year_value, month_value, day_value))
        return (true);
    return (false);
}

bool check_key(std::string key, std::string line){
    std::stringstream ss(key);
    std::string year = "";
    std::string month = "";
    std::string day = "";

    std::getline(ss, year, '-');
    std::getline(ss, month, '-');
    std::getline(ss, day);

    if (check_everything(year, month, day)){
        std::cout << "Error: bad input => " << line << std::endl;
        return (true);
    }
    return (false);
}

bool check_value(std::string value, std::string line){
    double test = 0;
    std::stringstream ss(value);
    ss >> test;
    if (ss.fail() || !ss.eof()){
        std::cout << "Error: bad input => " << line << std::endl;
        return (true);
    }
    if (test < 0){
        std::cout << "Error: not a positive number." << std::endl;
        return (true);
    }
    if (test > 1000){
        std::cout << "Error: too large a number." << std::endl;
        return (true);
    }
    return (false);
}

std::string get_data(std::string data){
    std::string newdata = "";
    int i = 0;
    int j = 0;
    int counter = 0;
    while (data[i] && (data[i] == ' ' || data[i] != '\t'))
        i++;
    while(data[i+j] && counter < 3 && data[i+j] != ' ' && data[i+j] != '\t'){
        if (data[i+j] == '-')
            counter++;
        newdata += data[i+j];
        j++;
    }
    return (newdata);
}

std::string get_inputdata(std::string data){
    std::string newdata = "";
    int i = 0;
    int counter = 0;
    while (data[i] && (data[i] == ' ' || data[i] == '\t'))
        i++;
    while(data[i] && counter < 3 && data[i] != '|'){
        if (data[i] == '-')
            counter++;
        newdata += data[i];
        i++;
    }
    return (newdata);
}

std::string get_inputvalue(std::string data){
    std::string newdata = "";
    int i = 0;
    while (data[i] && data[i] != '|')
        i++;
    if (data[i] && data[i] == '|')
        i++;
    while (data[i] && (data[i] == ' ' || data[i] == '\t'))
        i++;
    while(data[i] && !(data[i] == ' ' || data[i] == '\t')){
        newdata += data[i];
        i++;
    }
    while (data[i] && (data[i] == ' ' || data[i] == '\t')){
        i++;
    }
    if (data[i])
        newdata += 'x';
    return (newdata);
}

bool check_input(std::string data, std::string value, std::string line){
    if (check_key(data, line))
        return (false);
    if (check_value(value, line))
        return (false);
    return (true);
}

std::string reform(std::string form){
    std::string newform = "";
    int i = 0;
    while (form[i]){
        if (form[i] == ' ' || form[i] == '\t')
            i++;
        else
        {
            newform += form[i];
            i++;
        }
    }
    return newform;
}
void get_output(std::string date, std::string value, std::map<std::string, double> date_base){
    double input_date = 0;
    double input_value = 0;
    double date_inbase = 0;
    double next = 0;
    input_date = convert_date(date);
    std::stringstream ss2(value);
    ss2 >> input_value;
    std::map<std::string, double>::iterator it = date_base.begin();
    std::map<std::string, double>::iterator ito = date_base.begin();
    if (it != date_base.end()){
        date_inbase = convert_date(it->first);
        if (input_date < date_inbase){
            std::cout << "Error: this data is to old" << std::endl;
            return ;
        }
    }
    while (it != date_base.end()){

        if (input_date == date_inbase){
            std::cout << reform(date) << " => " << input_value << " = " << (input_value * it->second) << std::endl;
            return ;
        }
        ito++;
        if (ito != date_base.end()){
            next = convert_date(ito->first);
            if (input_date > date_inbase && input_date < next){
                std::cout << reform(date) << " => " << input_value << " = " << (input_value * it->second) << std::endl;
                return ;
            }
        }
        if (ito == date_base.end()){
            std::cout << reform(date) << " => " << input_value << " = " << (input_value * it->second) << std::endl;
            return ;
        }
        it++;
    }
}


void BinanceCryptoExchange(std::string infile){
    std::map<std::string, double> data_map;
    double value_x;
    size_t delimiter_pos = 0;
    std::string line;
    size_t lineN = 1;
    std::ifstream inputfile(infile);
    std::ifstream data_file("data.csv");
    if (!inputfile.is_open() || !data_file.is_open()){
        std::cout << "Error:  could not open file."<< std::endl;
        return ;
    }

    while (getline(data_file, line)) {
        if (lineN == 1){
            if (line != "date,exchange_rate"){
                std::cout << "Error: wrong format" << std::endl;
                return ;
            }
            lineN++;
            continue ;
        }
        delimiter_pos = line.find(',');
        if (delimiter_pos != std::string::npos) {
            std::string key = line.substr(0, delimiter_pos);
            std::string value = line.substr(delimiter_pos + 1);
            std::stringstream ss(value);
            ss >> value_x;
            data_map[key] = value_x;
            line.clear();
        }
        lineN++;
    }
    data_file.close();
    line.clear();
    lineN = 1;
    if (inputfile.peek() == std::ifstream::traits_type::eof()){
        std::cout << "Error: wrong format" << std::endl;
        inputfile.close();
        return ;
    }
    while (getline(inputfile, line)) {
        if (lineN == 1){
            if (line != "date | value"){
                std::cout << "Error: wrong format" << std::endl;
                return ;
            }
            lineN++;
            continue ;
        }
        std::string key = get_inputdata(line);
        std::string value = get_inputvalue(line);
        if (check_input(key, value, line)){
            get_output(key, value, data_map);
        }
        lineN++;
    }
    inputfile.close();
}
