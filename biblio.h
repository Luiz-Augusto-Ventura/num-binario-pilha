//Pilha
//#include <iostream>

#define TAM 4
typedef char Elem;
struct Pilha
{
	Elem M[TAM];
	int Topo;	
};

void Init(Pilha *P);
void Push(Pilha *,Elem);
Elem Pop(Pilha*);
char Empty(Pilha *);
void Mostra(Pilha *);
/* *P é para onde P aponta.  */

void Init(Pilha *P)
{
	P->Topo=0;
}
void Push(Pilha *P,Elem X)
{
	if (P->Topo<TAM)
	{
		P->M[P->Topo]=X;
		P->Topo++;
	}
}
Elem Pop(Pilha *P)
{
	if (P->Topo>0)
	{
		P->Topo--;
		return P->M[P->Topo];
	}
}
char Empty(Pilha *P)
{
	return P->Topo==0;
}
void Mostra(Pilha *P)
{
	printf("[");
	for (int I=0;I<P->Topo;I++)
	{
		printf("%c",P->M[I]);
		if (I<P->Topo-1)
		{
			printf(",");
		}
	}
	printf("]");
	
}
	

