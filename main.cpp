/******************************************************************************
Steban Cadena Giraldo
Julián Campiño
Nestor Cardona

*******************************************************************************/
#include <stdio.h>
#include <iomanip>
#include <math.h>
#include <iostream>

using namespace std;

float fi(float x[]){
    float elemento = x[2];
    return elemento;
}

float norma(float x[]){
    float norm=0;
    
    for(int i=0;i<3;i++){
        norm = fabs(x[i]);
    }
    
    return norm;
}

void potencia(float A[][3],float x[3], int ite){
    
    float y[3];
    float r;
    
    for(int w=0; w<ite; w++){
        
        cout << w+1 << setw(15);
        
        // hallar y=Ax
        for(int i=0; i<3; i++){
        
        float suma=0;
        
            for(int j=0; j<3; j++){
                suma = suma + A[i][j]*x[j];
            }
        
        y[i] = suma;
        
        }
        
        //hallar r
        r = fi(y)/fi(x);
        
        cout << r << setw(15) << "(";
        
        //hallar el nuevo x

        for(int i=0;i<3;i++){
            x[i] = y[i]/norma(y);
            cout << x[i] << ",";
        }
        
        cout << ")" << endl;
    }
    
}

int main(){
    
    float matriz[3][3] = {{6,5,-5},{2,6,-2},{2,5,-1}};
    float vectorInit[3] = {1,2,3};
    int iteraciones=100;
    
    cout << "K" << setw(15) << "R" << setw(15) << "X" <<endl;
    cout << "0" << setw(15) << " " << setw(21) << "(1,2,3)" <<endl;
    potencia(matriz,vectorInit,iteraciones);
}
