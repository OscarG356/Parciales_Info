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
            //Calculos

        }

            break;
        }
    }

    return 0;
}
