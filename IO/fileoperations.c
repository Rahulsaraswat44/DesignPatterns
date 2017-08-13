#include "stdio.h"

int main()
{
FILE *fp;
size_t datasize;
//char buff[40];
char buff[5];
char c;

fp = fopen("test.text" , "r");

/*
datasize = fread(buff, 1, 40, fp);
buff[datasize] = '\0';
*/

while(1)
{
      c = fgetc(fp);
      if( feof(fp) )
      { 
         break ;
      }
      printf("%c", c);
}

printf("size of buffer is %d\n", sizeof(buff));

fclose(fp);

}
