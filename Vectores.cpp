#include <iostream>
#include "VectorClass.h"
template <class T> int vector <T>::mostrar()
{
	for(int t = 0; t < cuenta; t ++)
	{
		cout<<"Elemento"<<t<<endl;
		cout<<"Capaidad"<<data[t]<<endl;
	}
}
