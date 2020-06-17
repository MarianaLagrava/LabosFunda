#include <iostream>
#include <string>
#include <cmath>
using namespace std; 
int mcd(int mayor, int menor){
   int residuo;  
residuo= 1;
      while (residuo !=0){
          residuo= mayor%menor;
        if (residuo!= 0){
          mayor=menor;
          menor=residuo;
          
          }

      }
      
      return menor;
 }
 
int main(void){
    
cout << "El calculo del MCD de dos variables"<< endl;
 int mayor, menor, residuo;
  cout << "Ingrese el valor menor y el mayor respectivamente para calcular el MCD"<< endl;
     cin >> menor;
     cin >> mayor;
cout<< "El MCD es: " <<mcd(mayor, menor);
}

 