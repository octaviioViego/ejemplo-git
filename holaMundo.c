#include <stdio.h>
//Autor: Octavio Arroyo

int suma(int n){
	return n + suma(n-1);
}

int main(){
	printf("Hola mundo");
}
