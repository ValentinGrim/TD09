//
//  main.c
//  TD09
//
//  Created by Valentin Monnot on 06/12/2017.
//  Copyright © 2017 Valentin Monnot. All rights reserved.
//

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fichier = NULL;
    fichier = fopen("File.txt", "r");
    
    fgetc(fichier);
    
    
}
