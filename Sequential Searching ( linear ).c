#include <stdio.h>

int main() {
  int simpan, i, cari[2], get = 0;

  printf("Mau simpan berapa data ? ");
  scanf("%d", &simpan);
  int data[simpan];
    printf("masukkan %d integer(s) \n", simpan);
     for (i = 0; i < simpan; i++)
    scanf("%d", &data[i]);

     printf("Mau angka yang dicari ke %d ? ", 1);
     scanf("%d", &cari[0]);
     printf("Mau angka yang dicari ke %d ? ", 2);
     scanf("%d", &cari[1]);
     for (i = 0; i < simpan; i++) {
     for (int k = 0; k < 2; k++) {
      if (data[i] == cari[k]){
        printf("\nAngka %d berhasil ditemukan dilokasi ke %d\n", cari[k], i);
        get++;
         }
     }
    }
  if (get > 0) {
    printf("angka berhasil ditemukan sebanyak %d", get);
  } else {
    printf("Tidak ada angka yang ditemukan ");
  }
}





