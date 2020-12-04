#include <stdio.h>
//author : Mohammad ibadul Haqqi

long long arr[1001001];
void precomp(){ //simpan hasil precom
	long long i;
	arr[0]=0;
	for(i=1; i<1001001; i++){
		if(i%4==0||i%7==0) arr[i]=arr[i-1]+i;
		//jika bisa di mod atau 7 brarti kelipatan 4 atau 7
		else arr[i]=arr[i-1];
	}
}

int main(){
	long long a,b,c;
	scanf("%lld", &b); //input testcase
	precomp();
	while(b--){
		scanf("%lld", &a); //input angka
		printf("%lld\n", arr[a]); //print hasil dari precomp yg sudah disimpan
		
	}
}
