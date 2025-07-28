    #include<iostream>
    #include "dadossumadores.h"
    #include <ctime>
    using namespace std;

    void dadosSumadores(int dados[], int tam) {
        for (int i = 0; i < tam; i++) {
            dados[i] = rand() % 6 + 1;
        }


        cout << "Dados Sumadores: "<<endl;
        for (int i = 0; i < tam; i++) {
            cout << dados[i] << " "<<endl;
        }
        cout << endl;
    }
