#include "../include/dni_t.hpp"
#include "../include/ordenacion_t.hpp"
#include <cstdlib> 
#include <ctime>
#include <iomanip>
using namespace std;

int main(void) {  
   
    cout << endl;
    cout << "___|PRÁCTICA 5: ALGORITMOS Y ESTRUCTURAS DE DATOS AVANZADOS|___" << endl;
    cout << "___|	  Implementación de métodos de ordenación	   |___" << endl;
	
	int sz;
    cout << "Introduzca el tamaño de la secuencia: ";
    cin >> sz;
    
    int n_prueba;
    cout << "Introduzca el numero de pruebas: ";
    cin >> n_prueba;
    
    dni_t num;
	dni_t* dni_ = new dni_t[25];
	int banco[sz];
	char letra;
	int dni;
	ordenacion_t<dni_t> alg;
	int semilla = time(NULL);
	cout << "BANCO: [";
	for(int i = 0; i < sz; i++){  //Creacion de DNI aleatorios
		banco[i] = rand() % 50000000 + 30000000;
		dni = rand() % 23 + 1;
		for (int j = 0; j < 1; j++) {
			letra = "TRWAGMYFPDXBNJZSQVHLCKE"[dni % 23];
			//cout << "LETRA: " << letra << endl;
		}
		if (i!= sz - 1)
			cout <<  banco[i] << letra << ", ";
		else
			cout << banco[i]  << letra << "";
		dni_[i].set_dni(banco[i]);
		srand(semilla--);
	}
	cout << "]" << endl;
	
	int aux;
	int aux2;
	int opcion;
	int cont_max = 0;
	int cont_min = 999;
	int suma = 0;
	float media;
	int alfa = 0;
	
	do {
        cout << "PULSE 1 PARA ACCEDER AL MENÚ" << endl;
        cin >> aux;
        
        if (aux == 1) {
            cout << endl;
            cout << "1. Modo Demostración" << endl;
	        cout << "2. Modo Estadística" << endl;
	        cout << "0. Salir" << endl;
	        cout << endl;
	        cout << ">>> Introduzca una opción: ";
	        cin >> opcion;
	        cout << endl;
	        
	        switch(opcion) {
            
                case 1: do {
				        
        					cout << "Bienvenido al Modo Demostración" << endl;
					        cout << "1. Algoritmo de Inserción" << endl;
						    cout << "2. Algoritmo BubbleSort" << endl;
						    cout << "3. Algoritmo HeapSort" << endl;
						    cout << "4. Algoritmo QuickSort" << endl;
						    cout << "5. Algoritmo ShellSort" << endl;
						    cout << "6. Algoritmo MergeSort" << endl;
						    cout << "7. Algoritmo de Selección" << endl;
						    cout << "0. Salir" << endl;
						    cout << endl;
						    cout << ">>> Introduzca una opción: ";
						    cin >> opcion;
						    cout << endl;
					        
					        switch(opcion) {
				                case 1:	cout << endl << "___|Algoritmo de INSERCIÓN|___" << endl;	
									alg.insercion(dni_, sz, 1); 
									cout << endl;
									cout << "Banco ORDENADO: [";
									for(int i = 0; i < sz ; i++){
									    if(dni_[i].get_dni() != 0) {
									    	if (i != sz - 1)
									        	cout << dni_[i] << ", ";
									        else 
									        	cout << dni_[i] << "";
									    }
									}
									cout << "]" << endl;
									cout << endl;
				                    break;
				                case 2: cout << endl << "___|Algoritmo BUBBLESORT|___" << endl;	
									alg.bubblesort(dni_, sz, 1); 
									cout << endl;
									cout << "Banco ORDENADO: [";
									for(int i = 0; i < sz ; i++){
									    if(dni_[i].get_dni() != 0) {
									    	if (i != sz - 1)
									        	cout << dni_[i] << ", ";
									        else 
									        	cout << dni_[i] << "";
									    }
									}
									cout << "]" << endl;
									cout << endl;
				            		break;
				            	case 3: cout << endl << "___|Algoritmo HEAPSORT|___" << endl;
									alg.heapsort(dni_, sz, 1);  
									cout << endl;
									cout << "Banco ORDENADO: [";
									for(int i = 0; i < sz ; i++){
									    if(dni_[i].get_dni() != 0) {
									    	if (i != sz - 1)
									        	cout << dni_[i] << ", ";
									        else 
									        	cout << dni_[i] << "";
									    }
									}
									cout << "]" << endl;
									cout << endl;
				            		break;
				            	case 4: cout << endl << "___|Algoritmo QUICKSORT|___" << endl;	
									alg.quicksort(dni_, 0, sz-1, 1);
									cout << endl;
									cout << "Banco ORDENADO: [";
									for(int i = 0; i < sz ; i++){
									    if(dni_[i].get_dni() != 0) {
									    	if (i != sz - 1)
									        	cout << dni_[i] << ", ";
									        else 
									        	cout << dni_[i] << "";
									    }
									}
									cout << "]" << endl;
									cout << endl;
				            		break;
				            	case 5: cout << endl << "___|Algoritmo SHELLSORT|___" << endl;	
									alg.shellsort(dni_, sz, 1); 
									cout << endl;
									cout << "Banco ORDENADO: [";
									for(int i = 0; i < sz ; i++){
									    if(dni_[i].get_dni() != 0) {
									    	if (i != sz - 1)
									        	cout << dni_[i] << ", ";
									        else 
									        	cout << dni_[i] << "";
									    }
									}
									cout << "]" << endl;
									cout << endl;
				            		break;
				            	case 6: cout << endl << "___|Algoritmo MERGESORT|___" << endl;	
									alg.mergesort(dni_, 1, sz, 1); 
									cout << endl;
									cout << "Banco ORDENADO: [";
									for(int i = 0; i < sz ; i++){
									    if(dni_[i].get_dni() != 0) {
									    	if (i != sz - 1)
									        	cout << dni_[i] << ", ";
									        else 
									        	cout << dni_[i] << "";
									    }
									}
									cout << "]" << endl;
									cout << endl;
				            		break;
				            	case 7: cout << endl << "___|Algoritmo de SELECCIÓN|___" << endl;	
									alg.seleccion(dni_, sz, 1);
									cout << endl;
									cout << "Banco ORDENADO: [";
									for(int i = 0; i < sz ; i++){
									    if(dni_[i].get_dni() != 0) {
									    	if (i != sz - 1)
									        	cout << dni_[i] << ", ";
									        else 
									        	cout << dni_[i] << "";
									    }
									}
									cout << "]" << endl;
									cout << endl;
				            		break;
				            	case 0: opcion = 0;
				        			break;
				        		default: cout << "¡OPCIÓN INCORRECTA!" << endl << "Introduzca una opción válida." << endl;
				    	    }
			    	} while (opcion != 0);
			    	cout << "¡HASTA LUEGO!" << endl;
					return 0;
                    break;
                case 2:	cout << "Bienvenido al Modo Estadística" << endl;
        			cout<<setw(46)<<"Mínimo"<<setw(10)<<"Medio"<<setw(12)<<"Máximo"<<endl;
					for (int j = 0; j < n_prueba; j++) {
						if(num.get_cont() > cont_max) cont_max = num.get_cont();
						if(num.get_cont() < cont_min) cont_min = num.get_cont();
						suma = suma + num.get_cont();
						alg.insercion(dni_, sz, 0); 
					}
					media = suma/n_prueba;
					cout << "1. Algoritmo de Inserción " << setw(17) << cont_min << setw(10) << media << setw(10) << cont_max << endl;
					cont_max = 0;
    				cont_min = 999;
					suma = 0;
					media;
					for (int j = 0; j < n_prueba; j++) {
						if(num.get_cont() > cont_max) cont_max = num.get_cont();
						if(num.get_cont() < cont_min) cont_min = num.get_cont();
						suma = suma + num.get_cont();
						alg.bubblesort(dni_, sz, 0); 
					}
					media = suma/n_prueba;
					cout << "2. Algoritmo BubbleSort"  << setw(20) << cont_min << setw(10) << media << setw(10) << cont_max << endl;
					cont_max = 0;
    				cont_min = 999;
					suma = 0;
					media;
					for (int j = 0; j < n_prueba; j++) {
						if(num.get_cont() > cont_max) cont_max = num.get_cont();
						if(num.get_cont() < cont_min) cont_min = num.get_cont();
						suma = suma + num.get_cont();
						alg.heapsort(dni_, sz, 0); 
					}
					media = suma/n_prueba;
					cout << "3. Algoritmo HeapSort" << setw(22) << cont_min << setw(10) << media << setw(10) << cont_max << endl;
					cont_max = 0;
    				cont_min = 999;
					suma = 0;
					media;
					for (int j = 0; j < n_prueba; j++) {
						if(num.get_cont() > cont_max) cont_max = num.get_cont();
						if(num.get_cont() < cont_min) cont_min = num.get_cont();
						suma = suma + num.get_cont();
						alg.quicksort(dni_, 0, sz-1, 0); 
					}
					media = suma/n_prueba;
					cout << "4. Algoritmo QuickSort" << setw(21) << cont_min << setw(10) << media << setw(10) << cont_max << endl;
					cont_max = 0;
    				cont_min = 999;
					suma = 0;
					media;
					for (int j = 0; j < n_prueba; j++) {
						if(num.get_cont() > cont_max) cont_max = num.get_cont();
						if(num.get_cont() < cont_min) cont_min = num.get_cont();
						suma = suma + num.get_cont();
						alg.shellsort(dni_, sz, 0); 
					}
					media = suma/n_prueba;
					cout << "5. Algoritmo ShellSort" << setw(21) << cont_min << setw(10) << media << setw(10) << cont_max << endl;
					cont_max = 0;
    				cont_min = 999;
					suma = 0;
					media;
					for (int j = 0; j < n_prueba; j++) {
						if(num.get_cont() > cont_max) cont_max = num.get_cont();
						if(num.get_cont() < cont_min) cont_min = num.get_cont();
						suma = suma + num.get_cont();
						alg.mergesort(dni_, 1, sz, 0);  
					}
					media = suma/n_prueba;
					cout << "6. Algoritmo MergeSort" << setw(21) << cont_min << setw(10) << media << setw(10) << cont_max << endl;
					cont_max = 0;
    				cont_min = 999;
					suma = 0;
					media;
					for (int j = 0; j < n_prueba; j++) {
						if(num.get_cont() > cont_max) cont_max = num.get_cont();
						if(num.get_cont() < cont_min) cont_min = num.get_cont();
						suma = suma + num.get_cont();
						alg.seleccion(dni_, sz, 0); 
					}
					media = suma/n_prueba;
					cout << "7. Algoritmo de Selección" <<setw(18) << cont_min << setw(10) << media << setw(10) << cont_max << endl;
					cout << endl;
                    break;
            	case 0: opcion = 0;
        			break;
        		default: cout << "¡OPCIÓN INCORRECTA!" << endl << "Introduzca una opción válida." << endl;
    	    }
	    }
	    else {
	        cout << "¿SEGURO QUE QUIERE SALIR DE LA PRÁCTICA?" << endl;
		    cout << "PULSE 0 PARA SALIR ó 1 PARA VOLVER: ";
		    int aux2 = 0;
		    cin >> aux2;
		    cout << endl;
		    if (aux2 == 0) {
			    cout << "¡HASTA LUEGO!" << endl;
			    return 0;
		    }
	    }
	    
    } while (opcion != 0);
    cout << "¡HASTA LUEGO!" << endl;
	return 0;
/*
	// INSERCIÓN //
	int cont_max = 0;
    int cont_min = 999;
	int suma = 0;
	float media;
	
	cout << endl << "___|Algoritmo de INSERCIÓN|___" << endl;	
	for (int j = 0; j < n_prueba; j++) {
		if(num.get_cont() > cont_max) cont_max = num.get_cont();
		if(num.get_cont() < cont_min) cont_min = num.get_cont();
		suma = suma + num.get_cont();
		alg.insercion(dni_, sz); 
	}
	cout << endl;
	for(int i = 0; i < 25 ; i++){
	    if(dni_[i].get_dni() != 0) {
	        cout << "DNI: " << dni_[i];
	    }
	}
    media = suma/n_prueba;
	cout << "---PROGRAMA MODO ESTADÍSTICA---" << endl;
	cout << "Numero de pruebas: " << n_prueba << endl;
	cout << "Minimo: " << cont_min << endl;
	cout << "Maxima: " << cont_max << endl;
	cout << "Media: " << media << endl;

    // BUBBLESORT //
	cont_max = 0;
    cont_min = 999;
	suma = 0;
	media;
	
	cout << endl << "___|Algoritmo de BUBBLESORT|___" << endl;	
	for (int j = 0; j < n_prueba; j++) {
		if(num.get_cont() > cont_max) cont_max = num.get_cont();
		if(num.get_cont() < cont_min) cont_min = num.get_cont();
		suma = suma + num.get_cont();
		alg.bubblesort(dni_, sz); 
	}
	cout << endl;
	for(int i = 0; i < 25 ; i++){
	    if(dni_[i].get_dni() != 0) {
	        cout << "DNI: " << dni_[i];
	    }
	}
    media = suma/n_prueba;
	cout << "---PROGRAMA MODO ESTADÍSTICA---" << endl;
	cout << "Numero de pruebas: " << n_prueba << endl;
	cout << "Minimo: " << cont_min << endl;
	cout << "Maxima: " << cont_max << endl;
	cout << "Media: " << media << endl;
	
	// QUICKSORTSORT //
	cont_max = 0;
    cont_min = 999;
	suma = 0;
	media;
	
	cout << endl << "___|Algoritmo de QUICKSORT|___" << endl;	
	for (int j = 0; j < n_prueba; j++) {
		if(num.get_cont() > cont_max) cont_max = num.get_cont();
		if(num.get_cont() < cont_min) cont_min = num.get_cont();
		suma = suma + num.get_cont();
		alg.quicksort(dni_, 0, sz-1); 
	}
	cout << endl;
	for(int i = 0; i < 25 ; i++){
	    if(dni_[i].get_dni() != 0) {
	        cout << "DNI: " << dni_[i];
	    }
	}
    media = suma/n_prueba;
	cout << "---PROGRAMA MODO ESTADÍSTICA---" << endl;
	cout << "Numero de pruebas: " << n_prueba << endl;
	cout << "Minimo: " << cont_min << endl;
	cout << "Maxima: " << cont_max << endl;
	cout << "Media: " << media << endl;
	
	// SHELLSORT //
	cont_max = 0;
    cont_min = 999;
	suma = 0;
	media;

	cout << endl << "___|Algoritmo de SHELLSORT|___" << endl;	
	for (int j = 0; j < n_prueba; j++) {
		if(num.get_cont() > cont_max) cont_max = num.get_cont();
		if(num.get_cont() < cont_min) cont_min = num.get_cont();
		suma = suma + num.get_cont();
		int alfa = 0;
		cout << "Introduzca alfa: " << endl;
		cin >> alfa;
		alg.shellsort(dni_, sz, alfa); 
	}
	cout << endl;
	for(int i = 0; i < 25 ; i++){
	    if(dni_[i].get_dni() != 0) {
	        cout << "DNI: " << dni_[i];
	    }
	}
    media = suma/n_prueba;
	cout << "---PROGRAMA MODO ESTADÍSTICA---" << endl;
	cout << "Numero de pruebas: " << n_prueba << endl;
	cout << "Minimo: " << cont_min << endl;
	cout << "Maxima: " << cont_max << endl;
	cout << "Media: " << media << endl;
	
	// HEAPSORT //
	cont_max = 0;
    cont_min = 999;
	suma = 0;
	media;
	
	cout << endl << "___|Algoritmo de HEAPSORT|___" << endl;	
	for (int j = 0; j < n_prueba; j++) {
		if(num.get_cont() > cont_max) cont_max = num.get_cont();
		if(num.get_cont() < cont_min) cont_min = num.get_cont();
		suma = suma + num.get_cont();
		alg.heapsort(dni_, sz); 
	}
	cout << endl;
	for(int i = 0; i < 25 ; i++){
	    if(dni_[i].get_dni() != 0) {
	        cout << "DNI: " << dni_[i];
	    }
	}
    media = suma/n_prueba;
	cout << "---PROGRAMA MODO ESTADÍSTICA---" << endl;
	cout << "Numero de pruebas: " << n_prueba << endl;
	cout << "Minimo: " << cont_min << endl;
	cout << "Maxima: " << cont_max << endl;
	cout << "Media: " << media << endl;
	
	// OPCIONAL //
	
	// SELECCION //
	cont_max = 0;
    cont_min = 999;
	suma = 0;
	media;
	
	cout << endl << "___|Algoritmo de SELECCION|___" << endl;	
	for (int j = 0; j < n_prueba; j++) {
		if(num.get_cont() > cont_max) cont_max = num.get_cont();
		if(num.get_cont() < cont_min) cont_min = num.get_cont();
		suma = suma + num.get_cont();
		alg.seleccion(dni_, sz); 
	}
	cout << endl;
	for(int i = 0; i < 25 ; i++){
	    if(dni_[i].get_dni() != 0) {
	        cout << "DNI: " << dni_[i];
	    }
	}
    media = suma/n_prueba;
	cout << "---PROGRAMA MODO ESTADÍSTICA---" << endl;
	cout << "Numero de pruebas: " << n_prueba << endl;
	cout << "Minimo: " << cont_min << endl;
	cout << "Maxima: " << cont_max << endl;
	cout << "Media: " << media << endl;
*/
}