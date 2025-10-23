// Write a ‘C’ program to implement bitwise shift operators (<<, >>).
#include<stdio.h>
int main(){
    int num, leftshift, rightshift;
    printf("Enter a number: ");
    scanf("%d", &num);
    leftshift = num << 1;
    rightshift = num >> 1;
    printf("Original number: \n", num);
    printf("After left shift(num << 1): %d\n", leftshift);
    printf("After right shift(num >> 1): %d\n", rightshift);

    return 0;
}