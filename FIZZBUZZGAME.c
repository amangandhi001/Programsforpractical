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


