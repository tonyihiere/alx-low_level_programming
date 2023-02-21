#include<stdio.h>
int main() {
    int intType;
    int longintType;
    int longlongintType;
    float floatType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of long int: %zu bytes\n", sizeof(longintType));
    printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
    printf("Size of float: %zu byte\n", sizeof(floatType));
    
    return 0;
}
