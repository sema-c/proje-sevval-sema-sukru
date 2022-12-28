#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int puanhesaplayici(struct soruCevapPuan sorular[],int cevaplar[])
{
	setlocale(LC_ALL, "Turkish");
    int temppuan = 0;
    int i;
        for (i = 0; i<10;i++)
    {
        if (sorular[i].cevap==cevaplar[i])
        {
            temppuan += sorular[i].sorupuani;
        }
    }
    return temppuan;
}
void cikti(int puan, FILE *yz1,FILE *yz2,FILE *yz3,FILE *yz4)
{
	setlocale(LC_ALL, "Turkish");
	int j=0;
	char kelime[50][20];
    if(puan <= 15)
    {
      
      while(!feof(yz1))
      {
      		fscanf(yz1,"%s",&kelime[j]);
       	printf("%s ",kelime[j]);
       	j++;
	  }
       	
	   
    }
    else if(puan <= 35)
    {
         while(!feof(yz2))
      {
      		fscanf(yz1,"%s",&kelime[j]);
       	printf("%s ",kelime[j]);
       		j++;
	  }
       	
    }
    else if(puan <= 64)
    {
          while(!feof(yz3))
      {
      		fscanf(yz1,"%s",&kelime[j]);
       	printf("%s ",kelime[j]);
       		j++;
	  }
       	
    }
    else
    {
          while(!feof(yz4))
      {
      		fscanf(yz1,"%s",&kelime[j]);
       	printf("%s ",kelime[j]);
       		j++;
	  }
       	
    }
}
