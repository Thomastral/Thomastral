#ifndef _BARMAN_H
#define _BARMAN_H

class Percolateur;
class Serveur;
class Barman 
{
	friend class Amie;
	private:
		Serveur *serveur;
		Percolateur *perco;
		
	public:
		void preparerCafe();
		void preparerPlateau();
};
#endif
