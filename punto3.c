//
// Created by admin on 16/10/2019.
//

#include "punto3.h"
int busqueda(int arreglo[], int buscar, int count){

    int inicio=0, final=count-1, medio;

    medio= (inicio+final)/2;

    while (inicio<=final){

        if (arreglo[medio] < buscar)
            inicio= medio+1;
        else if (arreglo[medio] == buscar){
            printf("%d el indice es", medio+1);
            break;
        } else
            final= medio -1;
        medio = (inicio+ final)/2;
    }

    if (inicio > final){
        printf(" No existe el perro");
    }

    return 0;


}
