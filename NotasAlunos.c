/*

Escreva um programa que peça ao usuário que digite 4 notas de 0 a 10 (tipo float) de 4 alunos e os valores deverão ser armazenados em uma matriz bidimensional. Faça a média das notas de cada aluno e armazene as 4 médias em um vetor. Por último, coloque na tela do usuário uma mensagem informando a média de cada aluno. 
(Exercício retirado do canal "De aluno para aluno") 

*/



#include <stdio.h>

int main(void) {

    const int bimestresAnuais = 4;
    const int numeroDeAlunos = 4;

    float notasAlunos [numeroDeAlunos][bimestresAnuais];
    float mediasAlunos [numeroDeAlunos];
    
    float soma = 0; 

    printf("Insira as 4 notas do aluno 1: \n");
        for (int aluno = 0; aluno < numeroDeAlunos; aluno++) {
            for (int notas = 0; notas < bimestresAnuais; notas++) {
                scanf("%f", &notasAlunos [aluno][notas]);
                soma += notasAlunos[aluno] [notas];
            }
            mediasAlunos [aluno] = soma / bimestresAnuais;
            soma = 0;
            printf("Insira as 4 notas do aluno %i: \n", aluno + 2);
        }

        for (int aluno = 0; aluno < numeroDeAlunos; aluno++) {
            printf("A média do aluno %i é %.2f\n", aluno + 1, mediasAlunos[aluno]);
        }

    return 0;
}
