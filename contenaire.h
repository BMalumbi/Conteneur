#include <stdbool.h>
#include "complex.h"
#define Dim 7 

typedef struct objet{
	Tcomplex c; 
	bool b; 
} Objet;


Objet tab[Dim];

void createContenaire(Objet tab[], int n ); 
void ajoutContenaire(Objet tab[], int n, Tcomplex c );
void supprimerContenaire(Objet tab[], int n , Tcomplex  ob );
void detruireContenaire(Objet tab[], int n );
Tcomplex  valeurContenaire(Objet tab[], int n );
void printContenaire(Objet tab[], int n );



