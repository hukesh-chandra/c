#include <stdio.h> 
int main() { 
    int num; 
    printf("Enter an integer: "); 
    scanf("%d", &num); 
    printf("Octal = %o\n", num); 
    printf("Hexadecimal = %X\n", num); 
    printf("Binary = %b\n", num);
    return 0; 
} 