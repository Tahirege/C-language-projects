#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int num1,num2;
    
    printf("Sayi seciniz:");
    scanf("%d",&num1);
    
    printf("Üssü kaç almak istiyorsunuz?");
    scanf("%d",&num2);

    double cevap = pow(num1, num2);   // double olarak tut
    printf("Sonuc: %.0f\n", cevap);   // küsurat istemiyorsan .0f yaz
    return 0;

}