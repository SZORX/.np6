#include <stdio.h>

int main()
{
	int x, y, wynik;
	printf("\nPodaj wartosc x: ");
	scanf("%d",x);
	printf("\nPodaj wartosc y: ");
	scanf("%d",y);
	wynik = x + y;
	printf("\nWynik dodawania liczb %d oraz %d jest rowny %d",x,y,wynik);
	return 0;
}
