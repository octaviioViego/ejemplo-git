#include <stdio.h>
//Autor: Octavio Arroyo

int suma(int n){
	if(n == 1) { return 1; }
	return n + suma(n-1);
}

int main(){
	printf("Hola mundo");
	printf("Mau estuvo aqui");
        
}
