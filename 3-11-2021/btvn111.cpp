#include<stdio.h>
int main(){
	int n,h;
	printf("1.Choose the meal\n");printf("2.Order the drink\n");printf("3.Purchase\n");printf("4.Exit\n");
	printf("Enter input number=");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: 
		printf("1.Chicken rice\n");printf("2.Pho\n");printf("3.Bun\n");
		printf("Choose the meal:");
		scanf("%d",&h);
		switch(h)
		{
			case 1:case 2: case 3: printf("Thank you");break;
			return(n);
		}
		break;
		case 2: printf("Which one?");break;
		case 3: printf("Purchase the bill");
		break;
		case 4: printf("Exit");
		break;
		
		default: printf("Choose wisely");
	}
}
