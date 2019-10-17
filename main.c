#include <stdio.h>
#include "punto3.h"

    int main() {
        perro arreglo[2];
        int max=0,i;

        for(i = 0;i < 2;i++)
        {

            printf("\nIngrese el id del propietario: ");
            fflush(stdin);
            scanf("%ld", &persona d[i].id);
            if (max < persona d[i].id)
                max=persona d[i].id;


        }

        busqueda(arreglo,max,i);


    }
}