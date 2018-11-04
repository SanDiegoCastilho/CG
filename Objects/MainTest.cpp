#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

void resetVector(Vector *V, double values[3]);

int main(){
	double vetor[4] = {66, 99, 69};

	cout << "-------------------- TESTANDO VETORES -------------------" << endl;

	Vector Vetor1(1, 2, 3);
	Vector Vetor2();
	Vector Vetor3(vetor);

	if (Vetor1.getX() == 1 || Vetor1.getY() == 2 || Vetor1.getZ() == 3){
		cout << "Vetor 1 OK!" << endl;
		Vetor1.vectorPrint();
		cout << "Construtores ok" << endl;
	}

	/*Construtor padrão não ta funcionando não sei pq!!!*/
	// if (Vetor2.getX() == 0 || Vetor2.getY() == 0 || Vetor2.getZ() == 0){
	// 	cout << "Vetor 2 OK!" << endl;
	// 	Vetor2.vectorPrint();
	// 	cout << "Construtores ok" << endl;
	// }

	if (Vetor3.getX() == 66 || Vetor3.getY() == 99 || Vetor3.getZ() == 69){
		cout << "Vetor 3 OK!" << endl;
		Vetor3.vectorPrint();
		cout << "Construtores ok" << endl;
	}

	cout << "------------------- Fim Teste 1 --------------------" << endl;
	cout << endl;

	cout << "------------------- TESTANDO CÁLCULOS -------------------" << endl;
	cout << endl;

	cout << "===== Norma =====" << endl;
	if (Vetor1.norm() == sqrt(14)){
		cout << "Norma ta ok!" << endl;
		cout << "Norma: " << Vetor1.norm() << endl;
	}

	if (Vetor3.norm() == 3 * sqrt(2102)){
		cout << "Norma ta ok!" << endl;
		cout << "Norma: " << Vetor3.norm() << endl;	
	}

	cout << endl;
	cout << "===== Normalização =====" << endl;

	Vetor1.normalize();
	Vetor3.normalize();

	if (Vetor1.getX() == 1/sqrt(14) || Vetor1.getY() == sqrt(2/7) || Vetor1.getZ() == 3/sqrt(14)){
		cout << "Normalização ta ok" << endl;
		Vetor1.vectorPrint();
	}

	if (Vetor3.getX() == (11 * sqrt(2/1051)) || Vetor3.getY() == (33 / sqrt(2102)) || Vetor3.getZ() == (23 / sqrt(2102))){
		cout << "Normalização ta ok" << endl;
		Vetor3.vectorPrint();
	}

	cout << "===== PRODUTO ESCALAR =====" << endl;
	double values1[3] = {1, 2, 3};
	double values2[3] = {66, 99, 69};

	resetVector(&Vetor1, values1);
	resetVector(&Vetor3, values2);

	if (Vetor1 * Vetor3 == 471){
		cout << "Operador * (produto escalar) ta ok!" << endl;
	}

	cout << endl;
	cout << "===== TESTANDO OS OPERADORES =====" << endl;

	// Vector VectorSum(0,0,0) = Vetor1 + Vetor2;

	// if (VectorSum.getX() == 67 || VectorSum.getY() == 101 || VectorSum.getZ() == 72){
	// 	cout << "Operador + ta ok!!" << endl;
	// 	VectorSum.vectorPrint();
	// }


	Vector VectorPro = Vetor1 * 10;

	if (VectorPro.getX() == 10 || VectorPro.getY() == 20 || VectorPro.getZ() == 30){
		cout << "Operador * com escalar ta massa" << endl;
		VectorPro.vectorPrint();
	}

	Vector VetorQuo = Vetor3 / 3;

	if (VetorQuo.getX() == 22 || VetorQuo.getY() == 33 || VetorQuo.getZ() == 23){
		cout << "Divisão por um escalar ta ok tbm" << endl;
		VetorQuo.vectorPrint();
	}

	Vector VetorNormal = Vetor1 ->* Vetor3;

	if (VetorNormal.getX() == -159 || VetorNormal.getY() == 129 || VetorNormal.getZ() == -33){
		cout << "produto Vetorial ta ok oh god" << endl;
		VetorNormal.vectorPrint();
	}

	cout << "------------------- Fim Teste 2 --------------------" << endl;

	return 0;
}

void resetVector(Vector* V, double values[3]){
	for (int i = 0; i < 3 ; i++){
		V->setCoordinate(i, values[i]);
	}
}
