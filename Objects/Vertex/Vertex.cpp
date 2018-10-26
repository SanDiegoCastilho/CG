#include <iostream>
#include <cmath>
#include "Vertex.h"

using namespace std;

Vertex :: Vertex(){
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vertex :: Vertex(float pointX, float pointY, float pointZ){
	this->x = pointX;
	this->y = pointY;
	this->z = pointZ;
}

float Vertex::norma(){
    float n = sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
    return n;
}

void Vertex::normalizarVertice(){
    float n = sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
    
    if (n > 0){
        this->x = this->x / n;
        this->y = this->y / n;
        this->z = this->z / n;
    }
}

float Vertex::produtoEscalar(Vertex v2){
    float e = (this->x * v2.x) + (this->y * v2.y) + (this->z * v2.z);
    return e;
}

void Vertex::mostrarVertice(){
    cout << "\nCoordenadas do vetor: " << this->x << ", " << this->y << ", " << this->z << ";" << endl;
}
