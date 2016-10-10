#include <string.h>
#include <conio.h>
#include <stdio.h>
int restar(numero1,numero2);
int sumar(numero1,numero2);
int main(){
	int numero1,numero2,resultado=0,resultado2=0;
	
	printf("introdusca un numero: ");
	scanf("%d",&numero1);
	printf("introdusca un numero: ");
	scanf("%d",&numero2);
	sumar(numero1,numero2);
	resultado=sumar(numero1,numero2);
	resultado2=restar(numero1,numero2);
	printf("Suma: %d",resultado);
	printf("\nResta: %d",resultado2);
	
}
int sumar(numero1,numero2){
	int resultado;
	resultado=numero1+numero2;
	return resultado;
}
int restar(numero1,numero2){
	int resultado2;
	resultado2=numero1-numero2;
	return resultado2;
}

