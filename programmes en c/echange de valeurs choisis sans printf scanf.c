#include <iostream>

using namespace std;

void echanger(int *a, int *b);

int main(int argc, char*argv[])
{
	
	cout << "Debut du programme " << endl << endl;
	
	int a;
	int b;
	
	cout << "Choisissez la valeur a : " ; 
	cin >> a;
	cout << "Choisissez la valeur b : " ;
	cin >> b;
	cout << endl;
	
	echanger(&a, &b);
	cout << "La valeur a vaut maintenant : " << a << endl;
	cout << "La valeur b vaut maintenant : " << b << endl << endl;
	
	cout << "Fin du programme " << endl << endl;
	return 0;

}

void echanger(int *a, int *b)
{
	
	cout << "Echange des valeurs de a et b" << endl << endl;
		
	int *vtemp;
	vtemp = new int;
	*vtemp = *a;
		
	*a = *b;
	*b = *vtemp;
	
	delete vtemp;
		
}
