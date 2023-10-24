#include <iostream>
#include <cstdlib>
using namespace std;


class Fichier {
private:
    char* P;
    int l;

public:
    Fichier() : P(nullptr){
        cout<<"Entrer l:";
        cin>>l;
        Creation();
    }

    ~Fichier() {
        delete[] P;
    }

    void Creation() {
        P = new char[l];
    }

    void Remplit() {
        char c;
        if (P) {
            cout<<"Entrer votre chaine de caracter:";
            for (int i = 0; i < l; i++) {
                char c;
                cin>>c;
                P[i] = c;
            }
        }
    }

    void Affiche() {
        if (P) {
            for (int i = 0; i < l; i++) {
                cout << P[i];
            }
            cout <<'\n';
        }
    }
};

int main() {
    Fichier fichier;
    fichier.Remplit();
    fichier.Affiche();

    return 0;
}
