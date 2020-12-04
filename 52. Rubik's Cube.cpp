#include <stdio.h>
//author : Mohammad Ibadul Haqqi

int main(){
	int a,b,c;
	scanf("%d",&a); //input testcase
	while(a--){
		scanf("%d", &b); //input angka
		printf("%d\n",(b*b*2)+((b-2)*b*2)+((b-2)*(b-2)*2)); 
		//print jmlh kotak atas dan bwh + samping-atas-bwh + tengah
		
	}
}
