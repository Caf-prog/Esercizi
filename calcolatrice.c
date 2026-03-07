// Il programma chiede all'utente due due numeri ed un operatore matematico ed usa uno switch per eseguire l'operazione corrispondente e stampa il risultato

#include <stdio.h>

int main ()
{
    //DIchiariamo le variabili immesse dall'utente ed il risultato dell'operazione
    float num1, num2, risultato;
    char operatore;

    //Chiediamo i due numeri all'utente
    printf ("Inserisci il primo numero: ");
    scanf ("%f", &num1);

    printf ("Inserisci il secondo numero: ");
    scanf ("%f", &num2);

    //Chiediamo l'operatore
    printf ("Inserisci l'operatore (+, -, *, /): ");
    scanf (" %c", &operatore); //Inseriamo uno spazio prima di %c per evitare che la funzione scanf catturi il carattere newline inserito con 'invio' nella riga precedente

    //Usiamo il costrutto switch per scegliere l'operazione
    switch (operatore) {

        case '+':
            risultato = num1 + num2;
            printf ("Il risultato è: %f\n", risultato);
            break;

        case '-':
            risultato = num1 - num2;
            printf ("Il risultato è: %f\n", risultato);
            break;

        case '*':
            risultato = num1 * num2;
            printf ("Il risultato è: %f\n", risultato);
            break;

        case '/':
            risultato = num1 / num2;
            printf ("Il risultato è: %f\n", risultato);
            break;

    //Se l'utente inserisce un simbolo non valido
        default:
            printf ("Errore: Operatore non riconosciuto.\n");
            break;
    }

    return 0;
}
