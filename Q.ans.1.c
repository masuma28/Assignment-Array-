#include<stdio.h>
int main(){
float tempArray[7],sum=0,average;
int i;
for(i=0;i<7;i++)
    {

   printf("enter temperature of day:%d=",i+1);
     scanf("%f",&tempArray[i]);
     sum=sum+tempArray[i];

     }
     average=sum/7.0;
     printf("the average temperature of the week is=%.2f",average);
     return 0;
     }
