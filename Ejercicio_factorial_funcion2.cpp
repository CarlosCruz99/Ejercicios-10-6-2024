#include <iostream>
using namespace std;
int fact(int n){
    int resultado;
    if(n==0){
        resultado=1;
    }
    else{
        resultado=n*fact(n-1);
    }
    return resultado;
}
int main(){
    int n;
    cout<<"Ingrese un numero entero: \n";
    cin>>n;
    cout<<"El factorial de "<<n<<" es: "<<fact(n)<<"\n";
    return 0;
}