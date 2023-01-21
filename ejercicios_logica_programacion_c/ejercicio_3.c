/*
3. Hacer una función que diga si en una cadena hay solo dígitos
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
    char cadena[100];
    int i, cont = 0;

    printf("Digite una cadena: "); gets(cadena);
    for(i = 0; i < strlen(cadena); i++){
        if(cadena[i] >= '0' && cadena[i] <= '9'){
            cont++;
        }
    }

    if(cont == strlen(cadena)){
        printf("La cadena %s tiene solo digitos\n", cadena);
    }else if(cont > 0) {
        printf("La cadena %s posee %i digitos\n",cadena, cont);
    }else{
        printf("La cadena %s no posee digitos\n",cadena);
    }

    printf("Presiona una tecla para continuar");
    getch();

    return 0;
}