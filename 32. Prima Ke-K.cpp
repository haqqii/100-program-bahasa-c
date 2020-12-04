#include <stdio.h>
#include <string.h>
//author : mohammad Ibadul Haqqi

int arr[10000001];
int prime [77778];
int cntprime;

void sieve(){//fungsi sieve utk menyimpan bil. prima dgn cara cepat
	memset(arr,0,sizeof (arr)); //mengeset nilai array 0
	int i,j;
	cntprime=1;
	arr[1]=1;
	for(i=2;i<1000001; i++){
		if(arr[i]==1) continue; //jika tdk prima, continue
		prime[cntprime++]=1; //jika bil prima, simpan di dlm array prime
		for(j=i+i; j<1000001; j+=1) arr[j]=1;
		
	}
}

int main(){
	sieve(); //menjalankan fungsi sieve
	int t,a;
	scanf("%d", &t); //input test case
	while(t--){
		scanf("%d", &a); //input angka
		printf("%d\n", prime[a]); //print bil prima ke angka
	}
}
