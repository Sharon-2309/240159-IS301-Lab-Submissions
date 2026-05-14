#include <stdio.h>

int main() {
    double rate, salesPrice, cost, commission;
    
    printf("Enter commission rate (e.g., 0.15 for 15%%): ");
    scanf("%lf", &rate);
    printf("Enter sales price: ");
    scanf("%lf", &salesPrice);
    printf("Enter cost: ");
    scanf("%lf", &cost);
    
    commission = rate * (salesPrice - cost);
    printf("Commission = %.2f\n", commission);
    
    return 0;
}