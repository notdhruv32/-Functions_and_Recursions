#include<stdio.h>
#include<stdlib.h>

int add(int a, int b); //func. prototype

int main() {
    int a, b, c;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    c = add(a, b);
    printf("%d + %d = %d", a, b, c);

return 0;
}

int add(int a, int b) {
    int result;
    result = a + b;
    return result;
}