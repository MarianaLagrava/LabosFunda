#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main (void){
    int a;
    int verificacion;
    cout << "Ingrese un numero para verificar si es par o impar"<< endl;
    cin >> a;
    
    verificacion= a%2; 
    if(verificacion==0){
        cout<< "Es par"<< endl;
    }
    else {
        cout<<"Es impar";
    }
     
}
