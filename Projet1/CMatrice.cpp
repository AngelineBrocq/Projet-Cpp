#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "CMatrice.h"


CMatrice::CMatrice()
{
}

CMatrice::CMatrice(CMatrice MATMatrice)
{
}

CMatrice::CMatrice()
{
}

CMatrice::CMatrice(unsigned int uiNbCol, unsigned int uiNbLignes, string sType, Type pptElement[][])
{
}

void CMatrice::MATSetType(string sType)
{
}

string CMatrice::MATGetType()
{
	return 0;
}

void CMatrice::MATSetNombreColonnes(unsigned int uiNbCol)
{
}

unsigned int CMatrice::MATGetNombreColonnes()
{
	return 0;
}

void CMatrice::MATSetNombreLignes(unsigned int uiNbLigne)
{
}

unsigned int CMatrice::MATGetNombreLignes()
{
	return 0;
}

void CMatrice::MATSetElement(Type pptElement[][])
{
}

template <class Type>
 Type CMatrice<Type>::MARGetElement()
{
	return 0;
}

template <class Type>
 Type CMatrice<Type>::MATGetColonne()
{
	return 0;
}

template <class Type>
 Type CMatrice<Type>::MATGetLigne()
{
	return 0;
}

CMatrice CMatrice::operator/(Type tOperande)
{
	return 0;
}

CMatrice CMatrice::operator/(CMatrice MATMatrice)
{
	return 0;
}

CMatrice CMatrice::operator*(Type tOperande)
{
	return 0;
}

CMatrice CMatrice::operator*(CMatrice MATMatrice)
{
	return 0;
}

CMatrice CMatrice::operator+(CMatrice MATMatrice)
{
	return 0;
}

CMatrice CMatrice::operator-(CMatrice MATMatrice)
{
	return 0;
}

CMatrice CMatrice::operator=(CMatrice MATMatrice)
{
	return 0;
}

void CMatrice::MATAfficher()
{
}

template <class Type>
 Type CMatrice<Type>::operator(unsigned int )(uiNbColonne, unsigned int uiNbLigne)
{
	return 0;
}
