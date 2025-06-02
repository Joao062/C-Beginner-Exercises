#include <stdio.h>

void main() {
    int n1, n2, sum, sub, multi;
    float divide;
    
    printf("Write the first number:\nAnswer: ");
    scanf("%d",&n1);
    
    printf("Write the second number:\nAnswer: ");
    scanf("%d", &n2);
    
    sum = n1+n2;
    sub = n1-n2;
    multi = n1*n2;
    divide = n1/n2;
    
    printf("Sum = %d \n Sub = %d \n Multi = %d \n Divide = %.f", sum, sub, multi, divide);
}