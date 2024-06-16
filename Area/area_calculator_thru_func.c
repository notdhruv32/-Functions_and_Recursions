#include<stdio.h>
#include<stdlib.h>

int area(int a);  //func. prototype

int main() {
    int side, result, a, b, c;
    printf("Enter the Side of square: ");
    scanf("%d", &side);
    c = area(side);  //func. called
    printf("Area = %d", c);

return 0;
}

int area(int a) {
    int result;
    result = a * a;
    return result;
}