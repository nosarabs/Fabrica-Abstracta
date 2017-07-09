#ifndef Estado_TdH_hpp
#define Estado_TdH_hpp
#include <iostream>
using namespace std;

class Estado_TdH : public Estado {
    
    /*
     * <Método amigo que invoca al imprimir de cada estado específico en forma polimórfica.>
     * <Llama a la función imprimir con los parametros salida y e.>
     *
     * REQ: <un pase por referencia hacia un objeto tipo Estado, llamado e.>
     *      <un pase por referencia a un ofstream llamado salida.>
     *
     * RET: <el ofstream que devuelve la función imorimir.>
     *
     */
    friend ostream& operator << (ostream salida, Estado & e) {
        return e.imprimir(salida);
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
    
    /*
     *<Constructor de la clase con un entero.>
     *<Asigna a la variable Discos de la clase, el numero que entra como parametro.>
     *
     * REQ: <un int que guarda la cantidad de discos, llamado Discos.>
     *
     */
	Estado_TdH(int);
    
    /*
     *<Constructor de la clase sin parametros.>
     *<Utiliza el Constructor con entero, y se crea de tamaño 3 por omisión.>
     *
     */
	Estados_TdH();
    
    /*
     * <Constructor de la clase con objeto Estado_TdH.>
     * <Utiliza el Constructor con entero, y se usa como parametro la variable Discos
     *  del objeto que entra como parametro.>
     *
     * REQ: <un objeto tipo Estado_TdH.>
     *
     */
	Estados_TdH(Estado_TdH);
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <void, por lo que no retorna nada.>
     *
     */
    void hacerFinal();
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <.>
     *
     */
    int noSonIguales(Estado *);
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <.>
     *
     */
    int numArriba(int);
    
 private:
 
	Torres ** int;
	int Discos;
	
};

#endif
