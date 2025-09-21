#include <locale.h>
#include <stdio.h>

/* Trabalho N1 - Desenvolver um programa que resolva equacoes de primeiro e segundo grau.
Requisitos funcionais:
- deve conter um MENU PRINCIPAL para que o user escolha qual equacao resolver;
    - deve haver uma opcao SOBRE O PROGRAMA - contendo o nome do desenvolvedor
Etapas:

1 - Desenvolver o menu principal com switch case;
    - 1 = eq 1 Grau
    - 2 = eq 2 Grau
    - 3 = sobre o programa (nome desenvolvedor)
    - 4 = sair
    - criar um laC'o para caso o user selecione uma opC'ao inexistente

2 - criar as funcoes das opcoes 1 e 2 (comentadas passo a passo);
  - eqPrimeiroGrau = ax + b = 0
  - ler valores de a e b

  - eqSegundoGrau = ax2+bx+c=0
  - ler valores de a, b e c

  *////

// Funcoes do programa:
void eqPrimeiroGrau();
void eqSegundoGrau();
void sobrePrograma();


//declarando cada funcao;

//equacao de primeiro grau
void eqPrimeiroGrau() {
	// ax + b = 0
	float a, b, x; // diz que a entrada do usuario pode ser um numero inteiro ou decimal

	printf("Digite o valor de a: \n");
	scanf("%f", &a);                 // armazena o valor de a na variavel a

	printf("Digite o valor de b: \n");
	scanf("%f", &b);                 // armazena o valor de b na variavel b

	printf("A Equacao de 1o Grau montada C): %.2f x + %.2f = 0 \n", a, b); // mostra a conta montada pelo user

	// primeiro passo da conta = verificar se o problema tem solucao.
	// como? se a = 0 e b = 0, temos solucoes INFINITAS, pois qualquer numero de x serve para a equaC'C#o
	// agora SE a = 0 e b != 0, quer dizer que o problema nao tem solucao, pois
	// se a = 0 e b!= 0 entao sera 0x + b = 0 -> b = 0, nao tera solucao pois nao ha valor para x. 0x0 = 0

	// verificando se tem solucao ou nao:
	if(a == 0) {
		if(b == 0) {
			printf("O problema tem infinitas solucoes, pois qualquer valor para X servira!.\n");
		} else {
			printf("O problema nao tem solucao.\n");
			printf("Motivo: Se a = 0, a equacao se reduz a %.2f = 0, o que C) impossivel.\n", b);
		}
	} else { // se ha solucao, o programa da continuidade com a resolucao
		printf("A formula usada sera: ax + b = 0\n");
		printf("Passo 1: Isolar x -> ax + b = 0\n");
		printf("Passo 2: Passar b para o outro lado invertendo seu sinal -> ax = -b\n");
		printf("Passo 3: Dividir b por a -> x = -b/a\n");

		x = -b / a;
		printf("O valor de x C)): %.2f.\n", x);
		printf("Expressao final: %.2f*%.2f + %.2f = 0.\n", a, x, b);
	}
}

void sobrePrograma() {
	printf("Trabalho da N1 da matC)ria de Algoritmos, do curso de Sistemas da InformaC'C#o.\n");
	printf("CC3digo desenvolvido por Victor da Silva GonC'alves - UNIAVAN.");
}

void eqSegundoGrau() {
	printf("olaa");
}





///////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

	setlocale(LC_ALL, "Portuguese");

	int opcao; //variavel que armazenara a opcao do user
	char continuar;
	do {
		printf("*-=-=- MENU INICIAL -=-=-*\n");
		printf("Bem vindo a Calculadora de Equacoes!\nEscolha uma opcao abaixo de acordo com a equacaoo desejada:\n");
		printf("\n1 - Resolver Equacao de Primeiro Grau\n");
		printf("2 - Resolver Equacao de Segundo Grau\n");
		printf("3 - Sobre o Programa\n");
		printf("0 - Sair do Programa\n\n");
		scanf("%d", &opcao); // salva a resposta do usuario como valor para a varial opcao

		switch (opcao) { // menu de alternativas
		case 1: // resolve uma equacao de primeiro grau
			eqPrimeiroGrau();
			break;
		case 2: // resolve uma equacao de segundo grau
			eqSegundoGrau();
			break;
		case 3: // apresenta o nome do aluno
			sobrePrograma();
			break;
		case 0: // sai do programa
			printf("Encerrando o programa...");
			break;
		default: // diz que a opcao enviada pelo usuario nao atende C s opcoes disponiveis
			printf("Opcao Invalida. Tente novamente!");
		}
		if (opcao != 0) {
			printf("\nDeseja continuar no programa? (s/n): ");
			scanf(" %c", &continuar); // O espaco antes de %c e importante para ignorar o 'Enter'
		}
	} while (continuar == 's' || continuar == 'S');

	return 0;
}
