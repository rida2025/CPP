/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:53:03 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/21 11:07:24 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool is_sorted(const std::vector<int>& list) {
    for (size_t i = 0; i + 1 < list.size(); i++) {
        if (list[i] > list[i + 1]) {
            return false;
        }
    }
    return true;
}

int jacobsthal(int n){
    if (n <= 1)
        return (n);
    return (jacobsthal(n - 1) + 2 * jacobsthal(n - 2));
}

bool positiveInt(const char *str){
    int value;
    std::stringstream ss(str);
    ss >> value;
    if (ss.fail() || !ss.eof())
        return true;
    if (value < 0)
        return true;
    return false;
}

bool parse(char **argv){
    int i = 1;
    while (argv[i]){
        if (positiveInt(argv[i]))
            return true;
        i++;
    }
    return false;
}

void ft_swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void vsort_pairs(std::vector<std::pair<int, int> > &pairs){
    for (std::vector<std::pair<int, int> >::iterator it = pairs.begin();it != pairs.end();it++){
        if (it->first > it->second)
            ft_swap(&it->first, &it->second);
    }
}

void dsort_pairs(std::deque<std::pair<int, int> > &pairs){
    for (std::deque<std::pair<int, int> >::iterator it = pairs.begin();it != pairs.end();it++){
        if (it->first > it->second)
            ft_swap(&it->first, &it->second);
    }
}

void vmerge(std::vector<std::pair<int, int> > &pairs, int start, int mid, int end) {
    std::vector<std::pair<int, int> > tmp;
    int i = start;
    int j = mid + 1;

    while (i <= mid && j <= end) {
        if (pairs[i].second < pairs[j].second)
            tmp.push_back(pairs[i++]);
        else
            tmp.push_back(pairs[j++]);
    }

    while (i <= mid)
        tmp.push_back(pairs[i++]);

    while (j <= end)
        tmp.push_back(pairs[j++]);

    for (size_t k = 0; k < tmp.size(); ++k) {
        pairs[start + k] = tmp[k];
    }
}

void vmergeSort(std::vector<std::pair<int, int> > &pairs, int start, int end){
    
    if(start < end){
        int mid = (start+end) / 2;
        vmergeSort(pairs,start,mid);
        vmergeSort(pairs,mid + 1,end);
        vmerge(pairs, start, mid, end);
    }
}

void dmerge(std::deque<std::pair<int, int> > &pairs, int start, int mid, int end) {
    std::deque<std::pair<int, int> > tmp;
    int i = start;
    int j = mid + 1;

    while (i <= mid && j <= end) {
        if (pairs[i].second < pairs[j].second)
            tmp.push_back(pairs[i++]);
        else
            tmp.push_back(pairs[j++]);
    }

    while (i <= mid)
        tmp.push_back(pairs[i++]);

    while (j <= end)
        tmp.push_back(pairs[j++]);

    for (size_t k = 0; k < tmp.size(); ++k) {
        pairs[start + k] = tmp[k];
    }
}

void dmergeSort(std::deque<std::pair<int, int> > &pairs, int start, int end){
    
    if(start < end){
        int mid = (start+end) / 2;
        dmergeSort(pairs,start,mid);
        dmergeSort(pairs,mid + 1,end);
        dmerge(pairs, start, mid, end);
    }
}

void    first_container(char **tab, std::vector<std::pair<int, int> > &pairs, std::vector<int> &mainchain, double &vector1){
    int i = 1;
    int protectme = -1;
    int index = 0;
    int previous_index = -1;
    int tmp = 0;
    while (tab[i]){
        if (tab[i + 1]){
            pairs.push_back(std::make_pair(std::atoi(tab[i]), std::atoi(tab[i + 1])));
            i += 2;
        }
        else{
            protectme = std::atoi(tab[i]);
            i++;
        }
    }
    std::clock_t start = std::clock();
    
    vsort_pairs(pairs);

    vmergeSort(pairs, 0, pairs.size()-1);

    for (std::vector<std::pair<int, int> >::iterator it = pairs.begin();it != pairs.end();it++){
        mainchain.push_back(it->second);
    }
    for (size_t i = 0; i <= pairs.size();i++){
        index = jacobsthal(i);
        if (index < 0)
            break ;
        if (index == previous_index)
            continue ;
        if (index >= (int)pairs.size())
            index = (int)pairs.size() - 1;
        tmp = index;
        while (tmp > previous_index){
            std::vector<int>::iterator it = std::lower_bound(mainchain.begin(), mainchain.end(), pairs[tmp].first);
            mainchain.insert(it, pairs[tmp].first);
            tmp--;
        }
        previous_index = index;
    }

    if (protectme != -1){
        std::vector<int>::iterator it = std::lower_bound(mainchain.begin(), mainchain.end(), protectme);
        mainchain.insert(it, protectme);
    }

    std::clock_t end = std::clock();
    vector1 = double(end - start) / CLOCKS_PER_SEC * 10;
}

void    second_container(char **tab, std::deque<std::pair<int, int> > &pairs, std::deque<int> &mainchain, double &vector1){
    int i = 1;
    int protectme = -1;
    int index = 0;
    int previous_index = -1;
    int tmp = 0;
    while (tab[i]){
        if (tab[i + 1]){
            pairs.push_back(std::make_pair(std::atoi(tab[i]), std::atoi(tab[i + 1])));
            i += 2;
        }
        else{
            protectme = std::atoi(tab[i]);
            i++;
        }
    }
    std::clock_t start = std::clock();
    
    dsort_pairs(pairs);

    dmergeSort(pairs, 0, pairs.size()-1);

    for (std::deque<std::pair<int, int> >::iterator it = pairs.begin();it != pairs.end();it++){
        mainchain.push_back(it->second);
    }
    for (size_t i = 0; i <= pairs.size();i++){
        index = jacobsthal(i);
        if (index < 0)
            break ;
        if (index == previous_index)
            continue ;
        if (index >= (int)pairs.size())
            index = (int)pairs.size() - 1;
        tmp = index;
        while (tmp > previous_index){
            std::deque<int>::iterator it = std::lower_bound(mainchain.begin(), mainchain.end(), pairs[tmp].first);
            mainchain.insert(it, pairs[tmp].first);
            tmp--;
        }
        previous_index = index;
    }

    if (protectme != -1){
        std::deque<int>::iterator it = std::lower_bound(mainchain.begin(), mainchain.end(), protectme);
        mainchain.insert(it, protectme);
    }

    std::clock_t end = std::clock();
    vector1 = double(end - start) / CLOCKS_PER_SEC * 10;
}

void start(char **tab){
    double vector1;
    double deque1;
    std::vector<std::pair<int, int> > vpairs;
    std::vector<int> vmainchain;
    std::deque<std::pair<int, int> > dpairs;
    std::deque<int> dmainchain;

    std::cout << "Before: ";
    for (size_t i = 1; tab[i];i++){
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

    first_container(tab, vpairs, vmainchain, vector1);
    second_container(tab, dpairs, dmainchain, deque1);
    std::cout << "After:  ";
    for (size_t i = 0; i < vmainchain.size();i++){
        std::cout << vmainchain[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " <<  vmainchain.size() << " with std::vector : ";
    std::cout << std::fixed << std::setprecision(5) << vector1 << " us\n";
    std::cout << "Time to process a range of " <<  dmainchain.size() << " with std::deque  : ";
    std::cout << std::fixed << std::setprecision(5) << deque1 << " us\n";
}