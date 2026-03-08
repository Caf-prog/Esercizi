// Programma che continua a chiedere all'utente di inserire un numero pari finchè l'utente non inserisce un numero divisibile per 2

int main ()
{
	int numero;

	printf ("Benvenuto! Questo programma accetta solo numeri PARI.\n");

do {
	printf ("Inserisci un numero pari: ");
	scanf ("%d", &numero);

	// Se viene inserito un numero errato il sistema riporta un errore
	if (numero % 2 != 0)
	{
		printf ("Errore! %d è un numero dispari. Riprova.\n", numero);
	}	
}
// Facciamo partire il while, il ciclo dovrà ripetersi ogni volta che il numero inserito è dispari
while (numero % 2 != 0);

// Uscita dal ciclo while
	printf ("Bravissimo! Hai inserito %d, che è un numero pari.\n",  numero);

return 0;
}