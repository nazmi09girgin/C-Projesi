#include <stdio.h>
#include <stdlib.h>

/*   Müsait olmadýðým günler ve saatleri
 Salý       9.30-12.10 ve 13.30-17.10
 Çarþamba   9.30-12-10 ve 17.30-18.30				                                                                
 Perþembe   10.30-12.10 ve 13.30-17.10																			   
 Cuma 		10.40-12.10 ve 15.30-17.10
*/																			   
																			    
void mesajyazdir();
int islemyaptir();
void fonk3();

int main()
{
 int tus,i,gun,secim,onay,c;                                                              
 float saat;
 char ileti[50];
 int dizi[10] = {10,9,8,7,6,5,4,3,2,1};

 printf("Robot olmadiginizi anlayabilmem icin lutfen 0'i tuslayiniz.\n");
 scanf("%d",&tus);
 if (tus==0)
{
 printf("Lutfen arama yapmak istediginiz gunu seciniz\n");
 printf(" 1)Pazartesi\n 2)Sali\n 3)Carsamba\n 4)Persembe\n 5)Cuma\n 6)Cumartesi\n 7)Pazar\n");
 scanf("%d",&gun);
 switch(gun)
 {
 	case 2:
 		
 	printf("Lutfen arama yapmak istediginiz saati yaziniz\n");	
 	scanf("%f",&saat); 	
 	if ((saat>=9.30) && (saat<=12.10)) 
	{
	mesajyazdir();	
	}  
	else if ((saat>=13.30) && (saat<=17.10))
    {
 	mesajyazdir();	
    }
	else
    fonk3();
    
	break;	
	
 	case 3:
	 
	printf("Lutfen arama yapmak istediginiz saati yaziniz\n");	
 	scanf("%f",&saat);	
 	if ((saat>=9.30) && (saat<=12.10)) 
	{
    mesajyazdir();
	}   
 	else if ((saat>=17.30) && (saat<=18.30))
    {
 	mesajyazdir();
    }
	else
    fonk3();
	 
	break;
	 
	case 4:
	
	printf("Lutfen arama yapmak istediginiz saati yaziniz\n");	
 	scanf("%f",&saat);	
 	if ((saat>=10.30) && (saat<=12.10)) 
	{
	mesajyazdir();	
	}   
 	else if ((saat>=13.30) && (saat<=17.10))
    {
 	mesajyazdir();
    }
	else
    fonk3();
		
	break;
		
	case 5:
	
	printf("Lutfen arama yapmak istediginiz saati yaziniz\n");	
 	scanf("%f",&saat); 	
 	if ((saat>=10.40) && (saat<=12.10)) 
	{
	mesajyazdir();	
	}   
 	else if ((saat>=15.30) && (saat<=17.10))
    {
 	mesajyazdir();
    }
	else
    fonk3();
	
	break;
	
	default:
	
	fonk3();	
		
	break;	
  }
 
}
 else
{
 	printf("0'i tuslamadiginiz icin spam numara olarak kaydedildiniz.\n\n" );
 	
 	while (3!=secim)
{
	printf("Spam numaradan cikarilmak icin yapabileceginiz islemler:\n 1)Musteri hizmetlerini ara\n 2)Verilen islemi yap\n 3)Cikis yap\n ");
	scanf("%d",&secim);
	
	switch(secim)
  {
	case 1:
	printf("Musteri hizmetlerine baglaniliyor lutfen bekleyiniz.\nYapmak istediginiz islemi yaziniz: ");
	scanf("%s",ileti);
	printf("Yapilacak islem: %s onayliyor musunuz?\n",ileti);
	printf("Evet icin 1'i\nHayir icin 2'yi tuslayiniz\n");
	scanf("%d",&onay);
	
	switch(onay)
	{
	case 1:
	printf("Spam numara olmaktan cikarildiniz.Iyi gunler dileriz. Cikis yapmak icin 3'e basiniz\n\n");
	break;
	
	case 2:
	printf("Islem iptal edildi. Iyi gunler dileriz.\n");
	break;
	
	default:
	printf("Hatali tuslama lutfen tekrar deneyiniz.\n");
	break;	
		
	}
	break;
	
	case 2:
	
	c=islemyaptir();
	
	if(c==99)
	printf("Spam numara olmaktan cikarildiniz.Iyi gunler dileriz. Cikis yapmak icin 3'e basiniz\n\n");
	else
	printf("Hatali tuslama lutfen tekrar deneyiniz.\n\n");
	
	break;
	
	default:
	
	break;	
  }    
}
for(i=0;i<10;i++)
 	 {
	printf("Arama %d saniye sonra iptal edilecektir.\n",dizi[i]);    
	 } 	
	printf("Arama iptal edildi.");	
}	
	
	
	return 0;
}

//********Fonksiyonlar***********
	
void mesajyazdir()
 {
 	printf("Aradiginiz kisi suan musait degil. Lutfen mesaj birakiniz.\n");
 	char mesaj[50];
 	scanf("%s",mesaj);
 	printf("Mesajiniz: %s olarak gonderilmistir.",mesaj);
 	
 }	
	
int islemyaptir()
{
 
 int a,b,sonuc;
 int matris[3][3] = {{8,12,9,},{17,6,11},{14,19,3}};
 
 	for(a=0;a<3;a++)
  {
	for(b=0;b<3;b++)
	{
	printf("%4d +",matris[a][b]);
	}	
	printf("\n");
  }
	printf("\t\t  = ");
	scanf("%d",&sonuc);
	
	if(sonuc==99)
 	return 99;
 	
 	else
 	return 0;
 	
 }	
	
void fonk3()
{
	printf("Aradiginiz kisiye baglaniliyor lutfen bekleyiniz");
}









