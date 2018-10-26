#ifndef POINT_HPP
#define POINT_HPP

// #include "util.h"
#include "Vector.h"

class Point{
private:
	double Coordinates[4];
	
public:
	/*Construtor padrão*/
	Point ();

	/*Construtor passando um vetor*/
	Point (double Coordinates[4]);

	/*Construtor passando as coordenadas*/
	Point (double  x, double y, double z);
	
	/*Calcula um Vetor a partir de dois pontos*/
	Vector operator - (Point P);

	/* Não sei para que serve */
	// void operator = (Vector v2);

	
    /* Getters and Setters */
	double* getPosition();

	/* Pega o valor por índice */
	double getCoordinate(int index);

	/* Pega valores específicos */
	double getX();
	double getY();
	double getZ();

	/* guarda valores por índice */
	void setCoordinate(int index, double value);

	/* guarda valores específicos */
	void setX(double x);
	void setY(double y);
	void setZ(double z);	

	double dot(Point P2);

	/* debug */
	void mostrarVertice ();
};

#endif // POINT_HPP 
