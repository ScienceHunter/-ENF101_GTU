#include <iostream>
using namespace std;
#include <stdio.h>
//1. Soru OBEB - OKEK Hesab�
int obeb(int a, int b) {
	if (b == 0)
			return a;
		return obeb(b, a % b); //Burada �klid Algoritmas� kullan�larak kendi kendini �a��ran fonksiyon kullan�lm��t�r.
		//�klid Algoritmas� : a = b�Q + r ve  != 0 ise bu durumda OBEB(a,b) = OBEB(b,r) . Bizim buradaki r'miz r = a % b olan kalan olacakt�r.
}

int okek(int a, int b) {
	return (a * b) / obeb(a, b); //Bilindi�i �zere OBEB *OKEK = a*b'yi verir. Bu nedenle �nce OBEB bulundu sonras�nda da (a*b) OBEB'e b�l�nerek OKEK elde edildi.
}

int main() {
	setlocale(LC_ALL,"Turkish");
	int a, b;

	printf("Bu program ile girdi�iniz iki say�n�n OBEB ve OKEK'ini hesaplam�� olacaks�n�z: \nL�tfen ilk say�y� giriniz: ");
	scanf("%d",&a);
	printf("L�tfen son say�y� giriniz: ");
	scanf("%d",&b);
	/*	if( a != (int) a || b != (int) b  ) { // Ke�ke bu �al��sayd�. Nereyi g�remedi�imi ��zemedim.
		printf("Hatal� giri� yapt�n�z!");
	} else {
		printf("EBOB: %d\n",obeb(a,b));//Ortak b�lenlerin en b�y���
		printf("EKOK: %d",okek(a,b));//Ortak katlar�n en k�����
	}
	 */
	printf("EBOB: %d\n",obeb(a,b));//Ortak b�lenlerin en b�y���
	printf("EKOK: %d",okek(a,b));//Ortak katlar�n en k�����

	return 0;
}
/*�rnek ��kt�1:
Bu program ile girdi�iniz iki say�n�n OBEB ve OKEK'ini hesaplam�� olacaks�n�z:
L�tfen ilk say�y� giriniz: 15
L�tfen son say�y� giriniz: 20
EBOB: 5
EKOK: 60
--------------------------------
Process exited after 12.45 seconds with return value 0
Press any key to continue . . .


�rnek ��kt� 2: (Harf Kontrol� olabilmeli)
Bu program ile girdi�iniz iki say�n�n OBEB ve OKEK'ini hesaplam�� olacaks�n�z:
L�tfen ilk say�y� giriniz: kl
L�tfen son say�y� giriniz: EBOB: 1
EKOK: 0
--------------------------------
Process exited after 12.16 seconds with return value 0
Press any key to continue . . .

�rnek ��kt� 3:
Bu program ile girdi�iniz iki say�n�n OBEB ve OKEK'ini hesaplam�� olacaks�n�z:
L�tfen ilk say�y� giriniz: 96
L�tfen son say�y� giriniz: 26
EBOB: 2
EKOK: 1248
--------------------------------
Process exited after 17.86 seconds with return value 0
Press any key to continue . . .


*/
