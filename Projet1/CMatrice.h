#ifndef C_MATRICE_H
#define C_MATRICE_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

template <class Type>
class CMatrice
{
private:
	unsigned int uiMATNombreColonnes;

	unsigned int uiMATNombreLignes;

	string sMATType;

	Type pptMATElement[][];


protected:
	CMatrice();

public:
	CMatrice();

	CMatrice(CMatrice MATMatrice);

	CMatrice(unsigned int uiNbCol, unsigned int uiNbLignes, string sType, Type pptElement[][]);

	void MATSetType(string sType);

	string MATGetType();

	void MATSetNombreColonnes(unsigned int uiNbCol);

	unsigned int MATGetNombreColonnes();

	void MATSetNombreLignes(unsigned int uiNbLigne);

	unsigned int MATGetNombreLignes();

	void MATSetElement(Type pptElement[][]);

	Type MARGetElement();

	Type MATGetColonne();

	Type MATGetLigne();

	CMatrice operator/(Type tOperande);

	CMatrice operator/(CMatrice MATMatrice);

	CMatrice operator*(Type tOperande);

	CMatrice operator*(CMatrice MATMatrice);

	CMatrice operator+(CMatrice MATMatrice);

	CMatrice operator-(CMatrice MATMatrice);

	CMatrice operator=(CMatrice MATMatrice);

	void MATAfficher();

	Type operator(unsigned int )(uiNbColonne, unsigned int uiNbLigne);

};
#endif
