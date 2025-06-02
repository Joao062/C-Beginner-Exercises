#include <stdio.h>

void main(){
    int num;
    
    printf("Type a number.\nAnswer: ");
    scanf("%d", &num);
    
    if (num%2 == 0) {
        printf("your number is even!");
    } else {
        printf("Your number is odd!");
    }
}