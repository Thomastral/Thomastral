#ifndef _CLIENT_H
#define _CLIENT_H

class Serveur;
class Client 
{
	friend class Amie;
	private:
		Serveur *serveur;
		
	public:
		void commanderCafe();
		void payer();
		void boire();
};
#endif
