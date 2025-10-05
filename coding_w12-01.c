#include <stdio.h>

int main() {
   
    int x = 10;
    int *ptr;

   
    ptr = &x; 
    printf("Before: x = %d\n", x);

   
    *ptr = 20; 
    printf("After : x = %d\n", x);

    return 0;
}