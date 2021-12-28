#include "vehicul.hpp"
#include "remorca.hpp"
#include "masina.hpp"
#include "masina_cu_remorca.hpp"

int main()
{
	Baza **v;
	
	v = new Baza*[10];
	Baza *aux;
	int dim_remorca1[3] = {6,4,1};
	int dim_remorca2[3] = {4,2,1};
	int dim_masina1[3] = {7,5,4};
	int dim_masina2[3] = {3,2,1};

	v[0] = new Vehicul("Octav", 5000);
	v[1] = new Vehicul("Andrei", 6500);
	v[2] = new Remorca(dim_remorca1,500,800,"Georgeta");
	v[3] = new Remorca(dim_remorca2,8500,950,"Anca");
	v[4] = new Masina(dim_masina1,"BMW", "Marian", 11000);
	v[5] = new Masina(dim_masina2,"Subaru", "Jessica", 7800);
	v[6] = new Masina_cu_remorca(4000, dim_remorca1, 750, dim_masina1, "Volkswagen", "Missa", 8000 );
	v[7] = new Masina_cu_remorca(5500, dim_remorca2, 1120, dim_masina2, "Aston Martin", "Iulian", 15900 );
	
	cout << "Afisare vector de elemente: " << endl ;
	for (int i=0 ; i<8 ; i++)
		v[i]->afisare();
		
	cout << endl;
	
	for(int i=0 ; i<7 ; i++)
		for(int j=i+1 ; j<8 ; j++)
		{
			if(v[i]->getPret() < v[j]->getPret())
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux

			}
		}
	
	cout << "Vector sortat in functie de pret: " << endl ;
	for ( int i=0 ; i<8 ; i++)
		v[i]->afisare();
		
	cout << endl ;
	

	Masina_cu_remorca(4000, dim_remorca1, 750, dim_masina1, "Volkswagen", "Missa", 8000 );
	Masina_cu_remorca(5500, dim_remorca2, 1120, dim_masina2, "Aston Martin", "Iulian", 15900 );
	
	cout << "Obiectele pentru testarea operatorilor + - < > : " << endl ;
	obj1.afisare();
	obj2.afisare();
	
	cout << "Operatorul < : " << obj1.operator<(obj2) << endl ;
	cout << "Operatorul > : " << obj1.operator>(obj2) << endl ; 
	cout << "Operatorul - : " << operator-(obj1,obj2) << endl ;
	cout << "Operatorul + : " << operator+(obj1,obj2) << endl ;
	
	for(int i=0 ; i<8 ; i++)
	{
		delete v[i];
		
	}
	
	delete []v;
	
	return 0;
	
}
