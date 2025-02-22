//program to calculate area of a rectangle 
/*
program to output area of a rectangle 
Author: Lewis Wang'ombe 
Reg: D33-2404-2023
Date:22/02/2025
*/
#include<stdio.h> //printf("");scanf("");
int main(){
    int length;
    int width;
    int area;
    printf("program to calculate area of a rectangle \n");
    printf("Enter length \n");
    scanf("%d", &length);
    printf("Enter width \n");
    scanf("%d", &width);
    area =length*width;
    printf("The area of the rectangle is %d",area);
    return 0;
}