#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main (void){
    int a, b;
    int verificacion;
    cout << "Ingrese dos numeros para verificar si son divisibles entre ellos"<< endl;
    cin >> a;
    cin >> b;
    verificacion= a%b; 
    if(verificacion==0){
        cout<< "Son divisibles entre ellos"<< endl;
    }
    else {
        cout<<"No son divisbles entre ellos";
    }
     
}


