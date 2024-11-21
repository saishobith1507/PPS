#include <stdio.h>

int main() {
    int n,i;
    float total_value,discount,tax,final_price,cost;
    float discount_rate,tax_rate=0.08;
    printf("Enter the number of items purchased: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++){
        printf("Enter the price of item %d: ",i);
        scanf("%f", &cost);
        total_value += cost;
    }
    if (total_value >= 50 && total_value <= 300) {
        discount_rate = 0.05;
    } else if (total_value > 300) {
        discount_rate = 0.12;
    } else{
    	discount_rate=total_value;
	}
    discount = total_value * discount_rate;
    float discounted_price = total_value - discount;
    tax = discounted_price * tax_rate;
    final_price = discounted_price + tax;
    printf("Total value before discount: %.2f\n", total_value);
    printf("Discount applied: %.2f\n", discount);
    printf("Tax applied: %.2f\n", tax);
    printf("Final price: %.2f\n", final_price);

    return 0;
}
