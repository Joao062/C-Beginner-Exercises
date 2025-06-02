#include <stdio.h>

void main() {
    int age;
    
    printf("Type your age.\nAnswer:");
    scanf("%d", &age);
    
    if (age >= 0 && age <= 12){
        printf("You are Children!");
    } else if (age >= 13 && age <= 17) {
        printf("You are teen!");
    } else if (age >= 18 && age <= 59 ){
        printf("You are adult!");
    } else if (age >= 60){
        printf("You are old!");
    }
    
}