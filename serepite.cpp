#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(void)
{
    int i, n, m, z=0;
    cout << "COMPROBAR SI SE REPITE UN NUMERO" << endl;
    cout << "Ingrese la longitud del array" << endl;
    cin >> n;
    int a[n];
    
    cout << "Digite los valores del array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }cout << "Ingrese un numero para comprobar cuantas veces se repite"<< endl;
    cin >> m;
    
    for(i = 0; i < n; i++){
        if(m==a[i]){
            z++;

        }

    }
    cout<< "Se repite  el valor ingresado " <<z<< " veces."<< endl;
}
