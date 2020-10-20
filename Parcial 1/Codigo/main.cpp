#include <iostream>
#include <math.h> // Para ciertas operaciones matematicas

using namespace std;

float distancia(float,float,float,float);

bool simulando=true;
int main()
{
    while(simulando){
        int simulacion=0;
        cout<<"*******Bienvenido a la simulacion*******"<<endl;
        cout<<"1) Generar disparos tres ofensivos que comprometan la integridad del canon defensivo."<<endl;
        cout<<"2) Generar disparos tres defensivos que comprometan la integridad del canon ofensivo."<<endl;
        cout<<"3) Dado un disparo ofensivo, generar tres disparos defensivos que impida que el canon defensivo sea destruido sin importar si el canon ofensivo pueda ser destruido."<<endl;
        cout<<"4) Dado un disparo ofensivo, generar tres disparo defensivos que impidan que los cañones defensivo y ofensivo puedan ser destruidos."<<endl;
        cout<<"0) Salir del simulador"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>simulacion;
        //Una vez se haya un lanzamiento enemiga
        switch(simulacion){
        case 1:{
            int d=600,soluciones=0;
            float g=9.8;
            //Datos del cañon defensor
                float xd=d,hd=100;
                float dD=0.025*d;
            //Datos del cañor ofensivo
                float angulo=50,dO;
                int ho=100,yo,xo=0;
                dO=0.05*d;
                yo=ho;
            //Calculos
            float vx,vy,x,y;
            for(int vel=1;vel<1000;vel++){
                vx= vel*cos(angulo);
                vy=vel*sin(angulo);
                for(int t=1;t<1000;t++){
                    x=vx*t;
                    y=yo+vy*t-(0.5*g*t*t);
                    if(distancia(x,y,xd,hd)<=dO){
                        soluciones+=1;
                        cout<<"Disparo efectivo con:"<<endl<<"Angulo: "<<angulo<<endl<<"Velocidad inicial: "<<vel<<endl<<"Tiempo: "<<t<<endl;
                        if(soluciones==3){
                            break;
                        }
                    }
                }
            }
        }
            break;
        default:{
            cout<<"Opcion invalida, intente de nuevo."<<endl;
        }
            break;
        case 0:{
            cout<<"Hasta luego :D"<<endl;
            break;
        }
        }
        break;
    }
    return 0;
}

float distancia(float x1, float y1, float x2, float y2)
{
    float dist = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    return dist;
}
