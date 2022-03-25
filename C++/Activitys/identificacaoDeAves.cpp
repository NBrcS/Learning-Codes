#include <iostream>

using namespace std;

int main(){
    
    int caracteristicas[5];

    for(int i = 0; i < 5; i++){
        cin >> caracteristicas[i];
    }

    if(caracteristicas[0] == 0 && caracteristicas[1] == 1 && caracteristicas[2] == 0 && caracteristicas[3] == 1 && caracteristicas[4] == 1) cout << "coruja" << endl;
    else if(caracteristicas[0] == 0 && caracteristicas[1] == 0 && caracteristicas[2] == 0 && caracteristicas[3] == 1 && caracteristicas[4] == 0) cout << "pardal" << endl;
    else if(caracteristicas[0] == 0 && caracteristicas[1] == 0 && caracteristicas[2] == 1 && caracteristicas[3] == 1 && caracteristicas[4] == 0) cout << "galinha" << endl;
    else if(caracteristicas[0] == 0 && caracteristicas[1] == 1 && caracteristicas[2] == 0 && caracteristicas[3] == 0 && caracteristicas[4] == 0) cout << "ema" << endl;
    else if(caracteristicas[0] == 0 && caracteristicas[1] == 1 && caracteristicas[2] == 0 && caracteristicas[3] == 1 && caracteristicas[4] == 0) cout << "falcão" << endl;
    else if(caracteristicas[0] == 1 && caracteristicas[1] == 0 && caracteristicas[2] == 0 && caracteristicas[3] == 1 && caracteristicas[4] == 0) cout << "pato" << endl;
    else if(caracteristicas[0] == 1 && caracteristicas[1] == 1 && caracteristicas[2] == 0 && caracteristicas[3] == 0 && caracteristicas[4] == 0) cout << "pinguim" << endl;
    else if(caracteristicas[0] == 1 && caracteristicas[1] == 1 && caracteristicas[2] == 0 && caracteristicas[3] == 1 && caracteristicas[4] == 0) cout << "gaivota" << endl;
    else if(caracteristicas[0] == 1 && caracteristicas[1] == 1 && caracteristicas[2] == 0 && caracteristicas[3] == 1 && caracteristicas[4] == 1) cout << "garça" << endl;
    else if(caracteristicas[0] == 0 && caracteristicas[1] == 0 && caracteristicas[2] == 0 && caracteristicas[3] == 0 && caracteristicas[4] == 0) cout << "avestruz" << endl;
    
    return 0;
}
