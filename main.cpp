#include <iostream>
#include "Listaligada.h"
using namespace std;

int main()
{

    Listaligada<int> lista;

    lista.push_front(10);
    lista.push_front(0);
    lista.push_front(4);

    lista.push_back(7);
    lista.push_back(8);
    cout<< "---------push_front and back---------------"<<endl;
    cout<< "Cantidad:"<< lista.size()<<endl<<endl;


    lista.pop_back();
    cout<< "-----------Pop_back-------------"<<endl;
    cout<< "Cantidad:"<< lista.size()<<endl<<endl;
    lista.print();

   cout<< "-----------~Listaligada-------------"<<endl;
    lista.~Listaligada();

    cout<< "Cantidad:"<< lista.size()<<endl;

    return 0;
}
