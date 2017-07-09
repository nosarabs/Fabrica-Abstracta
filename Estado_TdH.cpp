#include "Estado_TdH.h"

ostream& Estado_TdH::imprimir(ostream & salida) {

}

Estado_TdH::Estado_TdH() {
    Estado_TdH(3);
}

Estado_TdH::Estado_TdH(Estado_TdH e) {
    Estado_TdH(e.Discos);
    
}

Estado_TdH::Estado_TdH(int Discos) {
	
	this -> Discos = Discos;
	
	for int (j = 0; j < 3; ++j) {
        Torres [j] = new int [Discos];
    }
	
	for (int x = 1; x <= 2; ++x) {
		for (int y = 0; y < Discos; ++y) {
			Torres[x][y] = 0;
		}
	}
    
    for (int i = 0; i < Discos; ++i) {
        Torres [0] = Discos - i;
    }
}

void Estado_TdH::hacerFinal() {
	
	for (int i = 0; i < Discos; ++i) {
		Torres[2][i] = Torres[0][i];
		Torres[0][i] = 0;
	}
}

int Estado_TdH::noSonIguales(Estado * pri) {
    
    for (int i = 0; i <= 2; ++i) {
        for (int j = 0; j < Discos) {
            if (pri->Torres[i][j] != this->Torres[i][j]) {
                return 1;
            }
            else {
                return 0;
            }
        }
    }
}

int numArriba(int num) {
    int topNum;
    int conta = Discos;
    if (0 > num > 2) {
        cerr << "Torre Inexistente" << endl;
    }
    else {
        while (conta != 0) {
            this -> Torres[num]][conta];
            --conta;
        }
    }
}


