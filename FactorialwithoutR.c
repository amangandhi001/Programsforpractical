#include<stdio.h>
int main()
{
int a,b,fact=1;  
  printf("Enter a number:");                                                                                                                            
  scanf("%d",&a);
for(b=1;b<=a;b++)
{
fact=fact*b;
}
printf("The factorial is %d\n",fact);
                           }

}
