
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 2) Numără cuvintele dintr-un șir
void numaraCuvinte() {
    char sir[200];
    printf("Introdu sirul: ");
    scanf(" %[^\n]", sir); // citește inclusiv spații

    int cuvinte = 0, inWord = 0;
    for (int i = 0; sir[i] != '\0'; i++) {
        if (isspace(sir[i])) {
            inWord = 0;
        } else if (!inWord) {
            cuvinte++;
            inWord = 1;
        }
    }
    printf("Numar cuvinte: %d\n", cuvinte);
}

// 4) Verifică dacă un șir este palindrom
void estePalindrom() {
    char sir[200];
    printf("Introdu sirul: ");
    scanf(" %[^\n]", sir);

    int i = 0, j = strlen(sir) - 1;
    int pal = 1;
    while (i < j) {
        if (tolower(sir[i]) != tolower(sir[j])) {
            pal = 0;
            break;
        }
        i++;
        j--;
    }
    if (pal) printf("Sirul este palindrom.\n");
    else printf("Sirul NU este palindrom.\n");
}

// 9) Numără aparițiile unui caracter
void aparitiiCaracter() {
    char sir[200], c;
    printf("Introdu sirul: ");
    scanf(" %[^\n]", sir);

    printf("Introdu caracterul: ");
    scanf(" %c", &c);

    int count = 0;
    for (int i = 0; sir[i] != '\0'; i++) {
        if (sir[i] == c) count++;
    }
    printf("Aparitii '%c': %d\n", c, count);
}

// 10) Caracterul cu cea mai mare frecvență
void caracterMaxFrecventa() {
    char sir[200];
    printf("Introdu sirul: ");
    scanf(" %[^\n]", sir);

    int frec[256] = {0};
    for (int i = 0; sir[i] != '\0'; i++) {
        frec[(unsigned char)sir[i]]++;
    }

    int max = 0;
    char caracter = '\0';
    for (int i = 0; i < 256; i++) {
        if (frec[i] > max) {
            max = frec[i];
            caracter = (char)i;
        }
    }
    printf("Caracter cu frecventa maxima: '%c'\n", caracter);
}

// 11) Caracterul cu cea mai mică frecvență (>0)
void caracterMinFrecventa() {
    char sir[200];
    printf("Introdu sirul: ");
    scanf(" %[^\n]", sir);

    int frec[256] = {0};
    for (int i = 0; sir[i] != '\0'; i++) {
        frec[(unsigned char)sir[i]]++;
    }

    int min = 9999;
    char caracter = '\0';
    for (int i = 0; i < 256; i++) {
        if (frec[i] > 0 && frec[i] < min) {
            min = frec[i];
            caracter = (char)i;
        }
    }
    printf("Caracter cu frecventa minima: '%c'\n", caracter);
}

// main
int main() {
    int optiune;
    printf("Alege optiunea:\n");
    printf("1. Numara cuvinte\n");
    printf("2. Verifica palindrom\n");
    printf("3. Aparitii caracter\n");
    printf("4. Caracter max frecventa\n");
    printf("5. Caracter min frecventa\n");
    scanf("%d", &optiune);

    switch (optiune) {
        case 1: numaraCuvinte(); break;
        case 2: estePalindrom(); break;
        case 3: aparitiiCaracter(); break;
        case 4: caracterMaxFrecventa(); break;
        case 5: caracterMinFrecventa(); break;
        default: printf("Optiune invalida\n");
    }

    return 0;
}
