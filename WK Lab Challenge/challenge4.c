#include <stdio.h>

int main() {
    double price, quantity, totalRevenue;
    
    printf("Enter price per unit: ");
    scanf("%lf", &price);
    printf("Enter quantity sold: ");
    scanf("%lf", &quantity);
    
    totalRevenue = price * quantity;
    printf("Total Revenue = %.2f\n", totalRevenue);
    
    return 0;
}