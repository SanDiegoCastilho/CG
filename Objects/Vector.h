#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector{
private:
	double Coordinates[4];

public:
	/*Construtor padrão*/
	Vector();

	/*Construtor passando um vetor*/
	Vector(double Coordinates[4]);

	/*Construtor passando valores*/
	Vector(double  x, double y, double z);

	/*Sobrecarga  operador soma*/
	Vector operator + (Vector V);

	/*sobrecarga do operado produto (escalar)*/
	Vector operator * (double scalar);

	/*sobrecarga do operado produto (escalar)*/
	double operator * (Vector V);
	
	/*sobrecarga operador divisão*/
	Vector operator / (double escalar);
	
	/*sobrecarga de do operador ->* (produto vetorial)*/
	Vector operator ->* (Vector v2);

	/* Pega valores específicos */
	double getCoordinate(int index);

	double getX();
	double getY();
	double getZ();

	/* guarda valores por índice */
	void setCoordinate(int index, double value);

	/* guarda valores específicos */
	void setX(double x);
	void setY(double y);
	void setZ(double z);

	/*Retorna a norma do vetor*/
	double norm();

	/*Normaliza o vetor*/
	void normalize();

	/*Debug*/
	void vectorPrint();
};

#endif // VECTOR_HPP