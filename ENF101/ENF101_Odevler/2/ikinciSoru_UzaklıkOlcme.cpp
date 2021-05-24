#include <iostream>
using namespace std;
# include<stdio.h>
#include <math.h>
//2.Soru
int sayiGirme(int a) {
	printf("L�tfen say�y� giriniz: ");
	scanf("%d",&a);
	return a;
}
int fark(int a, int b) {
	return a-b;
}
int kareAl(int a) {
	return pow(a,2);
}
int topla(int a, int b) {
	return a+b;
}
double karekok(double a) {
	return sqrt(a);
}

int main() { //D�rt tamsay�y� okuyup U=Karek�k((x_2-x_1 )^2+(y_2-y_1 )^2 )  form�le g�re Uzakl�k hesaplamas� yapan program

	setlocale(LC_ALL,"Turkish");
	printf("D�rt tamsay�y� okuyup U=Karek�k((x_2-x_1 )^2+(y_2-y_1 )^2 )  form�l�ne g�re Uzakl�k hesaplamas�n� fonksiyonlarla yapan program �al��maktad�r: \n");
	int a, b, c, d;
	a = sayiGirme(a);
	b = sayiGirme(b);
	c = sayiGirme(c);
	d = sayiGirme(d);
	printf("%d-%d = %d\n", a, b, fark(a,b));
	printf("%d-%d = %d\n", c, d, fark(c,d));
	printf("(%d-%d)^2 = %d\n",a, b, kareAl(fark(a,b)));
	printf("(%d-%d)^2 = %d\n",c, d, kareAl(fark(c,d)));
	printf("(%d-%d)^2 + (%d-%d)^2 = %d\n",a, b, c, d, topla(kareAl(fark(a,b)),kareAl(fark(c,d))));
	double toplam = topla(kareAl(fark(a,b)),kareAl(fark(c,d)));
	double uzaklik = karekok(toplam);
	printf("Uzakl�k = Karek�k((%d-%d)^2 + (%d-%d)^2) = %f\n",a, b, c, d, uzaklik);

	return 0;
}

/*�rnek ��kt� 1: 
D�rt tamsay�y� okuyup U=Karek�k((x_2-x_1 )^2+(y_2-y_1 )^2 )  form�l�ne g�re Uzakl�k hesaplamas�n� fonksiyonlarla yapan program �al��maktad�r:
L�tfen say�y� giriniz: 6
L�tfen say�y� giriniz: 8
L�tfen say�y� giriniz: 16
L�tfen say�y� giriniz: 10
6-8 = -2
16-10 = 6
(6-8)^2 = 4
(16-10)^2 = 36
(6-8)^2 + (16-10)^2 = 40
Uzakl�k = Karek�k((6-8)^2 + (16-10)^2) = 6,324555

--------------------------------
Process exited after 11.49 seconds with return value 0
Press any key to continue . . .

�rnek ��kt� 2:
D�rt tamsay�y� okuyup U=Karek�k((x_2-x_1 )^2+(y_2-y_1 )^2 )  form�l�ne g�re Uzakl�k hesaplamas�n� fonksiyonlarla yapan program �al��maktad�r:
L�tfen say�y� giriniz: 8
L�tfen say�y� giriniz: 6
L�tfen say�y� giriniz: 9
L�tfen say�y� giriniz: 4
8-6 = 2
9-4 = 5
(8-6)^2 = 4
(9-4)^2 = 25
(8-6)^2 + (9-4)^2 = 29
Uzakl�k = Karek�k((8-6)^2 + (9-4)^2) = 5,385165

--------------------------------
Process exited after 7.815 seconds with return value 0
Press any key to continue . . .

�rnek ��kt� 3:
D�rt tamsay�y� okuyup U=Karek�k((x_2-x_1 )^2+(y_2-y_1 )^2 )  form�l�ne g�re Uzakl�k hesaplamas�n� fonksiyonlarla yapan program �al��maktad�r:
L�tfen say�y� giriniz: -5
L�tfen say�y� giriniz: -12
L�tfen say�y� giriniz: 7
L�tfen say�y� giriniz: 8
-5--12 = 7
7-8 = -1
(-5--12)^2 = 49
(7-8)^2 = 1
(-5--12)^2 + (7-8)^2 = 50
Uzakl�k = Karek�k((-5--12)^2 + (7-8)^2) = 7,071068

--------------------------------
Process exited after 9.748 seconds with return value 0
Press any key to continue . . .


*/
