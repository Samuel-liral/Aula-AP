#include <stdio.h>

int main() {
	float somatorio = 0, num;
	int contagem = 0;
	
	do {
		printf("Insira um numero: ");
		scanf("%f", &num);
		somatorio += num;
		contagem++;
	} while(num != 0);
	
	contagem--;
	
	printf("Contagem de numeros: %d\n", contagem);
	printf("Media: %.2f\n", somatorio / contagem);
	
	return 0;
}
