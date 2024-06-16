/*
Write a program using recursion to calculate nth element of fibchino series.
*/

//hint: fib(n) = fib(n-1) + fib(n-2)

#include<stdio.h>
#include<stdlib.h>

int fib(int n); //func. prototype 

int main() {
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("The %dth number in fibonacci series is %d",a , fib(a));

return 0;
}

int fib(int n) {
    if(n == 0) {
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}