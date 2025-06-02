#include <stdio.h>

void main() {
    float n1, n2, n3, media;
    
    printf("First: \n");
    scanf("%f", &n1);
    printf("Second: \n");
    scanf("%f", &n2);
    printf("Third: \n");
    scanf("%f", &n3);
    
    media = (n1+n2+n3)/3;
    
    printf("%.1f", media);
}