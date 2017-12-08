//
//  sapin.h
//  TD09
//
//  Created by Valentin Monnot on 06/12/2017.
//  ESIEA Laval TD Info.
//


#ifndef sapin_h
#define sapin_h

#include <stdio.h>
#include <stdlib.h>

typedef struct sapin
{
    
    int height;
    int fheight;
    int fwidth;
    int prop;
    
} conf;

long taille (FILE * stream) //Fonction permettant de connaitre la taille d'un fichier.
{
    long t;
    
    fseek(stream, 0, SEEK_END);
    t = ftell(stream);
    
    return t;
    
}

#endif /* sapin_h */
