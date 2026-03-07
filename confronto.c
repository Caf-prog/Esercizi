//Trovare il maggiore o minore tra numeri

#include <stdio.h>

int main()
{
    //Dichiariamo le variabili per i tre numeri in ingresso e per memorizzare i risultati

    int n1, n2, n3;
    int max, min;

    //Immissione dei numeri da parte dell'utente (separati da spazio), letturae assegnazione agli indirizzi di memoria tramite scanf

    printf ("Inserisci tre numeri interi separati da uno spazio: ");
    scanf ("%d %d %d", &n1, &n2, &n3);

    //Troviamo il maggiore partendo dal presupposto che n1 sia il max, poi utilizziamo il costrutto if, else per confrontarlo con gli altri due numeri

    max = n1;

    if (n2 > max) {
        max = n2;

    } else (n3 > max); {
        max = n3;
    }


    min = n1;

    if (n2 < min) {
        min = n2;

    } else (n3 < min); {
        min = n3;
    }

    //Stampiamo i risultati

    printf ("Il numero maggiore è: %d\n", max);
    printf ("Il numero minore è: %d\n", min);

    return 0;
}
