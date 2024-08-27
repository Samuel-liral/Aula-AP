#include <stdio.h>

int main() {
	int fat = 1, n;
	
	printf("Insira um valor:");
	scanf("%d", &n);
	
	while(n > 1) {
		fat = fat * n;
		n--;	
	}
	
	printf("O valor em fatorial: %d", fat);
	
	return 0;
}
