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
     * RET: <el ofstream que devuelve la función imprimir.>
     *
     */
    friend ostream& operator << (ostream salida, Estado & e) {
        return e.imprimir(salida);
    }
    
public:
    
    /*
     *<Funcion para imprimir las Torres del Estado actual.>
     *<Recorre la Torres del Estado actual, que en realidad es una matriz, y la imprime.>
     *
     * REQ: <un pase por referencia a un ofstream llamado salida.>
     *
     * RET: <un ofstream con las Torres del Estado actual.>
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
     * <Constructor de la clase con un objeto Estado_TdH.>
     * <Utiliza el Constructor con entero, y se usa como parametro la variable Discos
     *  del objeto que entra como parametro.>
     *
     * REQ: <un objeto tipo Estado_TdH.>
     *
     */
	Estados_TdH(Estado_TdH);
    
    /*
     *<Metodo para crear el Estado Final.>
     *<Crea a partir del Estado Inicial, el estado Final.>
     *<Mueve los Discos de la primeera Torres, hacia la ultima.>
     *
     * REQ: <no requiere parametros.>
     *
     * RET: <void, por lo que no retorna nada.>
     *
     */
    void hacerFinal();
    
    /*
     *<Funcion que compara dos Estados para ver si son iguales o no.>
     *<Recorre las posiciones de cada Torres en cada Estado.>
     *
     * REQ: <un puntero a un objeto tipo Estado..>
     *
     * RET: <un int en 1 si son diferentes.>
     *      <un int en 0 si son iguales.>
     *
     */
    int noSonIguales(Estado *);
    
    /*
     *<Funcion que devuelve la posicion en la que esta el disco mas alto de una Torres.>
     *<Busca en el numero de Torres que entra como parametro, cual es la posicion que tiene el disco que se encuentra en la parte mas alta.>
     *
     * REQ: <un int que es la Torres en la que se desea buscar, llamado num.>
     *
     * RET: <un int que es la posicion, llamado topNum.>
     *
     */
    int topDisco(int);
    
 private:
 
	Torres ** int;
	int Discos;
	
};

#endif
