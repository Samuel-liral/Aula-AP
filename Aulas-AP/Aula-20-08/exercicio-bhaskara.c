#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, x1, x2, delta;
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	delta = b * b - 4 * a * c;
	
	if (delta < 0) {
		printf("Nao ha raizes reais.");
	} else if (delta == 0) {
		x1 = -b / 2 * a;
		printf("x = %.2f\n", x1);
	} else {
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b + sqrt(delta)) / 2 * a;
		printf("x = {%.2f, %.2f}\n", x1, x2);
	}
	
	return 0;
}
