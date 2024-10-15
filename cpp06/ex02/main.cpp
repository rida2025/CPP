#include "Base.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// class D : public Base {};

int main() {
	std::cout << "--------------------RealType----------------------" << std::endl ;

	Base* obj = generate();

	identify(obj);
	identify(*obj);

	delete obj;

	// std::cout << "--------------------FalseType----------------------" << std::endl ;

	// Base* p = new D();

	// identify(p);
	// identify(*p);

	// delete p;


	return 0;
}
