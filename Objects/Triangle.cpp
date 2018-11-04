#include <cmath>

#include "Triangle.h"

	Triangle::Triangle(){
		Point P(0,0,0);

		for (int i = 0; i <= 2; i++){
			setVertex(i, P);	
		}
	}

	/*Construtor passando valores*/
	Triangle::Triangle(Point P1, Point P2, Point P3){
		setVertex(0, P1);
		setVertex(1, P2);
		setVertex(2, P3);

		setEdge(0, P1, P2);
		setEdge(1, P2, P3);
		setEdge(2, P3, P1);
	}

	/*Construtor passando vetor*/
	Triangle::Triangle(Point Values[3]){
		for (int i = 0; i <= 2 ; i++){
			setVertex(i, Values[i]);
		}
	}

	/*Getter e Setter*/
	Point Triangle::getVertex(int index){
		return this->Verteces[index];
	}

	Vector Triangle::getEdge(int index){
		return this->Edges[index];
	}
 
	void Triangle::setVertex(int index, Point P){
		this->Verteces[index] = P;
	}

	void Triangle::setEdge(int index, Point Origin, Point Destiny){
		Vector Edge = Destiny - Origin;

		this->Edges[index] = Edge;
	}

	/*Verifica intersecção com Triangulo*/
	bool Triangle::intersection(Point Pint){
		Vector IntersectionVectors[3];
		Vector NormalVectors[3];

		for (int i = 0; i < 3; i++){
			IntersectionVectors[i] = Pint - Verteces[i];	
			NormalVectors[i] = getEdge(i) ->* IntersectionVectors[i];
		}

		Vector Aux(0, 0, 0);
		for (int i = 0; i <= 2 ; i++){
			Aux = NormalVectors[i];

			if (Aux.getX() > 0 || Aux.getY() > 0 || Aux.getZ() > 0){
				return true;

			}else if(Aux.getX() < 0 || Aux.getY() < 0 || Aux.getZ() < 0){
				return true;

			}else{
				return false;
			}
		}
	}
