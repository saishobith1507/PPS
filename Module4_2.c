#include<stdio.h>
int main(){
	float profitMargin,tax,costPrice,finalProfit;
	printf("Enter Cost Price: ");
	scanf("%f",&costPrice);
	if(costPrice<200){
		profitMargin=costPrice*18/100;
	}
	else if(costPrice<500){
		profitMargin=costPrice*12/100;
	}
	
	else{
		profitMargin=costPrice*8/100;
	}
	tax=profitMargin*10/100;
	finalProfit=profitMargin-tax;
	printf("Profit margin: %.2f\n",profitMargin);
	printf("Tax on profit: %.2f\n",tax);
	printf("Final profit after tax: %.2f\n",finalProfit);
	return 0;
}
