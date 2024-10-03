//program to calculate fines on overdue library books
//Author:Amir Geoffrey Jeremiah
//Reg No:CT101/G/23179/24
//Date:27/09/2024
#include<stdio.h>
#include <math.h>
int main (){
	float principal,rate,time,compoundintrest,amount;
	
	printf("Enter principal:");
	scanf("%f" ,&principal);
	
	printf("Enter rate:");
	scanf("%f" ,&rate);
	
	printf("Enter time:");
	scanf("%f" ,&time);
	
	amount=principal * pow(1+rate/100,time);
	compoundintrest=amount-principal;

    printf("Amount is %.4f \n" ,amount);
	printf("Compoundinterest is %.4f \n"  ,compoundintrest);
	
	return 0;
}