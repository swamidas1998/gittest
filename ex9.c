//passing a functions base address as an argument to another function

#include<stdio.h>
int count_digits(int num, int (*fptr_printf)(const char *,...));
int main()
{
  int num=1235,c;
  c=count_digits(num,printf);
  printf("%d\n",c);
}
int count_digits(int num,int (*fptr_printf)(const char *,...))
  {
    int c=0;
      do
	{
	  c++;
	  num=num/10;
	}
	 while(num>0);
	 fptr_printf("%d\n",c);
	 return c;
   }
