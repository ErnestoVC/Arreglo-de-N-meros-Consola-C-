#include <stdio.h>

int* Crear_Arreglo(int N){	return new int[N]; }

int* Agregar_nuevo_Dato(int* arroriginal, int Dato, int *N){  // Al final
	int* arrauxiliar=Crear_Arreglo((*N) + 1);
	if (arrauxiliar!=NULL){  // Cuando no existe memoria disponible arrauxiliar es igual a NULL
		for (int i=0;i<*N;i++)
			arrauxiliar[i]=arroriginal[i];
		arrauxiliar[*N]=Dato;
		*N=*N+1;
		if (arroriginal!=NULL)  // Solo se elimina si no es igual a NULL
			delete[] arroriginal;
	}
	return arrauxiliar;
}

int* Agregar_nuevo_Dato_alinicio(int* arroriginal, int Dato, int *N){  // Al Inicio
	int* arrauxiliar=Crear_Arreglo((*N) + 1);
	if (arrauxiliar!=NULL){  // Cuando no existe memoria disponible arrauxiliar es igual a NULL
		for (int i=0;i<*N;i++)
			arrauxiliar[i+1]=arroriginal[i];
		arrauxiliar[0]=Dato;
		*N=*N+1;
		if (arroriginal!=NULL)  // Solo se elimina si no es igual a NULL
			delete[] arroriginal;
	}
	return arrauxiliar;
}

bool Dato_Existe(int* arroriginal, int Dato, int *N){
	bool existe=false;
	for (int i=0; i<*N && !existe ;i++){
	   if (arroriginal[i]==Dato)
		   existe=true;
	}
	return existe;
}

int Cantidad_Ocurrencias(int* arroriginal, int Dato, int *N){     
	int c=0;
	for (int i=0;i<*N;i++){
		if (arroriginal[i]==Dato)
		c++;
	}
	return c;
}

int* Eliminar_Ocurrencias_Dato(int* arroriginal, int Dato, int *N){	
	if ( Dato_Existe(arroriginal,Dato,N) ){  //Solo cuando es TRUE
		int cantidad=Cantidad_Ocurrencias(arroriginal,Dato,N);
		int *arrauxiliar=Crear_Arreglo( (*N) - cantidad );
		int h=0; //indice en el arreglo auxiliar
		for (int i=0;i<*N;i++){	  
			if (arroriginal[i]!=Dato){
				arrauxiliar[h]=arroriginal[i];
				h++;
			}
		}
		*N=*N-cantidad;
		if (arroriginal!=NULL)
			delete [] arroriginal;
			return arrauxiliar;
	}
	return arroriginal;
}


int* Agregar_nuevo_Dato_enposicion ( int* arroriginal, int Dato, int *N, int posicion){
	if (posicion>0 && posicion<=*N){
		int indice=posicion-1;
		int *arrauxiliar=Crear_Arreglo((*N)+1);
		if (arrauxiliar!=NULL){
			//Copiar desde indice 0 hasta el indice previo a donde sera copiado el dato
			for (int i=0;i<indice;i++)
				arrauxiliar[i]=arroriginal[i];
			//Colocar el dato en el indice indicado en el arreglo auxiliar
			arrauxiliar[indice]=Dato;
			//Colocar en un indice mas los datos que sobre la derecha
			for (int i=indice;i<*N;i++)
				arrauxiliar[i+1]=arroriginal[i];
	   			*N=*N+1;
			if (arroriginal!=NULL)
				delete[] arroriginal;
		}
		return arrauxiliar;
	}
    return arroriginal;
}
