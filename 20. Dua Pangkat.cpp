#include <stdio.h>
//author : Mohammad Ibadul Haqqi

int main(){
	int N;
	while(scanf("%d", &N)!=EOF){ //input sampai EOF
		while(N%2==0){
			N=N/2;
		}
		
		if(N==1){ //jika hasilnya satu berarti dua pangkat
			printf("TRUE\n");
		}
		
		else
			printf("FALSE\n");
		
		return 0;
	}
}
