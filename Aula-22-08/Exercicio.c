#include <stdio.h>

int main() {
	int compromisso, cidade, dinheiro, chovendo, perto;
	
	printf("0 - nao\n1 - sim\n\n");
	printf("Tenho compromisso no dia? ");
	scanf("%d", &compromisso);
	printf("Vou estar na cidade? ");
	scanf("%d", &cidade);
	printf("Tenho dinheiro? ");
	scanf("%d", &dinheiro);
	printf("Esta chovendo? ");
	scanf("%d", &chovendo);
	printf("Eh perto? ");
	scanf("%d", &perto);
	
	if((compromisso == 0 && cidade == 1 && ((dinheiro == 1 && chovendo == 0) || (dinheiro == 0 && perto == 1)))) {
		printf("Eu vou!");
	}else if ((compromisso) || (!cidade) || (dinheiro && chovendo) || (!dinheiro && !perto)) {
		printf("Nao vou");
	}else {
		printf("Indefinido");
	}
	
	return 0;
}
