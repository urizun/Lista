/*
Zuniga Perez Uriel
AED
Este encabezado incluye a la clase nodo con sus respectivos atributos y constructrores
los cuales se utilizaran para crear una lista
*/
#include <iostream>

class Nodo
{
private:
	int Dato;
	Nodo* Sig;
	/*
	Atributos privados: 
	Dato (int)se utilizara para llenar los nodos
	Sig (Nodo) Se utilizara para conformar la lista y manipular el orden en 
	que se introduciran los datos
	*/
public:
	Nodo(int Dato, Nodo* Sig);
	/*
	Constructor: Publico
	@oarams: Dato (int), Sig (Nodo)
	@result:
	Se utilizara para crear los nodos que conformaran la lista
	*/
	Nodo(int Dato);
	/*
	Constructor: Publico
	@oarams: Dato (int)
	@result:
	Se utilizara para crear los nodos que conformaran la lista
	*/
	void setDato(int Dato);
	/*
	Constructor: Publico
	@oarams: Dato (int)
	@result: void
	Se utilizara para manipular los datos y asignarlos a los nodos
	*/
	void setSig(Nodo* Sig);
	/*
	Constructor: Publico
	@oarams: Sig (Nodo)
	@result: void
	Se utilizara para manipular y ordenar los nodos
	*/
	int getDato();
	/*
	Constructor: Publico
	@oarams: 
	@result: int
	Se utilizara para obtener datos y manipularlos
	*/
	Nodo* getSig();
	/*
	Constructor: Publico
	@oarams; 
	@result: Nodo
	Se utilizara para obtener nodos y ordenarlos
	*/
	//~Nodo();
};