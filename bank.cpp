//Bank loan application
#include <stdio.h>
//Author:Amir Geoffrey Jeremiah
//Reg no.CT101/G/23179/24
//Date:26 september,2024

int main() {
    // Variable declaration
    int age;
    float income;
    
    //User inputs age and income
    printf("Please enter your age here: ");
    scanf("%d", &age);
    
    printf("Please enter your annual income here(KSH): ");
    scanf("%f", &income);
    
    //Determine if customer qualifies for a loan
    if(age >= 21 && income >= 21000){
        printf("Congratulations you qualify for a loan.");
    }else{
        printf("Unfortunately, we are unable to offer you a loan at this time");
    }

    return 0;
}