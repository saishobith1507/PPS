#include<stdio.h>
int main() {
	int bookCost=20,penCost=3,budget=150;
	int totalCost,maxPens,remaining,books_4;
	
	books_4=bookCost*4;
	printf("Total cost of books: %d\n",books_4);
	budget=budget-books_4;
	maxPens=budget/penCost;
	printf("Maximum pens she can buy: %d\n",maxPens);
	remaining=budget-maxPens*penCost;
	printf("Remaining money after purchase: %d\n",remaining);
	return 0;
}
