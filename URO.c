/*Leap Year Problem (Tahun Kabisat)
Buatlah sebuah program untuk mengecek apakah sebuah tahun merupakan tahun kabisat atau
bukan
Tahun Kabisat :
● Habis dibagi 4
● Jika habis dibagi 100 maka bukan tahun kabisat
● Kecuali jika tahun habis dibagi 400
Format Input :
Baris Pertama menyatakan N kali percobaan
Lalu menerima input integer sebanyak N
Format Output :
Jika integer merupakan tahun kabisat maka akan mengeluarkan “Leap Year”, Jika tidak akan
mengeluarkan “Not a Leap Year”
*/

#include <stdio.h>
int main (){
 int tahun, N;
 scanf("%d", &N);
 for(int i=1;i<=N;i++){
     scanf("%d", &tahun);
     if (tahun%4 == 0) {
         printf("Leap Year");
         } 
     else if (tahun%100 == 0) {
         printf("Not a Leap Year");
         } 
     else if (tahun%400 == 0) {
         printf("Leap Year");
         } 
     else {
         printf("Not a Leap Year");
         }
 }  
 return 0;
}