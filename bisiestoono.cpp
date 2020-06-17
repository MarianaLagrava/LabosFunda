#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool bisiestos(int n){
if (n%400==0){
   return true;
}else{
   if ((n%4==0) && (n%100!=0)){
      return true;
} 
return false;
}
}
     int main (void){
         int n;
         cout << "Determinar su un a"<<char(164)<<"o es bisiesto o no"<< endl; 
         cin >> n;

         if(bisiestos (n)) {
             cout << "Es bisiesto"<< endl;
         }
          else {
              cout<< "No es bisiesto"<< endl;
          }
         
     }
     