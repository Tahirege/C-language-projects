#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Zor Seviye Görev: Sayı Tahmin Oyunu

Bilgisayar 1–100 arasında rastgele bir sayı tutsun.

Kullanıcıdan tahmin iste.

“Daha büyük” veya “Daha küçük” diye ipucu ver.

Kullanıcı doğru bilene kadar devam etsin.

Deneme sayısını da en sonunda yazdır.*/

int main(){
    int sayi,tahmin,run,deneme;
    srand(time(NULL));
    sayi = rand() % 100;   // 0–99 arası sayı üretir
    run = 1;
    deneme=0;
    while (run==1){
        printf("Lütfen sayi tahmin ediniz(0-99 arasi): ");
        scanf("%d",&tahmin);
        if (tahmin>sayi){
            printf("Tahmininiz sayidan daha büyük!\n");
            deneme +=1;
            continue;
        }
        if (sayi>tahmin){
            printf("Tahmininiz sayidan daha küçük!\n");
            deneme +=1;
            continue;
        }
        else{
            deneme +=1;
            run = 0;}

    }
    printf("Tebrikler, kazandiniz!!!\n");
    printf("Doğru tahmin: %d\n", sayi);
    printf("Toplam %d kere denediniz.\n\n\n",deneme);
    return 0;
}