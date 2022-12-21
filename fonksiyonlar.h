#include <stdio.h>
#include<locale.h>

struct soru 
{
    char soru[200];
    int cevap;
    int sorupuani;
};

int puanhesaplayici(struct soru sorular[],int cevaplar[])
{
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

char sonuclar[1000][1000] =
{
	"Bu hayatta herhangi bir şey umrunda olmadığı için psikolojik olarak gayet iyi durumdasın. Her şeyi kafasına takmayan, hayattan zevk almaya çalışan bir insansın. Mutluluğun öyle büyük şeylere bağlı değil. Keyfine bakan, rahat bir insansın. Etrafındaki insanların ne söylediği veya ne düşündüğü seni ilgilendirmiyor. Yakınındaki insanlar seni tanımlayacak olursa güler yüzlü ve pozitif bir insan olduğunu söyler. İnsanlar seninle vakit geçirmekten keyif alır. Psikolojik olarak sağlıklı olduğun açıkça söylenebilir\n",
	"Yaptığın seçimler, vakit geçirdiğin insanlar seni geçici bir mutsuzluğa sürüklemiş olsa gerek. Bu süreç senin direncine göre çok kısa olabilir veya uzayabilir. Kendinle yüzleşmek ve insanlarla olan ilişkilerini ve yaptığın fedakârlıkları gözden geçirip özgüvenini yükseltebilir ve bu süreci sorunsuz atlatabilirsin. Psikolojik olarak çok yıpranmış gözükmüyorsun dolayısıyla toparlanman çok da zor olmayacaktır. Güvendiğin ve sevgisinden emin olduğun insanlarla daha fazla vakit geçirmeyi ve kendini onlara açmayı deneyebilirsin.\n",
	"Anlaşılan insanların çarpık ilişkilerinden, verilen hiçbir çabanın karşılık görmemesinden, iç dünyanın anlaşılmamasından yorulmuş gibisin. Beklentiler, gelecek kaygıları, insanların anlayışsızlığı ve dünyadaki adaletsiz düzen, ufacık şeyleri kendine kaygı konusu edinen seni psikolojik anlamda seni çok yıpratmış. Biraz dinlenmeye ihtiyacın var. Kendini kapatma ve kimseyle görüşmeme eğiliminde olabilirsin fakat özellikle bu dönemde birilerinden yardım almak senin için iyi olabilir. Profesyonel yardıma başvurman bu dönemi çabucak atlamana fayda sağlayabilir. Bunun dışında egzersiz yapmak be güvendiğin insanlarla vakit geçirmek de senin için iyi olacaktır. Herkesin problemini ve tüm bu adaletsizlikleri sırtlanmaya çalışmayı bırakmalısın.\n",
	"Son zamanlarda psikolojik anlamda pek sağlıklı görünmüyorsun. Çoğunlukla kendini yorgun ve halsiz hissediyor olabilirsin. Hiçbir şeyden keyif almıyor gibisin. Kendini eve kapatmış ve kimseyle görüşmek istemiyor olabilirsin. İnsanların senin içsel dünyanı anlamadığı ortada. İnsanlara bir şey anlatırken seni tam anlamıyla dinlediklerinden emin olamıyor olabilirsin. Olmadığın biri gibi davranmaktan yorulduğun için kendinle baş başa kalmayı tercih etmiş gibisin.\n"
};

void cikti(int puan)
{
    if(puan <= 15)
    {
        printf(sonuclar[0]);
    }
    else if(puan <= 35)
    {
        printf(sonuclar[1]);
    }
    else if(puan <= 64)
    {
        printf(sonuclar[2]);
    }
    else
    {
        printf(sonuclar[3]);
        }
}
