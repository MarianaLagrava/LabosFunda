#include <iostream>
using namespace std;
int main ()
{
    double precio, cantidad;
    string a;
    cout << "Escriba el Nombre del producto: ";
    cin >> a;
    cout << "Escriba el precio: " << " USD";
    cin >> precio;
    cout << "Escriba la cantidad: ";
    cin >> cantidad;
    double Productos = (precio*cantidad);
    cout << "El total es: " << Productos << "USD";
    return 0;


}
