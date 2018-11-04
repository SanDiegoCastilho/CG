#include <iostream>
#include <cmath>

#include "Point.h"

using namespace std;

Point::Point() {
    for (int i = 0; i < 3 ; i++){
        this->Coordinates[i] = 0;
    }
    
    setCoordinate(3, 1);
}

Point::Point(double Coordinates[4]) {

    for (int i = 0; i < 3; i++){
        this->Coordinates[i] = Coordinates[i];        
    }

    setCoordinate(3, 1);
}

Point::Point(double x, double y, double z) {
    setCoordinate(0, x);
    setCoordinate(1, y);
    setCoordinate(2, z);
	setCoordinate(3, 1);
}

Vector Point::operator - (Point P) {
        return Vector(P.getPosition());
}

// void Point::operator = (Vector v2){
//     Coordinates[0] = v2.Coordinates[0];
//     Coordinates[1] = v2.Coordinates[1];
//     Coordinates[2] = v2.Coordinates[2];
// }

double Point::getCoordinate(int index){
    return this->Coordinates[index];
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

void Point::setCoordinate(int index, double value) {
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

// double Point::dot(Point P2){
// 	return Coordinates[0]*P2.getX() + Coordinates[1]*P2.getY() + Coordinates[2]*P2.getZ();
// }

/* debug */    
void Point::mostrarVertice() {
    cout << "\nCoordenadas do vetor: " << getCoordinate(0) << ", " << getCoordinate(1) << ", " << getCoordinate(2) << ";" << endl;
}
