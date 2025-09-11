#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Görev:
Bir sayinin Armstrong sayi olup olmadigini kontrol eden bir program yaz.
Tanim:
Bir sayinin basamaklarindaki her rakamin, basamak sayisi kadar
üssü alinarak toplanmasi sayinýin kendisine esitse bu sayiya Armstrong sayi denir.
*/
int main()
{
    int number,digit_1,digit_2,digit_3,digit_4;
    int remain_1,remain_2;
    printf("Sayi giriniz(4 basamakli): ");
    scanf("%d",&number);
    digit_1 = number / 1000;
    remain_1 = number %1000;
    digit_2 = remain_1 / 100;
    remain_2 = remain_1 % 100;
    digit_3 = remain_2 / 10;
    digit_4 = remain_2 % 10;

    if (pow(digit_1,4)+pow(digit_2,4)+pow(digit_3,4)+pow(digit_4,4)==number){
        printf("%d sayisi armstrong sayidir.\n\n",number);
    }
    else {
        printf("%d sayisi armstrong sayi degildir.\n\n",number);
    }
    return 0;
}
