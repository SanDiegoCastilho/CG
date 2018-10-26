#include "Vector.hpp"

class Matrix{
private:
	double Values[4][4];

public:
	/* Construtor padrão */
	Matrix();

	/* Contrutor com uma matriz */
	Matrix(double matrix[4][4]);

	/* Preenche a diagonal pŕincipal com os valores indicados */
	void FillDiagonal(double value1, double value2, double value3);

	/* Preenche a coluna indicada com os valores passados */
	void FillColumn(int column, double value1, double value2, double value3);

	/* Preenche a linha indicada com os valores passados */
	void FillLine(int line, double value1, double value2, double value3);

	/* Retorna o valor de acordo com a indicação do lado */
	double getValue(int l, int c);

	/* Guarda VALUE na posição indicada */
	void setValue(int l, int c, double value);

	/* Sobrecarga do operador +; Retorna um objeto Matrix */
	Matrix operator + (Matrix A);

	/* Sobrecarga do operador *; Retorna um objeto Matrix */
	Matrix operator * (Matrix A);

	/* Sobrecarga do operador +; Retorna um objeto Vector */
	Vector operator * (Vector V);

	/* Determinante da matriz; Falta implementar ainda */
	double getDeterminant (Matrix A);
};