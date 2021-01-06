/*
lufer
manipular Evento
*/

#include "Evento.h"

char* nomeEvento(Evento e) {
	return e.nomeEvento;
}


Data dataEvento(Evento e) {
	return e.dataEvento;
}


/*
Regista mais um participante. Devolve o total de participantes registados
*/
int registaParticipanteEvento(Registo r, Evento e, int n) {

	//Verifica se ainda h� espa�o para mais um participante...
	if (n < N) {	
		//falta testar se este registo j� foi feito!!!!
		e.participantes[n] = r;
		n++;
		return n;
	}
	return -1;
}