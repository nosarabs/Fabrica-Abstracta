#include "Problema_TdH.h"

void Problema_TdH::inicializar() {
    
    cout << "Cantidad de Discos?" << endl;
    cin >> Discos;
    
	EI = new Estado_TdH(int Discos);
	EF = new Estado_TdH(int Discos);
	EF -> hacerFinal();
	EA = EI;
    
}

Estado ** Problema_TdH::getEstadosSiguientesValidos(Estado * otro) {

    Estado ** ptr;
    Estado * peces [2]; // Posibles Estados Seguientes
    Estado * anterior;
    
    Estado sig1;
    Estado sig2;
    
    peces[0] = sig1;
    peces[1] = sig2;
    ptr = peces;
    
    anterior = EA;
    EA = otro;
    
    for (int i = 0; i < 2; ++i) {
        
        if (anterior -> noSonIguales(otro) && (otro -> noSonIguales(EI)) {
        
        
            if (otro -> Torres[0][topDisco(0)] < otro -> Torres[1][topDisco(1)]) {
                otro -> Torres[1][topDisco(1) + 1] = otro -> Torres[0][topDisco(0)];
                otro -> Torres[0][topDisco(0)] = 0;
                peces[i] = new Estado(otro);
            }
            else if (otro -> Torres[0][topDisco(0)] < otro -> Torres[2][topDisco(2)]) {
                otro -> Torres[2][topDisco(2) + 1] = otro -> Torres[0][topDisco(0)];
                otro -> Torres[0][topDisco(0) = 0;
                peces[i] = new Estado(otro);
            }
            else if (otro -> Torres[1][topDisco(1)] < otro -> Torres[0][topDisco(0)) {
                otro -> Torres[0][topDisco(0) + 1] = otro -> Torres[1][topDisco(1)];
                otro -> Torres[1][topDisco(1)] = 0;
                peces[i] = new Estado(otro);
            }
            else if (otro -> Torres[1][topDisco(1)] < otro -> Torres[2][topDisco(2)) {
                otro -> Torres[2][topDisco(2) + 1] = otro -> Torres[1][topDisco(1)];
                otro -> Torres[1][topDisco(1)] = 0;
                peces[i] = new Estado(otro);
            }
            else if (otro -> Torres[2][topDisco(2)] < otro -> Torres[0][topDisco(0)) {
                otro -> Torres[0][topDisco(0) + 1] = otro -> Torres[2][topDisco(2)];
                otro -> Torres[2][topDisco(2)] = 0;
                peces[i] = new Estado(otro);
            }
            else if (otro -> Torres[2][topDisco(2)] < otro -> Torres[1][topDisco(1)) {
                otro -> Torres[1][topDisco(1) + 1] = otro -> Torres[2][topDisco(2)];
                otro -> Torres[2][topDisco(2)] = 0;
                peces[i] = new Estado(otro);
            }
        }
    }
    return ptr;
}

double Problema_TdH::coeficienteDeSimilitud(Estado * otro , Estado * fin) {
    
    double total;
    int conta = 0;
    fin = EF;
    
    for (int i = 0; i <= 2; ++i) {
        for (int j = 0; j < Discos; ++j) {
            if (Torres[i][j] != 0) {
                if (conta == 0) {
                total += (Torres[i][j]) * 2;
                }
                else if (conta == 1) {
                    total += (Torres[i][j]) * 1;
                }
                else if (conta == 2) {
                    total += (Torres[i][j]) * 0;
                }
            }
        }
    ++conta;
    }
return total;
}


Estado * Problema_TdH::getEstadoInicial() {
    return EI;
}

Estado * Problema_TdH::getEstadoFinal() {
    return EF;
}

int Problema_TdH::esSolucion(Estado * otro) {
    
    if (coeficienteDeSimilitud(otro, this) == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

Problema::~Problema() {

}
