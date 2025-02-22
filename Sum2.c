//program to add two numbers  
/*
program to output sum of two numbers 
Author: Lewis Wang'ombe 
Reg: D33-2404-2023
Date:22/02/2025
*/
#include<stdio.h> //printf("");scanf("");
int main(){
    int a;
    int b;
    int sum;
    printf("program to add two numbers \n");
    printf("Enter the first number \n");
    scanf("%d", &a);
    printf("Enter the second number \n");
    scanf("%d", &b);
    sum=a+b;
    printf("The sum is %d",sum);
    return 0;
}