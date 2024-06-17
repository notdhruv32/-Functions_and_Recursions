//Write a program using iteration to print the following pattern (first n lines):
// *
// **
// ***
//hint: Use for loop.

#include<stdio.h>
#include<stdlib.h>


int main() {
    int n, i = 1, j;
    printf("Enter the height of triangle: ");
    scanf("%d", &n);
    for(i = 1;i <= n;i++) {
        for(j = 1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }


return 0;
}