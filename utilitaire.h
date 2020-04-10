#ifndef UTILITAIRE_H_INCLUDED
#define UTILITAIRE_H_INCLUDED
#include "perso.h"
typedef struct
{	SDL_Color couleur;
	SDL_Surface *texte;
	TTF_Font *police=NULL;
	SDL_Rect postexte;
}texte;

void initialiservie(texte *textevie ,int *vie);
void initialiserscore(texte *textescore,int score);
void initialisertemps(texte *temps);
void miseajourvie(texte *textevie, int *vie);
void miseajourcore(texte *textescore,int *score);
void miseajourtemps(texte *temps);
void affichervie(texte textevie,int vie);
void afficherscore(texte textescore,int score);
void affichertemps(texte temps);

#endif
