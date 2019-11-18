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
