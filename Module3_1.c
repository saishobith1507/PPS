#include<stdio.h>
int main(){
	int totalCost=0,food;
	float alice=0,bob=0,charlie=0,discount;
	printf("price of Alice: ");
	scanf("%f",&alice);
	printf("price of bob: ");
	scanf("%f",&bob);
	printf("price of charlie: ");
	scanf("%f",&charlie);
	totalCost=alice+bob+charlie;
	if(totalCost>150){
		discount=totalCost*20/100;
	}
	else if(100<=totalCost>=150){
		discount=totalCost*10/100;
	}
	else if(totalCost<100){
		discount=totalCost*5/100;
	}
	else{
		discount=totalCost;
	}
	printf("Total Bill after discount: %.2f\n",discount);
	alice-=discount;
	printf("Alice pay's: %.2f\n",alice);
	bob-=discount;
	printf("Bob pay's: %.2f\n",bob);
	charlie-=discount;
	printf("Charlie pay's: %.2f\n",charlie);
	
	return 0;
	
}
