#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(){
        int süre,saat,kalan1,dakika,saniye;
    printf("Kaç saniye geriye saymak istersiniz: ");
    scanf("%d",&süre);

    while (süre>0){
        saat = süre / 3600;
        kalan1 = süre %3600;
        dakika = kalan1 / 60;
        saniye = kalan1 % 60;
        printf("%d:%d:%d\n",saat,dakika,saniye);
        süre -= 1;
        sleep(1);

    }
    printf("Süre bitti!");
    return 0;
}
