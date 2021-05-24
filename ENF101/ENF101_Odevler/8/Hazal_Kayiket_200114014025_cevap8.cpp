#include <iostream>
using namespace std;
# include<stdio.h>
#include <math.h>
// 8)d Diziler Konusunda 3*3l�k Bir Matrisin Tersini, �arp�m�n�, Kofakt�r�n�, Determinant�n�, Transpozunu Hesaplayan Program
// 85. sat�rdan itibaren �rnek ��kt�lar mevcuttur.
// Hazal_Kayiket_200114014025_cevap 8)d

int main () {
	setlocale(LC_ALL,"Turkish");
	printf("Bu program 3*3l�k bir matrisin transpozunu, karesini, toplam�n�, determinant�n� hesaplamaktad�r. \nL�tfen s�ras�yla sat�r, s�tun olarak verilmi� de�erleri giriniz.\n");
	int matris[3][3], cozum[3][3];
	double det,kof[3][3],ters[3][3];

//Matrisin elemanlar�n� burada girmekteyiz.
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			printf("<%d %d> = ",i, j);
			scanf("%d",&matris[i][j]) ;
		}
		printf("\n");
	}//Giri� i�lemi burada sona ermektedir.

//Girilen matrisin g�sterilmesi
	printf("Girilen Matris : \n");

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	}

//*****************************************

//Girilen matrisin transpozu(S�tunla sat�r de�i�tirilmesi sonucu olu�maktad�r)
	printf("\nMatrisin Transpozu : \n");
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			printf("%d\t",matris[j][i]);
		}
		printf("\n");
	}

//********************************

//Matrisin karesi i�in �nce for'dan sonuc elde edildi sonras�nda da Matrisin Karesi yazd�r�ld�.
	printf("\nMatrisin Karesi : \n");
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cozum[i][j]=0;

			cozum[i][j]+= (matris[i][j] * matris[j][i]);
			printf("%d\t",cozum[i][j]);
		}
		printf("\n");
	}

//*********************************

//Matrisin toplam� i�in for'dan sonu� elde edildi ve Matris toplam� yazd�r�ld�.
	printf("\nMatrisin Toplam� : \n");
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cozum[i][j]=0;

			cozum[i][j]+= (matris[i][j] + matris[i][j]);
			printf("%d\t",cozum[i][j]);
		}
		printf("\n");
	}
//Toplam�n yaz�lmas�


//*******************

//Determinant hesab�
	det = (matris[0][0]*((matris[1][1]*matris[2][2])-(matris[1][2]*matris[2][1]))-matris[0][1]*((matris[1][0]*matris[2][2])-(matris[1][2]*matris[2][0]))+matris[0][2]*((matris[1][0]*matris[2][1]-matris[1][1]*matris[2][0])));
	printf("\nDeterminant = %f \n",det);

	return 0;
}



/*�rnek ��kt� 1:
Bu program 3*3l�k bir matrisin tersini, karesini, toplam�n�, kofakt�r�n�, determinant�n�, transpozunu hesaplamaktad�r.
L�tfen s�ras�yla sat�r, s�tun olarak verilmi� de�erleri giriniz.
<0 0> = 1
<0 1> = 5
<0 2> = 3

<1 0> = 2
<1 1> = 4
<1 2> = 7

<2 0> = 4
<2 1> = 6
<2 2> = 2

Girilen matris :
1       5       3
2       4       7
4       6       2

Matrisin Transpozu :
1       2       4
5       4       6
3       7       2

Matrisin Karesi :
1       10      12
10      16      42
12      42      4

Matrisin Toplam� :
2       10      6
4       8       14
8       12      4

Determinant = 74,000000

--------------------------------
Process exited after 62.81 seconds with return value 0
Press any key to continue . . .

�rnek ��kt� 2:
Bu program 3*3l�k bir matrisin tersini, karesini, toplam�n�, kofakt�r�n�, determinant�n�, transpozunu hesaplamaktad�r.
L�tfen s�ras�yla sat�r, s�tun olarak verilmi� de�erleri giriniz.
<0 0> = 3
<0 1> = 2
<0 2> = 5

<1 0> = 0
<1 1> = -4
<1 2> = 1

<2 0> = 2
<2 1> = 3
<2 2> = 4

Girilen Matris :
3       2       5
0       -4      1
2       3       4

Matrisin Transpozu :
3       0       2
2       -4      3
5       1       4

Matrisin Karesi :
9       0       10
0       16      3
10      3       16

Matrisin Toplam� :
6       4       10
0       -8      2
4       6       8

Determinant = -13,000000

--------------------------------
Process exited after 14.47 seconds with return value 0
Press any key to continue . . .

�rnek ��kt� 3:

Bu program 3*3l�k bir matrisin tersini, karesini, toplam�n�, kofakt�r�n�, determinant�n�, transpozunu hesaplamaktad�r.
L�tfen s�ras�yla sat�r, s�tun olarak verilmi� de�erleri giriniz.
<0 0> = 2
<0 1> = -1
<0 2> = 6

<1 0> = -3
<1 1> = 4
<1 2> = -5

<2 0> = 8
<2 1> = -7
<2 2> = -9

Girilen Matris :
2       -1      6
-3      4       -5
8       -7      -9

Matrisin Transpozu :
2       -3      8
-1      4       -7
6       -5      -9

Matrisin Karesi :
4       3       48
3       16      35
48      35      81

Matrisin Toplam� :
4       -2      12
-6      8       -10
16      -14     -18

Determinant = -141,000000

--------------------------------
Process exited after 25 seconds with return value 0
Press any key to continue . . .


�rnek ��kt� 4:
Bu program 3*3l�k bir matrisin tersini, karesini, toplam�n�, kofakt�r�n�, determinant�n�, transpozunu hesaplamaktad�r.
L�tfen s�ras�yla sat�r, s�tun olarak verilmi� de�erleri giriniz.
<0 0> = 1
<0 1> = 4
<0 2> = 2

<1 0> = 3
<1 1> = 3
<1 2> = 1

<2 0> = 2
<2 1> = 0
<2 2> = 1

Girilen Matris :
1       4       2
3       3       1
2       0       1

Matrisin Transpozu :
1       3       2
4       3       0
2       1       1

Matrisin Karesi :
1       12      4
12      9       0
4       0       1

Matrisin Toplam� :
2       8       4
6       6       2
4       0       2

Determinant = -13,000000

--------------------------------
Process exited after 15.69 seconds with return value 0
Press any key to continue . . .


*/

