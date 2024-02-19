//inclui as bibliotecas
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	//declara��o das vari�veis
	float volume, raio;
	
	//entrada de dados
	printf("Informe o valor do raio: ");
	scanf("%f", &raio);
	
	//processamento
	//valor do PI 3.14159
	volume =  4.0/3.0*  3.14159 * raio * raio * raio;
	//saida de dados
	
	printf("Volume da esfera = %f\n", volume);
	
	system("PAUSE");
	return 0;
}
