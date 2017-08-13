#include "stdio.h"

int main()
{
FILE *stream;
char str[50] = {0};
int a  = 15;
int b = a/2; 

float c,d;

printf("%d\n",b);	//print the value of b
printf("%3d\n",b);	//print the value of b after 3rd position
printf("%03d\n",b);	//print the value of b after 3rd position and fill the first two positions with 0's

c = 185460.3;
d = c/3;

printf("%0.4f\n", d);	//print the string with precision of 4 characters after the decimal

stream = fopen("test.text", "a");

fprintf(stream , "appending this message with integer %d\n", b);  // add the formatted string to the sream

sprintf(str, "adding the integer %d to this buffer", a);
snprintf(str, 4, "adding the integer %d to this buffer", a);	// add one less than the size to the string

puts(str);	// No check on buffer overrun

fclose(stream);

return 0;
}
