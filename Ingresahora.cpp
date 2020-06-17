#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string hora (int hh, int mm, int ss){
    ss++;
    if(ss>= 60){
 ss=00;
 mm++;
 if(mm>=60){
     mm=00;
     hh++;
     if(hh>24){
         hh=0;
     }
      }
      
    }
    return "La hora mas un segundo es: " +to_string(hh)+ ":" +to_string(mm)+":"+to_string(ss);
}
int main (void){
    int hh, mm, ss;
    cout<< "Determinar hora con un segundo mas"<< endl;
     cout<< "Ingrese la hora, los minutos y segundos respectivamente"<< endl;
cin >> hh;
cin >> mm;
cin >> ss;

cout<< hora(hh, mm, ss);


}