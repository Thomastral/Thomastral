#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    //déclaration de l'age
    int age;
    
    printf(" Veuillez saisir votre age : ");
    //récupération de l'age de l'utilisateur
    scanf("%d", &age);
    printf("Vous avez : %d ans", age);
    printf("\n");
   
    //déclaration du capital monétaire 
    int argent;
    
    printf(" Veuillez saisir votre capital monetaire : ");
    //récupération du capital monétaire de l'utilisateur
    scanf("%d", &argent);
    printf("Vous disposez de : %d euros", argent);
    printf("\n");
    
    
    if (age < 11 && argent < 1000)
    
    {
        
        printf("Hors de ma vue jeune miserable \n");
        
    }
    
    else
    
    {
        if (age < 21 && argent < 1000)
    
        {
        
        printf("Hors de ma vue, adolescent miserable \n");
        
        }
        
        else
    
        {
            if (age < 31 && argent < 1000)
    
            {
        
            printf("Hors de ma vue jeune adulte miserable \n");
        
            }
    
        
        
            else
        
            {
                if (age > 30 && argent < 1000)
    
                {
        
                printf("Hors de ma vue vieux miserable \n");
        
                }
    
            
                
                else
        
                {
                    if (age < 11 && argent < 10000)
                    {
        
                    printf("Salut jeune \n");
        
                    }
    
                
                
                    else
        
                    {
                        if (age < 21 && argent < 10000)
                        {
        
                        printf("Salut adolescent \n");
        
                        }
    
                    
                    
                        else
        
                        {
                            if (age < 31 && argent < 10000)
                            {
        
                            printf("Salut jeune adulte \n");
        
                            }
    
                        
                        
                            else
        
                            {
                                if (age > 30 && argent < 10000)
                                {
        
                                printf("Salut vieux \n");
        
                                }
        
                            
                            
                                else
        
                                {
                                    if (age < 11 && argent > 10000)
                                    {
        
                                    printf("Salut jeune Picsou \n");
        
                                    }
    
                                
                
                                    else
        
                                    {
                                        if (age < 21 && argent > 10000)
                                        {
        
                                        printf("Salut adolescent Picsou \n");
        
                                        }
    
                                    
                    
                                        else
        
                                        {
                                            if (age < 31 && argent > 10000)
                                            {
        
                                            printf("Salut jeune adulte Picsou \n");
        
                                            }
    
                                        
                        
                                            else
        
                                            {
                                                if (age > 30 && argent > 10000)
                                                {
        
                                                printf("Salut vieux Picsou \n");
        
                                                }
                                            }
                                        }    
                                    }        
                                }            
                            }                
                        }                    
                    }                        
                }                       
            }                                
        }                               
    }
    
/********************************** LES ITERATIONS *******************************/
    

    {
    
    //ici est paramètrée la boucle compteur while
    printf("Boucle While \n");   
    int i = 0;

    while (i < 11)
    
        {
            
        printf("%d\n", i);
        i++;
        
        }
    printf("\n");
    }
    
    {
   
        {
            
           //ici est paramètrée la boucle compteur for
            printf("Boucle For \n");
            int j = 0;  
            for (j=0; j<10; j++)
            printf("%d \n", j) ;
            
        }

    }

}
