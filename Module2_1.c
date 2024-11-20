#include <stdio.h>

int main() {
    int bookType,quantity,i;
    float price,totalCost=0, afterDiscount;

    printf("No. of book types: ");
    scanf("%d",&bookType);

    for (i=1;i<=bookType;i++) {
        printf("Enter quantity and price per unit for book type %d: ",i);
        scanf("%d %f",&quantity,&price);
        float cost=quantity*price;
        totalCost+=cost;

        printf("Cost for book %d: %.2f\n",i,cost);
    }
    if (bookType>5) {
        afterDiscount=totalCost*0.90;
    } else if (bookType>3) {
        afterDiscount=totalCost*0.95;
    } else {
        afterDiscount=totalCost;
    }
    printf("Total amount to pay after discount: %.2f\n",afterDiscount);

    return 0;
}

