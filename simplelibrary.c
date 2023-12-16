#include "/Users/vic/Documents/Coding/vimpg/sili/simplelibrary.h"

int square(int x){
	return x*x;
}

int expo(int base, int power){
	int product = base;
	
	for (int i = 1; i < power; i++){
		product *= base;
	}
	
	return product;
}

