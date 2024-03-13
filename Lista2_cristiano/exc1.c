#include <stdio.h>
 /*(WHILE) Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe.
O algoritmo deverá ler,
além das notas, o código do aluno e deverá ser encerrado quando o código for igual a zero.*/
int main() {
    int codigo, total_alunos = 0;
    float nota1, nota2, nota3, media_aluno, somar_notas;
 
    printf("Qual o codigo do aluno? \n");
    scanf("%d", &codigo);
 
    while (codigo != 0) {
        printf("Qual a primeira nota do aluno? \n");
        scanf("%f", &nota1);
        printf("Qual a segunda nota do aluno? \n");
        scanf("%f", &nota2);
        printf("Qual a terceira nota do aluno? \n");
        scanf("%f", &nota3);
 
        somar_notas = nota1 + nota2 + nota3;
        media_aluno = somar_notas / 3;
 
        printf("A média do aluno é %.2f", media_aluno);
 
        total_alunos++;
 
        printf("Qual o código do próximo aluno? Digite 0 para encerrar \n");
        scanf("%d", &codigo);
    }
 
    if (total_alunos == 0) {
        printf("Nenhum aluno foi inserido.\n");
    } else {
        printf("Total de alunos inseridos: %d\n", total_alunos);
    }
 
    return 0;
}