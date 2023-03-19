#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int main() {
    int n; // jumlah elemen dalam tabel
    printf("Masukkan jumlah elemen dalam tabel: ");
    scanf("%d", &n);

    int T[n];
    printf("Masukkan elemen dalam tabel: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    int max_value = T[0];
    for (int i = 1; i < n; i++) {
        if (T[i] > max_value) {
            max_value = T[i];
        }
    }

    int frequency[max_value + 1];
    for (int i = 0; i <= max_value; i++) {
        frequency[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        frequency[T[i]]++;
    }

    int solusi[MAX_SIZE];
    int count = 0;
    for (int i = 0; i <= max_value; i++) {
        if (frequency[i] > 1) {
            solusi[count] = i;
            count++;
        }
    }

    if (count == 0) {
        printf("Tidak ada elemen yang muncul lebih dari satu kali.\n");
    } else {
        printf("Elemen yang muncul lebih dari satu kali adalah: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", solusi[i]);
        }
        printf("\n");
    }

    return 0;
}

