// Programma che sfrutta il ciclo for per calcolare i primi 20 numeri della sequenza di Fibonacci

#include <stdio.h>

int main ()
{
    int i;
    // Dichiariamo le variabili per contenere i numeri
    int t1 = 0;
    int t2 = 1;
    int termine_successivo;

    printf ("I primi 20 numeri della sequenza di Fibonacci sono:\n");

    //Impostiamo il ciclo for affinchè giri 20 volte

    for (i=1; i<=20; i++) {

        // Stampiamo il termine attuale
        printf ("%d\n", t1);

        // Calcoliamo il termine termine_successivo sommando gli ultimi 2
        termine_successivo = t1 + t2;

        // Prepariamo le variabili per il prossimo giro, t2 diventa t1 ed il termine successivo appena calcolato diventa t2
        t1 = t2;
        t2 = termine_successivo;
    }

    printf ("\n"); // Per pulire il terminale

    return 0;
}
