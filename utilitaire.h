#ifndef UTILITAIRE_H_INCLUDED
#define UTILITAIRE_H_INCLUDED
#include "perso.h"
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <string.h>
struct text {
    SDL_Rect positionText;
    char txt[20];
    SDL_Color couleurTxt;
    TTF_Font* police;
};
typedef struct text Text;

typedef struct time
{
    int mm, ss;
} time;

void initText(Text* T);
void update_txt(Text* T, int vies);
void displayText(Text T,SDL_Surface *screen);
void freeText(Text* T);
int loadFont(Text* T, char* path);
void initialiserscore(texte *textescore,int score);
void miseajourcore(texte *textescore,int *score);
void afficherscore(texte textescore,int score);
time Timer(time t, int *tick);
void afficherTime(time t);


#endif
