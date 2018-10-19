/*
 * Este programa le dira al usuario el numero de letras que uso al escribir la oracion que ponga
 *
 * Autora: Yasmin Alvarado Lee
 * Correo: yazminalvlee@gmail.com
 * Fecha: 18 de octubre del 2018
 */

#include <stdio.h>

int main() {
    //VARIABLES
    char string[1000];
    int a;


    printf("Escribe una oracion:");
    fgets(string, sizeof(string), stdin);

    //OPERACION
    //AQUI HACEMOS LA OPERACION PARA SACAR EL NUMERO DE PALABRAS QUE ESCRIBIO EL USUARIO
    for (a = 0; string[a] != '\n'; a++);
    printf("Escribiste %d letras", a);

    return 0;
}