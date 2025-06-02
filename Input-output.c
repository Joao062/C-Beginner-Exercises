#include <stdio.h>

void main() {
    char nome[50];
    
    printf("Write your name:\nAnswer: ");
    fgets(nome, sizeof(nome), stdin);
    
    printf("Welcome to my C program %s!!!", nome);
    
}