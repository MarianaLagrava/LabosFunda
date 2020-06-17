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

string undiamas(int dd, int  mm, int yy){
    dd++;
    if(mm== 1||mm==3||mm==5|| mm==7|| mm== 8||mm== 10|| mm==12){
        if(dd==32){
            mm++;
            dd=1;
            if (mm==13){
                mm=1;
                dd=1;
                yy++;

            }
            else if (dd>32){
                return "Datos invalidos";
            }
        }
    }
    else if(mm== 4||mm==6||mm==9|| mm==11) {
            if(dd==31){
                mm++;
                dd=1;
                
            } 
             else if (dd>31){
                return "Datos invalidos"; 
    
        }
    }
        else if (mm==2){
            if(bisiestos(yy)){
                if(dd==30){
                    mm++;
                    dd=1;
                }
                 else if (dd>30){
                return "Datos invalidos";
            }
            }
            else {
                if(dd==29) {
                    mm++;
                    dd=1;
                    
                }
                 else if (dd>29){
                return "Datos invalidos";
            
            }
        }
            

    }
        
        return "La fecha mas un dia es: " +to_string(dd)+ "-" +to_string(mm)+"-"+to_string(yy);
    }

    int main(void){
        int dd, mm, yy;
        cout<< "PROGRAMA PARA DETERMINAR UN DIA DESPUES"<< endl;
          
        cout<< "Ingrese el dia, el mes y a"<<char(164)<<"o respectivamente: ";
        cin >> dd;
        cin>> mm;
        cin >> yy;
         cout << undiamas(dd, mm, yy);
         
        
        

    }
 