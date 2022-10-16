#include <stdio.h>
#include <stdlib.h>
int hitung_luas (int sisi){
	int luas;
	int keliling;
	luas = sisi*sisi;
	keliling = 4*sisi;
	return luas;
}
int hitung_keliling (int sisi) {
	int keliling;
	keliling = 4*sisi;
	return keliling;
}
int main (){
	int s, l, k;
	printf ("==============================================\n");
	printf (" ||Program Hitung Luas dan Keliling Persegi||\n");
	printf ("==============================================\n\n");
	printf ("==================\n");
	printf ("Masukan Sisi: ");
	scanf("%d", &s);
	printf ("==================\n\n");
	printf("========================\n");
	l = hitung_luas (s);
	k = hitung_keliling (s);
	printf(" Hasil luas Persegi : %d \n", l);
	printf(" Hasil keliling persegi : %d\n ", k);
	printf("========================");
	return 0;
}

