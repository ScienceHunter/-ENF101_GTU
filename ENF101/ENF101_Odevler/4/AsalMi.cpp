#include <iostream>
using namespace std;
# include<stdio.h>
#include <conio.h>
int main() { //4. Soru Klavyeden girilen say�n�n asal olup olmad���n� bulan program.
// 43. sat�rdan itibaren �rnek ��kt�lar mevcuttur.
// Hazal_Kayiket_200114014025
	int sayi;
	bool asalMi = true;
	setlocale(LC_ALL,"Turkish");
basa:
	printf("Klavyeden girilen say�n�n asal olup olmad���n� bulan program �al��maktad�r: \nL�tfen asal olup olmad���n� ��renmek istedi�iniz 1'den b�y�k say�y� giriniz: ");
	scanf("%d",&sayi);

	if (sayi == 1 ) {
		printf("%d asal de�ildir.",sayi);
		printf("Yeniden giri� yapman�z i�in ba�lang�ca y�nlendiriliyorsunuz.");
		goto basa;
	}
	if (sayi < 1) {
		printf("Ge�ersiz giri�!");
		printf("Yeniden giri� yapman�z i�in ba�lang�ca y�nlendiriliyorsunuz.");
		goto basa;
	}

	if( sayi >1) {


		for (int i = 2; i < sayi; i++) {
			if(sayi % i == 0) {
				asalMi = false;
			}
		}

		if(asalMi) {
			printf("Say� asald�r.");
		} else {
			printf("Say� asal de�ildir.");
		}
	}
}

/* �rnek ��kt� 1: 

Klavyeden girilen say�n�n asal olup olmad���n� bulan program �al��maktad�r:
L�tfen asal olup olmad���n� ��renmek istedi�iniz 1'den b�y�k say�y� giriniz: 47
Say� asald�r.
--------------------------------
Process exited after 6.549 seconds with return value 0
Press any key to continue . . .


�rnek ��kt� 2: 

Klavyeden girilen say�n�n asal olup olmad���n� bulan program �al��maktad�r:
L�tfen asal olup olmad���n� ��renmek istedi�iniz 1'den b�y�k say�y� giriniz: 2
Say� asald�r.
--------------------------------
Process exited after 2.649 seconds with return value 0
Press any key to continue . . .

�rnek ��kt� 3: 

Klavyeden girilen say�n�n asal olup olmad���n� bulan program �al��maktad�r:
L�tfen asal olup olmad���n� ��renmek istedi�iniz 1'den b�y�k say�y� giriniz: -9
Ge�ersiz giri�!Yeniden giri� yapman�z i�in ba�lang�ca y�nlendiriliyorsunuz.Klavyeden girilen say�n�n asal olup olmad���n� bulan program �al��maktad�r:
L�tfen asal olup olmad���n� ��renmek istedi�iniz 1'den b�y�k say�y� giriniz: 27
Say� asal de�ildir.
--------------------------------
Process exited after 14.84 seconds with return value 0
Press any key to continue . . .
*/


