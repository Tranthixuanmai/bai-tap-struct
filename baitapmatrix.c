#define size 5
#include <stdio.h>

typedef struct MA_TRAN {
	int Matrix[size][size];
	int d, c; 
}MT;
void nhap(MT *a); //truyen tham bien
void xuat(MT a); //truyen tham tri

int main ()
{
	MT a;
	nhap(&a); 
	xuat(a); 
	
	
	return 0;
}

void nhap(MT *a) 
{
	printf ("\nNhap Dong Ma Tran: ");
	scanf ("%d", &a->d);
	
	printf ("\nNhap Cot Ma Tran: ");
	scanf ("%d", &a->c);
	
	int i, j;
	for (i=0; i<a->d; i++) {
		for (j=0;j<a->c; j++) {
			printf ("\nNhap gia tri dong %d, cot %d: ", i+1, j+1);
			scanf ("%d", &a->Matrix[i][j]);
		}
	}
	
}

void xuat(MT a) 
{
	int i, j;
	for (i=0; i++; i<a.d) {
		for (j=0; j++; j<a.c) {
			printf ("\nGia tri dong %d, cot %d: %d", i+1, j+1, a.Matrix[i][j]);
		}
		printf ("\n");
	}
}
