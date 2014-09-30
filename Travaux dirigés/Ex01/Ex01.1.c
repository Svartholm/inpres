/**********************************************************/
/**------------------------------------------------------**/
/** Nom: DOUPAGNE Yoann                                  **/
/** Groupe: 2125                                         **/
/** Exercice: Definir si une annee est bissextile ou pas **/
/**------------------------------------------------------**/
/**********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**************************
    ****** Exercice 1.1 *******
    **************************/

    int year;

    printf("Entrez une annee : ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d : est une annee bissextile", year);
    }
    else
    {
        printf("%d : n'est pas une annee bissextile", year);
    }

    return 0;
}

/*
 *
 * Sont bissextile les annee :
 * soit divisible par 4 mais non divisible par 100
 * soit divisible par 400
 *
 */
