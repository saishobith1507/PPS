#include<stdio.h>
int main(){
	float profitMargin,tax,costPrice,finalProfit;
	
	printf("Enter Cost Price: ");
	scanf("%f",&costPrice);
	if(costPrice<100){
		profitMargin=costPrice*25/100;
	}
	else if(costPrice<=300){
		profitMargin=costPrice*20/100;
	}
	
	else{
		profitMargin=costPrice*15/100;
	}
	tax=profitMargin*8/100;
	finalProfit=profitMargin-tax;
	printf("Profit margin: %.2f\n",profitMargin);
	printf("Tax on profit: %.2f\n",tax);
	printf("Final profit after tax: %.2f\n",finalProfit);
	return 0;
}
