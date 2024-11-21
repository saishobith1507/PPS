#include <stdio.h>

int main() {
    float totalValue = 0.0, discount = 0.0, tax = 0.0, finalPrice = 0.0;

    printf("Enter the total value of the purchase: ");
    scanf("%f", &totalValue);

    if (totalValue < 50) {
        discount = 0.0;
    } else if (totalValue >= 50 && totalValue <= 200) {
        discount = totalValue * 0.07;
    } else if (totalValue > 200 && totalValue <= 500) {
        discount = totalValue * 0.10;
    } else if (totalValue > 500) {
        discount = totalValue * 0.15;
    }

    float discountedPrice = totalValue - discount;
    tax = discountedPrice * 0.06;
    finalPrice = discountedPrice + tax;

    printf("Original total value: %.2f\n", totalValue);
    printf("Discount applied: %.2f\n", discount);
    printf("Discounted price: %.2f\n", discountedPrice);
    printf("Sales tax applied: %.2f\n", tax);
    printf("Final price after tax: %.2f\n", finalPrice);

    return 0;
}
