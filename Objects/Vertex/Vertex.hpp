class Vertex{

public:
	float x,y,z;
	Vertex();
	Vertex (float  pointX, float pointY, float pointZ);
	
	Vertex operator+ (Vertex vertice2){
		return Vertex(x + vertice2.x ,y + vertice2.y, z + vertice2.z);
	}
	
	Vertex operator-  (Vertex vertice2){
		return Vertex(x - vertice2.x, y - vertice2.y, z - vertice2.z);
	}
	//Faz a operação dentro do próprio vértice
	void operator*=  (float escalar){
		x *= escalar;
		y *= escalar;
		z *= escalar;
	}
	//Retorna outro vértice com a soma
	Vertex operator*  (float escalar){
		return Vertex (x * escalar, y * escalar, z * escalar);
	}
	
	void operator /= (float escalar){
		x /= escalar;
		y /= escalar;
		z /= escalar;
	}

	Vertex operator/ (float escalar){
		return Vertex(x / escalar, y / escalar, z / escalar);
	}
	
	Vertex produtoVetorial(Vertex v2){
		return Vertex(y * v2.z - z * v2.y,
									    z * v2.x - x * v2.z,
										x * v2.y - y * v2.x);
	}
	
	void operator%= (Vertex v2){
		*this = produtoVetorial(v2);
	}

	Vertex operator% (Vertex v2){
		return Vertex(y * v2.z - z * v2.y,
									    z * v2.x - x * v2.z,
										x * v2.y - y * v2.x);
	}

	float norma();
	void normalizarVertice();
	float produtoEscalar(Vertex v2); 
	void mostrarVertice ();

};