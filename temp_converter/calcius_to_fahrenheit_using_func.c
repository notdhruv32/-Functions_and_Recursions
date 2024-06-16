#include<stdio.h>
#include<stdlib.h>

float converter(float a); //prototype;

int main() {
    int celcius;
    printf("Enter the celcius: ");
    scanf("%d", &celcius);

    printf("%dC in Fahrenheit is %f", celcius, converter(celcius));

return 0;
}

float converter(float a) {
    return (a * 9/5) + 32;
}