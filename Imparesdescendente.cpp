#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main (void){
    int i, a[100], muestra;
    cout<< "PRIMEROS CIEN IMPARES DESCENDENTES"<< endl;
    muestra=1;
    for (i = 0; i < 100; i++){
        a[i] = muestra; 
        muestra +=2;
    }
for (i=99; i>=0 ;i--){
    cout<< a[i] << endl;
} 

}