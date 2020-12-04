#include<stdio.h> 
//author //mohammad Ibadul Haqqi

int faktor(int); 
int main(){ 
	int n; 
 	scanf("%d",&n); //input angka faktorial 
 	printf("%d\n",faktor(n)); //print hasil faktorial 
}
 
int faktor(int x){ //fungsi rekursif faktorial 
	if(x==1) return 1; //jika x=1, langsung print 1 
 	if(x%2==0){ 
  		x=(x/2)*faktor(x-1); //bila x= genap maka dikali fungsi faktor 
 	} 
 	else 
  	x*=faktor(x-1); //jika angka dikali angka sebelumnya 
return x; 
}  
 
