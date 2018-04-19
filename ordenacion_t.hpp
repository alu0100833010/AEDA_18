#pragma once
#include <iostream>
#include "../include/dni_t.hpp"
using namespace std;

template <class clave>
class ordenacion_t {
    private:
    
	public:
    	ordenacion_t();
    	~ordenacion_t();
    	
    	// Algoritmos
    	void insercion(clave v[], int sz, int modo);
    	void bubblesort(clave v[], int sz, int modo);
    	void quicksort(clave v[], int ini, int sz_fin, int modo);
    	void heapfy(clave v[], int sz, int i, int modo);
    	void heapsort(clave v[], int sz, int modo);
    	void shellsort(clave v[], int sz, int modo);
    	void deltasort(int delta, clave v[], int sz, int modo);
    	void mergesort(clave v[],int ini,int fin, int modo);
    	void seleccion(clave v[], int sz, int modo);
    	void mostrar_vector();

};

// Implementacion

template <class clave>
ordenacion_t<clave>::ordenacion_t() {}

template <class clave>
ordenacion_t<clave>::~ordenacion_t() {}

template <class clave>
void ordenacion_t<clave>::insercion(clave v[],int sz, int modo) {
	dni_t aux;
	for(int i = 1; i < sz; i++) {
		int j = i - 1;
		aux = v[i]; 
		if (modo == 1)
			cout << "Elementos a comparar: [ " << v[j] << ", " << v[j+1] << " ]" << endl;
		while ((aux < v[j]) && (j >= 0)) { 
 			v[j+1] = v[j];
 			j--;
		}
		v[j+1] = aux;
		if (modo == 1) {
			cout << "Banco ACTUALIZADO: [";
			for (int i = 0; i < sz; i++) {
				if (i != sz-1) 
					cout << v[i] << ", ";
				else 
					cout << v[i] << "";
			}
			cout << "]" << endl;
		}
 	}
}

template <class clave>
void ordenacion_t<clave>::bubblesort(clave v[], int sz, int modo) {
    dni_t aux;
	for(int i = 1; i < sz; i++) {
		for(int j = 0; j < sz-1; j++) { 
			if (modo == 1)
				cout << "Elementos a comparar: [ " << v[j] << ", " << v[j+1] << " ]" << endl;
			if(v[j] > v[j+1]) {
    			aux = v[j];
    			v[j] = v[j+1];
    			v[j+1] = aux;
			}
		}
		if (modo == 1) {
			cout << "Banco ACTUALIZADO: [";
			for (int i = 0; i < sz; i++) {
				if (i != sz-1) 
					cout << v[i] << ", ";
				else 
					cout << v[i] << "";
			}
			cout << "]" << endl;
		}
	}
}

template <class clave>
void ordenacion_t<clave>::quicksort(clave v[], int ini, int sz_fin, int modo) {
    dni_t aux;
	int i = ini;
	int j = sz_fin;
	dni_t pivote = v[(i+j)/2];
	while (i <= j) {
		if (modo == 1)
			cout << "Elemento pivote: " << pivote << endl;
		while (v[i] < pivote) { 
			if (modo == 1) {
				cout << "Recorrido Ascendente" << endl;
				cout << "Comparando elemento " << v[i] << endl;
			}
			i++;
		}
		while (v[j] > pivote) { 
			if (modo == 1) {
				cout << "Recorrido Descendente" << endl;
				cout << "Comparando elemento " << v[j] << endl;
			}
			j--;
		}
		if (i <= j) {
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
		if(modo == 1) {
        	cout << "Banco ACTUALIZADO: [";
			for (int i = 0; i < sz_fin; i++) {
				if (i != sz_fin-1) 
					cout << v[i] << ", ";
				else 
					cout << v[i] << "";
			}
			cout << "]" << endl;
		}
	}
	if (ini < j) quicksort(v, ini, j, modo);	
	if (i < sz_fin) quicksort(v, i, sz_fin, modo);	
}
template<class clave>
void ordenacion_t<clave>::heapfy(clave v[], int sz, int i, int modo) {
	int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2
 
    // If left child is larger than root
    if (l < sz && v[l] > v[largest])
        largest = l;
    // If right child is larger than largest so far
    if (r < sz && v[r] > v[largest])
        largest = r;
    // If largest is not root
    if (largest != i)
    {
        swap(v[i], v[largest]);
 
        // Recursively heapify the affected sub-tree
        heapfy(v, sz, largest, modo);
    }
    if(modo == 1) {
        cout << "Banco ACTUALIZADO: [";
		for (int i = 0; i < sz; i++) {
			if (i != sz-1) 
				cout << v[i] << ", ";
			else 
				cout << v[i] << "";
		}
		cout << "]" << endl;
	}
}
template<class clave>
void ordenacion_t<clave>::heapsort(clave v[], int sz, int modo) {
     // Build heap (rearrange array)
    for (int i = sz / 2 - 1; i >= 0; i--)
        heapfy(v, sz, i, modo);
 
    // One by one extract an element from heap
    for (int i=sz-1; i>=0; i--) {
        // Move current root to end
        swap(v[0], v[i]);
        // call max heapify on the reduced heap
        heapfy(v, i, 0, modo);
    }
}

template<class clave>
void ordenacion_t<clave>::shellsort(clave v[], int sz, int modo) {
    int delta = sz;
    double alfa;
    cout << "Introduzca alfa: ";
    cin >> alfa;
    while (delta > 1) {
    	delta = delta/2;
    	if (modo == 1)
    		cout << "Descomposición DELTA: " << delta << endl;
    	deltasort(delta, v, sz, modo);
    	/*if (delta == 1)
    		delta = 0;*/
    }
    if(modo == 1) {
        cout << "Banco ACTUALIZADO: [";
		for (int i = 0; i < sz; i++) {
			if (i != sz-1) 
				cout << v[i] << ", ";
			else 
				cout << v[i] << "";
		}
		cout << "]" << endl;
	}
}

template<class clave>
void ordenacion_t<clave>::deltasort(int delta, clave v[], int sz, int modo) {
	dni_t aux;
	for (int i = delta; i < sz; i++) {
		aux = v[i];
		int j = i;
		if (modo == 1) {
			cout << "Comparando elemento " << v[j-delta] << " ";
			cout << "con elemento " << v[i] << " ";
			cout << endl << endl;
		}
		while ((j > delta) && (aux < v[j-delta])) {
			v[j] = v[j-delta];
			j = j-delta;
		}
		v[j] = aux;
	}
	if(modo == 1) {
        cout << "Banco ACTUALIZADO: [";
		for (int i = 0; i < sz; i++) {
			if (i != sz-1) 
				cout << v[i] << ", ";
			else 
				cout << v[i] << "";
		}
		cout << "]" << endl;
	}
}

template<class clave>
void ordenacion_t<clave>::mergesort(clave v[], int ini, int fin, int modo) {
	if (ini < fin) {
	 	int medio = (ini + fin) / 2;
	 	mergesort (v, ini, medio, modo);
	 	mergesort (v, medio+1, fin, modo);
	  	int i = ini;
	  	int j = medio + 1;
	  	int k = ini;
	  	dni_t* aux = new dni_t[25];
	 	while ((i <= medio) && (j <= fin)) {
	  		if (v[i] < v[j]) {
	  		 	aux[k] = v[i];
	 			i++;
	 		}
	 		else {
	 		 	aux[k] = v[j];
	 			j++;
	 		}
	 		k++;
	 	}
	 	if (i > medio)
	 		while (j <= fin) {
	 			aux[k] = v[j];
	 			j++;
	 			k++;
	 		}
	 	else
	 		while (i <= medio) {
	 			aux[k] = v[i];
	 			i++;
	 			k++;
	 		} 
	 	for (int k = ini; k <= fin; k++)
	 		v[k] = aux[k];
 	}
}

template <class clave>
void ordenacion_t<clave>::seleccion(clave v[], int sz, int modo) {
	dni_t aux;
	for (int i = 1; i < sz-1; i++) {
		int k = 1;
		for (int j = i+1; j < sz; j++) {
			if (modo == 1)
				cout << "Elementos a comparar: [ " << v[k] << ", " << v[j] << " ]" << endl;
			if (v[j] < v[k]) {
				k = j;
			}
		}
		aux = v[i];
		v[i] = v[k];
		v[k] = aux;
		if (modo == 1) {
			cout << "Banco ACTUALIZADO: [";
			for (int i = 0; i < sz; i++) {
				if (i != sz-1) 
					cout << v[i] << ", ";
				else 
					cout << v[i] << "";
			}
			cout << "]" << endl;
		}
	}
}