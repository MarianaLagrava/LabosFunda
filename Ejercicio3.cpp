#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float a, b, c;

cout << "Ingrese los terminos a: ";
cin >> a;
cout << "Ingrese el termino b: ";
cin >> b;
cout << "Ingrese el termino c: ";
cin >> c; 
float f1 = (-b + (sqrt((pow(b,2))-(4*a*c))))/(2*a);
float f2 = (-b - (sqrt((pow(b,2))-(4*a*c))))/(2*a);
cout << "Los valores son: " << f1 << " y " << f2;
return 0;
}