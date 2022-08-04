#include <stdio.h>
#include <stdlib.h>

int main()
{
     float nbr1, nbr2;
    char M, quitter;
    do{
    do
    {
        printf("choisir l'opperateur : +, -, *, /\n");
     scanf("\n%c", &M);
    }while ( M != '+' && M != '-' && M != '*' && M != '/');
    printf("Saisir le 1er nombre\n");
    scanf("%f", &nbr1);
   printf("Saisir un 2eme nombre\n");
    scanf("%f", &nbr2);

    switch (M)
    {
    case '+' : printf ("Resultat = %.2f\n", nbr1 + nbr2);
			        break;
		case '-' : printf ("Resultat = %.2f\n",nbr1 - nbr2);
			break;
		case '*' : printf ("Resultat= %.2f\n",nbr1 * nbr2);
			break;
		case '/' :
		if (nbr2 != 0)
		{
		    printf("Resultat = %.2f\n", nbr1 / nbr2);
		}
		else
		printf("l'opperation est impossible\n");
			break;
	    case 'q' :
	    break;
		default :
		printf("Opperation invalid\n");

    }

    printf("pour quitter tape q\n");
    scanf("\n%c", &quitter);
    }
    while (quitter != 'q');
    exit(0);

    return 0;
}
