#include <stdio.h>
#include <locale.h>
#include "fonksiyonlar.h"
#include "sorularvecevaplar.h"
#include <unistd.h>


int main()
{
	setlocale(LC_ALL, "Turkish");
    int inputanswers[10];
    int puan;
    printf("                   Bu 10 Soruluk Evet/Hayır Testine Göre Yüzde Kaç Anksiyetiksin?\n\n\n");
    printf("Bu testimize göre size yüzde kaç anksiyetik olduğunuzu söylüyoruz?\nHazırsanız;\nHaydi Teste!!\n");
    printf("NOT: Bu bir eğlence testidir.Konuyla ilgili işin uzmanına danışmanızı tavsiye ederiz:))\n\n\n");
    printf("Aşağidaki sorulari evet(1) veya hayir(0) olarak cevaplandiriniz.\n\n");
    int i;
    for ( i = 0; i < 10; i++) {
        printf("%s",sorularvecevaplar[i].soru);
        scanf("%d",&inputanswers[i]);
    }
    puan = puanhesaplayici(sorularvecevaplar,inputanswers);
    printf("\nGirdiğiniz değerlere göre sonuçlarınız değerlendiriliyor...\n\n");
    sleep(3);
    cikti(puan);
    return 0;
}