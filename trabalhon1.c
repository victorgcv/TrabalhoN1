#include <locale.h>
#include <stdio.h>
#include <math.h>

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

	printf("A Equacao de 1o Grau montada é: %.2f x + %.2f = 0 \n", a, b); // mostra a conta montada pelo user

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
			printf("Motivo: Se a = 0, a equacao se reduz a %.2f = 0, o que é impossivel.\n", b);
		}
	} else { // se ha solucao, o programa da continuidade com a resolucao
		printf("A formula usada sera: ax + b = 0\n");
		printf("Passo 1: Isolar x -> ax + b = 0\n");
		printf("Passo 2: Passar b para o outro lado invertendo seu sinal -> ax = -b\n");
		printf("Passo 3: Dividir b por a -> x = -b/a\n");

		x = -b / a;
		printf("O valor de x é: %.2f.\n", x);
		printf("Expressao final: %.2f*%.2f + %.2f = 0.\n", a, x, b);
	}
}

void sobrePrograma() {
    printf("Trabalho da N1 da matéria de Algoritmos, do curso de Sistemas da Informação.\n");
    printf("Código desenvolvido por Victor da Silva Gonçalves - UNIAVAN.");
}

void eqSegundoGrau() {
    // formula = ax^2 + bx + c = 0
    float a, b, c, delta, x1, x2; // declara os dados que usaremos
    
    printf("Digite o valor de a:\n"); 
    scanf("%f", &a);                    // salva o valor de a na variavel a 
    printf("Digite o valor de b:\n");
    scanf("%f", &b);                    // salva o valor de b na variavel b
    printf("Digite o valor de c:\n");
    scanf("%f", &c);                    // salva o valor de c na variavel c
    
    printf("A Equação de Segundo Grau informada é %.fx^2 + %.fx + %.f = 0\n", a, b, c);
    
    // verifica se tem solução -> a nao pode ser = 0 
    
    if (a == 0 ) {
        printf("Equação sem solução, pois a não pode ser igual a zero.");
    }
    
    // passo a passo da resolucao:
        // 1- calcular o delta (triangulo) com a formula Δ = b^2 (ou b*b) - 4*a*c
        // 2- analisar o valor do delta e entao suas condicoes:
            // se delta = 0 -> uma raiz real / dupla 
            // se delta > 0 -> duas raizes reais distintas
            // se delta < 0 -> sem solucao
            // Calcular as raízes reais quando Δ >= 0:
            //   x1 = (-b + sqrt(Δ)) / (2*a)
            //   x2 = (-b - sqrt(Δ)) / (2*a)
            
            
            
    
    // 1- calcular delta = Δ = b^2 (ou b*b) - 4*a*c
    delta = b*b - 4*a*c;
    printf("Δ = %.2f^2 - 4 * %.2f * %.2f\n", b, a, c);
    printf("Δ = %.2f\n", delta);
    
    
    // 2- analisar o valor de delta e suas condicoes
    if (delta < 0) {
        printf("\n2) Como Delta é < 0, a equacao nao possui raizes reais, ou seja, é sem solucao.\n");
    } else if (delta == 0) {
        printf("\n2) Como Delta é = 0, a equacao possui uma unica raiz real.\n");
        printf("   Formula: x = -b / (2*a)\n");
        printf("   Calculo: x = -%.2f / (2 * %.2f)\n", b, a);
        x1 = -b / (2 * a);
        printf("   Solucao: x = %.2f\n", x1);
        
    } else { // delta > 0
        printf("\n2) Como Delta > 0, a equacao possui duas raizes reais distintas.\n");
        printf("   A formula é: x = (-b +/- raizquadrada(Delta)) / 2a\n");
        printf("   Calculando a raiz quadrada de Delta: sqrt(%.2f) = %.2f\n", delta, sqrt(delta)); // sqrt é square root, significa raiz quadrada
        printf("   Calculando o denominador: 2*a = 2 * %.2f = %.2f\n", a, 2 * a);
        
        
        
        // calcula x1 e x2. 
        // x1 = -b raizdelta / 2 * a
        // x2 = -b raizdelta / 2 * a
        printf("3) Calculo de x1:\n");
        x1 = (-b + sqrt(delta)) / (2 * a);
        printf("   x1 = (-%.2f + %.2f) / %.2f = %.2f\n", b, sqrt(delta), 2 * a, x1);

        printf("4) Calculo de x2:\n");
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("   x2 = (-%.2f - %.2f) / %.2f = %.2f\n", b, sqrt(delta), 2 * a, x2);
        
        printf("\nSolucoes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
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
		    printf("Equação de Primeiro Grau selecionada!\n\n");
			eqPrimeiroGrau();
			break;
		case 2: // resolve uma equacao de segundo grau
		    printf("Equação de Segundo Grau selecionada!\n\n");
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
