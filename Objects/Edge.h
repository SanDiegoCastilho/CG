#include <iostream>
#include "Point.h"

using namespace std;

class Edge{
private:
	Point edge[2];	

public:
	/* construtor padrão */
	Edge();

	/* Pi = Ponto inicial. Pf = Ponto final.*/
	Edge(Point Pi, Point Pf);

	/* Getters and Setters */
	Point getPointInitial();

	Point getPointFinal();

	Point getPoint(int index);

	void setPointInitial(Point P);

	void getPointFinal(Point P);

	void setPoint(int index, Point P);
};



