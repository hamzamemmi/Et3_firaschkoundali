#ifndef UTILITAIRE_H_INCLUDED
#define UTILITAIRE_H_INCLUDED
#include "pers.h"
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

void initTextv(Text* T);
void update_txtv(Text* T, int vies);
void displayTextv(Text T,SDL_Surface *screen);
void freeTextv(Text* T);
int loadFontv(Text* T, char* path);
time Timer(time t, int *tick);
void initTexttime(Text* T);
int loadFonttime(Text* T, char* angelina);
void update_txttime(Text* T, time t);
void displayTexttime(Text T,SDL_Surface *screen);
void freeTextv(Text* T);
void initialiserscore(texte *textescore,int score);
void miseajourcore(texte *textescore,int *score);
void afficherscore(texte textescore,int score);

#endif
