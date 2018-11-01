#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector{
private:
	double Coordinates[4];

public:
	double position[4];
	
	/*Construtor padrão*/
	Vector();

	/*Construtor passando um vetor*/
	Vector(double Coordinates[4]);

	/*Construtor passando valores*/
	Vector (double  x, double y, double z);

	/*Sobrecarga  operador soma*/
	Vector operator + (Vector V);

	/*sobrecarga do operado produto (escalar)*/
	Vector operator  *  (double scalar);
	
	/*sobrecarga operador divisão*/
	Vector operator / (double escalar);
	
	/*sobrecarga de do operador ->* (produto vetorial)*/
	Vector operator ->* (Vector v2);



	double getValue(int index);
	void setValue(int index, double value);



	double norma();
	void normalizarVertice();

	double produtoEscalar(Vector v2); 
	void mostrarVertice ();
	//ver como fica o produtoDiatico, tendo que criar a classe Matriz
	//Matriz produtoDiatico();
	//void operator = (Vector V);

};

#endif // VECTOR_HPP