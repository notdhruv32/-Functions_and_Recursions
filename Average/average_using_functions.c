/*
Write a program to find average of 3 numbers using functions.
*/

#include<stdio.h>
#include<stdlib.h>

int average(int a, int b, int c); //prototype

int main() {
    int a, b, c, result;
    printf("Enter the first no.: ");
    scanf("%d", &a);
    printf("Enter the second no.: ");
    scanf("%d", &b);
    printf("Enter the third no.: ");
    scanf("%d", &c);

    printf("Average of %d, %d, %d is %d", a, b, c,average(a, b, c));


return 0;
}

int average(int a, int b, int c) {
    return (a + b + c)/3;
}