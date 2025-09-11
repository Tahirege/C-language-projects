#include <stdio.h>
#include <stdlib.h>


/*
Görev: Basit ATM Uygulaması

C dilinde bir ATM simülasyonu yap. Kullanıcıya menü sunacaksın. Kullanıcı istediği işlemi seçebilecek.

Yapılması Gerekenler:

Başlangıç bakiyesi mesela 1000 TL olacak.

Menü şöyle olabilir:

1: Para yatır

2: Para çek

3: Bakiye görüntüle

4: Çıkış

Kullanıcı 2. seçeneği (para çek) seçerse, bakiyeden büyük miktar çekmeye çalışırsa uyarı ver.

Kullanıcı 4’e basınca program sonlanacak.

📌 İpucu:

while döngüsü kullanarak menüyü sürekli tekrar ettir.

switch-case yapısı burada çok işe yarar.

scanf ile kullanıcıdan seçim al.
*/



int main()
{
    int run,para_çekim,yatırım,bakiye,secim;
    run = 1;
    bakiye = 1000;
    while (run==1)
    {
        printf("1: Para yatir\n\n");
        printf("2: Para cek\n\n");
        printf("3: Bakiye goruntule\n\n");
        printf("4: Cikis\n\n");
        scanf("%d",&secim);

        if (secim == 1){
            printf("Bakiyeniz: %d\n\n",bakiye);
            printf("Ne kadar ucret yatirmak istersiniz: \n\n");
            scanf("%d",&yatırım);
            if (yatırım <=0){
                printf("islem gerceklestirilemedi ':('");
                break;
            }
            bakiye += yatırım;
            printf("Yeni bakiyeniz: %d",bakiye);
            run = 0;

        }
        else if (secim == 2){
            printf("Bakiyeniz: %d\n\n",bakiye);
            printf("Ne kadar para cekmek istiyorsunuz: \n\n");
            scanf("%d",&para_çekim);
            if (para_çekim <=0){
                printf("islem gerceklestirilemedi ':('");
                break;}
            while (para_çekim >=500){
                printf("Gunluk en fazla 499 lira cekebilirsiniz!\n\n");
                printf("Bakiyeniz: %d\n\n",bakiye);
                printf("Ne kadar para cekmek istiyorsunuz: \n\n");
                scanf("%d",&para_çekim);
            }
            bakiye -= para_çekim;
            printf("islem basarili!\n\n");
            printf("Yeni bakiyeniz: %d\n\n",bakiye);
            run = 0;
        }

        else if (secim == 3){
            printf("Bakiyeniz: %d",bakiye);
            run = 0;
         }
        else if (secim == 4)
            run = 0;

        else{
            printf("islem gerceklestiremedi ':('");
            run = 0;
        }

    }
    return 0;
}
