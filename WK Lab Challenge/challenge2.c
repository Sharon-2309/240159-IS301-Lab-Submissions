#include <stdio.h>

int main() {
    int a, b, x, y, result;
    
    printf("Enter a, b, x, y: ");
    scanf("%d %d %d %d", &a, &b, &x, &y);
    
    result = (a - b) * (x - y);
    printf("Result = %d\n", result);
    
    return 0;
}