
#include <stdio.h>

int main() {

    FILE *fp;

    char nama[100];
    char nim[20];

    printf("Masukkan nama: ");
    scanf(" %99[^\n]", nama);

    printf("Masukkan NIM: ");
    scanf("%19s", nim);

    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("File gagal dibuka!\n");
        return 1;
    }

    fprintf(fp, "Nama: %s\n", nama);
    fprintf(fp, "NIM: %s\n", nim);

    fclose(fp);

    printf("Data berhasil disimpan!\n");

    return 0;
}
