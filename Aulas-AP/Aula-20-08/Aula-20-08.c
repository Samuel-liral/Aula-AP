#include <stdio.h>

int main() {
	int NF;
	
	printf("Digite sua nota final: ");
	scanf("%d", &NF);
	
	if (NF >= 7) {
		printf("Aprovado!");
	}
	else if(NF > 4) {
		printf("Recuperacao!");
	}
	else {
		printf("Reprovado!");
	}
	
	return 0;
}
