#ifndef PILAS_H
#define PILAS_H

//#include <iostream>

//using namespace std;

class Pila
{public:
    Pila();
   ~Pila();
    void meter(int v);
    int sacar();
    int vacia();
 private:
    struct nodo
       {int clave; struct nodo *siguiente;};
    struct  nodo *cabeza, *z;
};
 
Pila::Pila()
{ cabeza = new nodo;  z=new nodo;
  cabeza->siguiente=z; z->siguiente =z;
}

Pila::~Pila()
{struct nodo *t=cabeza;
 while (t!=z)
       {cabeza=t;  t=t->siguiente;  delete cabeza;}
        delete z; //z=t
}

void Pila::meter(int v)
{struct nodo *t=new nodo;
 t->clave = v;  t->siguiente=cabeza->siguiente;
cabeza->siguiente=t;
}

int Pila::sacar() //Primero verificar si la lista esta vacia 
{int x;
    //if (vacia()==0)
    //{
        struct nodo *t = cabeza->siguiente;
        cabeza->siguiente = t->siguiente; x=t->clave;
        delete t; return x;
    //}
    //else
    //{
     //   return 0;
    //}
}

int Pila::vacia()
{return cabeza->siguiente == z;}


#endif