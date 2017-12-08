//
//  main.c
//  TD09
//
//  Created by Valentin Monnot on 06/12/2017.
//  ESIEA Laval TD Info.
//

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char YorN;

int main()
{
    
    int menu;
    
    printf("Choix du programmes :\n1 - Taille du fichier.\n2 - Test présence de fichier.\n3 - : ");
    scanf("%d", &menu);
    
    if(menu == 1)
    {
        
        FILE *fichier = NULL;
        fichier = fopen("File.txt", "r");
        
        long TF = taille(fichier);
        
        printf("%ld\n" , TF);
        
        fclose(fichier);
        
        return 0;
        
    }
    
    if(menu == 2)
    {
     
        FILE *fichier = NULL;
        fichier = fopen("File.txt", "rb");
        
        if(!fichier)
        {
            int i = 1;
            
            while(i == 1)
            {
                
                printf("Pas de fichier présent, voulez vous en créé un nouveau ?\n O ou N ?: ");
                scanf("%c", &YorN);
            
                if(YorN == 'O' || YorN == 'o')
                {
             
                    i = 0;
                    
                }
                
                if(YorN == 'N' || YorN == 'n')
                {
                 
                    printf("Fin du programme.\n");
                    
                    return 0;
                    
                }
            }
        }
        
        else
        {
         
            int i = 1;
            
            while(i == 1)
            {
                
                printf("Fichier déja existant,\nSon ouverture provoquera sa suppression.\nVoulez vous continuer ?\nO ou N ? :");
                scanf("%c", &YorN);
                
                if(YorN == 'O' || YorN == 'o')
                {
                    
                    i = 0;
                    
                }
                
                if(YorN == 'N' || YorN == 'n')
                {
                    
                    printf("Fin du programme.\n");
                    
                    return 0;
                    
                }
            }
        }
        
        fclose(fichier);
        fichier = fopen("File.txt", "wb");
        fclose(fichier);
    }
    
    if(menu == 3)
    {
        
        FILE *fichier = NULL;
        fichier = fopen("lepen10.JPG", "rb");
        
        long TF = taille(fichier);
        
        unsigned char data[TF];
        int i = 0;
        
        while(i < TF)
        {
            
            fread(&data[i], sizeof(char), 1, fichier);
            printf("Data %d = %c\n", i+1, data[i]);

            i++;
            
        }
        
    }
        
}
