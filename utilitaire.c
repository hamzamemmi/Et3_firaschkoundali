#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "preso.h"

void initialiservie(texte *textevie ,int *vie)
{
(*textevie).couleur= {255,255,255};
(*textevie).police = TTF_OpenFont("arial.ttf", 30);
(*textevie).texte = TTF_RenderText_Blended(police,"vie", couleurBlanche);
(*textevie).postexte.x=300;
(*textevie).postexte.y=100;
(*vie)=3;
}

void initialiserscore(texte *textescore,int *score)
{
(*textescore).couleur= {255,255,255};
(*textescore).police = TTF_OpenFont("arial.ttf", 30);
(*textescore).texte = TTF_RenderText_Blended(police,"score", couleurBlanche);
(*textescore).postexte.x=20;
(*textescore).postexte.y=100;
(*score)=0000;
}

