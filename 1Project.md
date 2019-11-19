## PROGRAM ASSIGNMENT


![gne](https://camo.githubusercontent.com/8f9bf2581e1036b7f6b66e6d804c08d06226b7b6/687474703a2f2f676e6465632e61632e696e2f7e69637261656374323031362f696d616765732f6c6f676f2e6a7067)


## NAME Dharamveer Singh

## Roll-number-1921024

## Branch-I.T(A1)

## Submitted to- Er. Ranjot Kaur

## Submission Date -19/11/2019

## 1.ADITTION OF TWO NUMBERS

````

#include<stdio.h>
int main()
{
int a,b;
     printf("Enter first no.:");
     scanf("%d",&a);
     printf("Enter second no.:");
     scanf("%d",&b);
int addTwo=a+b;
     printf("Sum:%d+%d=%d",a,b,addTwo);
}

````

## 2. CALCULATOR
````

#include<stdio.h>
int main()
 {
       char operator;
       int a,b;
             printf("Enter an operator(+,-,/,%,*):");
             scanf("%c",&operator);

printf("\nEnter two numbers:\n");
scanf("%d\n %d",&a,&b);
 switch(operator)
                  {
      case'+':  printf("The addition is:%d\n", (a+b) );
       break;
      case'-': printf("The subtraction is:%d\n", (a-b));
       break;
      case'/':printf("The  division is:%d\n", (a/b));
       break;
      case'%': printf("The remainder is:%d\n", (a%b));
       break;
      case'*': printf("The mutiplication is:%d\n", (a*b));
       break;

      default: printf("Enter a valid operator");
       break;
}
````

## 3.Experience of employs
````
#include<stdio.h>
int main()
{
int c;
int a,b;
     printf("Enter no. of employees:");
     scanf("%d",&a);
     printf("Enter their experience:");
  for(int i=1;i<=a;i++){
     scanf("%d",&b);
  c+=b;
}
     print("Total experience:%d",c);
}
````

## 4.FIZZ BUZZ GAME

````

#include <stdio.h>
int intfloat();
int name();
int name(){
printf("\n\t\tDharam  and Bharat");}
int game();
int b();

int Report();
int Report()
{printf("\n\t\t Guru Nanak Dev engg collage\n\n\t\tDepartment of I.T.");}
int game(){int a;int i;
{ for(i=0;i<=2;i++)
{printf("\nEnter Number to start game:");
 scanf("%d",&a);
 if(a%3==0 && a%5==0)
 {
 printf("\nFizzBuzz");
}
else if(a%5==0)
 {
 printf("\nBuzz");
}
else if(a%3==0)
 {
printf("\nFizz");
}
else 
{
 printf("\n%d is not a valid number",a);
}}}}

int b()
{ int press;
printf(" \nWelcome to FizzBuzz Game \n");

printf("\nEnter 1 to Start the game\n");
scanf("%d",&press);
if (press==1)
{
game();

}
else {
printf("\nRetry again");
}

}
int intfloat(){
printf("%d",intfloat);
}


int main()
{name();
Report();
return 0;
}
````

## 5.FACTORIAL WITHOUT RECUSION

````
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
````

## 6.Farhenheit to celcius
````
#include<stdio.h>
int main()
{float f;
float c;    
printf("\n\tFahrenheit to c \nEnter the value:");

scanf("%f",&f);
c=(5/9) * f-32;
printf("\nCentigrade value=%f\n",c);



}
````

## 7.RANGE TABLE

````
#include<stdio.h>
int main()
{
int a,b,d;
printf("Enter the range first:");
scanf("%d",&a);
printf("Enter the range end: ");
scanf("%d",&b);
printf("Enter the end of table");
scanf("%d",&d);

printf("\n\n\t\t\tTABLE RANGE FROM %d - %d and End point is %d",a,b,d);


for(int i=a ;i<=b;i++){
for(int j=0;j<=d;j++){
int c;
c=j*i;
printf("\n %d X %d = %d \n",i,j,c);
}

}
}
````

##8.EVEN OR ODD
````
#include <stdio.h>
void main()
{
int a;
printf("Enter no:",a);
scanf("%d",&a);
if (a%2==0)
{printf("No is even\n");}
else
{printf("No is odd\n");}
}
````

## 9.EVEN ARRAY

````
#include<stdio.h>
int main()
{
int arr[10];
int i;
for(i=0;i<10;i++){
        printf("Enter value of arr[%d]:",i);
        scanf("%d",&arr[i]);
           }

for(i=0;i<10;i++)
        {
       if(arr[i]%2==0){
               printf("\n%d is even.\n",arr[i]);
                     }
}
}
````
## 10.Neagitive and positive

````
#include<stdio.h>
void main()
 {
 int a;
 printf("Enter your No:",a);
 scanf("%d",&a);
 if (a<0)
 {
 printf("No is negitive\n");
}
else
 {
printf("No is Positive\n");
}
}
````
## 11.Prime No.

````

#include<stdio.h>
int main()
{
int a,b,c=0;
printf("Enter the Range ");
scanf("%d",&a);
for(int i=2;i<a;i++)
 
{c=1;

}
if(c==0)
{
printf("PN");
}
else
{
printf("N");


}
}
````

## 12.TABLE YOU WANT TO PRINT

````
#include<stdio.h>
int main(){
int a;
printf("Entere the which you want :");

scanf("%d",&a);
printf("\t\n\nTable of %d ",a);

for(int i =0;i<=10;i++)
{int c;
c=i*a;
printf(" %d X %d = %d \n",i,a,i,c);
}


}
````


