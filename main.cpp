#include <iostream>
using namespace std;

struct NoArvore {
    int data;
    NoArvore* esquerda;
    NoArvore* direita;
};

bool saoArvoresIguais(NoArvore* raiz1, NoArvore* raiz2) {
    if (raiz1 == NULL && raiz2 == NULL) {
        return true;
    }

    
    if (raiz1 == NULL || raiz2 == NULL) {
        return false;
    }

    
    return (raiz1->data == raiz2->data) &&
           saoArvoresIguais(raiz1->esquerda, raiz2->esquerda) &&
           saoArvoresIguais(raiz1->direita, raiz2->direita);
}

int main() {
    
    NoArvore* raiz1 = new NoArvore{1, new NoArvore{2, NULL, NULL}, new NoArvore{3, NULL, NULL}};

    NoArvore* raiz2 = new NoArvore{1, new NoArvore{2, NULL, NULL}, new NoArvore{3, NULL, NULL}};


    if (saoArvoresIguais(raiz1, raiz2)) {
        cout << "As arvores sao iguais." << endl;
    } else {
        cout << "As arvores nao sao iguais." << endl;
    }

    return 0;
}

