//Author: Kelvin Kariuki Waithera 
//Course: Computer systems engineering 
//Adm:PA107/G/24231/24
//program to check for loan eligibility 
#include <stdio.h>

int main(){
    int age, income;
    printf("Enter your age and annual income: ");
    scanf("%d,%d", &age, &income);

    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately,we are unable to offer you a loan at this time.");
    }
return 0;
}