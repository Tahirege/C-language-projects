#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area,circumsance,pi,r;
//Variables tanımla
    pi=3.14;
//pi'yi tanımla
    printf("What is the r of the circle: ");
    scanf("%d",&r);
//Kullanıcıdan yarıçapı iste.
    area = pi*r*r;
    circumsance = 2*pi*r;
//Alan ve çevreyi hesapla
    printf("The area is: %f\n",area);
    printf("The circumsance is: %f\n",circumsance);
//Sonuçları yazdır
    return 0;
}
//Buraya yazdıpım şeyleri makine göremez :)