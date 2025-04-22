# Recursividad C ++
Técnica de recursividad para el desarrollo de programas legibles y comprensibles

## RECURSIVIDAD

	La recursividad es una técnica fundamental en programación donde una función se llama a si misma para resolver un problema más complejo mediante la división en subproblemas más pequeños. Se utiliza cuando un problema puede descomponerse en versiones más simples de si mismo hasta alcanzar la condición de parada. La recursividad es una solución computacionalmente menos eficiente, en términos del tiempo de procesador y memoria usados para su ejecución, comparada con una solución iterativa, sin embargo permite una solución natural, fácil de entender y sencilla.

	La importancia de conocer y usar el enfoque recursivo en el diseño de programas es que existen funciones matemáticas y numerosas circunstancias y situaciones de la vida cotidiana que son de naturaleza recursivas y su implementación con esta técnica resulta mucho más intuitiva y fácil de comprender. La recursividad es especialmente útil en estructuras como árboles, algorítmos de búsqueda, operaciones matemáticas de naturaleza recursiva, procesamiento de datos recursivos y toda situación en la cual se identifique una condición recursiva y una situación de parada de la misma.

	Una función que entre las sentencias que la constituyen tienen al menos una sentencia que hace un llamado a si misma, se dice que es recursiva.

	La estructura básica de una función recursiva seria la siguiente:

void funcion(){
	...
	funcion() // llamada recursiva
	...
}

	Una función recursiva consta de dos elementos esenciales:

### Caso base: 
  Es la condición que detiene la recursión mediante la asignación de un valor básico sin necesidad de llamar a la función de manera recursiva. Sin un caso base, la función se ejecutaria indefinidamente.

### Caso recursivo: 
  Es la pate donde la función se llama a si misma con una versión reducida del problema.

	Una consideración importante al momento de implementar una función recursiva es evitar la ejecución infinita de dicha función, para evitar esta situación se debe incluir en la misma una condición de salida, denominada caso base, que determine la salida de las llamadas recursivas, en la cual el valor de la funcion se determina directamente a través de la ejecución de unas pocas sentencias básicas, sin la necesidad de llamar recursivamente a la función, evitando de esta manera que la función continúe indefinidamente llamandose a si misma. Es importante asegurarse de que cada llamada recursiva de la función a si misma suponga un acercamiento paulatino a la condición de parada o caso base.

	Al momento de diseñar un algoritmo para la resolución de un problema específico se debe prestar atención para identificar posibles situaciones de recursividad, en las cuales los valores actules de una variable pueda ser calculada con el uso de un resultado parcial de ella misma. En matemáticas, la definición de una función en términos de si misma se denomia definición induciva y conduce naturalmente a una implementación recursiva.

	Los programas desarrollados a continuación pueden ser implementados a través de un enfoque iterativo, lo cual sería computacionalmente más eficiente, sin embargo su implementación con un enfoque recursivo facilita la comprensión, la depuración y el mantenimiento de los programas desarrollados. Existen numerosos problemas complejos que poseen naturaleza recursiva y son más faciles de implementar con el uso de esta técnica.

## Cálculo de la suma de los primeros numeros naturales positivos

	A continuación se procede a analizar la implementación algorítmica del cálculo de los primeros numeros enteros positivos con un enfoque recursivo.

	Comencemos analizando los valores de la suma sucesiva de los n primeros números naturales positivos:

Para n = 1 S(1) = 1
Para n = 2 S(2) = S(1) + 2
Para n = 3 S(3) = S(2) + 3
Para n = 4 S(4) = S(3) + 4
Para n = 5 S(5) = S(4) + 5

	De manera general se tiene que para un número dado n, la suma sucesiva de los n primeros números positivos, es decir el elemento recursivo se puede definir de la siguiente manera:

S(n) = S(n – 1) + n

	El valor de la suma de los n primeros números positivos enteros es la suma parcial del valor anterior más el número actual.

	De esta manera se identifica una condición recursiva para resolver la suma sucesiva de los n primeros números S( ) respecto de si misma.

	En este caso es importante identificar el caso base, en esta oportunidad el valor para el cual el valor de la suma para n = 1 es S(n) = 1, este valor se puede determinar sin necesidad de llamar recursivamente la funcion, simplemente se debe retornar el valor de 1.

  El algoritmo que resuelve este problema de manera recursiva es el siguiente:

n = 5 // Valor al que se le quiere calcular la suma sucesiva

funcion SumaEnteros(entero n)
	si n == 1 entonces retornar 1 // Condición de parada, caso base
	si no
		retornar n + SumaEnteros(n – 1) // Condición recursiva

## Implementación de la suma sucesiva de los primeros números enteros positivos en C ++

	Para la implementación del algoritmo del cálculo de la suma de los n primeros numeros enteros positivos se procede de la siguiente manera:

	Primeramente se define la función, la cual debe recibir el número al que se le va a calcular la suma.

// Funcion que calcula la suma sucesiva del numero n recibido
int sumasucesiva(int n){

	Se debe agregar a la función la condición de parada de las sumas sucesivas.

if (n == 1)
		return 1; // Caso base

	Por último se agrega la condición recursiva para el cálculo en sumas sucesivas

return sumasucesiva(n - 1) + n; // Caso recursivo

  El programa completo para calcular la suma sucesiva de los n primeros números enteros positivos se muestra a continuación:

// Programa para implementar el calculo de la suma sucesiva de n usando un enfoque recursivo

#include <iostream>
using namespace std;

// Funcion que calcula la suma sucesiva del numero n recibido
int sumasucesiva(int n){
	if (n == 1)
		return 1; // Caso base
	else
		return sumasucesiva(n - 1) + n; // Caso recursivo
}

int main(){
	
	int num;

    cout << "Ingrese el valor entero para calcular las sumas sucesivas: ";
    cin >> num;

	cout << "La suma sucesiva de " << num << " es: " << sumasucesiva(num) << endl;
	
	return 0;
}

## Ejemplo del cálculo del valor factorial de un número.

	El cálculo del valor factorial de un número n se define de la siguiente manera:

n! = n * (n – 1)

	La condición de parada o caso base es cuando el número n es igual a 1 o es igual a 0, en ambos casos el valor factorial es 1

n! 1 = 1
n! 0 = 1

	En este caso la función recursiva del cálculo del valor factorial de n es la siguiente:

funcion factorial(n):
	si n == 0 entonces
		devolver 1
	si no
		devolver n * factorial(n – 1)

## Programa para el cálculo recursivo del valor factorial de un número entero

	Primeramente se define la función recursiva para el cálculo del valor factorial de un número entero positivo

// Funcion que calcula el valor factorial del numero n recibido
int factorial(int n){

	Luego se implementa la condicion base del cálculo factorial, el factorial de 0 es 1

0! = 1

if (n == 0)
	return 1; // Caso base

	Por último se implementa la condición recursiva

return n * factorial(n - 1); // Caso recursivo

	A continuación se presenta la implementación del cálculo del valor factorial de un número entero usando la recursividad.

// Programa para implementar el calculo del valor del factorial de n usando un enfoque recursivo

#include <iostream>
using namespace std;

// Funcion que calcula el valor factorial del numero n recibido
int factorial(int n){
	if (n == 0)
		return 1; // Caso base
	else
		return n * factorial(n - 1); // Caso recursivo
}

int main(){
	
	int num;

    cout << "Ingrese el numero entero para calcular su valor factorial: ";
    cin >> num;

	cout << "El factorial de " << num << " es: " << factorial(num) << endl;
	
	return 0;
}

	En conclusión la recursividad es una herramienta poderosa en programación que facilita la resolución de problemas dividiéndolos en instancias más pequeñas de si mismos. Su uso se extiende desde cálculos matemáticos simples hasta estructuras de datos avanzadas como árboles binarios y algoritmos de búsqueda. Sin embargo, es fundamental definir correctametne los casos base para evitar bucles infinitos y problemas de eficiencia.

	En un algoritmo recursivo se comprende por caso base el valor que se determina sin la necesidad de una llamada recursiva, solo se necesitan unas pocas sentencias elementales. El caso base se ejecuta al momento de alcanzar la condicion de parada de las llamadas recursivas. La condición recursiva identificada debe aproximarse progresivamente a la condición de parada. El proceso de llamadas recursivas debe tener una condición de parada para evitar que la misma se ejecute infinitamente.

	La razón para seleccionar un algoritmo recursivo es estrictamente de indole de facilidad de implementación y comprensión, no de eficiencia, sin embargo al momento de impementar una función recursiva se facilita la depuración y mantenimiento del programa. En ciertas situaciones la recursión conduce intuitivamente a soluciones que son mucho más faciles de leer y comprender, en estos casos los beneficios de la claridad de la solución implementada compensan el coste extra en procesamiento y memoria utilizados en su ejecución.
