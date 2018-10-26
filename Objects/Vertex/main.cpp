#include <iostream>
#include "Vertex.h"

using namespace std;

int main(){
    Vertex vetor1(7, 3, 5);
    Vertex vetor2(-8, 4, 2);
    Vertex vetor3(3, 0, -2);
    Vertex vetor4(1, -2, 2);
    Vertex vetor5 = vetor3 + vetor4;
    Vertex vetor6 = vetor2 - vetor1;
    Vertex vetor7 = vetor3 * 4;
    Vertex vetor8 = vetor2 / 2;
    Vertex vetor9(1, 2, -2);
    Vertex vetor10(3, 0, 1);
    
    cout << "Vetor 1: " << endl;
    vetor1.mostrarVertice();
    cout << "\nVetor 2: " << endl;
    vetor2.mostrarVertice();
    cout << "\nVetor 3: " << endl;
    vetor3.mostrarVertice();
    cout << "\nVetor 4: " << endl;
    vetor4.mostrarVertice();
    cout << "\nVetor 5: " << endl;
    vetor5.mostrarVertice();
    cout << "\nVetor 6: " << endl;
    vetor6.mostrarVertice();
    cout << "\nVetor 7: " << endl;
    vetor7.mostrarVertice();
    cout << "\nVetor 8: " << endl;
    vetor8.mostrarVertice();
    cout << "\nVetor 9: " << endl;
    vetor9.mostrarVertice();
    cout << "\nVetor 10: " << endl;
    vetor10.mostrarVertice();
    
    cout << endl << "====================================================================" << endl;
    
    vetor1 *= 2;
    cout << "\nVetor 1 multiplicado por 2: " << endl;
    vetor1.mostrarVertice();
    
    cout << endl << "====================================================================" << endl;
    
    vetor2 /= 2;
    cout << "\nVetor 2 dividido por 2: " << endl;
    vetor2.mostrarVertice();
    
    cout << endl << "====================================================================" << endl;
    
    cout << "\nNorma do vetor 3: " << vetor3.norma() << endl;
    
    vetor4.normalizarVertice();
    cout << "\nVetor 4 normalizado: " << endl;
    vetor4.mostrarVertice();
    
    cout << endl << "====================================================================" << endl;
    
    cout << "\nProduto escalar entre vetor1 e vetor2: " << vetor1.produtoEscalar(vetor2) << endl;
    
    cout << endl << "====================================================================" << endl;
    
    // há 3 maneiras de se gerar um produto vetorial entre 2 vetores:
    // utilizarei o vetor9 e vetor 10 cujo produto vetorial é (2, -7, -6) para formar o vetor11 e vetor12 que devem ter o mesmo valor
    // na terceira maneira irei modificar diretamente o vetor9 para ser o produto vetorial dele com o vetor10
    
	Vertex vetor11 = vetor9.produtoVetorial(vetor10);
    Vertex vetor12 = vetor9 % vetor10;
    
    cout << "\nVetor 11: " << endl;
    vetor11.mostrarVertice();
    cout << "\nVetor 12: " << endl;
    vetor12.mostrarVertice();
    
    vetor9 %= vetor10;
    
    cout << "\nVetor 9 que foi modificado para ser o produto vetorial dele com o vetor 10: " << endl;
    vetor9.mostrarVertice();
    
    cout << endl;
    
    return 0;
}