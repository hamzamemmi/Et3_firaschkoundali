#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "utilitaire.h"
#include "preso.h"
void initText(Text* T)
{    
    T->couleurTxt.r = 0; 
    T->couleurTxt.g = 0; 
    T->couleurTxt.b = 0;

    strcpy(T->txt, "");
    T->positionText.x = 200;
    T->positionText.y = 50;    
}

int loadFont(Text* T, char* path)
{
    TTF_Font* police = NULL;

    if(TTF_Init() == -1) {
        printf("Erreur d'initialisation de TTF_Init : %s\n", TTF_GetError());
        return -1;
    }
    police = TTF_OpenFont(path,20);
    if (police == NULL) {
        printf("Unable to load Font: %s\n", SDL_GetError());
        return (-1);
    }
    
    T->police = police;
    return (0);
}


void update_txt(Text* T, int vies)
{
    sprintf(T->txt,"*** VIES = %d ***",vies);
}

void displayText(Text T,SDL_Surface *screen)
{   SDL_Surface* textSurface = NULL;    
    
     textSurface=TTF_RenderText_Solid(T.police,T.txt,T.couleurTxt);
     SDL_BlitSurface(textSurface,NULL,screen,&(T.positionText));

}

void freeText(Text* T)
{
    TTF_CloseFont(T->police); 
    TTF_Quit();    
}
time Timer(time t, int *tick)
{
    int tmp = t.mm * 60 + t.ss ;
   if( SDL_GetTicks() - *tick >= 1000 )
    {
        *tick = SDL_GetTicks() ;
        tmp--;
        if( tmp < 0 )
            tmp = 0 ;
        t.mm = tmp / 60 ;
        t.ss = tmp % 60 ;
    }
    return t;
}
void afficherTime(time t)
{ 
 SDL_Rect pos;
pos.x=0;
pos.y=0;
TTF_Font *Font = TTF_OpenFont("breakway.ttf",60);
SDL_Color couleur ={255,255,255};
char time_in_text[6];
sprintf(time_in_text,"%.2d:%.2d",t.mm,t.s);
SDL_Surface *time =TTF_RenderText_Blended(Font, time_in_text, couleur);
SDL_BlitSurface(time, NULL,screen,&pos);
}

