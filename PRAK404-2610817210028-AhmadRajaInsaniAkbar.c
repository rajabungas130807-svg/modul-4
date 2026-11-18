#include <stdio.h>
int main() {
    float n1, n2, hasil;
    int pilih;
    char *pilih2;
    while (1) {
        printf("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan: ");
        if (scanf("%d", &pilih) != 1) break;
        if (pilih > 0 && pilih < 5) {
            printf("Masukkan nilai pertama: ");
            if (scanf("%f", &n1) != 1) break;
            printf("Masukkan nilai kedua: ");
            if (scanf("%f", &n2) != 1) break;
            if (pilih == 1) {
                hasil = n1+n2;
                pilih2 = "penjumlahan";
            } else if (pilih == 2) {
                hasil = n1-n2;
                pilih2 = "pengurangan";
            } else if (pilih == 3) {
                hasil = n1*n2;
                pilih2 = "perkalian";
            } else {
                hasil = n1/n2;
                pilih2 = "pembagian";
            }
            printf("Hasil %s antara %.2f dengan %.2f adalah %.2f\n\n",
                   pilih2, n1, n2, hasil);
        } else if (pilih == 5) {
            printf("Terimakasih, telah menggunakan kalkulator AHMAD RAJA INSANI AKBAR.\n");
            break;
        } else {
            printf("Input anda salah, silahkan coba lagi.\n\n");
        }
    }

    return 0;
}