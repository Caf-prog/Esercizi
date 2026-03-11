// Programma calcolatrice con la suddivisione in blocchi delle operazioni

#include <stdio.h>

float somma (float a, float b)
{
    return a + b;
}

float sottrazione (float a, float b)
{
    return a - b;
}

float moltiplicazione ( float a, float b)
{
    return a * b;
}

float divisione (float a, float b)
{
    if (b == 0)
    {
        printf ("Errore! Impossibile dividere per zero!\n");
    }

    else
    {
        return a / b;
    }
}


// Ora utilizziamo il mani soltanto per chiamare le funzioni già definite in precedenza

int main ()
{
    float num1, num2, risultato;
    char operatore;

    printf ("Inserisci il primo numero: ");
    scanf ("%f", &num1);

    printf ("Inserisci il secondo numero: ");
    scanf ("%f", &num2);

    printf ("Inserisci l'operatore (+, -, *, /): ");
    scanf ("%c", &operatore);

    // Utilizziamo lo switch per chiamare le funzioni

    switch (operatore)
    {
        case '+':
            risultato = somma (num1, num2);
            printf ("Il risultato è: %f\n", risultato);
            break;

        case '-':
            risultato = sottrazione (num1, num2);
            printf ("Il risultato è: %f\n", risultato);
            break;

        case '*':
            risultato = moltiplicazione (num1, num2);
            printf ("Il risultato è: %f\n", risultato);
            break;

        case '/':
            risultato = divisione (num1, num2);
            if (num2 != 0){
                printf ("Il risultato è: %f\n", risultato);
            }
            break;

        default:
            printf ("Errore! Operatore non riconosciuto.\n");
            break;
    }

    return 0;
}
