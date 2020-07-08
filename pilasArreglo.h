#ifndef PILASARREGLO_H
#define PILASARREGLO_H

//#include <iostream>

//using namespace std; 

class Pila
{ char *pila; //Tipo elemento=int
  int p;
public:
  Pila (int max=100)
   {pila = new char[max];
    p=0;}
  ~Pila()
   {delete pila;}
inline void meter (int v)
   {pila[p++]=v;}
inline int sacar()
  {return pila [--p];}
inline int vacia()
  {return !p;} 
};



#endif