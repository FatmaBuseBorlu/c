#include<stdio.h>
#include<stdlib.h>
#include <math.h> 

int main() {
	
	double derece,sonucsin,sonuccos;
	
	printf("Dereceyi Girin: ");
	scanf("%lf",&derece);
	
	sonucsin=sin(derece);
	printf("Sinus: %lf \n",sonucsin);
	
	sonuccos=cos(derece);
	printf("Cosinus: %lf ",sonuccos);
	
}

