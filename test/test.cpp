#include <iostream>
#include "string.h"
#include "stdlib.h"

using namespace std;

class ui_tuner
{

	enum evenID
	{
		Seek_id,
		autostore_id,
		store_station_id
	};
public:
void test_function(void){ std::cout << "test_function is called" << std::endl;}
};

class Tuner_main
{
ui_tuner uiTuner;
public:
void testing_funciton(void) { uiTuner.test_function(); }
};

int main()
{

Tuner_main Tuner;
Tuner.testing_funciton();

unsigned char *msgBuffer = "1234is the right way" ;
unsigned int eventID = 0;
unsigned char eventchar[4] = {0};
unsigned char payload[16] = {0};


//strncpy(eventchar, msgBuffer, 4);
//eventID = atoi(eventchar);
strncpy((char *)payload,(char *)(msgBuffer+4), 20-4);

std::cout << payload << std::endl;


return 0;

}
