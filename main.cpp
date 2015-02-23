 /// \file main.cpp
 /// \brief Calculatrice.
 /// \author Simon.G
 /// \version 1.0
 /// \date 22 fevrier 2015

#include <stdio.h>
#include <iostream>
#include <stdint.h>
using namespace std;

/// \brief Fonction d'addition de deux nombres de type int32_t
///
/// La fonction d'addition depend du type des parametres fournis, elle est donc polymorphe.
/// Cette fonction correspond au type 32bits
///
/// \param nbA est un entier 32 bits
/// \param nbB est un entier 32 bits
/// \return La somme de l'addition des deux entiers saisis pas l'utilisateur
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(float, float)
///

int32_t addition(int32_t nbA, int32_t nbB)
{
	return nbA + nbB;
}

/// \brief Fonction d'addition de deux nombres de type int64_t
///
/// La fonction d'addition depend du type des parametres fournis, elle est donc polymorphe.
/// Cette fonction correspond au type int64_t
///
/// \param nbA est un entier 64 bits
/// \param nbB est un entier 64 bits
/// \return La somme de l'addition des deux entiers 64 bits saisis pas l'utilisateur
/// \sa ajouter(int32_t, int32_t). ajouter(double, double). ajouter(float, float)
///

int64_t addition(int64_t nbA, int64_t nbB)
{
	return nbA + nbB;
}

/// \brief Fonction d'addition de deux nombres de type float
///
/// La fonction d'addition depend du type des parametres fournis, elle est donc polymorphe.
/// Cette fonction correspond au type float
///
/// \param nbA est un decimal float
/// \param nbB est un decimal float
/// \return La somme de l'addition des deux decimaux float saisis par l'utilisateur
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(int32_t, int32_t)
///

float addition(float nbA, float nbB)
{
	return nbA + nbB;
}

/// \brief Fonction d'addition de deux nombres de type double
///
/// La fonction d'addition depend du type des paramètres fournis, elle est donc polymorphe.
/// Cette fonction correspond au type double
///
/// \param nbA est un decimal double
/// \param nbB est un decimal double
/// \return La somme de l'addition des deux decimaux double saisis par l'utilisateur
/// \sa ajouter(int64_t, int64_t). ajouter(float, float). ajouter(int32_t, int32_t)
///

double addition(double nbA, double nbB)
{
	return nbA + nbB;
}






/// \brief Fonction de soustraction de deux nombres de type int32_t
///
/// La fonction de soustraction nous renvoie la difference entre deux nombres en faisant un simple calcul.
/// Cette fonction correspond au type 32 bits.
/// 
/// \param nbA est un entier 32 bits
/// \param nbB est un entier 32 bits
/// \return La difference des deux entiers saisis par l'utilisateur
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(float, float)
///

int32_t soustraction(int32_t nbA, int32_t nbB)
{
	return nbA - nbB;
}

/// \brief Fonction de soustraction de deux nombres de type int64_t
///
/// La fonction de soustraction nous renvoie la difference entre deux nombres en faisant un simple calcul.
/// Cette fonction correspond au type 64 bits.
/// 
/// \param nbA est un entier 64 bits
/// \param nbB est un entier 64 bits
/// \return La difference des deux entiers saisis par l'utilisateur
/// \sa ajouter(int32_t, int32_t). ajouter(double, double). ajouter(float, float)
///

int64_t soustraction(int64_t nbA, int64_t nbB)
{
	return nbA - nbB;
}

/// \brief Fonction de soustraction de deux nombres de type float
///
/// La fonction de soustraction nous renvoie la difference entre deux nombres en faisant un simple calcul.
/// Cette fonction correspond au type float.
/// 
/// \param nbA est un decimal float
/// \param nbB est un decimal float
/// \return La difference des deux entiers saisis par l'utilisateur
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(int32_t, int32_t)
///

float soustraction(float nbA, float nbB)
{
	return nbA - nbB;
}

/// \brief Fonction de soustraction de deux nombres de type double
///
/// La fonction de soustraction nous renvoie la difference entre deux nombres en faisant un simple calcul.
/// Cette fonction correspond au type double.
/// 
/// \param nbA est un decimal double
/// \param nbB est un decimal double
/// \return La difference des deux entiers saisis par l'utilisateur
/// \sa ajouter(int64_t, int64_t). ajouter(int32_t, int32_t). ajouter(float, float)
///

double soustraction(double nbA, double nbB)
{
	return nbA - nbB;
}







/// \brief Fonction de multiplication de deux nombres de type int32_t
///
/// La fonction de multiplication est une repetition d'addition qui nous renvoie un produit, celui-ci est le resultat final.
/// Cette fonction correspond au type 32 bits.
/// 
/// \param nbA est un entier 32 bits
/// \param nbB est un entier 32 bits
/// \return Le produit de la multiplication des deux entiers saisis par l'utilisateur
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(float, float)
///

int32_t multiplication(int32_t nbA, int32_t nbB)
{
	return nbA * nbB;
}

/// \brief Fonction de multiplication de deux nombres de type int64_t
///
/// La fonction de multiplication est une repetition d'addition qui nous renvoie un produit, celui-ci est le resultat final.
/// Cette fonction correspond au type 64 bits.
/// 
/// \param nbA est un entier 64 bits
/// \param nbB est un entier 64 bits
/// \return Le produit de la multiplication des deux entiers saisis par l'utilisateur
/// \sa ajouter(int32_t, int32_t). ajouter(double, double). ajouter(float, float)

int64_t multiplication(int64_t nbA, int64_t nbB)
{
	return nbA * nbB;
}

/// \brief Fonction de multiplication de deux nombres de type float
///
/// La fonction de multiplication est une repetition d'addition qui nous renvoie un produit, celui-ci est le resultat final.
/// Cette fonction correspond au type float.
/// 
/// \param nbA est un decimal float
/// \param nbB est un decimal float
/// \return Le produit de la multiplication des deux entiers saisis par l'utilisateur
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(int32_t, int32_t)
///

float multiplication(float nbA, float nbB)
{
	return nbA * nbB;
}

/// \brief Fonction de multiplication de deux nombres de type double
///
/// La fonction de multiplication est une repetition d'addition qui nous renvoie un produit, celui-ci est le resultat final.
/// Cette fonction correspond au type double.
/// 
/// \param nbA est un decimal double
/// \param nbB est un decimal double
/// \return Le produit de la multiplication des deux entiers saisis par l'utilisateur
/// \sa ajouter(int64_t, int64_t). ajouter(float, float). ajouter(int32_t, int32_t)
/// 

double multiplication(double nbA, double nbB)
{
	return nbA * nbB;
}










/// \brief Fonction de division de deux nombres de type int32_t
///
/// La fonction de division est une operation qui a deux nombres a et b associe un troisieme nombre, appele quotient.
/// Cette fonction correspond au type int32_t
/// 
/// \param nbA est un entier int32_t
/// \param nbB est un entier int32_t
/// \return Le quotient de la division des deux entiers saisis par l'utilisateur
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(float, float)
///

int32_t division(int32_t nbA, int32_t nbB)
{
	return nbA / nbB;
}

/// \brief Fonction de division de deux nombres de type int64_t
///
/// La fonction de division est une operation qui a deux nombres a et b associe un troisieme nombre, appele quotient.
/// Cette fonction correspond au type int64_t
/// 
/// \param nbA est un entier int64_t
/// \param nbB est un entier int64_t
/// \return Le quotient de la division des deux entiers saisis par l'utilisateur
/// \sa ajouter(int32_t, int32_t). ajouter(double, double). ajouter(float, float)
///

int64_t division(int64_t nbA, int64_t nbB)
{
	return nbA / nbB;
}

/// \brief Fonction de division de deux nombres de type float
///
/// La fonction de division est une operation qui a deux nombres a et b associe un troisieme nombre, appele quotient.
/// Cette fonction correspond au type float
/// 
/// \param nbA est un decimal float
/// \param nbB est un decimal float
/// \return Le quotient de la division des deux entiers saisis par l'utilisateur
/// \sa ajouter(int64_t, int64_t). ajouter(double, double). ajouter(int32_t, int32_t)
///

float division(float nbA, float nbB)
{
	return nbA / nbB;
}

/// \brief Fonction de division de deux nombres de type double
///
/// La fonction de division est une operation qui a deux nombres a et b associe un troisieme nombre, appele quotient.
/// Cette fonction correspond au type double
/// 
/// \param nbA est un decimal double
/// \param nbB est un decimal double
/// \return Le quotient de la division des deux entiers saisis par l'utilisateur
/// \sa ajouter(int64_t, int64_t). ajouter(int32_t, int32_t). ajouter(float, float)
///

double division(double nbA, double nbB)
{
	return nbA / nbB;
}







/// \brief Fonction de modulo de deux nombres de type int32_t
///
/// La fonction de modulo est une operation de calcul qui nous donne le reste d'une division euclidienne.
/// Cette fonction correspond au type int32_t
/// 
/// \param nbA un entier int32_t
/// \param nbB un entier int32_t
/// \return Le reste de la division euclienne saisie par l'utilisateur
/// \sa ajouter(int64_t, int64_t) 
///

int32_t modulo(int32_t nbA, int32_t nbB)
{
	return nbA % nbB;
}

/// \brief Fonction de modulo de deux nombres de type int64_t
///
/// La fonction de modulo est une operation de calcul qui nous donne le reste d'une division euclidienne.
/// Cette fonction correspond au type int64_t
/// 
/// \param nbA est un entier int64_t
/// \param nbB est un entier int64_t
/// \return Le reste de la division euclienne saisie par l'utilisateur
/// \sa ajouter(int32_t, int32_t) 
///

int64_t modulo(int64_t nbA, int64_t nbB)
{
	return nbA % nbB;
}



/// \brief Fonction pour utiliser le type int32_t
///
/// Cette procedure demande les operateurs, l'operande et affiche le resultat.
/// Elle correspond au type int32_t
/// 
/// \sa entier64(). flottant(). nbdouble().
///
void entier32()
{
	
	int32_t nbA, nbB; 
	int operation; 
	bool verifop = false; 
		
	
	cout << "Quel est l'operateur A ?" << endl;
	cin >> nbA;

	cout << "Quel est l'operateur B ?" << endl;
	cin >> nbB;
	
	while (verifop == false)
	{	
		
		cout << "Quelle operation? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division\n\t 5- Division euclidienne" << endl;
		cin >> operation;
				
		
		switch (operation)
		{
				
		case 1: cout << "Le resultat est : " << addition(nbA, nbB) << endl; verifop = true;
			break;
			
		case 2: cout << "Le resultat est : " << soustraction(nbA, nbB) << endl; verifop = true;
			break;
			
		case 3: cout << "Le resultat est : " << multiplication(nbA, nbB) << endl; verifop = true;
			break;
			
		case 4: cout << "Le resultat est : " << division(nbA, nbB) << endl; verifop = true;
			break;
		case 5: cout << "Le resultat est : " << modulo(nbA, nbB) << endl; verifop = true;
			break;
			
		default: cout << "\n\t Saisie incorrecte ! \n\n" << endl;
			break;
		}
	}
}

/// \brief Fonction pour utiliser le type int64_t
///
/// Cette procedure demande les operateurs, l'operande et affiche le resultat.
/// Elle correspond au type int64_t
/// 
/// \sa entier32(). flottant(). nbdouble().
///
void entier64()
{
	
	int64_t nbA, nbB; 
	int operation; 
	bool verifop = false; 
	
	cout << "Quel est l'operateur A ?" << endl;
	cin >> nbA;

	cout << "Quel est l'operateur B ?" << endl;
	cin >> nbB;

	
	while (verifop == false)
	{
		
		cout << "Quelle operation? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division\n\t 5- Division euclidienne" << endl;
		cin >> operation;

		
		switch (operation)
		{
			
		case 1: cout << "Le resultat est : " << addition(nbA, nbB) << endl; verifop = true;
			break;
			
		case 2: cout << "Le resultat est : " << soustraction(nbA, nbB) << endl; verifop = true;
			break;
			
		case 3: cout << "Le resultat est : " << multiplication(nbA, nbB) << endl; verifop = true;
			break;
			
		case 4: cout << "Le resultat est : " << division(nbA, nbB) << endl; verifop = true;
			break;
			
		case 5: cout << "Le resultat est : " << modulo(nbA, nbB) << endl; verifop = true;
			break;
			
		default: cout << "\n\t Saisie incorrecte ! \n\n" << endl;
			break;
		}
	}
}

/// \brief Fonction pour utiliser le type float
///
/// Cette procedure demande les operateurs, l'operande et affiche le resultat.
/// Elle correspond au type float
/// 
/// \sa entier32(). flottant(). nbdouble().
///
void flottant()
{
	
	float nbA, nbB; 
	int operation; 
	bool verifop = false; 
		
	cout << "Quel est l'operateur A ?" << endl;
	cin >> nbA;

	cout << "Quel est l'operateur B ?" << endl;
	cin >> nbB;
	
	
	while (verifop == false)
	{
		
		cout << "Quelle opÃ©ration? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division" << endl;
		cin >> operation;
		
		
		switch (operation)
		{
			
		case 1: cout << "Le resultat est : " << addition(nbA, nbB) << endl; verifop = true;
			break;
			
		case 2: cout << "Le resultat est : " << soustraction(nbA, nbB) << endl; verifop = true;
			break;
			
		case 3: cout << "Le resultat est : " << multiplication(nbA, nbB) << endl; verifop = true;
			break;
			
		case 4: cout << "Le resultat est : " << division(nbA, nB) << endl; verifop = true;
			break;
			
		default: cout << "\n\t ERREUR LORS DE LA SAISIE ! \n\n" << endl;
			break;
		}
	}
}

/// \brief Fonction pour utiliser le type double
///
/// Cette procedure demande les operateurs, l'operande et affiche le resultat.
/// Elle correspond au type double
/// 
/// \sa entier32(). flottant(). nbdouble().
///
void nbdouble()
{
	
	double nbA, nbB; 
	int operation; 
	bool verifop = false; 
		
	cout << "Quel est l'operateur A ?" << endl;
	cin >> nbA;

	cout << "Quel est l'operateur B ?" << endl;
	cin >> nbB;
	
	
	while (verifop == false)
	{
		
		cout << "Quelle operation? \n\t 1- Addition\n\t 2- Soustraction\n\t 3- Multiplication\n\t 4- Division" << endl;
		cin >> operation;
		
		switch (operation)
		{
			
		case 1: cout << "Le resultat est : " << addition(nbA, nbB) << endl; verifop = true;
			break;
			
		case 2: cout << "Le resultat est : " << soustraction(nbA, nbB) << endl; verifop = true;
			break;
			
		case 3: cout << "Le resultat est : " << multiplication(nbA, nbB) << endl; verifop = true;
			break;
			
		case 4: cout << "Le resultat est : " << division(nbA, nbB) << endl; verifop = true;
			break;
			
		default: cout << "\n\t Saisie incorrecte ! \n\n" << endl;
			break;
		}
	}
}

/// \brief Fonction principale executant le code
///
int main()
{
	
	int type; 
	bool veriftype = false; 

	
	while (veriftype == false)
	{
		
		cout << "Quel type voulez-vous utiliser? \n\t 1- int32_t\n\t 2- int64_t\n\t 3- float\n\t 4- double" << endl;
		cin >> type;

		
		switch (type)
		{
			
		case 1: entier32(); veriftype = true;
			break;
			
		case 2: entier64(); veriftype = true;
			break;
			
		case 3: flottant(); veriftype = true;
			break;
			
		case 4: nbdouble();	veriftype = true;
			break;
			
		default: cout << "\n\t Saisie incorrecte ! \n\n" << endl;
			break;
		}
	}
}
