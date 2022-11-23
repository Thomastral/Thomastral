#include <iostream>
#include <ctime>
using namespace std;

int main()
{
					
	int anneeNaissance = 0;
	int moisNaissance = 0;
	int jourNaissance = 0;
	double i;
	
	time_t dateActuelle = time(NULL);
	struct tm *maintenant = localtime(&dateActuelle);
	struct tm *naissance = localtime(&dateActuelle);

	cout << "on est en " << 1900 + maintenant->tm_year << endl;
	
	cout << "Entrez votre année de naissance :";
	cin >> anneeNaissance;
	
	cout << "Entrez votre mois de naissance :";
	cin >> moisNaissance;

	cout << "Entrez votre jour de naissance :";
	cin >> jourNaissance;
	
	naissance->tm_year = anneeNaissance - 1900;
	naissance->tm_mon = moisNaissance - 1;
	naissance->tm_mday = jourNaissance;
	
	time_t nbSeconde = mktime(naissance);
	
	cout << "votre age en seconde : " << dateActuelle - nbSeconde << endl;	
	
	cout << "votre age en jours : " << (dateActuelle - nbSeconde)/86400 << endl;
	
	cout << "votre age en années : " << ((dateActuelle - nbSeconde)/86400)/365 << endl;	
				
	return 0;
	
}
