#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector{

//using namespace std;

public:
	//float x,y,z,w;
	float position[4];
	
	Vector();
	//Vector(std::initializer_list<float> position);
	Vector(float position[4]);
	Vector (float  x, float y, float z);
	Vector operator + (Vector v2);
	void operator = (Vector v2);
	Vector operator -  (Vector v2);
	//Faz a operação dentro do próprio vértice
	void operator *=  (float escalar);
	//Retorna outro vértice com a soma
	Vector operator  *  (float escalar);
	
	void operator /= (float escalar);

	Vector operator / (float escalar);
	
	// Operação de produto vetorial é vetor ->* vetor2
	Vector operator ->* (Vector v2);



	float getValue(int index);
	void setValue(int index, float value);



	float norma();
	void normalizarVertice();

	float produtoEscalar(Vector v2); 
	void mostrarVertice ();
	//ver como fica o produtoDiatico, tendo que criar a classe Matriz
	//Matriz produtoDiatico();

};

#endif // VECTOR_HPP