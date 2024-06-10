#include <iostream>
using namespace std;
int fact(int numero){
    int factorial=1;
    while(numero>0){
    factorial=factorial*numero;
    numero--;
    }
    return factorial;
}
int main(){
    int numero=0, resultado=0;
    cout<<"Ingrese un numero entero: \n";
    cin>>numero;
    resultado=fact(numero);
    cout<<"El factorial de "<<numero<<" es: "<<resultado;
    return 0;
}