#include <stdio.h>

int main() {
	int a, b, c;
	
	printf("Digite os valores de a, b e c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a == b) printf ("a e b sao iguais\n");
	if(b != c) printf ("b e c sao diferentes\n");
	if(a > b) printf ("a e maior que b\n");
	if(b >= c) printf ("b e maior ou igual a c\n");
	if(a < b) printf ("a e menor que b\n");
	if(b <= c) printf ("b e menor ou igual a c\n");
	
	if ((a == b) && (a == c)) printf ("Todos sao iguais\n");
	if ((a == b) || (a == c)) printf ("O valor de a se repete\n");
	if (!(b == c)) printf ("b e c sao diferentes\n");
	
	return 0;
}
