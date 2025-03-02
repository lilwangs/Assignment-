//program to calculate simple interest 
/*
program to output simple interest 
Author: Lewis Wang'ombe 
Reg: D33-2404-2023
Date:22/02/2025
*/
#include<stdio.h> //printf("");scanf("");
int main(){
    int principle;
    int time;
    int rate;
    int si;
    printf("program to calculate si \n");
    printf("Enter principle \n");
    scanf("%d", &principle);
    printf("Enter time \n");
    scanf("%d", &time);
    printf("Enter rate \n");
    scanf("%d", &rate);
    si=(principle*time*rate)/100;
    printf("The simple interest is %d",si);
    return 0;
}