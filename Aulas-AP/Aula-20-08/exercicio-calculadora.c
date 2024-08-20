#include <stdio.h>

int main() {
	int num1, num2, result;
	char op;
	
	printf("Insira um operador (+ , - , / , *): ");
	scanf("%c", &op);
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &num2);
	
	switch(op) {
		case '+':
			result = num1 + num2;
			printf("O resultado da soma e: %d\n", result);
			break;
		case '-':
			result = num1 - num2;
			printf("O resultado da subtracao e: %d\n", result);
			break;
		case '/': 
		if(result != 0) {
			result = num1 / num2;
			printf("O resultado da divisao e: %d\n", result);
		}else {
			printf("Erro: Divisao por zero!");
		}
		break;
		case '*':
			result = num1 * num2;
			printf("O resultado da multiplicacao e: %d\n", result);
			break;	
		default: 
		printf("Operador invalido!");
	}
	
	return 0;
}
