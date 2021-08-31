#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nota1=0;
	int nota2=0;
	int nota3=0;
	int nota4=0;
	int r=0;
	
	printf("Digite a primeira nota: ");
	scanf("%i", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%i", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%i", &nota3);
	
	printf("Digite a quarta nota: ");
	scanf("%i", &nota4);
	
	r= (nota1 + nota2 + nota3 + nota4) / 4;
	
	printf("Sua media e: %i \n", r);
	
	if(r>=7)
	printf("Aprovado na disciplina \n ");
	
	else
	printf("Reprovado na disciplina \n ");
	
	system("pause");
	
	return 0;
}
