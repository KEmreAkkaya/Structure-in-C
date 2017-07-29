#include <stdio.h>
#include <conio.h>



int i = 0;
int dizi[30] = { 113, 122, 123, 0, 124, 143 };//Başlagıçta belirli sicil noya sahip kayıtlı öğrenciler var.
int sayac = 0;



int sicilno(int h){


	while (i != 30) // Sıfır içermeyen eleman sayısını bul
	{
		if (dizi[i] != 0)
		{
			sayac++;
		}
		i++;
	}
	for (i = 0; i < sayac + 1; i++) //for döngüsüyle eleman var mı kontrol et yoksa yeni ekle.
	{

		if (dizi[i] == h)
		{
			printf("Girilen sicil no =%d Kayitlidir.\n", h);

			//sayac = sayac - 1;


			for (i = 0; i<30; i++)
			{
				if (dizi[i]==h)
				{
					h++;
				}
			}

			for (i = 0; i<30; i++){
				if (dizi[i]!=h)
				 if (dizi[i] == 0)
				{
					printf("Yeni sicil no: %d ", h);
					dizi[i] = h;
					return h;
					break;
				}

			}
		}


		if (dizi[i] == 0)
		{
			dizi[i] = h;
			printf("\nEklenen dizi[%d]= %d \n", i, h);
			return h;
			break;
		}
		
	}

}



struct Notlar{

	float vize;
	float quiz1;
	float quiz2;
	float odev;
	float final;
	float ortalama;
};

struct Dersler{

	char ogrenciadi[30];
	struct Notlar not;
};

int main(){
	int a = 0;
	struct Dersler x;


	printf("\nSicil no giriniz(Cikis icin -1):");
	scanf("%d", &a);


	while (a >= 0)
	{


		a = sicilno(a);

	     printf("\nOgrenci adi giriniz:\n");
	    scanf("%s", &x.ogrenciadi);
		
	    printf("\nOgrencinin vizesini giriniz:(0-100 arası)\n");
	    scanf("%f", &x.not.vize);
			
	    printf("\nOgrencinin finalini giriniz:(0-100 arası)\n");
     	scanf("%f", &x.not.final);


		printf("\nOgrencinin quiz1 giriniz:(0-100 arası)\n");
		scanf("%f", &x.not.quiz1);

		printf("\nOgrencinin quiz2 giriniz:(0-100 arası)\n");
		scanf("%f", &x.not.quiz2);


		printf("\nOgrencinin odev notunu giriniz: (0-100 arası)\n");
		scanf("%f", &x.not.odev);


		x.not.ortalama = (x.not.final + x.not.vize + x.not.quiz1 + x.not.quiz2 + x.not.odev) / 5;
		printf("\n%d sicil noya sahip %s isimli ogrencinin ortalaması=%f", a, x.ogrenciadi, x.not.ortalama);

		printf("\nSicil no giriniz(Cikis icin -1):");
		scanf("%d", &a);


	}
	for (i = 0; i<30; i++)
	{

		printf("dizi[%d]= %d \n", i, dizi[i]);
	}

	
	system("pause");
	
	return 0;
}
