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
    
    Estado * ptr;
    Estado * peces [2]; // Posibles Estados Seguientes
    Estado * anterior;
    
    Estado sig1;
    Estado sig2;
    
    anterior = EA;
    EA = otro;
    
    if (anterior -> noSonIguales(otro) && (otro -> noSonIguales(EI))) {
        
        
    }
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

~Problema_TdH() {
    
}
