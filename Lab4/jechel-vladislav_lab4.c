#include <stdio.h>

// Probleme pentru tablouri unidimensionale:
// 1. Scrieți un program C pentru a citi și a imprima elementele unui tablou. - folosind recursia.
void citireAfisare() {
    int n, arr[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Elementele: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 2.Scrieți un program C pentru a imprima toate elementele negative dintr-un tablou.
void afisareNegative() {
    int n, arr[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Negative: ");
    for(int i = 0; i < n; i++) if(arr[i] < 0) printf("%d ", arr[i]);
    printf("\n");
}

// 3. Scrieți un program C pentru a găsi suma tuturor elementelor tabloului. - folosind recursia.
void sumaRecursiva() {
    int n, arr[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int suma = 0;
    for(int i = 0; i < n; i++) suma += arr[i];
    printf("Suma: %d\n", suma);
}

// 4. Scrieți un program C pentru a găsi elementul maxim și minim într-un tablou. - folosind recursia.
void maxMin() {
    int n, arr[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int max = arr[0], min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Max: %d, Min: %d\n", max, min);
}

// 5. Scrieți un program C pentru a găsi al doilea cel mai mare element dintr-un tablou.
void alDoileaMaxim() {
    int n, arr[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int max1 = arr[0], max2 = -2147483648;
    for(int i = 1; i < n; i++) {
        if(arr[i] > max1) { max2 = max1; max1 = arr[i]; }
        else if(arr[i] > max2 && arr[i] != max1) max2 = arr[i];
    }
    printf("Al doilea maxim: %d\n", max2);
}

// 6.Scrieți un program C pentru a număra numărul total de elemente pare și impare dintr-un tablou.
void numarPareImpare() {
    int n, arr[100], pare = 0, impare = 0;
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) (arr[i] % 2 == 0) ? pare++ : impare++;
    printf("Pare: %d, Impare: %d\n", pare, impare);
}

// 7.Scrieți un program C pentru a număra numărul total de elemente negative dintr-un tablou.
void numarNegative() {
    int n, arr[100], cnt = 0;
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) if(arr[i] < 0) cnt++;
    printf("Numar negative: %d\n", cnt);
}

// 8.Scrieți un program C pentru a copia toate elementele dintr-un tablou în alt tablou.
void copiaza() {
    int n, src[100], dest[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele sursa: ");
    for(int i = 0; i < n; i++) scanf("%d", &src[i]);
    for(int i = 0; i < n; i++) dest[i] = src[i];
    printf("Dest: ");
    for(int i = 0; i < n; i++) printf("%d ", dest[i]);
    printf("\n");
}

// 9.Scrieți un program C pentru a insera un element într-un tablou pe o poziție dată de la tastatură.
void inserare() {
    int n, arr[100], pos, val;
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Pozitie si valoare: ");
    scanf("%d %d", &pos, &val);
    for(int i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val; n++;
    printf("Tablou nou: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 10.Scrieți un program C pentru a șterge un element dintr-un tablou în poziția specificată de la tastatură.
void stergere() {
    int n, arr[100], pos;
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Pozitie: ");
    scanf("%d", &pos);
    for(int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
    printf("Tablou nou: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 11.Scrieți un program C pentru a număra frecvența relativă fiecărui element dintr-un tablou.
void frecventa() {
    int n, arr[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) {
        int cnt = 1;
        for(int j = i + 1; j < n; j++)
            if(arr[i] == arr[j]) { cnt++; arr[j] = -999999; }
        if(arr[i] != -999999) printf("%d apare %d ori\n", arr[i], cnt);
    }
}

// 12.Scrieți un program C pentru a imprima toate elementele unice din tablou.
void elementeUnice() {
    int n, arr[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Unice: ");
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) if(arr[i] == arr[j]) cnt++;
        if(cnt == 1) printf("%d ", arr[i]);
    }
    printf("\n");
}

// 13.Scrieți un program C pentru a număra numărul total de elemente duplicate dintr-un tablou.
void numarDuplicate() {
    int n, arr[100], cnt = 0;
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(arr[i] == arr[j]) { cnt++; break; }
    printf("Numar duplicate: %d\n", cnt);
}

// 14.Scrieți un program C pentru a șterge toate elementele duplicate dintr-un tablou.
void stergeDuplicate() {
    int n, arr[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(arr[i] == arr[j]) {
                for(int k = j; k < n - 1; k++) arr[k] = arr[k + 1];
                n--; j--;
            }
    printf("Tablou nou: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 15.Scrieți un program C pentru a îmbina două tablouri în al treilea tablou.
void imbinare() {
    int n1, n2, a[100], b[100], c[200];
    printf("Introdu n1: ");
    scanf("%d", &n1);
    printf("Introdu elementele a: ");
    for(int i = 0; i < n1; i++) scanf("%d", &a[i]);
    printf("Introdu n2: ");
    scanf("%d", &n2);
    printf("Introdu elementele b: ");
    for(int i = 0; i < n2; i++) scanf("%d", &b[i]);
    for(int i = 0; i < n1; i++) c[i] = a[i];
    for(int i = 0; i < n2; i++) c[n1 + i] = b[i];
    printf("Tablou c: ");
    for(int i = 0; i < n1 + n2; i++) printf("%d ", c[i]);
    printf("\n");
}

// 16.Scrieți un program C pentru a inversa ordinea elementelor unui tablou.
void inversare() {
    int n, arr[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("Tablou inversat: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 17.Scrieți un program C pentru a pune elemente pare și impare ale unui tablou în două tablouri separate.
void separarePareImpare() {
    int n, arr[100], pare[100], impare[100], np = 0, ni = 0;
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) pare[np++] = arr[i];
        else impare[ni++] = arr[i];
    }
    printf("Pare: ");
    for(int i = 0; i < np; i++) printf("%d ", pare[i]);
    printf("\nImpare: ");
    for(int i = 0; i < ni; i++) printf("%d ", impare[i]);
    printf("\n");
}

// 18.Scrieți un program C pentru a căuta un element din tablou și afiza pozițiile găsite.
void cautare() {
    int n, arr[100], val;
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Valoare: ");
    scanf("%d", &val);
    int gasit = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == val) {
            printf("Elementul %d găsit la poziția %d\n", val, i);
            gasit = 1;
        }
    }
    if(!gasit) printf("Elementul %d nu a fost găsit în tablou.\n", val);
}

// 19.Scrieți un program C pentru a sorta elementele tabloului în ordine crescătoare sau descrescătoare.
void sortare() {
    int n, arr[100], crescator;
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Crescator (1 da, 0 nu): ");
    scanf("%d", &crescator);
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if((crescator && arr[i] > arr[j]) || (!crescator && arr[i] < arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    printf("Tablou sortat: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 20.Scrieți un program C pentru a sorta separat elementele pare și impare ale tabloului.
void sortarePareImpare() {
    int n, arr[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if((arr[i] % 2 == arr[j] % 2) && arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    printf("Tablou sortat: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 21.Scrieți un program C pentru a roti la stânga un tablou, operația ROL.
void rotireStanga2() {
    int n, arr[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int temp = arr[0];
    for(int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
    arr[n - 1] = temp;
    printf("Tablou rotit: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 22.Scrieți un program C pentru a roti dreapta un tablou, operația ROR.
void rotireDreapta2() {
    int n, arr[100];
    printf("Introdu n: ");
    scanf("%d", &n);
    printf("Introdu elementele: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int temp = arr[n - 1];
    for(int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = temp;
    printf("Tablou rotit: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

// Probleme pentru tablouri bidimensionale:
#include <stdio.h>

// Probleme pentru tablouri bidimensionale:
//1. Scrieți un program C pentru a aduna două matrice.
void adunareMatrici() {
    int n, m, a[100][100], b[100][100], c[100][100];
    printf("Introdu n m: ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea a:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    printf("Introdu matricea b:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &b[i][j]);
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) c[i][j] = a[i][j] + b[i][j];
    printf("Rezultat:\n");
    for(int i = 0; i < n; i++) { for(int j = 0; j < m; j++) printf("%d ", c[i][j]); printf("\n"); }
}

//2. Scrieți un program C pentru a scădea două matrice.
void scadereMatrici() {
    int n, m, a[100][100], b[100][100], c[100][100];
    printf("Introdu n m: ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea a:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    printf("Introdu matricea b:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &b[i][j]);
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) c[i][j] = a[i][j] - b[i][j];
    printf("Rezultat:\n");
    for(int i = 0; i < n; i++) { for(int j = 0; j < m; j++) printf("%d ", c[i][j]); printf("\n"); }
}

//3. Scrieți un program C pentru a efectua multiplicarea matricei cu un scalar.
void inmultireScalar() {
    int n, m, k, a[100][100];
    printf("Introdu n m: ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    printf("Introdu scalarul k: ");
    scanf("%d", &k);
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) a[i][j] *= k;
    printf("Rezultat:\n");
    for(int i = 0; i < n; i++) { for(int j = 0; j < m; j++) printf("%d ", a[i][j]); printf("\n"); }
}

//4. Scrieți un program C pentru a multiplica două matrice.
void inmultireMatrici() {
    int n, m, p, a[100][100], b[100][100], c[100][100];
    printf("Introdu n m p (n x m * m x p): ");
    scanf("%d %d %d", &n, &m, &p);
    printf("Introdu matricea a:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    printf("Introdu matricea b:\n");
    for(int i = 0; i < m; i++) for(int j = 0; j < p; j++) scanf("%d", &b[i][j]);
    for(int i = 0; i < n; i++) for(int j = 0; j < p; j++) {
        c[i][j] = 0;
        for(int k = 0; k < m; k++) c[i][j] += a[i][k] * b[k][j];
    }
    printf("Rezultat:\n");
    for(int i = 0; i < n; i++) { for(int j = 0; j < p; j++) printf("%d ", c[i][j]); printf("\n"); }
}

//5. Scrieți un program C pentru a verifica dacă două matrice sunt egale sau nu.
void matriceEgale() {
    int n, m, a[100][100], b[100][100];
    printf("Introdu n m: ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea a:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    printf("Introdu matricea b:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &b[i][j]);
    int egale = 1;
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) if(a[i][j] != b[i][j]) egale = 0;
    printf(egale ? "Matricele sunt egale\n" : "Matricele nu sunt egale\n");
}

//6. Scrieți un program C pentru a găsi suma elementelor diagonale principale ale unei matrice.
void sumaDiagPrincipala() {
    int n, a[100][100];
    printf("Introdu n (matrice patratica): ");
    scanf("%d", &n);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    int suma = 0;
    for(int i = 0; i < n; i++) suma += a[i][i];
    printf("Suma diagonala principala: %d\n", suma);
}

//7. Scrieți un program C pentru a găsi suma elementelor diagonalei secundare ale unei matrice.
void sumaDiagSecundara() {
    int n, a[100][100];
    printf("Introdu n (matrice patratica): ");
    scanf("%d", &n);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    int suma = 0;
    for(int i = 0; i < n; i++) suma += a[i][n - i - 1];
    printf("Suma diagonala secundara: %d\n", suma);
}

//8. Scrieți un program C pentru a găsi suma fiecărui rând și coloană a unei matrice.
void sumaRandCol() {
    int n, m, a[100][100], randuri[100], coloane[100];
    printf("Introdu n m: ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    for(int i = 0; i < n; i++) randuri[i] = 0;
    for(int j = 0; j < m; j++) coloane[j] = 0;
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) {
        randuri[i] += a[i][j];
        coloane[j] += a[i][j];
    }
    printf("Sume randuri: ");
    for(int i = 0; i < n; i++) printf("%d ", randuri[i]);
    printf("\nSume coloane: ");
    for(int j = 0; j < m; j++) printf("%d ", coloane[j]);
    printf("\n");
}

//9. Scrieți un program C pentru a schimba diagonalele unei matrice.
void schimbaDiagonale() {
    int n, a[100][100];
    printf("Introdu n (matrice patratica): ");
    scanf("%d", &n);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for(int i = 0; i < n; i++) {
        int temp = a[i][i];
        a[i][i] = a[i][n - i - 1];
        a[i][n - i - 1] = temp;
    }
    printf("Rezultat:\n");
    for(int i = 0; i < n; i++) { for(int j = 0; j < n; j++) printf("%d ", a[i][j]); printf("\n"); }
}

//10. Scrieți un program C pentru a găsi matricea triunghiulară superioară.
void triunghiularaSuperioara() {
    int n, a[100][100];
    printf("Introdu n (matrice patratica): ");
    scanf("%d", &n);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for(int i = 1; i < n; i++) for(int j = 0; j < i; j++) a[i][j] = 0;
    printf("Rezultat:\n");
    for(int i = 0; i < n; i++) { for(int j = 0; j < n; j++) printf("%d ", a[i][j]); printf("\n"); }
}

//11. Scrieți un program C pentru a găsi matricea triunghiulară inferioară.
void triunghiularaInferioara() {
    int n, a[100][100];
    printf("Introdu n (matrice patratica): ");
    scanf("%d", &n);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for(int i = 0; i < n; i++) for(int j = i + 1; j < n; j++) a[i][j] = 0;
    printf("Rezultat:\n");
    for(int i = 0; i < n; i++) { for(int j = 0; j < n; j++) printf("%d ", a[i][j]); printf("\n"); }
}

//12. Scrieți un program C pentru a găsi suma matricei triunghiulare superioare.
void sumaTriunghiularaSuperioara() {
    int n, a[100][100];
    printf("Introdu n (matrice patratica): ");
    scanf("%d", &n);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    int suma = 0;
    for(int i = 0; i < n; i++) for(int j = i; j < n; j++) suma += a[i][j];
    printf("Suma triunghiulara superioara: %d\n", suma);
}

//13. Scrieți un program C pentru a găsi suma matricei triunghiulare inferioare.
void sumTriunghiularaInferioara() {
    int n, a[100][100];
    printf("Introdu n (matrice patratica): ");
    scanf("%d", &n);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    int suma = 0;
    for(int i = 0; i < n; i++) for(int j = 0; j <= i; j++) suma += a[i][j];
    printf("Suma triunghiulara inferioara: %d\n", suma);
}

//14. Scrieți un program C pentru a găsi transpunerea unei matrice.
void transpusa() {
    int n, m, a[100][100], b[100][100];
    printf("Introdu n m: ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) b[j][i] = a[i][j];
    printf("Transpusa:\n");
    for(int i = 0; i < m; i++) { for(int j = 0; j < n; j++) printf("%d ", b[i][j]); printf("\n"); }
}

//15. Scrieți un program C pentru a găsi determinantul unei matrice (2x2).
void determinant2x2() {
    int a[2][2];
    printf("Introdu matricea 2x2:\n");
    for(int i = 0; i < 2; i++) for(int j = 0; j < 2; j++) scanf("%d", &a[i][j]);
    int det = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    printf("Determinant: %d\n", det);
}

//16. Scrieți un program C pentru a verifica dacă matricea este unitară.
void matriceUnitara() {
    int n, a[100][100];
    printf("Introdu n (matrice patratica): ");
    scanf("%d", &n);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    int unitara = 1;
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++)
        if((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0)) unitara = 0;
    printf(unitara ? "Matricea este unitara\n" : "Matricea nu este unitara\n");
}

//17. Scrieți un program C pentru a verifica dacă matrix este rarefiată.
void matriceRarefiata() {
    int n, m, a[100][100];
    printf("Introdu n m: ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    int total = n * m, zero = 0;
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) if(a[i][j] == 0) zero++;
    printf(zero * 100 / total >= 70 ? "Matricea este rarefiata\n" : "Matricea nu este rarefiata\n");
}

//18. Scrieți un program C pentru a verifica dacă matricea este simetrică.
void matriceSimetrica() {
    int n, a[100][100];
    printf("Introdu n (matrice patratica): ");
    scanf("%d", &n);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    int simetrica = 1;
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) if(a[i][j] != a[j][i]) simetrica = 0;
    printf(simetrica ? "Matricea este simetrica\n" : "Matricea nu este simetrica\n");
}

//19. Scrieți un program C pentru a roti la stînga o matrice.
void rotireStanga() {
    int n, m, a[100][100], b[100][100];
    printf("Introdu n m: ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) b[m - j - 1][i] = a[i][j];
    printf("Rezultat:\n");
    for(int i = 0; i < m; i++) { for(int j = 0; j < n; j++) printf("%d ", b[i][j]); printf("\n"); }
}



//20. Scrieți un program C pentru a roti la dreapta o matrice.
void rotireDreapta() {
    int n, m, a[100][100], b[100][100];
    printf("Introdu n m: ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) b[j][n - i - 1] = a[i][j];
    printf("Rezultat:\n");
    for(int i = 0; i < m; i++) { for(int j = 0; j < n; j++) printf("%d ", b[i][j]); printf("\n"); }
}

//21. Scrieți un program C pentru a roti în sus o matrice.
void rotireSus() {
    int n, m, a[100][100];
    printf("Introdu n m: ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    int temp[100];
    for(int j = 0; j < m; j++) temp[j] = a[0][j];
    for(int i = 0; i < n - 1; i++) for(int j = 0; j < m; j++) a[i][j] = a[i + 1][j];
    for(int j = 0; j < m; j++) a[n - 1][j] = temp[j];
    printf("Rezultat:\n");
    for(int i = 0; i < n; i++) { for(int j = 0; j < m; j++) printf("%d ", a[i][j]); printf("\n"); }
}

//22. Scrieți un program C pentru a roti în jos o matrice.
void rotireJos() {
    int n, m, a[100][100];
    printf("Introdu n m: ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    int temp[100];
    for(int j = 0; j < m; j++) temp[j] = a[n - 1][j];
    for(int i = n - 1; i > 0; i--) for(int j = 0; j < m; j++) a[i][j] = a[i - 1][j];
    for(int j = 0; j < m; j++) a[0][j] = temp[j];
    printf("Rezultat:\n");
    for(int i = 0; i < n; i++) { for(int j = 0; j < m; j++) printf("%d ", a[i][j]); printf("\n"); }
}

//23. Scrieți un program C pentru a reduce o matrice cu algoritmul Max-Pooling.
void maxPooling() {
    int n, m, a[100][100], b[50][50];
    printf("Introdu n m (n si m pare): ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    for(int i = 0; i < n; i += 2) for(int j = 0; j < m; j += 2) {
        int max = a[i][j];
        if(a[i][j + 1] > max) max = a[i][j + 1];
        if(a[i + 1][j] > max) max = a[i + 1][j];
        if(a[i + 1][j + 1] > max) max = a[i + 1][j + 1];
        b[i / 2][j / 2] = max;
    }
    printf("Rezultat:\n");
    for(int i = 0; i < n / 2; i++) { for(int j = 0; j < m / 2; j++) printf("%d ", b[i][j]); printf("\n"); }
}

//24. Scrieți un program C pentru a reduce o matrice cu algoritmul Average-Pooling.
void avgPooling() {
    int n, m, a[100][100], b[50][50];
    printf("Introdu n m (n si m pare): ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    for(int i = 0; i < n; i += 2) for(int j = 0; j < m; j += 2)
        b[i / 2][j / 2] = (a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1]) / 4;
    printf("Rezultat:\n");
    for(int i = 0; i < n / 2; i++) { for(int j = 0; j < m / 2; j++) printf("%d ", b[i][j]); printf("\n"); }
}

//25. Scrieți un program C pentru a sorta elementele unei matrici în spirală.
void sortareSpirala() {
    int n, m, a[100][100], arr[10000], k = 0;
    printf("Introdu n m: ");
    scanf("%d %d", &n, &m);
    printf("Introdu matricea:\n");
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) arr[k++] = a[i][j];
    for(int i = 0; i < k - 1; i++) for(int j = i + 1; j < k; j++) if(arr[i] > arr[j]) { int t = arr[i]; arr[i] = arr[j]; arr[j] = t; }
    int top = 0, bottom = n - 1, left = 0, right = m - 1, idx = 0;
    while(top <= bottom && left <= right) {
        for(int i = left; i <= right; i++) a[top][i] = arr[idx++];
        top++;
        for(int i = top; i <= bottom; i++) a[i][right] = arr[idx++];
        right--;
        if(top <= bottom) {
            for(int i = right; i >= left; i--) a[bottom][i] = arr[idx++];
            bottom--;
        }
        if(left <= right) {
            for(int i = bottom; i >= top; i--) a[i][left] = arr[idx++];
            left++;
        }
    }
    printf("Rezultat:\n");
    for(int i = 0; i < n; i++) { for(int j = 0; j < m; j++) printf("%d ", a[i][j]); printf("\n"); }
}




// main
// main
int main() {
    int categorie, optiune;
    printf("Alege categoria:\n");
    printf("1. Probleme pentru tablouri unidimensionale\n");
    printf("2. Probleme pentru tablouri bidimensionale\n");
    scanf("%d", &categorie);

    switch (categorie) {
        case 1:
            printf("Alege problema pentru tablouri unidimensionale:\n");
            printf("1. Scrieți un program C pentru a citi și a imprima elementele unui tablou. - folosind recursia.\n");
            printf("2. Scrieți un program C pentru a imprima toate elementele negative dintr-un tablou.\n");
            printf("3. Scrieți un program C pentru a găsi suma tuturor elementelor tabloului. - folosind recursia.\n");
            printf("4. Scrieți un program C pentru a găsi elementul maxim și minim într-un tablou. - folosind recursia.\n");
            printf("5. Scrieți un program C pentru a găsi al doilea cel mai mare element dintr-un tablou.\n");
            printf("6. Scrieți un program C pentru a număra numărul total de elemente pare și impare dintr-un tablou.\n");
            printf("7. Scrieți un program C pentru a număra numărul total de elemente negative dintr-un tablou.\n");
            printf("8. Scrieți un program C pentru a copia toate elementele dintr-un tablou în alt tablou.\n");
            printf("9. Scrieți un program C pentru a insera un element într-un tablou pe o poziție dată de la tastatură.\n");
            printf("10. Scrieți un program C pentru a șterge un element dintr-un tablou în poziția specificată de la tastatură.\n");
            printf("11. Scrieți un program C pentru a număra frecvența relativă fiecărui element dintr-un tablou.\n");
            printf("12. Scrieți un program C pentru a imprima toate elementele unice din tablou.\n");
            printf("13. Scrieți un program C pentru a număra numărul total de elemente duplicate dintr-un tablou.\n");
            printf("14. Scrieți un program C pentru a șterge toate elementele duplicate dintr-un tablou.\n");
            printf("15. Scrieți un program C pentru a îmbina două tablouri în al treilea tablou.\n");
            printf("16. Scrieți un program C pentru a inversa ordinea elementelor unui tablou.\n");
            printf("17. Scrieți un program C pentru a pune elemente pare și impare ale unui tablou în două tablouri separate.\n");
            printf("18. Scrieți un program C pentru a căuta un element din tablou și afiza pozițiile găsite.\n");
            printf("19. Scrieți un program C pentru a sorta elementele tabloului în ordine crescătoare sau descrescătoare.\n");
            printf("20. Scrieți un program C pentru a sorta separat elementele pare și impare ale tabloului.\n");
            printf("21. Scrieți un program C pentru a roti la stânga un tablou, operația ROL.\n");
            printf("22. Scrieți un program C pentru a roti dreapta un tablou, operația ROR.\n");

            scanf("%d", &optiune);
            switch (optiune) {
                case 1: citireAfisare(); break;
                case 2: afisareNegative(); break;
                case 3: sumaRecursiva(); break;
                case 4: maxMin(); break;
                case 5: alDoileaMaxim(); break;
                case 6: numarPareImpare(); break;
                case 7: numarNegative(); break;
                case 8: copiaza(); break;
                case 9: inserare(); break;
                case 10: stergere(); break;
                case 11: frecventa(); break;
                case 12: elementeUnice(); break;
                case 13: numarDuplicate(); break;
                case 14: stergeDuplicate(); break;
                case 15: imbinare(); break;
                case 16: inversare(); break;
                case 17: separarePareImpare(); break;
                case 18: cautare(); break;
                case 19: sortare(); break;
                case 20: sortarePareImpare(); break;
                case 21: rotireStanga2(); break;
                case 22: rotireDreapta2(); break;
                default: printf("Optiune invalida\n");
            }
            break;

        case 2:
            printf("Alege problema pentru tablouri bidimensionale:\n");
            printf("1. Scrieți un program C pentru a aduna două matrice.\n");
            printf("2. Scrieți un program C pentru a scădea două matrice.\n");
            printf("3. Scrieți un program C pentru a efectua multiplicarea matricei cu un scalar.\n");
            printf("4. Scrieți un program C pentru a multiplica două matrice.\n");
            printf("5. Scrieți un program C pentru a verifica dacă două matrice sunt egale sau nu.\n");
            printf("6. Scrieți un program C pentru a găsi suma elementelor diagonale principale ale unei matrice.\n");
            printf("7. Scrieți un program C pentru a găsi suma elementelor diagonalei secundare ale unei matrice.\n");
            printf("8. Scrieți un program C pentru a găsi suma fiecărui rând și coloană a unei matrice.\n");
            printf("9. Scrieți un program C pentru a schimba diagonalele unei matrice.\n");
            printf("10. Scrieți un program C pentru a găsi matricea triunghiulară superioară.\n");
            printf("11. Scrieți un program C pentru a găsi matricea triunghiulară inferioară.\n");
            printf("12. Scrieți un program C pentru a găsi suma matricei triunghiulare superioare.\n");
            printf("13. Scrieți un program C pentru a găsi suma matricei triunghiulare inferioare.\n");
            printf("14. Scrieți un program C pentru a găsi transpunerea unei matrice.\n");
            printf("15. Scrieți un program C pentru a găsi determinantul unei matrice (2x2).\n");
            printf("16. Scrieți un program C pentru a verifica dacă matricea este unitară.\n");
            printf("17. Scrieți un program C pentru a verifica dacă matrix este rarefiată.\n");
            printf("18. Scrieți un program C pentru a verifica dacă matricea este simetrică.\n");
            printf("19. Scrieți un program C pentru a roti la stînga o matrice.\n");
            printf("20. Scrieți un program C pentru a roti la dreapta o matrice.\n");
            printf("21. Scrieți un program C pentru a roti în sus o matrice.\n");
            printf("22. Scrieți un program C pentru a roti în jos o matrice.\n");
            printf("23. Scrieți un program C pentru a reduce o matrice cu algoritmul Max-Pooling.\n");
            printf("24. Scrieți un program C pentru a reduce o matrice cu algoritmul Average-Pooling.\n");
            printf("25. Scrieți un program C pentru a sorta elementele unei matrici în spirală.\n");

            scanf("%d", &optiune);
            switch (optiune) {
                case 1: adunareMatrici(); break;
                case 2: scadereMatrici(); break;
                case 3: inmultireScalar(); break;
                case 4: inmultireMatrici(); break;
                case 5: matriceEgale(); break;
                case 6: sumaDiagPrincipala(); break;
                case 7: sumaDiagSecundara(); break;
                case 8: sumaRandCol(); break;
                case 9: schimbaDiagonale(); break;
                case 10: triunghiularaSuperioara(); break;
                case 11: triunghiularaInferioara(); break;
                case 12: sumaTriunghiularaSuperioara(); break;
                case 13: sumTriunghiularaInferioara(); break;
                case 14: transpusa(); break;
                case 15: determinant2x2(); break;
                case 16: matriceUnitara(); break;
                case 17: matriceRarefiata(); break;
                case 18: matriceSimetrica(); break;
                case 19: rotireStanga(); break;
                case 20: rotireDreapta(); break;
                case 21: rotireSus(); break;
                case 22: rotireJos(); break;
                case 23: maxPooling(); break;
                case 24: avgPooling(); break;
                case 25: sortareSpirala(); break;
                default: printf("Optiune invalida\n");
            }
            break;

        default:
            printf("Categorie invalida\n");
    }

    return 0;
}

