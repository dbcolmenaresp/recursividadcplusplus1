// Programa para implementar el calculo de la suma sucesiva de n usando un enfoque recursivo

#include <iostream>
using namespace std;

// Funcion que calcula la suma sucesiva del numero n recibido
int sumasucesiva(int n){
	if (n == 1)
		return 1; // Caso base: Sumasucesiva(1) = 1
	else
		return sumasucesiva(n - 1) + n; // Caso recursivo: Sumasucesiva(n) = Sumasucesiva(n - 1) + n
}

int main(){
	
	int num;  // Definicion de variable entera para calcular las sumas sucesivas

	while(true){
		// Se solicita al usuario el valor para calcular el factorial
	    cout << "Ingrese el valor entero para calcular las sumas sucesivas (0 para salir): ";
	    cin >> num;

		if (num > 0){
			// Se llama a la funcion recursiva y se muestra el resultado solo si el numero indicado es positivo
			cout << "La suma sucesiva de " << num << " es: " << sumasucesiva(num) << endl;
		}else
			if(num < 0){
				// Se indica que se debe ingresar un numero entero positivo
				cout << "Debe indicar un numero positivo"  << endl;			
			}else{
				// Deja de ejecutarse si se ingresa el valor 0
				cout << "El programa ha finalizado"  << endl;
				return 0;				
			}
	}
	
	return 0;
}
