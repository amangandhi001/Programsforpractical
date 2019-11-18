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
}
