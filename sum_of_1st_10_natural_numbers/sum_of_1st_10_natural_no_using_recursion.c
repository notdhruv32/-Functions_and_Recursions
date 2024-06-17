//Write a recursive function to calculate the sum of first n natural numbers.
//hint: n + sum(n-1)

#include<stdio.h>
#include<stdlib.h>

int sum(int x);

int main() {
    printf("Sum of first 10 natural no. is %d", sum(10));

return 0;
}

int sum(int x){
    if(x==1){
        return 1;
    }
    else if(x == 0){
        return 0;
    }
    else{
        return sum(x-1) + x;
    }
}