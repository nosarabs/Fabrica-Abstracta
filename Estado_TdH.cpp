#include "Estado_TdH.h"

ostream& Estado_TdH::imprimir(ostream & salida) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; i < this -> Discos; ++j) {
            salida << Torres[i][j] << " ";
        }
        salida << endl;
    }
    return salida;
}

Estado_TdH::Estado_TdH() {
    Estado_TdH(3);
}

Estado_TdH::Estado_TdH(Estado_TdH e) {
    Estado_TdH(e.Discos);
    this -> Torres = e.Torres;
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
    
    int son;
    for (int i = 0; i <= 2; ++i) {
        for (int j = 0; j < Discos) {
            if (pri->Torres[i][j] != this->Torres[i][j]) {
                son = 1;
            }
            else {
                son = 0;
            }
        }
    }
    return son;
}

int topDisco(int num) {
    int topNum;
    int conta = Discos;
    if (0 > num > 2) {
        cerr << "Torre Inexistente" << endl;
    }
    else {
        while (this -> Torres[num][conta] != 0) {
            --conta;
        }
        topNum = conta;
    }
    return topNum;
}


