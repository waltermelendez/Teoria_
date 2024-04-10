

#include <iostream>
using namespace std;
#include "Lista.h"
#include"Nodo.h"
int main()
{
    Lista* lista1 = new Lista();
	/*for (int i = 0; i < 10; i++)
	{
		lista1->Add((char)(i+60));
	}*/
	lista1->Add('A');
	lista1->Add('B');
	lista1->Add('C');
	lista1->Add('D');
	lista1->Add('E');
	cout << "Su longitud es de " << lista1->GetLongitud() << endl;
	
	
	lista1->imprimir();
	lista1->Replace('C', 'z');
	lista1->imprimir();
    return 0;
}

