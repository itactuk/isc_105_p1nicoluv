//
// Created by admin on 16/10/2019.
//

#include "punto2lib.h"
vector suma( vector n1, vector n2 ){
    vector r;
    r.iunitario= n1.iunitario + n2.iunitario;
    r.junitario=n1.junitario + n2.junitario;
    return r;



}

vector resta( vector n1, vector n2 ){
    vector r;
    r.iunitario= n1.iunitario - n2.iunitario;
    r.junitario=n1.junitario - n2.junitario;
    return r;

}

vector escalar( vector n1, vector n2 ){
    int angulo;
    vector r;
    printf("Digite el angulo");
    scanf("%d",&angulo);
    r.iunitario= ((n1.iunitario*n1.iunitario) + (n1.junitario*n1.junitario))/2;
    r.junitario=((n1.iunitario*n1.iunitario) + (n1.junitario*n1.junitario))/2;
    r.productos=(r.iunitario*r.junitario)*cos(angulo);

    return r;

}
vector vectorial( vector n1, vector n2 ){
    vector r;
    int n3;
    printf("Digite el tercer vector k");
    scanf("%d",&n3);
    r.iunitario= n1.iunitario * n2.iunitario;
    r.junitario=n1.junitario * n2.junitario;
    r.productos= r.iunitario * r.junitario * n3;


    return r;


}
vector punto( vector n1, vector n2 ){
    vector r;
    int n3;
    printf("Digite el tercer vector k");
    scanf("%d",&n3);
    r.iunitario= n1.iunitario * n2.iunitario;
    r.junitario=n1.junitario * n2.junitario;
    r.productos= r.iunitario + r.junitario + n3;
    return r;

}
