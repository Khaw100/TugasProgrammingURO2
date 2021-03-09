#include <stdio.h>
#include <stdlib.h>
int main()
{
 int pilihan,x=1,i;
 float A,B,hasil;
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
 printf("Masukan Pilihan : ");scanf("%d",&pilihan);
 system("cls");
 switch(pilihan)
 {
    case 1: {printf("Penjumlahan\n");
            hasil=A+B;
           printf("%.0f",hasil); }
        break;
    case 2: {printf("Pengurangan\n");
            hasil=A-B;
           printf("%.0f",hasil); }
        break;
    case 3: {printf("Perkalian\n");
            hasil=A*B;
           printf("%.0f",hasil); }
        break;
    case 4: {printf("Pembagian\n");
            hasil=A/B;
           printf("%.2f",hasil); }
        break;
    case 5: {printf("Perpangkatan\n");
           printf("1. A sebagai bilangan yang akan dipangkatkan dan B sebagai pangkat\n");
           printf("2. B sebagai bilangan yang akan dipangkatkan dan A sebagai pangkat\n");
           printf("Pilih kondisi: "); scanf("%d",&pilihan);
           if (pilihan==1)
           {
               for(i=1;i<=B;i++){
                   x = x * A;
               }
               printf("Hasilnya adalah %d", x);
           }
           else if (pilihan==2) 
           {
               for(i=1;i<=A;i++){
                   x = x * B;
               }
               printf("Hasilnya adalah %d", x);
           }
        break;
    case 6: {printf("Pengintegralan");}
        break;
    default: printf("Pilihan salah");
        break;
 }
 printf("\nApakah Anda ingin menghitung lagi(1/0)?");scanf("%d",&pilihan);
 if(pilihan==1)
  {
    system("cls");
    goto start;
  }
 else return 0;
  }
}