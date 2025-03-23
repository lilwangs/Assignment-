//program to output 3D array
/*
Author: Lewis Wang'ombe 
Reg: D33-2404-2023
Date:23/03/2025
*/
#include<stdio.h>
int main()
{
    int i,j,k;
    int marks [2][2][3]={
    {
        {11,22,33},
        {44,55,66}
    },
    {
        {10,20,30},
        {40,50,60}
    }
    };
    for (i=0;i<2;i++) {
        for (j=0;j<2;j++) {
            for (k=0;k<3;k++) {
                printf("%d \t", marks [i][j][k]);
            }
        printf("\n"); 
    }
    printf("\n");
    }    
    return 0;
}