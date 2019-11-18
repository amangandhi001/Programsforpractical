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
