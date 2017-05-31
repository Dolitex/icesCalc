#include <stdio.h>

int main()
{
	char comando;
	int n1, n2, result;

	printf("Digite o sinal da operação desejada.\n");
	scanf("%c", &comando);

	printf("Digite os dois números da operação.\n");
	scanf("%d %d", &n1, &n2);

	if (comando == '+')
	{
		result = n1+n2;
	}else if(comando == '-'){
		result = n1-n2;	
	}else{
		printf("Faz algo, cão.");
	}






	printf("O resultado é: %d", result);


	return 0;
}