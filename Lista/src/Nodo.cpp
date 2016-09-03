/*
Zuniga Perez Uriel
AED
Incluye los metodos empleados por la clase Nodo, utiles para manipular nuestra lista
*/
#include "Nodo.h"

Nodo::Nodo(int Dato , Nodo* Sig)
{
	this->Dato = Dato;
	this->Sig = Sig;
}
/*
Metodo:
@params: Dato (int) Sig(Nodo)
@result:
Utilizado para crear nuestros nodos
*/
Nodo::Nodo(int Dato)
{
	this->Dato = Dato;
	this->Sig = NULL;
}
/*
Metodo:
@params: Dato (int) 
@result:
Utilizado para crear nuestros nodos
*/

void Nodo::setDato(int Dato)
{
	this->Dato = Dato;
}
/*
Metodo:
@params: Dato (int) 
@result: void
Utilizado para agregar datos
*/

void Nodo::setSig(Nodo* Sig)
{
	this->Sig = Sig;
}
/*
Metodo:
@params: Sig(Nodo)
@result: void
Utilizado para manipular nuestros nodos
*/
int Nodo::getDato()
{
	return this->Dato;
}
/*
Metodo:
@params: 
@result: int
Utilizado ordenar y obtener nuestros datos
*/

Nodo* Nodo::getSig()
{
	return this->Sig;
}
/*
Metodo:
@params: 
@result: Nodo
Utilizado ordenar y obtener nuestros nodos
*/