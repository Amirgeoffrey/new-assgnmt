//program to calculate simple and compound interest 
//Author -Amir Geoffrey Jeremiah 
//reg no-CT101/G/23179/24
//date-24 sep 2024
//processor scanf(),printf()
 
#include<stdio.h>
int main () { 
float principal, rate, time, simple_interest  ;
printf("enter the principal: ");
scanf("%f",& principal);
printf("enter the rate: ");
scanf("%f",&rate);
printf("enter time duration: ");
scanf("%f",&time);
 //calculating simple interest 
 
  simple_interest=(principal*rate*time)/100;
  printf("simple_interest is:%f" ,simple_interest);

  







return 0 ;
}