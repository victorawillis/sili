#include <stdio.h>
#include "/Users/vic/Documents/Coding/vimpg/sili/simplelibrary.h"

int main(){
	printf("enter a base: ");
	int base;
	scanf("%d", &base);

	printf("\nenter an exponent: ");
	int power;
	scanf("%d", &power);

	int option;
	printf("select an option. 1) square base. 2) raise base to exponent. ");
	scanf("%d", &option);

	int result = -1;
	switch(option){
		case 1:
			result = square(base);
			printf("\nsquare: %d ", result);
			break;

		case 2:
			result = expo(base, power);
			printf("\nexpo: %d ", result);
			break;

		default: printf("invalid value. ");
	}
	
	return 0;
}
