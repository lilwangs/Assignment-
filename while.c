//For loop
/*
program to output while 
Author: Lewis Wang'ombe 
Reg: D33-2404-2023 
Date:7/03/2025
*/
#include<stdio.h>
int main() {
    int i=1;
    int sum=0;
    while(i<=100){
        printf("%d \n",i*i*i);
        i++;
        sum=(i*i*i)+sum;
    }
    printf("the sum is %d", sum);    
    return 0;
}    