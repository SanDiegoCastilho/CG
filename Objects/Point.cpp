#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point::Point() {
    Coordnates[0] = 0;
    Coordnates[1] = 0;
    Coordnates[2] = 0;
    Coordnates[3] = 1;
}

Point::Point(double Coordinates[4]) {
    this->Coordinates[0] = Coordinates[0];
    this->Coordinates[1] = Coordinates[1];
    this->Coordinates[2] = Coordinates[2];
    this->Coordinates[3] = 1;
}

Point::Point(double x, double y, double z) {
	Coordinates[0] = x;
    Coordinates[1] = y;
    Coordinates[2] = z;
    Coordinates[3] = 1;
}

Vector operator - (Point P) {
        return Vector(P.getPosition());
}

// void Point::operator = (Vector v2){
//     Coordinates[0] = v2.Coordinates[0];
//     Coordinates[1] = v2.Coordinates[1];
//     Coordinates[2] = v2.Coordinates[2];
// }

double getCoordinate(int index) {
    return Coordinates[index];
}

double* Point::getPosition() {
	return Coordinates;
}

double Point::getX() {
	return Coordinates[0];
}

double Point::getY() {
	return Coordinates[1];
}

double Point::getZ() {
	return Coordinates[2];
}

void setCoordinates(int index, double value) {
    Coordinates[index] = value;
}

void Point::setX(double x) {
    Coordinates[0] = x;
}

void Point::setY(double y) {
    Coordinates[1] = y;
}

void Point::setZ(double z) {
    Coordinates[2] = z;
}

double Point::dot(Point P2){
	return Coordinates[0]*P2.getX() + Coordinates[1]*P2.getY() + Coordinates[2]*P2.getZ();
}

/* debug */    
void Point::mostrarVertice() {
    std::cout << "\nCoordenadas do vetor: " << this->Coordinates[0] << ", " << this->Coordinates[1] << ", " << this->Coordinates[2] << ";" << std::endl;
}
