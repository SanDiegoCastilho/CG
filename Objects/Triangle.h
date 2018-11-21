#include <cmath>
#include "Vector.h"
#include "Point.h"

class Triangle{
private:
	Point Verteces[3];
	Vector Edges[3];

public:
	/*Construtor padrão*/
	Triangle();

	/*Construtor passando valores*/
	Triangle(Point P1, Point P2, Point P3);

	/*Construtor passando vetor*/
	Triangle(Point Values[3]);

	/*Getter e Setter*/
	Point getVertex(int index);
 
	Vector getEdge(int index);

	void setVertex(int index, Point value);

	void setEdge(int index, Point Origin, Point Destiny);

	/*Verifica intersecção com Triangulo*/
	bool intersection(Point P);

};