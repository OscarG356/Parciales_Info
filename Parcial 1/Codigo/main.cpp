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
        cout<<"4) Dado un disparo ofensivo, generar tres disparo defensivos que impidan que los canones defensivo y ofensivo puedan ser destruidos."<<endl;
        cout<<"0) Salir del simulador"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>simulacion;
        //Una vez se haya un lanzamiento enemiga
        switch(simulacion){
        case 1:{
            int d=600,soluciones=0;
            float g=9.8;
            //Datos del cañon defensor
                float xd=d,hd=10;
                float dD=0.025*d;
            //Datos del cañor ofensivo
                float angulo=50,dO,rad;
                int ho=100,yo,xo=0;
                dO=0.05*d;
                yo=ho;
            //Calculos
            rad= (angulo*M_PI)/180;
            float vx,vy,x,y;
            for(int vel=1;vel<1000;vel++){
                vx= vel*cos(rad);
                vy=vel*sin(rad);
                for(int t=1;t<1000;t++){
                    x=vx*t;
                    y=yo+vy*t-(0.5*g*pow(t,2));
                    if(distancia(x,y,xd,hd)<=dO){
                        soluciones+=1;
                        cout<<"\nDisparo efectivo con:"<<endl<<"Angulo: "<<angulo<<" grados"<<endl<<"Velocidad inicial: "<<vel<<"m/s"<<endl<<"Tiempo: "<<t<<"s"<<endl;
                    }
                    if(soluciones==3){
                        break;
                    }
                }
            }
        }
            break;
        //Reutilizo el codigo anterior, pero con unos ligeros cambios

        case 2:{
            int d=600,soluciones=0;
            float g=9.8;
            //Datos del cañon defensor
                float xd=d,hd=100;
                float dD=0.025*d;
            //Datos del cañor ofensivo
                float angulo=130,dO,rad; //Ahora dispara el cañon defensor, por lo que el angulo cambia a el inverso.
                int ho=100,yo,xo=0;
                dO=0.05*d;
                yo=ho;
            //Calculos
            rad= (angulo*M_PI)/180;
            float vx,vy,x,y;
            for(float vel=1;vel<1000;vel+=0.5){
                vx= vel*cos(rad);
                vy=vel*sin(rad);
                for(int t=0;t<1000;t++){
                    x= d+vx*t;
                    y=hd+vy*t-(0.5*g*pow(t,2));
                    if(distancia(x,y,xo,ho)<=dD){//Ahora el daño es del cañon defensor
                        soluciones+=1;
                        cout<<"\nDisparo efectivo con:"<<endl<<"Angulo: "<<angulo<<endl<<"Velocidad inicial: "<<vel<<endl<<"Tiempo: "<<t<<endl;
                    }
                    if(soluciones==3){
                        break;
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
            simulando=false;
            break;
        }
        }
    }
    return 0;
}

float distancia(float x1, float y1, float x2, float y2)
{
    float dist = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    return dist;
}
