#include <iostream>
using namespace std;
# include<stdio.h>
//5. Soru ��i�e
int main() {
	int i, j, kontrol = 1;
	setlocale(LC_ALL,"Turkish");
	for (i=0; i<2; i++) {
		printf("S�n�f %d\n",i+1);
		for (j=0; j<3; j++) {
			printf("�ube  %d\n",j+1);
			kontrol++;
		}
		printf("\n");
	}

	return 0;
}
/* 
S�n�f 1
�ube  1
�ube  2
�ube  3

S�n�f 2
�ube  1
�ube  2
�ube  3


--------------------------------
Process exited after 0.3847 seconds with return value 0
Press any key to continue . . .*/
