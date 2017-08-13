#include "stdio.h"

int main()
{
int c;
char s[20] = {0}; 

char *ps;

/*
while(c != 'q')
{
	printf("Enter q to quit \n");
	c = fgetc(stdin);	//fgetc would also consider endline char as valid entry
}
*/

while (s[0] != 'q')
{
	printf("Enter q to quit \n");
	ps = fgets(s, sizeof(s), stdin);  
}
printf("value of EOF is %d\n" , EOF);

puts(ps);         // puts add a newline to the string 

}
