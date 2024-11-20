#include<stdio.h>
int main() {
    int clothType,quantity,i;
    float price,totalCost=0, afterDiscount;

    printf("No. of cloth types: ");
    scanf("%d",&clothType);

    for (i=1;i<=clothType;i++) {
        printf("Enter quantity and price per unit for cloth type %d: ",i);
        scanf("%d %f",&quantity,&price);
        float cost=quantity*price;
        totalCost+=cost;

        printf("Cost for cloth %d: %.2f\n",i,cost);
    }
    	if(clothType>2){
        afterDiscount=totalCost*15/100;
    } 	else if (clothType>5){
        afterDiscount=totalCost*25/100;
    } 	else{
        afterDiscount=totalCost;
    }
    printf("Total amount to pay after discount: %.2f\n",afterDiscount);

    return 0;
}


