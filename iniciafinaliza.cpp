#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(void){
    string a;
     cout<< "Ingrese una palabra(evite usar mayusculas)"<< endl;
     cin>> a;
if (a.at(0)==a.at(a.size()-1)){
    cout<< "Inicia y termina con la misma letra";
    
}
else{
    cout<< "No tiene la misma letra al inicio y final";
}


     
}