#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNumber, kalan1, kalan2, hane_toplam;
    int hane1, hane2, hane3, hane4;

    printf("4 Basamakli bir sayi giriniz: ");
    scanf("%d",&myNumber);

    hane4 = myNumber / 1000;        // binler basamağı
    kalan1 = myNumber % 1000;

    hane3 = kalan1 / 100;           // yüzler basamağı
    kalan2 = kalan1 % 100;

    hane2 = kalan2 / 10;            // onlar basamağı
    hane1 = kalan2 % 10;            // birler basamağı

    hane_toplam = hane1 + hane2 + hane3 + hane4;  // toplama işlemi

    printf("Rakamlar toplami: %d\n", hane_toplam);

    return 0;
}
