#include <iostream>
using namespace std;
# include<stdio.h>
#include <math.h>
// 7)c �kinci Dereceden Bir Denklemin K�klerini Bulan Program
// Hazal_Kayiket_200114014025_cevap 7)c
/*Fonksiyonlar�n en i�levsel k�sm� tekrarlanan yap�lar�n d�nd�r�lmesini sa�lamakt�r. Programla �retilen �rnek ��kt�lar en sondad�r : 77.sat�r.*/
float sayiGirme(float a) {
	printf("L�tfen say�y� giriniz: ");
	scanf("%f",&a);
	return a;
}
float fark(float a, float b) {
	return a-b;
}

float carp(float a, float b) {
	return a*b;
}
float kareAl(float a) {
	return pow(a,2);
}
float topla(int a, int b) {
	return a+b;
}
float karekok(double a) {
	return sqrt(a);
}
float bol(float a, float b) {
	return a/b;
}
float kokBulma1(float a, float b, float delta) {
	return bol(topla(carp(-1.0,b),karekok(delta)),carp(2.0,a));
}
float kokBulma2(float a, float b, float delta) {
	return bol(fark(carp(-1.0,b),karekok(delta)),carp(2.0,a));
}
float kokBulmaTek(float a, float b) {
	return bol(carp(-1.0,b),carp(2.0,a));
}


int main() { // 7)c �kinci Dereceden Bir Denklemin K�klerini Bulan Program

	setlocale(LC_ALL,"Turkish");

	printf("�kinci dereceden a*x^2 + b*x + c = 0 �eklindeki denkleminden a, b, c katsay�lar� al�narak k�kler programla bulunmaktad�r. \nL�tfen s�rayla a, b ve c katsay�lar�n� giriniz. \n \nAyr�ca ifade �arpanlar� cinsinden de ifade edilmektedir: \n");
	float a, b, c, kok1, kok2, delta;
	//delta = b*b - 4*a*c
	printf("%2.03f\n", (a = sayiGirme(a)));
	printf("%2.03f\n", (b = sayiGirme(b)));
	printf("%2.03f\n", (c = sayiGirme(c)));


	printf("Katsay�lar� a = %2.03f, b = %2.03f, c = %2.03f olan denklem = (%.0f)*x^2 + (%.0f)x + (%.0f) =  0 ise k�kleri :\n ", a, b, c, a, b, c);
	delta = fark(kareAl(b),carp(4,carp(a,c)));
	printf("\nDelta = %2.03f\n", delta);

	if(delta < 0) {
		printf("\n\nDelta s�f�rdan k���kt�r. Ger�ek k�k yok!");
	} else if (delta == 0) {
		printf("\nTek k�k vard�r. x = %2.03f", kokBulmaTek(a,b));
		printf("\n�arpanlar�na ayr�lm�� hali = (x +(%2.03f))^2", carp(-1.0, kokBulmaTek(a,b)));
		printf("\nK�kler toplam� = %2.03f",bol(carp(-1.0,b),a)); //-b/a
		printf("\nK�kler �arp�m� = %2.03f",bol(c,a)); //c/a
	} else {
		printf("\nBirinci k�k = x1 = %2.03f", kokBulma1(a,b,delta));
		printf("\n�kinci k�k = x2 = %2.03f", kokBulma2(a,b,delta));
		printf("\n�arpanlar�na ayr�lm�� hali = (x +(%2.03f))*(x +(%2.03f))", carp(-1.0,kokBulma1(a,b,delta)),carp(-1.0,kokBulma2(a,b,delta)));
		printf("\nK�kler toplam� = %2.03f",bol(carp(-1.0,b),a)); //-b/a
		printf("\nK�kler �arp�m� = %2.03f",bol(c,a)); //c/a
	}

	return 0;
}

/*
�rnek ��kt� 1: 
�kinci dereceden a*x^2 + b*x + c = 0 �eklindeki denkleminden a, b, c katsay�lar� al�narak k�kler programla bulunmaktad�r.
L�tfen s�rayla a, b ve c katsay�lar�n� giriniz.

Ayr�ca ifade �arpanlar� cinsinden de ifade edilmektedir:
L�tfen say�y� giriniz: 1
1,000
L�tfen say�y� giriniz: 0
0,000
L�tfen say�y� giriniz: 6
6,000
Katsay�lar� a = 1,000, b = 0,000, c = 6,000 olan denklem = (1)*x^2 + (0)x + (6) =  0 ise k�kleri :

Delta = -24,000


Delta s�f�rdan k���kt�r. Ger�ek k�k yok!

�rnek 2:
�kinci dereceden a*x^2 + b*x + c = 0 �eklindeki denkleminden a, b, c katsay�lar� al�narak k�kler programla bulunmaktad�r.
L�tfen s�rayla a, b ve c katsay�lar�n� giriniz.

Ayr�ca ifade �arpanlar� cinsinden de ifade edilmektedir:
L�tfen say�y� giriniz: 1
1,000
L�tfen say�y� giriniz: 2
2,000
L�tfen say�y� giriniz: 1
1,000
Katsay�lar� a = 1,000, b = 2,000, c = 1,000 olan denklem = (1)*x^2 + (2)x + (1) =  0 ise k�kleri :

Delta = 0,000

Tek k�k vard�r. x = -1,000
�arpanlar�na ayr�lm�� hali = (x +(1,000))^2
K�kler toplam� = -2,000
K�kler �arp�m� = 1,000
--------------------------------
Process exited after 6.368 seconds with return value 0
Press any key to continue . . .


�rnek ��kt� 3: 
�kinci dereceden a*x^2 + b*x + c = 0 �eklindeki denkleminden a, b, c katsay�lar� al�narak k�kler programla bulunmaktad�r.
L�tfen s�rayla a, b ve c katsay�lar�n� giriniz.

Ayr�ca ifade �arpanlar� cinsinden de ifade edilmektedir:
L�tfen say�y� giriniz: 1
1,000
L�tfen say�y� giriniz: 1
1,000
L�tfen say�y� giriniz: -7
-7,000
Katsay�lar� a = 1,000, b = 1,000, c = -7,000 olan denklem = (1)*x^2 + (1)x + (-7) =  0 ise k�kleri :

Delta = 29,000

Birinci k�k = x1 = 2,000
�kinci k�k = x2 = -3,193
�arpanlar�na ayr�lm�� hali = (x +(-2,000))*(x +(3,193))
K�kler toplam� = -1,000
K�kler �arp�m� = -7,000
--------------------------------
Process exited after 21.76 seconds with return value 0
Press any key to continue . . .

*/
