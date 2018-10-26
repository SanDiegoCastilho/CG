#include <iostream>
#include "../Vertex/Vertex.cpp"

using namespace std;

class Edge{
protected:
	static int nextID;

public:	
	int id;
	Vertex vi, vf;

	Edge();
	Edge(Vertex, Vertex);
};



