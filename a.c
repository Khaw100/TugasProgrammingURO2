#include <stdio.h>
#include <stdlib.h>
int main(){
 int pilih,i,hasil=1;
 float A,B, result;
 start:
 printf("Angka pertama: ");
 scanf("%f", &A);
 printf("Angka kedua: ");
 scanf("%f", &B);
 printf("Berikut adalah operator-operator yang tersedia: \n");
 printf("1. Penjumlahan\n");
 printf("2. Pengurangan\n");
 printf("3. Perkalian\n");
 printf("4. Pembagian\n");
 printf("5. Perpangkatan\n");
 printf("6. Pengintegralan\n");
 printf("Pilih program yang diinginkan: " );
 scanf("%d", &pilih);
 printf("cls");
 switch(pilih)
 {
     case 1: {printf("Penjumlahan");
             result = A + B;
             printf("%.2f",result,"\n");}
            break;
     case 2: {printf("Pengurangan");
             result = A - B;
             printf("%.2f",result,"\n");}
            break;
     case 3: {printf("Perkalian");
             result = A * B;
             printf("%.2f",result,"\n");}
            break;
     case 4: {printf("Pembagian");
             result = A / B;
             printf("%.2f",result,"\n");}
             break;
     case 5: {printf("Perpangkatan");
             printf("1. A sebagai bilangan yang akan dipangkatkan dan B sebagai pangkat\n");
             printf("2. B sebagai bilangan yang akan dipangkatkan dan A sebagai pangkat\n");
             printf("Pilih kondisi: ");
             scanf("%d",&pilih);
             if (pilih==1) 
             {
              for(i=1;i<=B;i++){
               hasil=hasil*A;
              }
              printf("Hasilnya adalah %d", hasil,"\n");
             }
             else if (pilih==2) 
             {
              for(i=1;i<=A;i++){
               hasil=hasil*B;
              }
              printf("Hasilnya adalah %d", hasil,"\n");
             }
             }
             break;
     case 6: 
     default: printf("Program tidak tersedia");
             break;
 }
 printf("Apakah anda masih ingin menggunakan kalkulator ini (1/0)? ");
 scanf("%d",pilih);
 if (pilih==1){
  system("cls");
  goto start;
 }
 else return 0;
}
