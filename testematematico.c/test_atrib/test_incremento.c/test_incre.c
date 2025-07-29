#include <stdio.h>

int main(){

    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Incremento ++a
    Pós-Incremento a++
    */

    int numero1 = 1,resultado;

    printf("Antes Incremento: %d\n", numero1);
    //numero1 = numero1 + 1;
    //numero1 += 1;
    //Pos incremento;
    //resultado = numero1;
    //numero++;

    resultado = numero1++;
    printf("Após Pós-Incremento - número 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Após Pré-Incremento - número 1: %d - Resultado: %d\n", numero1, resultado);

    //numero1 = numero1 - 1;
    //numero1 -= 1;
    numero1--;
    printf("Após Decremento: %d\n", numero1);

}