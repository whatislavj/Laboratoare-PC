#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int a = 11, b = 3, c = -7;

    // problema 1
    int incr = ++a;
    printf("Var a incrementat este %d\n", incr);

    int decr = --b;
    printf("Var b decrementat este %d\n", decr);
    
    int sum = a + b;
    printf("Suma e %d\n", sum);

    int dif = a - b;
    printf("Diferenta e %d\n", dif);

    int multiply = a * b; 
    printf("Produsul e %d\n", multiply);

    int divide = a / b;
    printf("Catul e %d\n", divide);

    int rest = a % b;
    printf("Restul e %d\n", rest);



        // problema 2
        printf("\n");// spatiu intre probleme

        float radical = sqrt((float)a);
        printf("Radicalul e %f\n", radical);

        float logaritm = log((float)a);
        printf("Logaritmul e %f\n", logaritm);

        float putere = pow(a, b);
        printf("Puterea e %f\n", putere);

        float modul = abs(c);
        printf("Modulul e %f\n", modul);


    // problema 3
    printf("\n");// spatiu intre probleme

    bool cond1 = (a > b) && (b > c);
    printf("a > b && b > c: %s\n", cond1 ? "true" : "false");

    bool cond2 = (a == 11) || (c < 0);
    printf("a == 11 || c < 0: %s\n", cond2 ? "true" : "false");

    bool cond3 = !(a < b);
    printf("!(a < b): %s\n", cond3 ? "true" : "false");

    bool cond4 = (a % 2 == 1) && (c < 0);
    printf("a este impar si c negativ: %s\n", cond4 ? "true" : "false");

    bool cond5 = (a >= b) || (b == 0);
    printf("a >= b sau b == 0: %s\n", cond5 ? "true" : "false");


    // problema 4
    printf("\n");// spatiu intre probleme
    char litera;
    int numar_intreg;
    short numar_scurt;
    long int numar_mare;
    unsigned int pozitiv;
    float numar_zecimal;
    double numar_precis;

    printf("Introdu o literă (char): ");
    scanf("%c", &litera);  // spațiu înainte de %c evită probleme cu newline

    printf("Introdu un număr întreg (int): ");
    scanf("%d", &numar_intreg);

    printf("Introdu un număr scurt (short): ");
    scanf("%hd", &numar_scurt);

    printf("Introdu un număr mare (long int): ");
    scanf("%ld", &numar_mare);

    printf("Introdu un număr pozitiv (unsigned int): ");
    scanf("%u", &pozitiv);

    printf("Introdu un număr zecimal (float): ");
    scanf("%f", &numar_zecimal);

    printf("Introdu un număr precis (double): ");
    scanf("%lf", &numar_precis);

    printf("char: %c\n", litera);
    printf("int: %d\n", numar_intreg);
    printf("short: %hd\n", numar_scurt);
    printf("long int: %ld\n", numar_mare);
    printf("unsigned int: %u\n", pozitiv);
    printf("float: %.2f\n", numar_zecimal);
    printf("double: %.12lf\n", numar_precis);

    return 0;
}
