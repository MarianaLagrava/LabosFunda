#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string hora (int hh, int mm, int ss){
    if (ss >= 60|| mm >=60|| hh>= 24){
        return "Hora invalida";
    }
    else{
    ss++;
    if(ss== 60){
 ss=00;
 mm++;
 if(mm==59){
     mm=00;
     hh++;
     if(hh==24){
         hh=0;
         }  
     }
      
      return "La hora mas un segundo es: " +to_string(hh)+ ":" +to_string(mm)+":"+to_string(ss);
    }
}}

int main (void){
    int hh, mm, ss;
    cout<< "Determinar hora con un segundo mas"<< endl;
     cout<< "Ingrese la hora, los minutos y segundos respectivamente, apretando enter despues de ingresar cada una"<< endl;
cin >> hh;
cin >> mm;
cin >> ss;

cout<< hora(hh, mm, ss);

}
