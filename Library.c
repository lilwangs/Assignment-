/*
program to calculate the fine for overdue library books 
Author: Lewis Wang'ombe 
Reg: D33-2404-2023
Date: 2/03/2025
*/
#include<stdio.h>
int main ()
{
    //variable declaration 
    int b;//book ID
    int r;//return date 
    int d;//due date 
    int n;//days overdue 
    int fn;//fine amount 
    printf("Enter book ID \n");
    scanf("%d", &b);
    printf("Enter return date \n");
    scanf("%d", &r);
    printf("Enter due date \n");
    scanf("%d", &d);
    n=r-d;//days overdue =return date - due date 
    printf("The days overdue is %d",n);
    if (n>1    &&    n<=7) {
        printf("fn=20");
    }
    else if (n>7    &&    n<=14) {
        printf("fn=50");
    }
    else if (n>15)   {
        printf("fn=100");
    }
    return 0;   
}