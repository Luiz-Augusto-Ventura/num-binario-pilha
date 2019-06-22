#include <iostream>
#include "biblio.h"
main()
{
	Pilha P1;
	Init(&P1);
	int N;
	printf("Entre com o valor: ");
	scanf("%d",&N);
	do
	{
		Push(&P1,N % 2);
		N=N / 2;
	} while(N!=0);
	printf("Binario: ");
	while (!Empty(&P1))	
	{
		printf("%d",Pop(&P1));
	}	
	printf("\n");
	system("pause");
}
