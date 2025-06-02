#include <stdio.h>

void main() {
    float pi = 3.14159, r, Acircle;
    
    printf("Write the r value. \nAnswer: ");
    scanf("%f", &r);
    
    Acircle = pi*(r*r);
    printf("Circle area: %f",Acircle);
}