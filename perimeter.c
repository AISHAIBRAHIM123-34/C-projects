// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a, b, perimeter;
    
    printf("Enter side a :");
    scanf("%d", &a);
    
    printf("Enter side b :");
    scanf("%d", &b);
    
    perimeter = 2*(a+b);
    
    printf("Perimeter of rectangle is : %d/n", perimeter);

    return 0;
}