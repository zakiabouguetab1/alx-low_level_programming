# inclure  < stdio.h >
# inclure  " holberton.h "

/* *
* print_remaining_days - prend une date et imprime le nombre de jours
* reste dans l'année en tenant compte des années bissextiles
* @mois : mois au format numérique
* @day : jour du mois
* @année : année
* Retour : nul
*/

void  print_remaining_days ( int mois, int jour, int année)
{
	si (année % 4 == 0 || (année % 400 == 0 && année % 100 == 0 ))
	{
		si (mois > 2 && jour >= 60 )
		{
			jour++ ;
		}

		printf ( " Jour de l'année : %d \n " , jour);
		printf ( " Jours restants : %d \n " , 366 - jour);
	}
	autre
	{
		si (mois == 2 && jour == 60 )
		{
			printf ( " Date invalide : %02d / %02d / %04d \n " , mois, jour - 31 , année);
		}
		autre
		{
			printf ( " Jour de l'année : %d \n " , jour);
			printf ( " Jours restants : %d \n " , 365 - jour);
		}
	}
}
