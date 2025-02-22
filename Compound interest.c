//program to calculate compound interest 
/*
program to output compound interest 
Author: Lewis Wang'ombe 
Reg: D33-2404-2023
Date:22/02/2025
*/
#include<stdio.h> //printf("");scanf("");
#include<math.h>
int main(){
    int p; //principle 
    int r; //rate
    int n; //number of compounding a years
    int t; //total number of years 
    int A; //final amount including interest 
    printf("program to calculate compound interest \n");
    printf("Enter the principle \n");
    scanf("%d", &p);
    printf("Enter the rate \n");
    scanf("%d", &r);
    printf("Enter the number of compounding a year");
    scanf("%d", &n);
    printf("Enter the total number of years");
    scanf("%d", &t);
    A=p*pow((1+r/n),n*t);
    printf("The compound interest is %d",A);
    return 0;
}