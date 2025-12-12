// // Să se determine minimul dintre sumele elementelor pozitive de pe diagonala principală și cea secundară.
// #include <stdio.h>

// int main() {
//     int n, m;
//     printf("Introduceti numarul de linii si coloane: ");
//     scanf("%d %d", &n, &m);

//     int b[n][m];
//     printf("Introduceti elementele matricei:\n");
//     for (int i = 0; i < n; i++) { 
//         for (int j = 0; j < m; j++) {
//             scanf("%d", &b[i][j]);
//         }
//     }

//     int suma_diag_principala = 0;
//     int suma_diag_secundara = 0;

//     for (int i = 0; i < n; i++) {
//         if (i < m && b[i][i] > 0) {
//             suma_diag_principala += b[i][i];
//         }
//         if (m - 1 - i >= 0 && m - 1 - i < m && b[i][m - 1 - i] > 0) {
//             suma_diag_secundara += b[i][m - 1 - i];
//         }
//     }

//     int minim = (suma_diag_principala < suma_diag_secundara) ? suma_diag_principala : suma_diag_secundara;
//     printf("Minimul dintre sumele pozitive de pe diagonale este: %d\n", minim);

//     return 0;
// }


//chatu
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Introduceți un n valid (>0).\n");
        return 1;
    }

    long long sum_main = 0;    // suma elementelor pozitive de pe diagonala principală
    long long sum_second = 0;  // suma elementelor pozitive de pe diagonala secundară

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            long long x;
            if (scanf("%lld", &x) != 1) {
                fprintf(stderr, "Date de intrare insuficiente.\n");
                return 1;
            }
            if (i == j && x > 0) sum_main += x;
            if (i + j == n - 1 && x > 0) sum_second += x;
        }
    }

    long long minim = (sum_main < sum_second) ? sum_main : sum_second;
    printf("%lld\n", minim);
    return 0;
}
