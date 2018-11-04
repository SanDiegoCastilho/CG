#include <cmath>
#include <iostream>

#include "Vector.h"

using namespace std;

/*Construtor padrão (Ta bugando essa porra) */
Vector::Vector(){
    for(int i = 0; i <= 3; i++){
        setCoordinate(i, 0);
    }
}

/*Construtor com um vetor*/
Vector::Vector(double Coordinates[4]){
	for (int i = 0; i < 3; i++){
		this->Coordinates[i] = Coordinates[i];
	}

	setCoordinate(3, 0);
}

/*Construtor passando valores*/
Vector::Vector(double  x, double y, double z){
	setCoordinate(0, x);
	setCoordinate(1, y);
	setCoordinate(2, z);

	setCoordinate(3, 0);
}

/*Sobrecarga  operador soma -- (ATENÇÃO: Não ta funcionando)*/
Vector Vector::operator + (Vector V){
	Vector sumVector(0, 0, 0);
	double sum;

	for (int i = 0; i <= 3; i++){
		sum = V.getCoordinate(i) + getCoordinate(i);
		sumVector.setCoordinate(i, sum);	 
	}

	return sumVector;
}


/*sobrecarga operador divisão Vetor - escalar*/
Vector Vector::operator / (double scalar){
	Vector resultingVector(0, 0, 0);

	for (int i = 0; i < 3; i++){
		resultingVector.setCoordinate(i, getCoordinate(i) * (1/scalar));
	}
	
	return resultingVector;	
}

/*Multiplicação Vetor - escalar*/
Vector Vector::operator  *  (double scalar){
	Vector resultingVector(0, 0, 0);

	for (int i = 0; i < 3; i++){
		resultingVector.setCoordinate(i, getCoordinate(i) * scalar);
	}

	return resultingVector;
}
/*sobrecarga do operado produto (escalar)*/
double Vector::operator  *  (Vector V){
	double result;

	for (int i = 0; i < 3; i++){
		result += getCoordinate(i) * V.getCoordinate(i);
	}

	return result;
}

/*sobrecarga de do operador ->* (produto vetorial)*/
Vector Vector::operator ->* (Vector V){
	Vector ResultingVector(1, 1, 1);

	ResultingVector.setX(getY() * V.getZ() - getZ() * V.getY());
	ResultingVector.setY(getZ() * V.getX() - getX() * V.getZ());
	ResultingVector.setZ(getX() * V.getY() - getY() * V.getX());

	return ResultingVector;
}

/* Pega valores específicos */
double Vector::getCoordinate(int index){
	return this->Coordinates[index];
}

double  Vector::getX(){
	return this->Coordinates[0];
}

double Vector::getY(){
	return this->Coordinates[1];
}

double Vector::getZ(){
	return this->Coordinates[2];
}

/* guarda valores por índice */
void Vector::setCoordinate(int index, double value){
	this->Coordinates[index] = value;
}

/* guarda valores específicos */
void Vector::setX(double x){
	this->Coordinates[0] = x;
}

void Vector::setY(double y){
	this->Coordinates[1] = y;
}

void Vector::setZ(double z){
	this->Coordinates[2] = z;
}

/*Retorna a norma do vetor*/
double Vector::norm(){
	double Norm;

	Norm = sqrt((getX() * getX()) + (getY() * getY()) + (getZ() * getZ()));

	return Norm;
}

/*Normaliza o vetor*/
void Vector::normalize(){
	double Norm = norm();

	setX(getX() * 1/Norm);
	setY(getY() * 1/Norm);
	setZ(getZ() * 1/Norm);
}

/*Debug*/
void Vector::vectorPrint(){
	cout << "X: " << getX() << " Y: " << getY() << " Z: " << getZ() << endl;
}