#include <iostream>
#include <math.h> // Para ciertas operaciones matematicas

using namespace std;

bool simulando=true;
int main()
{
    while(simulando){
        int simulacion=0;
        cout<<"*******Bienvenido a la simulacion*******"<<endl;
        cout<<"1) Generar disparos tres ofensivos que comprometan la integridad del cañón defensivo."<<endl;
        cout<<"2) Generar disparos tres defensivos que comprometan la integridad del cañón ofensivo."<<endl;
        cout<<"3) Dado un disparo ofensivo, generar tres disparos defensivos que impida que el cañón defensivo sea destruido sin importar si el cañón ofensivo pueda ser destruido.";endl;
        cout<<"4) Dado un disparo ofensivo, generar (al emnos tres) disparo defensivos que impidan que los cañones defensivo y ofensivo puedan ser destruidos."<<endl;
        cout<<"0) Salir del simulador"<<endl;
        cin>>simulacion;
        //Una vez se haya un lanzamiento enemiga

        switch(simulacion){
        case 1:{
            //Datos apropiados
            float distancia=45,altura=4.4; //Posicion del cañon
            float Xo=0, Vo=20, Ang_o=50; //Datos enviado por el espia defensor
            int soluciones=0;
            //Calculos
            for(int i=0;i<100;i++){
                for(int j=0;j<100;j++){
                    for(int t=0;t<100;t++){
                        for(int ang=1;ang<90;ang++){
                            int calculo_x=i+j*cos(ang)*t;
                            int dist=0.02*distancia;
                            if (calculo_x ||
                        }
                    }
                }
            }
        }

            break;
        }
    }

    return 0;
}
