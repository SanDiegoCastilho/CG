#include "Matrix.h"

Matrix::Matrix(){
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			if (i == j){
				Values[i][j] = 1;

			}else
				Values[i][j] = 0;
		}
	}
}

Matrix::Matrix(double matrix[4][4]){
	for (int i = 0; i < 4; i++) 
		for (int j = 0; j < 4; j++) 
			Values[i][j] = matrix[i][j];
}

void FillDiagonal(double value1, double value2, double value3){
	setValue(0, 0, value1);
	setValue(1, 1, value2);
	setValue(2, 2, value3);
}

void FillColumn(int column, double value1, double value2, double value3){
	setValue(0, column, value1);
	setValue(1, column, value2);
	setValue(2, column, value3);
}

void FillLine(int line, double value1, double value2, double value3){
	setValue(line, 0, value1);
	setValue(line, 1, value2);
	setValue(line, 2, value3);
}

double Matrix::getValue(int i, int j){
	return Values[i][j];
}

void Matrix::setValue(int i, int j, double value){
	Values[i][j] = value;
}

Matrix Matrix::operator + (Matrix A){
	Matrix matrixSum;
	double valueSum = 0;

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			valueSum = Values[i][j] + A.getValue(i,j);
			matrixSum.setValue(i, j, valueSum) ;
		}
	}

	return matrixSum;
}

Matrix Matrix::operator * (Matrix A){
	Matrix matrixProd;
	double valueProd = 0;

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			for (int k = 0; k < 4; k++){
				valueProd += Values[j][k] * A.getValue(k,j);
				matrixProd.setValue(i, j, valueProd);
			}
		}
	}

	return matrixProd;
}

Point Matrix::operator * (Point P){
	Point pointProd;
	double valueProd = 0;

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			valueProd += Coordinates[i][j] * P.getValue(i);
			pointProd.setValue(i, valueProd);
		}
	}

	return pointProd;
}

double Matrix::getDeterminant (Matrix A){
	/*Determinante da matriz 4x4 ou 3x3?*/
}
