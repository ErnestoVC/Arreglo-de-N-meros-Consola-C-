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

int *Aregar_Al_Final(int *arrOriginal, int Dato, int *N){
	int *auxiliar = Crear_arreglo((*N) + 1);
	if (auxiliar != NULL){
		for (int i = 0; i < *N; i++)
			auxiliar[i] = arrOriginal[i];
		auxiliar[*N] = Dato;
		*N = *N + 1;
		if (arrOriginal != NULL)
			delete[] arrOriginal;
	}
	return auxiliar;
}

int *Aregar_En_Posicion(int *arrOriginal, int Dato, int *N, int posicion){
	int *auxiliar = Crear_arreglo((*N) + 1);
	if (auxiliar != NULL){
		for (int i = 0; i < *N; i++)
			auxiliar[i+1] = arrOriginal[i];
		auxiliar[posicion] = Dato;
		*N = *N + 1;
		if (arrOriginal != NULL)
			delete[] arrOriginal;
	}
	return auxiliar;
}