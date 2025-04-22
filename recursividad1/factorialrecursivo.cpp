// Programa para implementar el calculo del valor del factorial de n usando un enfoque recursivo

#include <iostream>
using namespace std;

// Funcion que calcula el valor factorial del numero n recibido
int factorial(int n){
	if (n == 0)
		return 1; // Caso base: 0! = 1
	else
		return n * factorial(n - 1); // Caso recursivo: n! = n * (n - 1)!
}

int main(){
	
	int num;  // Definicion de variable entera para valor al que se le calcula el factorial

	while(true){
		// Se solicita al usuario el valor para calcular el factorial
    	cout << "Ingrese el numero entero para calcular su valor factorial (0 para salir): ";
    	cin >> num;

		if (num > 0){
			// Se llama a la funcion recursiva y se muestra el resultado
			cout << "El factorial de " << num << " es: " << factorial(num) << endl;
		}else
			if (num < 0){
				// Se indica al usuario que debe ingresar un numero entero positivo
				cout << "Debe ingresar un numero entero positivo" << endl;
			}else{
				// Deja de ejecutarse si se ingresa 0
				cout << "El programa ha finalizado" << endl;
				return 0;
			}

	}

	
	return 0;
}
