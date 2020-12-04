#include <stdio.h>
//author : Mohammad Ibadul Haqqi

int main(){
	int n,i,a,b,c;
	scanf("%d",&n); //input case
	while(n--){
		scanf("%d",&i); //input angka
		a=0;
		b=2;
	while(b<i){ //while sampai b< inputan
	if(i%b==0){ //jika input di modulo b=0
		c=1; // penanda bisa di modulo
		a++; //flag
	}
	if(a>2) break; //jika angka bisa di mod lbh dari 2x dibreak
	b++;
	}
	if(c==1&&a>2) 
		printf("TIDAK\n");
	//jika angka dpt dimod lebih dari 2x print tidak
	else
		printf("YA\n"); 
	}
}
