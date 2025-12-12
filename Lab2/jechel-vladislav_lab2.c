#include <stdio.h>
#include <string.h>
#include <math.h>


// set 1 (de ramificare)
// 1. Scrieți un program C pentru a găsi maxim între două numere.
int max_two() {
    int a, b;
    printf("Introduceti doua numere: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("Maximul este: %d\n", a);
    else
        printf("Maximul este: %d\n", b);
    return 0;
}

// 2. Scrieți un program C pentru a găsi maxim între trei numere. 
int max_three() {
    int a, b, c;
    printf("Introduceti trei numere: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("Maximul este: %d\n", max);
    return 0;
}

// 3. Scrieți un program C pentru a verifica dacă un număr este negativ, pozitiv sau zero. 
int poz_neg() {
    int num;
    printf("Introdu un numar: ");
    scanf("%d", &num);
    if (num > 0)
        printf("Numarul este pozitiv!\n");
    else if (num < 0)
        printf("Numarul este negativ!\n");
    else
        printf("Numarul este 0!\n");
    return 0;
}

// 4. Scrieți un program C pentru a verifica dacă un număr este divizibil cu 5 și 11 sau nu. 
int divizibility() {
    int num;
    printf("Introdu un numar: ");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 11 == 0)
        printf("Numarul este divizibil cu 5 si 11!\n");
    else
        printf("Numarul nu este divizibil cu 5 si 11!\n");
    return 0;
}

// 5. Scrieți un program C pentru a verifica dacă un număr este par sau impar. 
int odd_even() {
    int num;
    printf("Introdu un numar: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Numarul este par!\n");
    else
        printf("Numarul este impar!\n");
    return 0;
}

// 6. Scrieți un program C pentru a verifica dacă un an este bisect sau nu. 
int leap_year() {
    int days;
    printf("Cate zile are anul? ");
    scanf("%d", &days);
    if (days == 366)
        printf("Anul este bisect!\n");
    else if (days == 365)
        printf("Anul nu este bisect!\n");
    else
        printf("Nu ati introdus zilele unui an!\n");
    return 0;
}

// 7. Scrieți un program C pentru a verifica dacă un caracter este sau nu alfabet. 
int isAlpha() {
    char ch;
    printf("Introduceti un caracter: ");
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("Este alfabet.\n");
    else
        printf("Nu este alfabet.\n");
    return 0;
}

// 8. Scrieți un program C pentru a introduce orice alfabet și verificați dacă este vocală sau consoană.
int vowCon() {
    char ch;
    printf("Introduceti un caracter: ");
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            printf("Caracterul '%c' este o vocala.\n", ch);
        else
            printf("Caracterul '%c' este o consoana.\n", ch);
    } else {
        printf("Caracterul introdus nu este un alfabet.\n");
    }
    return 0;
}

// 9. Scrieți un program C pentru a introduce orice caracter și verificați dacă este alfabet, cifră sau caracter special. 
int whatChar() {
    char ch;
    printf("Introduceti un caracter: ");
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("Este un alfabet.\n");
    else if (ch >= '0' && ch <= '9')
        printf("Este o cifra.\n");
    else
        printf("Este un caracter special.\n");
    return 0;
}

// 10. Scrieți un program C pentru a verifica dacă un caracter este cu majuscule sau minuscule. 
int upperLower() {
    char ch;
    printf("Introduceti un caracter: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Caracterul este o litera majuscula.\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Caracterul este o litera minuscula.\n");
    else
        printf("Caracterul nu este o litera.\n");
    return 0;
}

// 11. Scrieți un program C pentru a introduce numărul săptămânii și a imprima ziua săptămânii. 
int dayWeek() {
    int zi;
    printf("Introduceti numarul zilei (1-7): ");
    scanf("%d", &zi);
    switch (zi) {
        case 1: printf("Luni\n"); break;
        case 2: printf("Marti\n"); break;
        case 3: printf("Miercuri\n"); break;
        case 4: printf("Joi\n"); break;
        case 5: printf("Vineri\n"); break;
        case 6: printf("Sambata\n"); break;
        case 7: printf("Duminica\n"); break;
        default: printf("Numar invalid.\n");
    }
    return 0;
}

// 12. Scrieți un program C pentru a introduce numărul lunii și a imprima numărul de zile din luna respectivă. 
int monthDays() {
    int luna;
    printf("Introduceti numarul lunii (1-12): ");
    scanf("%d", &luna);
    switch (luna) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 zile\n"); break;
        case 4: case 6: case 9: case 11:
            printf("30 zile\n"); break;
        case 2:
            printf("28 sau 29 zile (in functie de anul bisect)\n"); break;
        default:
            printf("Numar de luna invalid.\n");
    }
    return 0;
}

// 13. Scrieți un program C pentru a număra numărul total de note într-o anumită cantitate. 
int grades() {
    int note[11] = {0}, n, total = 0;
    printf("Introduceti notele (intre 1 si 10). Introduceti 0 pentru a opri:\n");
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        if (n >= 1 && n <= 10) {
            note[n]++;
            total++;
        } else {
            printf("Nota invalida. Introduceti o nota intre 1 si 10 sau 0 pentru a opri.\n");
        }
    }
    printf("\nStatistica notelor introduse:\n");
    for (int i = 10; i >= 1; i--) {
        if (note[i] > 0)
            printf("%d nota%s de %d\n", note[i], note[i] == 1 ? "" : "", i);
    }
    printf("Totalul notelor introduse: %d\n", total);
    return 0;
}

// 14. Scrieți un program C pentru a introduce unghiurile unui triunghi și verificați dacă triunghiul este valid sau nu. 
int angles() {
    int a, b, c;
    printf("Introduceti cele 3 unghiuri (in grade) ale triunghiului: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && (a + b + c == 180))
        printf("Triunghiul este valid.\n");
    else
        printf("Triunghiul NU este valid.\n");
    return 0;
}

// 15. Scrieți un program C pentru a introduce toate laturile unui triunghi și verificați dacă triunghiul este valid sau nu. 
int triangleSides() {
    float a, b, c;
    printf("Introduceti cele trei laturi ale triunghiului: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
        printf("Triunghiul este valid.\n");
    else
        printf("Triunghiul NU este valid.\n");
    return 0;
}

// 16. Scrieți un program C pentru a verifica dacă triunghiul este echilateral, isoscel sau triunghi scalen. 
int triangleType() {
    int a, b, c;
    printf("Introduceti cele trei laturi ale triunghiului: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("Triunghiul este echilateral.\n");
        else if (a == b || b == c || a == c)
            printf("Triunghiul este isoscel.\n");
        else
            printf("Triunghiul este scalen.\n");
    } else {
        printf("Laturile nu formeaza un triunghi valid.\n");
    }
    return 0;
}

// 17. Scrieți un program C pentru a găsi toate rădăcinile unei ecuații pătratice.
int ecuationSolver() {
    double a, b, c, delta, x1, x2;
    printf("Introduceti coeficientii a, b si c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        printf("Aceasta nu este o ecuatie de gradul al doilea.\n");
        return 1;
    }
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Doua radacini reale: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("O radacina reala dubla: x = %.2lf\n", x1);
    } else {
        printf("Ecuatia nu are radacini reale (delta < 0).\n");
    }
    return 0;
}



// set 2 (ciclice)
// 1. Scrieți un program C pentru a imprima toate numerele naturale de la 1 la n. - folosind bucla while.
int numbersList() {
    int n, i = 1;
    printf("Cate numere aveti?");
    scanf("%d", &n);
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// 2. Scrieți un program C pentru a imprima toate numerele naturale invers (de la n la 1). - folosind bucla while.
int numbersListReversed() {
    int n;
    printf("Cate numere aveti?");
    scanf("%d", &n);
    while (n >= 1) {
        printf("%d\n", n);
        n--;
    }
    return 0;
}

// 3. Scrieți un program C pentru a imprima toate alfabetele de la a la z. - folosind bucla while
int alphabet() {
    char ch = 'a';
    while (ch <= 'z') {
        printf("%c\n", ch);
        ch++;
    }
    return 0;
}

// 4. Scrieți un program C pentru a imprima toate numerele pare între 1 și 100. - utilizând bucla while 
int evenNumbers() {
    int i = 2;
    while (i <= 100) {
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}

// 5. Scrieți un program C pentru a imprima toate numerele impare între 1 și 100. 
int oddNumbers() {
    int i = 1;
    while (i <= 100) {
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}

// 6. Scrieți un program C pentru a găsi suma tuturor numerelor naturale cuprinse între 1 și n. 
int sumNumbers() {
    int n, i = 1, suma = 0;
    scanf("%d", &n);
    while (i <= n) {
        suma += i;
        i++;
    }
    printf("Suma este %d\n", suma);
    return 0;
}

// 7. Scrieți un program C pentru a găsi suma tuturor numerelor pare între 1 și n. 
int sumEvenNumbers() {
    int n, i = 2, suma = 0;
    printf("Cate numere aveti?");
    scanf("%d", &n);
    while (i <= n) {
        suma += i;
        i += 2;
    }
    printf("Suma este %d\n", suma);
    return 0;
}

// 8. Scrieți un program C pentru a găsi suma tuturor numerelor impare cuprinse între 1 și n. 
int sumOddNumbers() {
    int n, i = 1, suma = 0;
    printf("Cate numere aveti?");
    scanf("%d", &n);
    while (i <= n) {
        suma += i;
        i += 2;
    }
    printf("Suma este %d\n", suma);
    return 0;
}

// 9. Scrieți un program C pentru a imprima tabelul de înmulțire a oricărui număr. 
int multiplyTable() {
    int numar, i = 1;
    printf("Dati un numar: ");
    scanf("%d", &numar);
    while (i <= 10) {
        printf("%d x %d = %d\n", numar, i, numar * i);
        i++;
    }
    return 0;
}

// 10. Scrieți un program C pentru a număra numărul de cifre dintr-un număr. 
int characterNumberCounter() {
    long long numar;
    int count = 0;
    printf("Dati un numar: ");
    scanf("%lld", &numar);
    if (numar == 0) {
        count = 1;
    } else {
        while (numar != 0) {
            numar /= 10;
            count++;
        }
    }
    printf("Numarul de cifre este %d\n", count);
    return 0;
}

// 11. Scrieti un program C pentru a gasi prima si ultima cifra a unui numar.
int findFirstAndLastDigit() {
    int numar;
    printf("Introdu un numar: ");
    scanf("%d", &numar);
    int ultima = numar % 10;
    int prima = numar;
    while (prima >= 10) {
        prima /= 10;
    }
    printf("Prima cifra: %d\n", prima);
    printf("Ultima cifra: %d\n", ultima);
    return 0;
}

// 12. Scrieti un program C pentru a gasi suma primei si ultimei cifre a unui numar.
int sumFirstAndLastDigit() {
    int numar;
    printf("Introdu un numar: ");
    scanf("%d", &numar);
    int ultima = numar % 10;
    int prima = numar;
    while (prima >= 10) {
        prima /= 10;
    }
    printf("Suma este: %d\n", prima + ultima);
    return 0;
}

// 13. Scrieti un program C pentru a schimba prima si ultima cifra a unui numar.
int swapFirstAndLastDigit() {
    int numar;
    printf("Introdu un numar: ");
    scanf("%d", &numar);
    int ultima = numar % 10;
    int prima = numar;
    int temp = numar;
    int nrCifre = 0;
    while (temp > 0) {
        temp /= 10;
        nrCifre++;
    }
    int putere = pow(10, nrCifre - 1);
    prima = numar / putere;
    int mijloc = numar % putere;
    mijloc = mijloc / 10;
    int rezultat = ultima * putere + mijloc * 10 + prima;
    printf("Numar modificat: %d\n", rezultat);
    return 0;
}

// 14. Scrieti un program C pentru a calcula suma cifrelor unui numar.
int sumOfDigits() {
    int numar, suma = 0;
    printf("Introdu un numar: ");
    scanf("%d", &numar);
    while (numar != 0) {
        suma += numar % 10;
        numar /= 10;
    }
    printf("Suma cifrelor: %d\n", suma);
    return 0;
}

// 15. Scrieti un program C pentru a calcula produsul cifrelor unui numar.
int productOfDigits() {
    int numar, produs = 1;
    printf("Introdu un numar: ");
    scanf("%d", &numar);
    while (numar != 0) {
        produs *= numar % 10;
        numar /= 10;
    }
    printf("Produsul cifrelor: %d\n", produs);
    return 0;
}

// 16. Scrieti un program C pentru a introduce un numar si imprimati invers.
int reverseNumber() {
    int numar, invers = 0;
    printf("Introdu un numar: ");
    scanf("%d", &numar);
    while (numar != 0) {
        invers = invers * 10 + numar % 10;
        numar /= 10;
    }
    printf("Numarul inversat: %d\n", invers);
    return 0;
}

// 17. Scrieti un program C pentru a verifica daca un numar este palindrom sau nu.
int isPalindrome() {
    int numar, original, invers = 0;
    printf("Introdu un numar: ");
    scanf("%d", &numar);
    original = numar;
    while (numar != 0) {
        invers = invers * 10 + numar % 10;
        numar /= 10;
    }
    if (original == invers) {
        printf("Numarul este palindrom\n");
    } else {
        printf("Numarul nu este palindrom\n");
    }
    return 0;
}

// 18. Scrieti un program C pentru a gasi frecventa fiecarei cifre intr-un numar intreg dat.
int digitFrequency() {
    int numar, frecventa[10] = {0};
    printf("Introdu un numar: ");
    scanf("%d", &numar);
    while (numar != 0) {
        frecventa[numar % 10]++;
        numar /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (frecventa[i] > 0) {
            printf("Cifra %d apare de %d ori\n", i, frecventa[i]);
        }
    }
    return 0;
}

// 19. Scrieti un program C pentru a introduce un numar si imprimati-l in cuvinte.
int numberToWords() {
    int numar;
    printf("Introdu un numar: ");
    scanf("%d", &numar);
    int cifre[20], i = 0;
    if (numar == 0) {
        printf("zero\n");
        return 0;
    }
    while (numar != 0) {
        cifre[i++] = numar % 10;
        numar /= 10;
    }
    for (int j = i - 1; j >= 0; j--) {
        switch (cifre[j]) {
            case 0: printf("zero "); break;
            case 1: printf("unu "); break;
            case 2: printf("doi "); break;
            case 3: printf("trei "); break;
            case 4: printf("patru "); break;
            case 5: printf("cinci "); break;
            case 6: printf("sase "); break;
            case 7: printf("sapte "); break;
            case 8: printf("opt "); break;
            case 9: printf("noua "); break;
        }
    }
    printf("\n");
    return 0;
}

// 20. Scrieti un program C pentru a imprima toate caracterele ASCII cu valorile lor.
int printAsciiCharacters() {
    for (int i = 0; i <= 255; i++) {
        printf("ASCII %d = %c\n", i, i);
    }
    return 0;
}




// main
int main() {
    
int categorie, optiune;
    printf("Alege categoria:\n");
    printf("1. Instructiuni de ramificare\n");
    printf("2. Instructiuni ciclice\n");
    scanf("%d", &categorie);

    switch (categorie) {
        case 1:
            printf("Alege instructiunea de ramificare:\n");
            printf("1. Determina maximul dintre doua numere.\n");
            printf("2. Determina maximul dintre trei numere.\n");
            printf("3. Verifica daca un numar este negativ, pozitiv sau zero.\n");
            printf("4. Verifica daca un numar este divizibil cu 5 si 11.\n");
            printf("5. Verifica daca un numar este par sau impar.\n");
            printf("6. Verifica daca un an este bisect.\n");
            printf("7. Verifica daca un caracter este o litera din alfabet.\n");
            printf("8. Verifica daca o litera este vocala sau consoana.\n");
            printf("9. Verifica daca un caracter este litera, cifra sau simbol special.\n");
            printf("10. Verifica daca un caracter este majuscula sau minuscula.\n");
            printf("11. Afiseaza ziua saptamanii in functie de numarul introdus.\n");
            printf("12. Afiseaza numarul de zile dintr-o luna in functie de numarul introdus.\n");
            printf("13. Calculeaza numarul total de note de un anumit fel.\n");
            printf("14. Verifica validitatea unui triunghi pe baza unghiurilor introduse.\n");
            printf("15. Verifica validitatea unui triunghi pe baza laturilor introduse.\n");
            printf("16. Determina tipul triunghiului: echilateral, isoscel sau scalen.\n");
            printf("17. Calculeaza radacinile unei ecuatii patratice.\n");

            scanf("%d", &optiune);
            switch (optiune) {
                case 1: max_two(); break;
                case 2: max_three(); break;
                case 3: poz_neg(); break;
                case 4: divizibility(); break;
                case 5: odd_even(); break;
                case 6: leap_year(); break;
                case 7: isAlpha(); break;
                case 8: vowCon(); break;
                case 9: whatChar(); break;
                case 10: upperLower(); break;
                case 11: dayWeek(); break;
                case 12: monthDays(); break;
                case 13: grades(); break;
                case 14: angles(); break;
                case 15: triangleSides(); break;
                case 16: triangleType(); break;
                case 17: ecuationSolver(); break;
                default: printf("Optiune invalida\n");
            }
            break;

        case 2:
            printf("Alege instructiunea ciclica:\n");
            printf(" 1. Afiseaza toate numerele naturale de la 1 la n (while).\n");
            printf(" 2. Afiseaza toate numerele naturale de la n la 1 (while).\n");
            printf(" 3. Afiseaza toate literele alfabetului de la a la z (while).\n");
            printf(" 4. Afiseaza toate numerele pare intre 1 si 100 (while).\n");
            printf(" 5. Afiseaza toate numerele impare intre 1 si 100 (while).\n");
            printf(" 6. Calculeaza suma numerelor naturale de la 1 la n.\n");
            printf(" 7. Calculeaza suma numerelor pare de la 1 la n.\n");
            printf(" 8. Calculeaza suma numerelor impare de la 1 la n.\n");
            printf(" 9. Afiseaza tabelul de inmultire pentru un numar dat.\n");
            printf("10. Numarare cifre dintr-un numar.\n");
            printf("11. Afiseaza prima si ultima cifra a unui numar.\n");
            printf("12. Calculeaza suma dintre prima si ultima cifra a unui numar.\n");
            printf("13. Schimba prima si ultima cifra a unui numar.\n");
            printf("14. Calculeaza suma cifrelor unui numar.\n");
            printf("15. Calculeaza produsul cifrelor unui numar.\n");
            printf("16. Afiseaza inversul unui numar.\n");
            printf("17. Verifica daca un numar este palindrom.\n");
            printf("18. Afiseaza frecventa fiecarei cifre dintr-un numar.\n");
            printf("19. Afiseaza numarul introdus in cuvinte.\n");
            printf("20. Afiseaza toate caracterele ASCII si valorile lor.\n");
            scanf("%d", &optiune);
            switch (optiune) {
                case 1: numbersList(); break;
                case 2: numbersListReversed(); break;
                case 3: alphabet(); break;
                case 4: evenNumbers(); break;
                case 5: oddNumbers(); break;
                case 6: sumNumbers(); break;
                case 7: sumEvenNumbers(); break;
                case 8: sumOddNumbers(); break;
                case 9: multiplyTable(); break;
                case 10: characterNumberCounter(); break;
                case 11: findFirstAndLastDigit(); break;
                case 12: sumFirstAndLastDigit(); break;
                case 13: swapFirstAndLastDigit(); break;
                case 14: sumOfDigits(); break;
                case 15: productOfDigits(); break;
                case 16: reverseNumber(); break;
                case 17: isPalindrome(); break;
                case 18: digitFrequency(); break;
                case 19: numberToWords(); break;
                case 20: printAsciiCharacters(); break;
                default: printf("Optiune invalida\n");
            }
            break;

        default:
            printf("Categorie invalida\n");
    }

    return 0;
}
