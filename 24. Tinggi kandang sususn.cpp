#include <stdio.h>
#include <string.h>
//author :Mohammad Ibadul Haqqi

int main()
{
	long long total=0;
	long long arr;
	long long x,y,a,max,jmlh,lantai;
	scanf("%lld %lld", &x, &y); //input jum tinggi dan jum kucing
	lantai=0;
	jmlh=0;
	while (x>y){ //diulang selama jum tinggi > dr jum kucing
		max=0;
		for(a=0; a<y; a++){
			scanf("%lld", &arr); //input tinggi 
			if (arr>max) max=arr; //cari tinggi max
		}
		lantai++; //tambah lantai
		x=x-y; //kurangi jum tinggi dan jum kucing
		jmlh=jmlh+max;
		
	}
	max=0;
	for(a=0; a<x; a++){
		scanf("%lld", &arr); //input lantai
		if(arr>max) max=arr; //cari max
	}
	jmlh=jmlh+max+lantai+2; //total tinggi
	printf("%lld\n", jmlh);
}
