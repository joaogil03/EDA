#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoesTP.h"

int menuPrincipal(){
    int opcao;
        do{
            printf("\n");
            printf("   M E N U \n");
            printf("1- Inserir \n");
            printf("2- Remover \n");
            printf("3- Alterar \n");
            printf("4- Ver Tempo \n");
            printf("5- Listar \n");
            printf("0-Sair \n");
            printf("Opcao: ");
            scanf("%d", &opcao);
            printf("\n");
        }
        while((opcao<0)||(opcao>5));

        return(opcao);
}

int menuInserir(){
    int opcao;
        do{
            printf("\n");
            printf("   I N S E R I R \n");
            printf("1- Inserir Job \n");
            printf("2- Inserir Operacao \n");
            printf("3- Inserir Maquina \n");
            printf("4- Inserir Matriz\n");
            printf("0- Voltar atras \n");
            printf("Opcao: ");
            scanf("%d", &opcao);
            printf("\n");
        }
        while((opcao<0)||(opcao>4));

        return(opcao);
}

int menuRemover(){
    int opcao;
        do{
            printf("\n");
            printf("   R E M O V E R \n");
            printf("1- Remover Job \n");
            printf("2- Remover Operacao \n");
            printf("3- Remover Maquina \n");
            printf("4- Remover Lista\n");
            printf("0-Voltar atras \n");
            printf("Opcao: ");
            scanf("%d", &opcao);
            printf("\n");
        }
        while((opcao<0)||(opcao>4));

        return(opcao);
}

int menuAlterar(){
    int opcao;
        do{
            printf("\n");
            printf("   A L T E R A R \n");
            printf("1- Alterar Job \n");
            printf("2- Alterar Operacao \n");
            printf("3- Alterar Maquina \n");
            printf("4- Alterar Tempo \n");
            printf("0-Voltar atras \n");
            printf("Opcao: ");
            scanf("%d", &opcao);
            printf("\n");
        }
        while((opcao<0)||(opcao>4));

        return(opcao);
}

int menuTempo(){
    int opcao;
        do{
            printf("\n");
            printf("   T E M P O \n");
            printf("1- Tempo maior \n");
            printf("2- Tempo menor \n");
            printf("4- Tempo medio \n");
            printf("0-Voltar atras \n");
            printf("Opcao: ");
            scanf("%d", &opcao);
            printf("\n");
        }
        while((opcao<0)||(opcao>4));

        return(opcao);
}


int main(int argc, char *argv[]){

    Lista* listaJob=NULL;

    int opcaoPrincipal, opcaoInserir, opcaoRemover, opcaoAlterar, opcaoTempo;
    int job, jobNovo, operacao, operacaoNova, maquina, maquinaNova, tempo;
    int vJob, vOperacao, vMaquina;
    int tempoMaior, tempoMenor;

    listaJob = lerFicheiro(listaJob);

    do{
        opcaoPrincipal = menuPrincipal();
        switch (opcaoPrincipal){
        case 1:
                do{
                    opcaoInserir = menuInserir();
                    switch (opcaoInserir){

                    case 1: // inserir job
                            printf("Job: ");
                            scanf("%d", &job);

                            vJob = verificarJob(listaJob, job);

                            while (vJob == 1){
                                    printf("Ja existe esse job\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    vJob = verificarJob(listaJob, job);
                            }

                            printf("Operacao: ");
                            scanf("%d", &operacao);

                            vOperacao = verificarOperacao(listaJob, job, operacao);

                            while (vOperacao==1){
                                    printf("Ja existe essa operacao\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    vOperacao = verificarOperacao(listaJob, job, operacao);
                            }

                            printf("Maquina: ");
                            scanf("%d", &maquina);

                            printf("Tempo: ");
                            scanf("%d", &tempo);

                           listaJob = inserirMaquina(listaJob, job, operacao, maquina, tempo);

                            escreverFicheiro(listaJob);

                    break;

                    case 2: // inserir operacao

                            printf("Job: ");
                            scanf("%d", &job);

                            vJob = verificarJob(listaJob, job);

                            while (vJob == 0){
                                    printf("Nao existe esse job\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    vJob = verificarJob(listaJob, job);
                            }

                            printf("Operacao: ");
                            scanf("%d", &operacao);

                            vOperacao = verificarOperacao(listaJob, job, operacao);

                            while (vOperacao==1){
                                    printf("Ja existe essa operacao\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    vOperacao = verificarOperacao(listaJob, job, operacao);
                            }

                            printf("Maquina: ");
                            scanf("%d", &maquina);

                            printf("Tempo: ");
                            scanf("%d", &tempo);

                            listaJob = inserirMaquina(listaJob, job, operacao, maquina, tempo);

                            escreverFicheiro(listaJob);

                    break;

                    case 3: // inserir maquina

                            printf("Job: ");
                            scanf("%d", &job);

                            vJob = verificarJob(listaJob, job);

                            while (vJob == 0){
                                    printf("Nao existe esse job\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    vJob = verificarJob(listaJob, job);
                            }

                            printf("Operacao: ");
                            scanf("%d", &operacao);

                            vOperacao = verificarOperacao(listaJob, job, operacao);

                            while (vOperacao==0){
                                    printf("Nao existe essa operacao\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    vOperacao = verificarOperacao(listaJob, job, operacao);
                            }

                            printf("Maquina: ");
                            scanf("%d", &maquina);

                            vMaquina = verificarMaquina(listaJob, job, operacao, maquina);

                            while (vMaquina==1){
                                   printf("Essa maquina ja existe\n");

                                    printf("Maquina: ");
                                    scanf("%d", &maquina);

                                    vMaquina = verificarMaquina(listaJob, job, operacao, maquina);
                            }

                            printf("Tempo: ");
                            scanf("%d", &tempo);

                           listaJob = inserirMaquina(listaJob, job, operacao, maquina, tempo);

                            escreverFicheiro(listaJob);

                    break;

                    case 4:

                            listaJob = removerLista(listaJob);

                            listaJob = inserirMatriz(listaJob);

                            escreverFicheiro(listaJob);

                    break;

                    }
                } while(opcaoInserir != 0);

            break;

        case 2:
                do{
                    opcaoRemover = menuRemover();
                    switch (opcaoRemover){

                case 1: //remover job

                        printf("Job: ");
                        scanf("%d", &job);

                        vJob = verificarJob(listaJob, job);

                        while (vJob == 0){

                                printf("Esse job nao existe\n");

                                printf("Job: ");
                                scanf("%d", &job);

                                vJob = verificarJob(listaJob, job);
                        }

                        listaJob = removerJob(listaJob, job);

                        escreverFicheiro(listaJob);

                break;

                case 2: //remover operacao

                        printf("Job: ");
                        scanf("%d", &job);

                        vJob = verificarJob(listaJob, job);

                        while (vJob == 0){

                                printf("Esse job nao existe\n");

                                printf("Job: ");
                                scanf("%d", &job);

                                vJob = verificarJob(listaJob, job);
                        }

                        printf("Operacao: ");
                        scanf("%d", &operacao);

                        vOperacao = verificarOperacao(listaJob, job, operacao);

                        while (vOperacao==0){
                                printf("Nao existe essa operacao\n");

                                printf("Operacao: ");
                                scanf("%d", &operacao);

                                vOperacao = verificarOperacao(listaJob, job, operacao);
                        }

                        listaJob = removerOperacao(listaJob, job, operacao);

                        escreverFicheiro(listaJob);
                break;

                case 3: //remover maquina

                        printf("Job: ");
                        scanf("%d", &job);

                        vJob = verificarJob(listaJob, job);

                        while (vJob == 0){

                                printf("Esse job nao existe\n");

                                printf("Job: ");
                                scanf("%d", &job);

                                vJob = verificarJob(listaJob, job);
                        }

                        printf("Operacao: ");
                        scanf("%d", &operacao);

                        vOperacao = verificarOperacao(listaJob, job, operacao);

                        while (vOperacao==0){
                        printf("Essa operacao nao existe\n");

                                printf("Operacao: ");
                                scanf("%d", &operacao);

                                vOperacao = verificarOperacao(listaJob, job, operacao);
                        }

                        printf("Maquina: ");
                        scanf("%d", &maquina);

                        vMaquina = verificarMaquina(listaJob, job, operacao, maquina);

                        while (vMaquina==0){
                               printf("Essa maquina nao existe\n");

                                printf("Maquina: ");
                                scanf("%d", &maquina);

                                vMaquina = verificarMaquina(listaJob, job, operacao, maquina);
                        }


                        listaJob = removerMaquina(&listaJob, job, operacao, maquina);

                        escreverFicheiro(listaJob);
                break;

                case 4:
                        listaJob = removerLista(listaJob);

                        escreverFicheiro(listaJob);
                break;
                    }
                } while(opcaoRemover != 0);

        break;

        case 3:
                do{
                    opcaoAlterar = menuAlterar();
                    switch(opcaoAlterar){

                    case 1:  // alterar job

                            printf("Job: ");
                            scanf("%d", &job);

                            vJob = verificarJob(listaJob, job);

                            while (vJob == 0){

                                    printf("Esse job nao existe\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    vJob = verificarJob(listaJob, job);
                            }

                            printf("Job novo: ");
                            scanf("%d", &jobNovo);

                            vJob = verificarJob(listaJob, jobNovo);

                            while (vJob == 1){

                                printf("Essa job ja existe\n");

                                printf("Job novo: ");
                                scanf("%d", &jobNovo);

                                vJob = verificarJob(listaJob, jobNovo);
                            }

                            alterarJob(listaJob, job, jobNovo);

                            escreverFicheiro(listaJob);

                    break;

                    case 2:  // alterar operacao

                            printf("Job: ");
                            scanf("%d", &job);

                            vJob = verificarJob(listaJob, job);

                            while (vJob == 0){

                                    printf("Esse job nao existe\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    vJob = verificarJob(listaJob, job);
                            }

                            printf("Operacao: ");
                            scanf("%d", &operacao);

                            vOperacao = verificarOperacao(listaJob, job, operacao);

                            while (vOperacao==0){

                                    printf("Essa operacao nao existe\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    vOperacao = verificarOperacao(listaJob, job, operacao);
                            }

                            printf("Operacao nova: ");
                            scanf("%d", &operacaoNova);

                            vOperacao = verificarOperacao(listaJob, job, operacaoNova);

                            while (vOperacao == 1){

                                printf("Ja existe essa operacao\n");

                                printf("Operacao nova: ");
                                scanf("%d", &operacaoNova);

                                vOperacao = verificarOperacao(listaJob, job, operacaoNova);

                            }

                            alterarOperacao(listaJob, job, operacao, operacaoNova);
                            escreverFicheiro(listaJob);

                    break;

                    case 3:  // alterar maquina

                            printf("Job: ");
                            scanf("%d", &job);

                            vJob = verificarJob(listaJob, job);

                            while (vJob == 0){

                                    printf("Esse job nao existe\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    vJob = verificarJob(listaJob, job);

                            }

                            printf("Operacao: ");
                            scanf("%d", &operacao);

                            vOperacao = verificarOperacao(listaJob, job, operacao);

                            while (vOperacao==0){

                                    printf("Essa operacao nao existe\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    vOperacao = verificarOperacao(listaJob, job, operacao);
                            }

                            printf("Maquina: ");
                            scanf("%d", &maquina);

                            vMaquina = verificarMaquina(listaJob, job, operacao, maquina);

                            while (vMaquina==0){
                                   printf("Essa maquina nao existe\n");

                                    printf("Maquina: ");
                                    scanf("%d", &maquina);

                                    vMaquina = verificarMaquina(listaJob, job, operacao, maquina);
                            }

                            printf("Maquina nova: ");
                            scanf("%d", &maquinaNova);

                            vMaquina = verificarMaquina(listaJob, job, operacao, maquinaNova);

                            while (vMaquina==1){
                                   printf("Essa maquina ja existe\n");

                                    printf("Maquina nova: ");
                                    scanf("%d", &maquinaNova);

                                    vMaquina = verificarMaquina(listaJob, job, operacao, maquinaNova);
                            }

                            alterarMaquina(listaJob, job, operacao, maquina, maquinaNova);

                            escreverFicheiro(listaJob);

                    break;

                    case 4:  // alterar tempo

                            printf("Job: ");
                            scanf("%d", &operacao);

                            vJob = verificarJob(listaJob, job);

                            while (vJob == 0){

                                    printf("Esse job nao existe\n");

                                    printf("Job: ");
                                    scanf("%d", &job);

                                    vJob = verificarJob(listaJob, job);
                            }

                            printf("Operacao: ");
                            scanf("%d", &operacao);

                            vOperacao = verificarOperacao(listaJob, job, operacao);

                            while (vOperacao==0){

                                    printf("Essa operacao nao existe\n");

                                    printf("Operacao: ");
                                    scanf("%d", &operacao);

                                    vOperacao = verificarOperacao(listaJob, job, operacao);
                            }

                            printf("Maquina: ");
                            scanf("%d", &maquina);

                            vMaquina = verificarMaquina(listaJob, job, operacao, maquina);

                            while (vMaquina == 0){
                                   printf("Essa maquina nao existe\n");

                                    printf("Maquina: ");
                                    scanf("%d", &maquina);

                                    vMaquina = verificarMaquina(listaJob, job, operacao, maquina);
                            }

                            printf("Tempo novo: ");
                            scanf("%d", &tempo);

                            alterarTempo(listaJob, job, operacao, maquina, tempo);

                            escreverFicheiro(listaJob);

                    break;
                    }
                } while(opcaoAlterar != 0);

        break;

        case 4:
                do{
                    opcaoTempo = menuTempo();
                    switch (opcaoTempo){

                case 1: // tempo maior

                        tempoMaior = verMaior(listaJob);

                        printf("O Maximo tempo possivel e: %dUT\n", tempoMaior);

                break;

                case 2: // tempo menor

                        tempoMenor = verMenor(listaJob);

                        printf("O Menor tempo possivel e: %dUT\n", tempoMenor);

                break;

                case 3: // tempo medio

                        verMedia(listaJob);

                break;
                    }
                } while(opcaoTempo != 0);

        break;

        case 5:
                listarJob(listaJob);
        break;
        }

    } while (opcaoPrincipal!=0);

    return(0);
}
