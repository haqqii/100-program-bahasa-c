#include <stdio.h>
//author : Mohammad Ibadul Haqqi

int main(){
	int N;
	scanf("%d", &N);
	if (N<10)
		printf("satuan\n"); //jika angka <10, maka print satuan
	else if (N<100)
		printf ("puluhan\n"); //jika kurang dari 100
	else if (N<1000)
		printf ("ratusan\n"); //jika kurang dari 1000
	else if (N<10000)
		printf("ribuan\n"); //jika kuran dari 10000
	else 
		printf("puluh ribuan\n"); //angka puluh ribuan
		
return 0;

}
