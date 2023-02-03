#include <stdio.h>
#include <conio.h>
#include <limits.h>

int main()
{   
    int i, numero, menor = INT_MAX, mayor = INT_MIN;
    int arreglo[100];
    
    printf("Digite el numero de elementos del arreglo: "); scanf("%i", &numero);
    
    for(i = 0; i < numero; i++){
        printf("Digite un numero: "); scanf("%i", &arreglo[i]);
    }
    
    for(i = 0; i < numero; i++){
        if(arreglo[i] < menor){
            menor = arreglo[i];
        }else if(arreglo[i] > mayor){
            mayor = arreglo[i];
        }
    }
    
    printf("El numero menor del arreglo es: %i \n", menor);
    printf("El numero mayor del arreglo es: %i \n", mayor);
    
    printf("Presione una tecla para continuar");
    getch();
    
    return 0;
}
