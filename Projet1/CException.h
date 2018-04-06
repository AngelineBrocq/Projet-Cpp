#ifndef C_EXCEPTION_H
#define C_EXCEPTION_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class CException
{
private:
	unsigned int uiEXCValeur;


public:
	void EXCModifierValeur(unsigned int uiValeur);

	unsigned int EXCLireValeur();

};
#endif
