#include<stdio.h>
int main(){
	int markerCost=5,paperCost=8,budget=50;
	int totalCost,maxPaper,remaining,marker_6;
	
	marker_6=markerCost*6;
	printf("Total cost of markers: %d\n",marker_6);
	budget=budget-marker_6;
	maxPaper=budget/paperCost;
	printf("Maximum paper packs he can buy: %d\n",maxPaper);
	remaining=budget-maxPaper*paperCost;
	printf("Remaining money after purchase: %d",remaining);
	return 0;
}
