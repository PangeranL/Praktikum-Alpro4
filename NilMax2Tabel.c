#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Masukkan jumlah elemen dalam tabel: ");
    scanf("%d", &n);

    int T[n];
    printf("Masukkan elemen dalam tabel: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    int max1 = T[0];
    int max2 = T[1];
    if (max1 < max2) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < n; i++) {
        if (T[i] > max1) {
            max2 = max1;
            max1 = T[i];
        } else if (T[i] > max2 && T[i] != max1) {
            max2 = T[i];
        }
    }

    printf("Nilai maksimum ke-2 adalah %d", max2);

    return 0;
}
