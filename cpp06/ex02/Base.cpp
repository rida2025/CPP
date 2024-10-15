#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){
	
}

Base*	generate(void) {
	std::srand(std::time(0));
	int random = std::rand() % 3 + 1;

	std::cout << "random: " << random << std::endl;
	if (random == 1)
		return new A();
	else if (random == 2)
		return new B();
	else if (random == 3)
		return new C();
	return NULL;
}

void	identify(Base* p) {
	std::cout << "by pointer" << std::endl;
	if (dynamic_cast<A*>(p)) {
		std::cout << "Type: " << "A" << std::endl ;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "Type: " << "B" << std::endl ;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "Type: " << "C" << std::endl ;
	}else {
		std::cout << "Unknown type" << std::endl;
	}
}

void	identify(Base& p) {
	std::cout << "by reference" << std::endl;
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Type: " << "A" << std::endl ;
		return ;
	} catch (std::bad_cast&) {}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Type: " << "B" << std::endl ;
		return ;
	} catch (std::bad_cast&) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Type: " << "C" << std::endl ;
		return ;
	} catch (std::bad_cast&) {}
	std::cout << "Unknown type" << std::endl;
}
