/*
Write a function to calculate force of attraction of a body of mass m 
exerted by Earth (g = 9.8 m/s)
*/

#include<stdio.h>
#include<stdlib.h>

float calculator(float x); //func. prototype

int main() {
    int mass;
    printf("Enter the Mass of body: ");
    scanf("%d", &mass);
    printf("\nForce of Attraction exerted");
    printf("by Earth on the body of mass %d is:\n%.2f m/s", mass, calculator(mass)/*function call*/);

return 0;
}

float calculator(float x) {  //func. defination
    return x * 9.8;
}