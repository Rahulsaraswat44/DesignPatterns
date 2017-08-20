#include <iostream>
#include <vector>
#include <algorithm>

//class Observer;

class Car{
int position;
std::vector<class Observer *> observerList;

public:
	int getposition(){
		return position;
	}
	void setposition(int newposition){
		position = newposition;
		notify();
	}
	void attach(Observer *obs){
		observerList.push_back(obs);
	}
	void detach(Observer *obs){
		observerList.erase(std::remove(observerList.begin(),observerList.end(), obs) , observerList.end());
	}
	void notify();
};

class Observer{
Car *_car;
public:
	Observer(Car *car){
		_car = car;
		_car->attach(this);
	}
	virtual void update() = 0;
protected:
	Car* getcar() {
		return _car;
	}
};

class leftobserver : public Observer {
public:
	leftobserver(Car * car) : Observer(car) {};
	void update(){
		int pos = getcar()->getposition();
		if(pos < 0)
			std::cout << "Car on the left" << std::endl;
	}
};

class rightobserver : public Observer {
public:
	rightobserver(Car * car) : Observer(car) {};
	void update(){
		int pos = getcar()->getposition();
		if(pos > 0)
			std::cout << "Car on the right" << std::endl;
	}
};

class midlleobserver : public Observer {
public:
	midlleobserver(Car * car) : Observer(car) {};
	void update(){
		int pos = getcar()->getposition();
		if(pos == 0)
			std::cout << "Car in the middle of road" << std::endl;
	}
};

void Car::notify(){
	for(int i = 0; i < observerList.size(); ++i)
		observerList[i]->update();
}

int main()
{
Car *car = new Car();

leftobserver leftobserver(car);
rightobserver rightobserver(car);
midlleobserver midlleobserver(car);

std::cout << "hit left right button to drive the car press ESC to close" << std::endl;

char buttonpressed ;
bool breakloop = false;

while(breakloop == false)
{
	std::cin >> buttonpressed;

	switch(buttonpressed){
		case 108:			// l pressed for left position
		{
			car->setposition(-1);
			break;
		}

		case 114:			// r pressed for left position
		{
			car->setposition(1);
			break;
		}

		case 99:			// c pressed for left position
		{
			car->setposition(0);
			break;
		}

		case 98:			// b pressed for break
		{
			breakloop = true;
			break;
		}

		default:
		{
			std::cout << "please drive carefully" << std::endl;
			break;
		}
	}
}

std::cout << "byee ..." << std::endl;
}




