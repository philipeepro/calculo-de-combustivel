#include <stdio.h>
#include <stdlib.h>

int Calculo(float vGas,float vEta)
{
	//Preco Gasolina * 0.7 = Preco Maximo do Alcool
	
	if((vGas * 0.70) < vEta)
	{
		//Compensa abastecer com Gasolina
		return 0;
	}
	else if((vGas * 0.70) > vEta)
	{
		//Compensa abastecer com Etanol
		return 1;
	}
	else
	{
		//Valores sao equivalentes
		return 2;
	}
}

int main()
 {
 	printf("##### Calculo de Combustivel #####\n");
 	
 	float precoGasolina, precoEtanol;
 	
 	printf("Qual o preco da Gasolina?\n");
 	scanf("%f", &precoGasolina);
 	
 	printf("Qual o preco do Etanol?\n");
 	scanf("%f", &precoEtanol);
 	
 	int resultado = Calculo(precoGasolina, precoEtanol);
 	
 	if(resultado == 0)
	 {
	 	printf("Compensa abastecer com Gasolina.\n");
	 }
	 else if(resultado == 1)
	 {
	 	printf("Compensa abastecer com Etanol.\n");
	 }
	 else
	 {
	 	printf("Sao Equivalentes, tanto faz...\n");
	 }
 	
 	system("pause");
	return 0;
}
