#ifndef Estado_TdH_hpp
#define Estado_TdH_hpp
#include <iostream>
using namespace std;

class Solucion_TdH : public Solucion {
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <.>
     *
     */
    friend ostream& operator << (ostream salida, Solucion & s) {
        return s.imprimir(salida);
    }
    
public:
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <.>
     *
     */
    ostream& imprimir(ostream &);
    
};

#endif
