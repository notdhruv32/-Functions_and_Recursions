#include<stdio.h>
#include<stdlib.h>

void gm(); //function initialized
void noon(); //function initialized
void gn(); //function initialized


int main() {
    printf("Program started!\n");
    gm();
    noon();
    gn();
    printf("program ended :)");

return 0;
}

void gm() {
    printf("good morning!\n");
}
void noon() {
    printf("Good afternoon!\n");
}
void gn() {
    printf("Good night :)\n");
}