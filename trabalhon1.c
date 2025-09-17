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
    - criar um laço para caso o user selecione uma opçao inexistente
    
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


int main()
{
    
    setlocale(LC_ALL, "Portuguese");
    
    int opcao; //variavel que armazenara a opcao do user
    
    printf("*-=-=- MENU INICIAL -=-=-*\n");
    printf("Bem vindo à Calculadora de Equações!\nEscolha uma opção abaixo de acordo com a equação desejada:\n");
    printf("\n1 - Resolver Equação de Primeiro Grau\n");
    printf("2 - Resolver Equação de Segundo Grau\n");
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
        case 4: // sai do programa
            printf("Encerrando o programa…");
            break;
        default: // diz que a opcao enviada pelo usuario nao atende às opcoes disponiveis
            printf("Opção inválida! Tente novamente.");
    }
    
    void eqPrimeiroGrau(
        // ax + b = 0
        float a, b, x; // diz que a entrada do usuario pode ser um numero inteiro ou decimal
        
        printf("Digite o valor de a: \n");
        scanf("%f", de &a);                 // armazena o valor de a na variavel a
        
        printf("Digite o valor de b: \n");
        scanf("%f", de &b);                 // armazena o valor de b na variavel b
        
        printf("A Equação de 1ª Grau montada é: %.2fx + %.2f = 0 \n"); // mostra a conta montada pelo user
        
        // primeiro passo da conta = verificar se o problema tem solucao.
        // como? se a = 0 e b = 0, temos solucoes INFINITAS, pois qualquer numero de x serve para a equação
        // agora SE a = 0 e b != 0, quer dizer que o problema nao tem solucao, pois 
        // se a = 0 e b!= 0 entao sera 0x + b = 0 -> b = 0, nao tera solucao pois nao ha valor para x. 0x0 = 0
        
        // verificando se tem solucao ou nao:
        if(a == 0) {
    if(b == 0) {
        printf("O problema tem infinitas soluções, pois qualquer valor para X servirá.\n");
    } else {
        printf("O problema não tem solução.\n");
        printf("Motivo: Se a = 0, a equação se reduz a %.2f = 0, o que é impossível.\n", b);
    }
} else { // se ha solucao, o programa da continuidade com a resolucao
    printf("A fórmula usada será: ax + b = 0\n");
    printf("Passo 1: Isolar x -> ax + b = 0\n");
    printf("Passo 2: Passar b para o outro lado invertendo seu sinal -> ax = -b\n");
    printf("Passo 3: Dividir por b por a -> x = -b/a\n");
    
    x = -b / a;
    printf("O valor de x é: %.2f.\n", x);
    printf("Expressão final: %.2f*%.2f + %.2f = 0.\n", a, x, b);
}

        
        );
        
    void eqSegundoGrau(
        
        );
        
    void sobrePrograma(
        
        );
        

    return 0;
}
