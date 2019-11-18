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
