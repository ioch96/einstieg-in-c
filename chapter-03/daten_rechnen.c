#include <stdio.h>

int main()
{
    /* Deklaration, teilweise mit Initialisierung */
    int anzahlApfel=2,anzahlBirne=4;
    double preisApfel=1.45,preisBirne=0.85;
    double summeRechnung,preisMittel,preisDifferenz;

    /* Berechnung */
    summeRechnung=anzahlApfel*preisApfel+anzahlBirne*preisBirne;
    preisMittel=summeRechnung/(anzahlApfel+anzahlBirne);
    preisDifferenz=preisApfel-preisBirne;

    /* Ausgabe */
    printf("Summe der Rechnung: %.2f Euro\n",summeRechnung);
    printf("Mittlerer Preis: %.2f Euro\n",preisMittel);
    printf("Preis-Differenz: %.2f Euro\n",preisDifferenz);

    return 0;
}
