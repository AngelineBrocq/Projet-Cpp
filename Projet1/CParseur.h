#ifndef C_PARSEUR_H
#define C_PARSEUR_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

template <class Type>
class CParseur
{
public:
	CParseur();

	Type PARExtraireValeurs(char* pcNomFichier);

	char PARExtraireBornes(char* pcNomFichier);

	unsigned int PARExtraireNombreLignes(char* pcNomFichier);

	unsigned int PARExtraireNombreColonnes(char* pcNomFichier);

};
#endif
