#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* system("beep -f 750 -l 300"); // 750 Hz frekans, 300 ms uzunluk

Bir zamanlayıcı uygulaması yap. Kullanıcı saniye girsin ve program
bu süreyi geriye saysın ve bitince ses çıkarsın.
*/

/*
1-kullanıcıdan saniyeyi al
2-bunu saat dakika saniye olarak ayarla
3-bunu geriye saydır (saat:dakika:saniye) ps:fonksiyon olarak
4-sesi ekle ve süre bitince çağır
*/

int geri_say()
{
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




int main()
{
    int süre,dakika,saniye,saat,kalan1;
    printf("Kaç saniye geriye saymak istersiniz: ");
    scanf("%d",&süre);

    int geri_say();
    
    

    printf("Süre bitti.");
   // system("beep -f 750 -l 300");

    return 0;
}

