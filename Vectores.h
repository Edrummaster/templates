# include <vector>
# include <iostream>

using namespace std;

template <class T> class vector 
{
	int capacidad;
	int cuenta;
	T *data;
	
	public:
	vector(capacidad = DEFAULT_SIZE, cuenta = 0, *data = new T[DEFAULT_SIZE]);
	vector(delete[] data);
	void mostrar(); 
	int insertar(T int d); 
	void ordenar();
}; 


