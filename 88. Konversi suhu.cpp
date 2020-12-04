#include <stdio.h>
//author : Mohammad Ibadul Haqqi

int main(){
	char a;
	float x;
	printf("Masukkan Suhu= ");
	scanf("%f %c",&x,&a); //memasukkan suhu dan char suhu
	if(a=='c') //jika dari celcius
	printf("%f Reamur %f Fahrenheit %f Kelvin",1.25*x, (2.25*x)+32, (1.25*x)+273);
	if(a=='k') //jika kelvin
	printf("lf celcius %lf Reamur %lf Fahrenheit", x-273, (0.8)*(x-273), (1.8)*(x-273)+32);
	if(a=='r') //jika dari reamur 
 	printf("%f Celcius %f Fahrenheit %f Kelvin", 1.25*x, (2.25*x)+32, (1.25* x)+273); 
 	if(a=='f') //jika dari fahrenheit 
 	printf("%lf Celcius %lf Reamur %lf Kelvin", 0.56*(x-32), 0.44*(x-32), (0.56*(x-32))+273); 
 
}
