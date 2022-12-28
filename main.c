#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include "sorularvecevaplar.h"
#include "fonksiyonlar.h"
#include <unistd.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	FILE *yz1,*yz2,*yz3,*yz4;
	yz1=fopen("sonuc1.txt","r");
	yz2=fopen("sonuc2.txt","r");
	yz3=fopen("sonuc3.txt","r");
	yz4=fopen("sonuc4.txt","r"); 
	
	
    int inputanswers[10];
    int puan;
    printf("********Bu 10 Soruluk Evet/Hayır Testine Göre Ne Kadar Anksiyetiksin?********\n\n\nBu testimize göre size ne kadar anksiyetik olduğunuzu söylüyoruz?\nHazırsanız;\nHaydi Teste!!\nNOT: Bu bir eğlence testidir.Konuyla ilgili işin uzmanına danışmanızı tavsiye ederiz:))\n\n\nAşağidaki sorulari evet(1) veya hayir(0) olarak cevaplandiriniz.\n\n");
    int i;
    for (i = 0; i < 10; i++) {
        printf("%s",soruvecevaplar[i].soru);
        scanf("%d",&inputanswers[i]);
    }
    puan = puanhesaplayici(soruvecevaplar,inputanswers);
    printf("\nGirdiğiniz değerlere göre sonuçlarınız değerlendiriliyor...\n\n");
    sleep(3);
    cikti(puan,yz1,yz2,yz3,yz4);
    return 0;
}
