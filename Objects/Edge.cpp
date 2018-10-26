#include "Edge.h"

Edge::Edge(){
	/* !! NULO !! */
}

Edge::Edge(Point Pi, Point Pf){
	edge[0] = Pi;
	edge[1] = Pf;
}

Point Edge::getPointInitial(){
	return edge[0];
}

Point Edge::getPointFinal(){
	return edge[1];
}

Point getPoint(int index){
	return edge[index];
}

void Edge::setPointInitial(Point P){
	edge[0] = P;
}

void Edge::getPointFinal(Point P){
	edge[1] = P;
}

void setPoint(int index, Point P){
	edge[index] = P;
}