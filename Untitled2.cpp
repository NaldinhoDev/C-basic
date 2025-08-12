#include <stdio.h>

int main(){
	
	float conv, tempc, tempf;
	
	printf ("Informe a temperatura em fahrenheit: \n");
	scanf ("%f", &tempf);
	
	if (tempf == 0	)
	{
	printf ("a temperatura esta invalida %f", tempf);
	}
	else
	{
	
	tempc = (tempf - 32)/1.8;
	printf("a temperatura em celsius eh : %.2f", tempc);
	}
}
