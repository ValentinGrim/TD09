//
//  main.h
//  TD09
//
//  Created by Valentin Monnot on 06/12/2017.
//  ESIEA Laval TD Info.
//


#ifndef main_h
#define main_h

#include <stdlib.h>
#include <stdio.h>

long taille (FILE * stream) //Fonction permettant de connaitre la taille d'un fichier.
{
    long t;
    
    fseek(stream, 0, SEEK_END);
    t = ftell(stream);
    
    return t;
    
}


#endif /* main_h */
