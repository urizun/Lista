/*
Zuniga Perez Uriel
AED
Incluye el metodo main, que serivara para ejecutar nuestro programa
*/

#include "Lista.h"


int main()
{
	Lista l = Lista();
	l.AddFinal(4);
	l.AddFinal(5);
	l.AddFinal(6);
	l.AddFinal(7);
	//l.RemoveInicio();
	l.RemoveFinal();
	l.Show();
	std::cout<<"Hello World"<<std::endl;
	return 0;
}