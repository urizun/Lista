/*
Zuniga Perez Uriel
AED
En este encabezado se crea la clase "Lista", utilizando la clase "Nodo", sus atributos  y constructores.
Incluye los atributos publicos de tipo Nodo: H y T
*/
#include "Nodo.h"

class Lista
{
public:
	Nodo* H;
	Nodo* T;	
	/*Atributos de tipo Nodo. H se utilizara para apuntar el inicio de la lista.
	T se utilizara para apuntar el final.
	*/
	Lista();
	//Constructor
	Lista(int Dato);
	/*Constructor
	@params: Dato (int)
	Crea la lista
	*/
	bool ListaVacia();
	/*
	Constructor:
	@result: bool
	Comprueba si la lista se encuentra vacia
	*/
	void AddInicio(int Dato);
	/*
	Constructor:
	@params: Dato (int)
	@result: void
	Servira para agregar datos al inicio de la lista.
	*/
	void AddFinal(int Dato);
	/*
	Constructor:
	@params: Dato (int)
	@result: void
	Se emplea para agregar un elemento al final de la lista
	*/
	void AddRef(int Dato, int Ref);
	/*
	Constructor:
	@params: Dato, Ref (int)
	@result: void
	Se emplea para agregar un elemento en una posicion requerida por el usuario,
	le pide insertar la ubicacion deseada
	*/
	int RemoveInicio();
	/*
	Constructor:
	@params:
	@result: int
	Se emplea para remover el elemento que se encuentre al principio de la lista
	*/
	int RemoveFinal();
	/*
	Constructor:
	@params: 
	@result: int
	Se emplea para remover el elemento que se encuentre al final de la lista
	*/
	//RemoveRef();
	int VaciarLista();
	/*
	Constructor:
	@params: 
	@result: int
	Se emplea para quitar todos los elementos que conforman a la lista
	*/
	Nodo* BuscarElemento(int Dato);
	/*
	Constructor:
	@params: Dato (int)
	@result: Nodo
	Se emplea para buscar un elemento deseado
	*/
	void Show();
	/*
	Constructor:
	@params:
	@result: void
	Se emplea para mostrar los elementos contenidos en la lista
	*/
};