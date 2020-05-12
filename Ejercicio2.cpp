#include <iostream>
using namespace std;
int main()
{
    double p, a, r;
    const double pi = 3.14;
    cout << "Coloque la radio "<< endl;
    cin >> r;
    p = (r*2*pi);
    a = (r*r*pi);
    cout << "El perimetro es: "<< p << endl << "El area es: " <<a;
    return 0; 
 

}