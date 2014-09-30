#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**************************
    *******  Exercice 1 *******
    **************************/
    /* Donnez une annee et determiner si elle est bissextile
     *
     * Sont bissextile les annee :
     * soit divisible par 4 mais non divisible par 100
     * soit divisible par 400
     *
     */
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
