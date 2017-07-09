#ifndef Problema_TdH_h
#define Problema_TdH_h

class Problema_TdH : public Problema {
    
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
    void inicializar();
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <.>
     *
     */
    Estado ** getEstadosSiguientesValidos(Estado *);
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <.>
     *
     */
    double coeficienteDeSimilitud(Estado *, Estado *);
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <.>
     *
     */
    Estado * getEstadoInicial();
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <.>
     *
     */
    Estado * getEstadoFinal();
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <.>
     *
     */
    int esSolucion(Estado *);
    
    /*
     *<Descripcion del metodo.>
     *<Descripcion del algoritmo.>
     *
     * REQ: <.>
     *
     * RET: <.>
     *
     */
    ~Problema_TdH();
    
private:
	
	Estado * EI;
	Estado * EF;
	Estado * EA;
	
	int Discos;
    Estado * sigestados [2];
    
    
    
};

#endif
