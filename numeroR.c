/*Nombre: Kevin Quinatoa
Fecha: 6 de junio del 2025
Descripcion: el codigo crea un numero random del 1 al 100 
despues pide que ingresen un numero para adivinar si llegan a acertar al numero generado antiguamente
el codigo da 3 intentos y  si no lo logran manda un mensaje que perdio
pero si lo logra le manda un mensaje que acerto y acaba con el cicloasjkdjkad ADDDDDD
*/
#include <stdio.h>
#include <stdlib.h>  //genera numeros aleatorios
#include <time.h> //permite trabajar con fechas y tiempos
int main(){
int contador, numero, numeroS;

 // Inicializa la semilla para generar números aleatorios
srand(time(NULL));
numeroS = rand() % 100 + 1; // Número entre 1 y 100

contador=0;

while (3>contador){
    contador++;
    printf("\ningrese su intento %d: ", contador);
    scanf("%d", &numero);
    if (numero>numeroS){
        printf("\nel numero es mayor al numero secreto");
    }
    if (numero<numeroS){
        printf("\nel numero es menor al numero secreto");
    }
    if (numero==numeroS){
        contador=contador+2;
    }
} 

if (numero==numeroS){
    printf("\nfelicidades has acertado");
}
else{
    printf("\nHa perdido");
}

}