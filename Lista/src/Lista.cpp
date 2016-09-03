/*
Zuniga Perez Uriel
Descripcion: Contiene los metodos utilizados por Lista, para poder agregar, remover y buscar elementos de distintas maneras: al inicio, al final,
con una referencia y poder vaciar la lista si es requerido por el usuario.

*/
#include "Lista.h"

Lista::Lista()
{
	this->H=NULL;
	this->T=NULL;
}

Lista::Lista(int Dato)
{
	Nodo * aux= new Nodo(Dato);
	this->H=aux;
	this->T=aux;
	/*std::cout<<H->getDato()<<std::endl;
	std::cout<<H->getSig()<<std::endl;
	std::cout<<T->getDato()<<std::endl;
	std::cout<<T->getSig()<<std::endl;*/
}

bool Lista::ListaVacia()
{
	if (this->H == NULL && this->T == NULL)

		return true;

	return false;
}
/*
Metodo: ListaVacia
@params: H, T
@result: bool
Sirve para comprobar si la lista que manejamos contiene o no algun elemento, a partir de una comparacion.
*/

void Lista::AddInicio(int Dato)
{
	Nodo* aux = new Nodo(Dato,this->H);

	if (ListaVacia())
	{
		this->T= aux;
	}
	this->H= aux;
/*	std::cout<<H->getDato()<<std::endl;
	std::cout<<H->getSig()<<std::endl;
	std::cout<<T->getDato()<<std::endl;
	std::cout<<T->getSig()<<std::endl;*/
}
/*
Metodo: AddInicio
@params: aux, H, T (Nodo), Dato (int)
@result: void
Este metodo es util para agregar un elemento al principio de la lista, emplea el metodo ListaVacia para comprobar
si hay elementos en la lista.
*/

void Lista::AddFinal(int Dato)
{
	Nodo* aux = new Nodo(Dato);
	if (!ListaVacia())
	{
		T->setSig(aux);
	}
	else

		H = aux;

	T = aux;
}
/*
Metodo:AddFinal
@params: Dato, Ref (int). H,T,aux (Nodo)
@result: void
A partir de una comparacion comprueba si la lista esta vacia, al no estar vacia agrega un elemento al final 
de nuestra lista.
*/
void Lista::AddRef(int Dato, int Ref)
{
	if (ListaVacia())
	{
		Nodo* aux = new Nodo(Dato);
		this->H = aux;
		this->T = H;
		std::cout<<"La lista esta vacia, no se encontro la referencia"<<std::endl;
		return;
	}

	Nodo* aux = this->H;

	while(aux->getDato() != Ref && aux != NULL)

		aux= aux->getSig();

	if(aux != NULL)
	{
		Nodo* aux2 = new Nodo(Dato, aux->getSig());
		aux->setSig(aux2);
	}
	else
		std::cout<<"No existe la referencia en la lista"<<std::endl;

}
/*
	Metodo:AddRef
	@params: Dato, Ref (int). aux, H, T (Nodo)
	@result: void
	Agrega un elemento a la lista utilizando una referencia dada por el usuario y manda un mensaje si dicha referencia no existe.
	Tambien avisa si la lista esta vacia o si existe algun problema con la referencia, a partir de un mensaje en pantalla, emplea ciclo while
	y comparaciones.
	*/
int Lista::RemoveInicio()
{
	if (!ListaVacia())
	{
		int Dato = H->getDato();
		
		H = H->getSig();
		
		if (H == NULL)

			this->T= NULL;

		return Dato;


	}
	std::cout<<"La lista esta vacia"<<std::endl;
	return 0;

}
/*
Metodo:
@params: Dato (int), H,T (Nodo)
@result: int
Metodo que servira para remover el dato que se encuentre al inicio de la lista, guarda el dato, y si la lista no contiene ningun elemento
avisa al usuario acerca de dicho problema.
*/

int Lista::RemoveFinal()

{
	if(ListaVacia())
		std::cout<<"La lista esta vacia"<<std::endl;
	return 0;
	int Dato = T->getDato();
	if(H != T)
	{
		Nodo* aux = H;

		while(aux->getSig() != T)

			aux = aux->getSig();

		T = aux;

	T->setSig(NULL);

	}
	else
	{
		this->H= NULL;
		this->T= NULL;
	}
}
/*
Metodo:
@params: aux, H, T (Nodo), Dato (int).
@result: int
A partir de una comparacipn determina si la lista esta vacia y avisa al usuario, tambien a partir de una comparacion y un ciclo, recorre 
la lista para poder eliminar el dato que se encuentre al final de esta. 
*/

//RemoveRef();


int Lista::VaciarLista()
{
	if(ListaVacia())
		std::cout<<"La lista esta vacia"<<std::endl;
	return 0;
	Nodo* aux = this->H;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}

	H = NULL;
	T = NULL;

	std::cout<<"La lista ahora esta vacia"<<std::endl;
	return 0;
}
/*
Metodo: VaciarLista
@params: aux, H, T (Nodo)
@result: int
Emplea el metodo lista vacia para comprobar si existe algun elemento, sino elimina los datos que pudieran 
estar almacenados dentro de la lista.
*/

Nodo* Lista::BuscarElemento(int Dato)
{
	if(ListaVacia())
	{
		std::cout<<"No se encontro elemento"<<std::endl;
		return NULL;
	}
	Nodo* aux = H;

	while(aux->getDato() != Dato && aux != NULL)

		aux = aux->getSig();

	return aux;
}
/*
Metodo: BuscarElemento
@params: Dato(int), aux, H (Nodo)
@result: Nodo
Emplea el metodo vaciar lista para comprobar si existen elementos y avisar al usuario mediante un mensaje,
a partir de un ciclo recorre la lista y encuentra el dato deseado.
*/
void Lista::Show()
{
	Nodo* aux = this->H;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}
/*
Metodo: Show
@params: aux, H (Nodo)
@result: void
A partir de un ciclo recorre la lista e imprime en pantalla los elementos que la conforman.
*/