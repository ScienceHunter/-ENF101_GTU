#include <iostream>
using namespace std;
# include<stdio.h>
int main() { //Bir d�ng�yle 7 say�s�ndan ba�lay�p 80'e kadar olan say�lar� ��er artt�ran ve elde edilen bu say�lar�n toplam�n� bulan program
	int i, toplam = 0;
	setlocale(LC_ALL,"Turkish");

	printf("7'den ba�lay�p 80'e kadar olan say�lar� ��er artt�ran ve elde edilen bu say�lar�n toplam�n� bulan program �al��maktad�r: \n");
	for (i=7; i<80; i+=3) { //80'e kadar dedi�i i�in 80 dahil edilmedi.
		printf("%d\n",i);
		toplam += i;
	}
	printf("Toplam = %d",&toplam);
	return 0;
}

/* �rnek ��kt�s�: 7'den ba�lay�p 80'e kadar olan say�lar� ��er artt�ran ve elde edilen bu say�lar�n toplam�n� bulan program �al��maktad�r:
7
10
13
16
19
22
25
28
31
34
37
40
43
46
49
52
55
58
61
64
67
70
73
76
79
Toplam = 7339544
--------------------------------
Process exited after 0.1637 seconds with return value 0
Press any key to continue . . . */
