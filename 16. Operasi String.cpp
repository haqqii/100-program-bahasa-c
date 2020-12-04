#include <stdio.h>
#include <string.h>
//author : Mohammad Ibadul Haqqi

int main (){
	char s1[1001],s2[1001],s3[1001],s4[1001];
	int i,j,start,en,m,tambah;
	scanf("%s", s1); //input kata utama
	scanf("%s", s2); // input kata kedua
	scanf("%s", s3); // input kata ketiga
	scanf("%s", s4); // input kata keempat
	for(i=0; i<=strlen(s1)-strlen(s2); i++){
		//fungsi utk mengetahui kata pertama = kata kedua
			int sama=1;
			for(j=0; j<strlen(s2); j++){
				if(s1[i+j]!=s2[j]){
					sama=0;
				}
			}
			if(sama){
				start=i;
				en=1+strlen(s2)-1;
				break;
			}
	}
	for(i=0; i<=strlen(s1)-strlen(s3); i++){
		//fungsi utk menambah kata ketiga ke kata pertama
		int sama=1;
		if(i>=start && i<=en) continue;
		for (j=0; j<strlen(s3); j++){
			while((i+j)>=start&&(i+j)<=en) i++; 
				if(s1[i+j]!=s3[j]){
					sama=0;
					break;
				}
		}
		if(sama){
			tambah=i+strlen(s3)-1;
			break;
		}
	}
	for(i=0; i<strlen(s1); i++){
		//fungsi print kata akhir yang diminta
		if(i>=start && i<=en){
			continue;
		}
		printf("%c", s1[i]);
		if (i==tambah){
			printf("%s", s4);
		}
	}
	printf("\n");
	return 0;
}
