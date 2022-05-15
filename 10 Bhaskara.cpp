//IMPORTAMOS IOSTREAM PARA ENTRADA Y SALIDA DE DATOS
#include<iostream>
// IMPORTAMOS MATH PARA FUNCIONES MATEMATICAS
#include<math.h>
// PAQUETE DE FUNCIONES DE C++
using namespace std;
//funcion principal
int main(){
    // DECLARAR VARIABLES
    float a,b,c, dis, x1,x2;
    // CAPTURA DE DATOS
    cout<<"Ingrese a: "; cin>>a;
    cout<<"Ingrese b: "; cin>>b;
    cout<<"Ingrese c: "; cin>>c;
    // HALLAR DISCRIMINANTE
    dis = (pow(b,2) - 4*a*c);
    // CONDICIONALES
    if (a == 0){
        cout<<"\nValor de a debe ser diferente a cero"<<endl;
    }
    else if(dis < 0){
        cout<<"Solucion solo en numeros complejos"<<endl;
    }
    else{
        // HALLAR SOLUCIONES
        x1 = (-b + sqrt(dis)) / (2*a);
        x2 = (-b - sqrt(dis)) / (2*a);

        // MOSTRAR RESULTADOS
        cout<<"\nx1: "<<x1<<endl;
        cout<<"x2: "<<x2<<endl;
    }
    return 0;
}