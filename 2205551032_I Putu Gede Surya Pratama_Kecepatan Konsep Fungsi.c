#include <stdio.h>

int hitung_kecepatan (int a, int b){
	int v;
	v = a/b;
	return v;
}
int main ()
{
	int s, t, v;
	printf("===========================\n");
	printf ("||Program Rumus Kecepatan||\n");
	printf("===========================\n\n");
	printf ("===========================\n");
	printf("masukan s (jarak): ");
	scanf("%d", &s);
	printf ("masukan t (waktu) : ");
	scanf ("%d", &t);
	printf ("===========================\n\n");
	printf ("===========================\n");
	v = hitung_kecepatan(s,t);
	printf("(v) Kecepatan : %d Km/Jam\n", v);
	return 0;
}
