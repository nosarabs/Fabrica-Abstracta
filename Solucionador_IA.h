#ifndef Estado_TdH_hpp
#define Estado_TdH_hpp
#include <iostream>
using namespace std;

class Solucionador_IA : public Solucionador {
    
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
    void setProblema(Problema *);
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <.>
     *
     */
    Solucion * solucionar();
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <.>
     *
     */
    ~Solucionador();
    
    
};

#endif
