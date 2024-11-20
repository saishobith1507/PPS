#include<stdio.h>
int main(){
	int totalCost=0,food;
	float david=0,emma=0,frank=0,serviceCharge;
	printf("price of David: ");
	scanf("%f",&david);
	printf("price of Emma: ");
	scanf("%f",&emma);
	printf("price of Frank: ");
	scanf("%f",&frank);
	totalCost=david+emma+frank;
	if(totalCost>200){
		serviceCharge=(totalCost*12/100);
	}
	else if(100<=totalCost>=200){
		serviceCharge=(totalCost*8/100)+serviceCharge;
	}
	else if(totalCost<100){
		serviceCharge=(totalCost*5/100)+serviceCharge;
	}
	else{
		serviceCharge=totalCost;
	}
	printf("Total Bill after service charge: %.2f\n",serviceCharge+totalCost);
	david+=serviceCharge;
	printf("David pay's: %.2f\n",david);
	emma+=serviceCharge;
	printf("Emma pay's: %.2f\n",emma);
	frank+=serviceCharge;
	printf("Frank pay's: %.2f\n",frank);
	
	return 0;
	
}
