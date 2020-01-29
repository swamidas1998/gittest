//program to print factorial of given number

#include<stdio.h>
int main()
{
  int num,fact=1;
  printf("enter the value of num:");
  scanf("%d",&num);
  	while(num>0)
	    {
		fact=fact*num;
		num--;
	    }
	printf("%d\n",fact);
}
