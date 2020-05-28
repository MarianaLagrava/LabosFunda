#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main (void){
    float a;
    
    cout << "Ingrese un numeo para verificar si es negativo positivo o cero"<< endl;
    cin >> a;

    if(a<0){
        cout<< "Es negativo"<< endl;
    }
    else if(a>0){
        cout<<"Es positivo"<< endl;
    }
    else if (a==0){
        cout << "Es cero"<< endl;
    }
     
}
