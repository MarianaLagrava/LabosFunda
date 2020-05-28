#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main (void){
   string a;
   int numero;
cout<< "Ingrese una palabra"<< endl;
cin>> a;
numero= a.length();

if(numero>10){
    cout<< "Tiene mas de 10 caracteres"<< endl;
}
else {
    cout<< "Tiene menos de 10 caracteres"<<endl;
}
if (numero%2==0){
    cout << "Tiene numero par de letras"<< endl;
}
else {
    cout<< "Tiene numero impar de letras"<<endl;

}


}






