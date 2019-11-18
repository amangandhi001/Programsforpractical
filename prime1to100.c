#include<stdio.h>

   int main(){

int numbr,k,re;

printf(" The prime numbers between 1 and 100 : \n");

   for(numbr=2;numbr<=100;++numbr)

  {

   re=0;

  for(k=2;k<=numbr/2;k++){

  if((numbr % k) == 0){

 re++;

  break;
     }

   }

   if(re==0)
    printf("\n    %d ",numbr);

 }

  return 0;

   } 
