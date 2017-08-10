#include <iostream>


class Base{
public:
	Base(){
		std::cout << "Base C-tor is called " << std::endl;
	}
	virtual void fun(){
		std::cout << "Base fun() is called " << std::endl;
	}
	virtual  void sorrow(){
		std::cout << "Base Sorrow is called " << std::endl;
	} 
	virtual ~Base(){
		std::cout << "Base D-tor is called " << std::endl;
	}
};

class Derived : public Base{
public:
	Derived(){
		std::cout << "Derived C-tor is called " << std::endl;
	}
	virtual void fun(){
		std::cout << "Derived fun() is called " << std::endl;
	}
	void sorrow(){
		std::cout << "Derived Sorrow is called " << std::endl;
	} 
	~Derived(){
		std::cout << "Derived D-tor is called " << std::endl;
	}
};


int main(){

Base *b1 = new Base();
Base *b2 =  new Derived();

b1->fun();
b2->fun();

b1->sorrow();
b2->sorrow();

delete b1;
delete b2;

}
