#include <stdio.h>
#include <string.h>
//author : Mohamma ibadul haqqi

int main(){
	int arr[100];
	int a,n=0,m,jum=0,x,y,b,la,li,lu;
	memset(arr,0,sizeof(arr)); //semua isi nilai array di 0 kan
	scanf("%d %d %d", &la, &li, &lu); //harga parkir
	int jMax=0;
	for(x=0; x<3; x++){
		scanf("%d %d", &a, &b); //waktu truk parkir
		if(b>=jMax){ //cariyang maks
			jMax=
			b;
		}
		for(y=a; y<=b-1; y++){ //penanda truk parkir
			arr[y]++;
		}
	}
	for(x=1; x<=jMax-1; x++){
		if (arr[x]==1) jum=jum+la;
		//jika satu truk saja yg parkir, ditambah harga pertama
		if(arr[x]==2) jum=jum+2*li;
		//jika dua truk yang parkir,ditambah dgn dua kali harga kedua
		if(arr[x]==3) jum=jum+3*lu;
		//juka tiga truk, ditambah dg 2x harga ketiga
	}
	printf("%d\n", jum);
	return 0;
}
