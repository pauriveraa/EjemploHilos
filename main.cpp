#include <iostream>
#include <thread>
using namespace std;

void hilos(){
    cout<<"\n Segunda tarea."<<endl;
    for (int i=0;i<10;i++){
        cout<<"Hilo 2: "<<i<<endl;
}
   cout<<"Fin de la segunda tarea."<<endl;
}

int main()
{
    cout<<"Tarea principal."<<endl;
    thread h2(hilos);
    for (int k=10;k<20;k++){
        cout<<"Hilo 1: "<<k<<endl;
    }
    h2.join();
    cout<<"Fin de la tarea principal."<<endl;
    system("");
    return 0;
}

