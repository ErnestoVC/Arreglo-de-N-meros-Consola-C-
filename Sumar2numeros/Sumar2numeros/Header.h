#include <stdio.h>

int *Crear_arreglo(int N){
	return new int[N];
}

int *Agregar_Al_Inicio(int *arrOriginal, int Dato, int *N){
	int *auxliar = Crear_arreglo((*N) + 1);
	if (auxliar != NULL){
		for (int i = 0; i < *N; i++)
			auxliar[i + 1] = arrOriginal[i];
		auxliar[0] = Dato;
		*N = *N + 1;
		if (arrOriginal != NULL)
			delete[] arrOriginal;
	}
	return auxliar;
}