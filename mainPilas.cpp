#include <iostream>
#include "pilas.h"

using namespace std;
int main()
{
    /* char c; Pila guardar;
    while(cin.get(c))
    { while(c>='0' && c<='9')
        {cout.put(c); cin.get(c);}
        if (c==')') cout.put(guardar.sacar());
        if (c=='+') guardar.meter(c);
        if (c=='*') guardar.meter(c);
        if (c!=')') cout << ' ';
    }
    cout<< '\n';
    */
    char c; Pila acc; int x;

    while (cin.get(c)){
        while (c == ' ') cin.get(c);

        while (c >= '0' && c <= '9'){   
            acc.meter(c-'0');
            cin.get(c);
        }

        if (c == '+'){
            x = acc.sacar() + acc.sacar();
            acc.meter(x);
        }
        
        if (c == '*'){
            x = acc.sacar() * acc.sacar();
            acc.meter(x);
        }
    }
    
    cout<<"Resultado: " << acc.sacar() <<endl;
    //acc.~Pila();
}