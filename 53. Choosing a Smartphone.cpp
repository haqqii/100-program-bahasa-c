#include <stdio.h>
//author : Mohammad Ibadul Haqqi

int main(){
	int a,b,c,jum;
	int i,j,k;
	scanf("%d", &a); //input testcase
	for(i=1; i<=a; i++){
		jum=0;
		scanf("%d", &b); //input brapa inputan harga
		while(b--){ //diulang sesuai input brp harga
			scanf("%d",&c); //input harga
			jum=jum+c; //hasil penjumlahan harga testcase tsb
			
		}
		if(jum<=16000)
			printf("Case #%d: 16GB\n", i);
			//jika kurang <= 16GB maka print 16GB
		else if(jum<=32000)
			printf("Case #%d: 32GB\n", i);
			//jika <=32GB maka print 32GB
		else if(jum<=64000)
			printf("Case #%d: 64GB\n", i);
			//jika <=64GB maka print 64GB
		else if(jum<=128000) 
			printf("Case #%d: 128GB\n",i);  
  			//jika kurang dr sama dgn 128 GB maka print 128GB 
				
	}
}
