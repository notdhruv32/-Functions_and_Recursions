//Write a program using recursion to print the following pattern (first n lines):
// *
// ***
// *****
//hint - (2n-1) a formula used for odd numbers.

#include<stdio.h>
#include<stdlib.h>

void pattern(int n);

int main() {
    int n;
    printf("Enter how big Triangle u want[in numbers(not recommended more than 15)]: ");
    scanf("%d", &n);
    pattern(n);

return 0;
}

void pattern(int n) {
    if(n == 1) {
        printf("*\n");
        return;
    }
    pattern(n-1);
    for(int i; i<(2*n-1); i++) {
        printf("*");
    }
    printf("\n");
}