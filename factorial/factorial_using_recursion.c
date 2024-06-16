#include<stdio.h>
#include<stdlib.h>

int factorial(int x);

int main() {
    int a, b;
    printf("Enter the number for finding factorial: ");
    scanf("%d", &a);

    b = factorial(a);
    printf("Factorial of !%d id %d", a, b);

return 0;
}

int factorial(int x) {
    if(x == 1 || x == 0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}