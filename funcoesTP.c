#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funcoesTP.h"

Lista* inserirMaquina(Lista* listaJob, int job, int op, int maq, int temp){

    Lista *novo = (Lista*) malloc(sizeof(Lista));

    if (novo != NULL){

        novo->job = job;
        novo->operacao = op;   // inserir a nova maquina
        novo->maquina = maq;
        novo->tempo = temp;

        novo->seguinte = listaJob;

        return novo;
    }
    else return listaJob;
}

Lista* inserirMatriz(Lista* listaJob){

    listaJob = inserirMaquina(listaJob, 1, 1, 1, 4);
    listaJob = inserirMaquina(listaJob, 1, 1, 3, 5);

    listaJob = inserirMaquina(listaJob, 1, 2, 2, 4);
    listaJob = inserirMaquina(listaJob, 1, 2, 4, 5);

    listaJob = inserirMaquina(listaJob, 1, 3, 3, 5);
    listaJob = inserirMaquina(listaJob, 1, 3, 5, 6);

    listaJob = inserirMaquina(listaJob, 1, 4, 4, 5);
    listaJob = inserirMaquina(listaJob, 1, 4, 5, 5);
    listaJob = inserirMaquina(listaJob, 1, 4, 6, 4);
    listaJob = inserirMaquina(listaJob, 1, 4, 7, 5);
    listaJob = inserirMaquina(listaJob, 1, 4, 8, 9);
    // ---------------------------------------------
    listaJob = inserirMaquina(listaJob, 2, 1, 1, 1);
    listaJob = inserirMaquina(listaJob, 2, 1, 3, 5);
    listaJob = inserirMaquina(listaJob, 2, 1, 5, 7);

    listaJob = inserirMaquina(listaJob, 2, 2, 4, 5);
    listaJob = inserirMaquina(listaJob, 2, 2, 8, 4);

    listaJob = inserirMaquina(listaJob, 2, 3, 5, 6);
    listaJob = inserirMaquina(listaJob, 2, 3, 4, 5);

    listaJob = inserirMaquina(listaJob, 2, 4, 4, 4);
    listaJob = inserirMaquina(listaJob, 2, 4, 7, 4);
    listaJob = inserirMaquina(listaJob, 2, 4, 8, 7);

    listaJob = inserirMaquina(listaJob, 2, 5, 4, 1);
    listaJob = inserirMaquina(listaJob, 2, 5, 6, 2);

    listaJob = inserirMaquina(listaJob, 2, 6, 1, 5);
    listaJob = inserirMaquina(listaJob, 2, 6, 6, 6);
    listaJob = inserirMaquina(listaJob, 2, 6, 8, 4);

    listaJob = inserirMaquina(listaJob, 2, 7, 4, 4);
    //-------------------------------------
    listaJob = inserirMaquina(listaJob, 3, 1, 2, 7);
    listaJob = inserirMaquina(listaJob, 3, 1, 3, 6);
    listaJob = inserirMaquina(listaJob, 3, 1, 8, 8);

    listaJob = inserirMaquina(listaJob, 3, 2, 4, 7);
    listaJob = inserirMaquina(listaJob, 3, 2, 8, 7);

    listaJob = inserirMaquina(listaJob, 3, 3, 3, 7);
    listaJob = inserirMaquina(listaJob, 3, 3, 5, 8);
    listaJob = inserirMaquina(listaJob, 3, 3, 7, 7);

    listaJob = inserirMaquina(listaJob, 3, 4, 4, 7);
    listaJob = inserirMaquina(listaJob, 3, 4, 6, 8);

    listaJob = inserirMaquina(listaJob, 3, 5, 1, 1);
    listaJob = inserirMaquina(listaJob, 3, 5, 2, 4);
    //---------------------------------
    listaJob = inserirMaquina(listaJob, 4, 1, 1, 4);
    listaJob = inserirMaquina(listaJob, 4, 1, 3, 3);
    listaJob = inserirMaquina(listaJob, 4, 1, 5, 7);

    listaJob = inserirMaquina(listaJob, 4, 2, 2, 4);
    listaJob = inserirMaquina(listaJob, 4, 2, 8, 4);

    listaJob = inserirMaquina(listaJob, 4, 3, 3, 4);
    listaJob = inserirMaquina(listaJob, 4, 3, 4, 5);
    listaJob = inserirMaquina(listaJob, 4, 3, 6, 6);
    listaJob = inserirMaquina(listaJob, 4, 3, 7, 7);

    listaJob = inserirMaquina(listaJob, 4, 4, 5, 3);
    listaJob = inserirMaquina(listaJob, 4, 4, 6, 5);
    listaJob = inserirMaquina(listaJob, 4, 4, 8, 5);
    //-----------------------------------------
    listaJob = inserirMaquina(listaJob, 5, 1, 1, 3);

    listaJob = inserirMaquina(listaJob, 5, 2, 2, 4);
    listaJob = inserirMaquina(listaJob, 5, 2, 4, 5);

    listaJob = inserirMaquina(listaJob, 5, 3, 3, 4);
    listaJob = inserirMaquina(listaJob, 5, 3, 8, 4);

    listaJob = inserirMaquina(listaJob, 5, 4, 5, 3);
    listaJob = inserirMaquina(listaJob, 5, 4, 6, 3);
    listaJob = inserirMaquina(listaJob, 5, 4, 8, 3);

    listaJob = inserirMaquina(listaJob, 5, 5, 4, 5);
    listaJob = inserirMaquina(listaJob, 5, 5, 6, 4);
    //-----------------------------
    listaJob = inserirMaquina(listaJob, 6, 1, 1, 3);
    listaJob = inserirMaquina(listaJob, 6, 1, 2, 5);
    listaJob = inserirMaquina(listaJob, 6, 1, 3, 6);

    listaJob = inserirMaquina(listaJob, 6, 2, 4, 7);
    listaJob = inserirMaquina(listaJob, 6, 2, 5, 8);

    listaJob = inserirMaquina(listaJob, 6, 3, 3, 9);
    listaJob = inserirMaquina(listaJob, 6, 3, 6, 8);
    //-----------------------------------
    listaJob = inserirMaquina(listaJob, 7, 1, 3, 4);
    listaJob = inserirMaquina(listaJob, 7, 1, 5, 5);
    listaJob = inserirMaquina(listaJob, 7, 1, 6, 4);

    listaJob = inserirMaquina(listaJob, 7, 2, 4, 4);
    listaJob = inserirMaquina(listaJob, 7, 2, 7, 6);
    listaJob = inserirMaquina(listaJob, 7, 2, 8, 4);

    listaJob = inserirMaquina(listaJob, 7, 3, 1, 3);
    listaJob = inserirMaquina(listaJob, 7, 3, 3, 3);
    listaJob = inserirMaquina(listaJob, 7, 3, 4, 4);
    listaJob = inserirMaquina(listaJob, 7, 3, 5, 5);

    listaJob = inserirMaquina(listaJob, 7, 4, 4, 4);
    listaJob = inserirMaquina(listaJob, 7, 4, 6, 6);
    listaJob = inserirMaquina(listaJob, 7, 4, 8, 5);

    listaJob = inserirMaquina(listaJob, 7, 5, 1, 3);
    listaJob = inserirMaquina(listaJob, 7, 5, 3, 3);
    //---------------------------------------
    listaJob = inserirMaquina(listaJob, 8, 1, 1, 3);
    listaJob = inserirMaquina(listaJob, 8, 1, 2, 4);
    listaJob = inserirMaquina(listaJob, 8, 1, 6, 4);

    listaJob = inserirMaquina(listaJob, 8, 2, 4, 6);
    listaJob = inserirMaquina(listaJob, 8, 2, 5, 5);
    listaJob = inserirMaquina(listaJob, 8, 2, 8, 4);

    listaJob = inserirMaquina(listaJob, 8, 3, 3, 4);
    listaJob = inserirMaquina(listaJob, 8, 3, 7, 5);

    listaJob = inserirMaquina(listaJob, 8, 4, 4, 4);
    listaJob = inserirMaquina(listaJob, 8, 4, 6, 6);

    listaJob = inserirMaquina(listaJob, 8, 5, 7, 1);
    listaJob = inserirMaquina(listaJob, 8, 5, 8, 2);

    printf("Matriz inserida\n");
}

int alterarJob(Lista* listaJob, int job, int jobNovo){

    while (listaJob != NULL){

        if (job == listaJob->job){

            listaJob->job = jobNovo;
        }

        listaJob = listaJob->seguinte;
    }

    return 0;
}

int alterarOperacao(Lista* listaJob, int job, int op, int opNova){

    while(listaJob != NULL){

        if (job == listaJob->job && op == listaJob->operacao){

            listaJob->operacao = opNova;
        }

        listaJob = listaJob->seguinte;
    }

    return 0;
}

int alterarMaquina(Lista* listaJob, int job, int op, int maq, int maqNova){

    while(listaJob!=NULL){

        if ( job == listaJob->job && op == listaJob->operacao && maq == listaJob->maquina){

            listaJob->maquina = maqNova;
        }

        listaJob=listaJob->seguinte;
    }

    return 0;
}

int alterarTempo(Lista* listaJob, int job, int op, int maq, int temp){

    while(listaJob!=NULL){

        if (job == listaJob->job && op == listaJob->operacao && maq == listaJob->maquina){

            listaJob->tempo = temp;
        }

        listaJob=listaJob->seguinte;

    }

    return 0;
}

Lista* removerLista(Lista* listaJob){

    Lista *aux;

    while(listaJob != NULL){

        aux = listaJob;
        listaJob = listaJob->seguinte;

        free(aux);
    }
    printf("Lista removida\n");
}

Lista* removerJob(Lista* listaJob, int job){

    Lista *aux = listaJob;

    while (aux!=NULL){

        if (aux->job == job){

            listaJob = removerOperacao(listaJob, job, aux->operacao);

            aux = listaJob;
        }
        else
            aux = aux->seguinte;
    }

    return listaJob;
}

Lista* removerOperacao(Lista* listaJob, int job, int op){

    Lista *aux = listaJob;

    while (aux != NULL){

        if (aux->job == job && aux->operacao == op){

            listaJob = removerMaquina(&listaJob, job, op, aux->maquina);

            aux = listaJob;
        }
        else
            aux = aux->seguinte;
    }

    return listaJob;
}

Lista* removerMaquina(struct Lista** aux, int job, int op, int maq){

    struct Lista *atual = *aux, *anterior;
    int existe=0;

    if (atual->job == job && atual->operacao == op && atual->maquina==maq){ // caso a maquina estaja na primeira posicao

        *aux = atual->seguinte;
        free(atual);
        return *aux;  // atualizar o endere�o inicial da lista
    }

    while(atual->seguinte != NULL){  // encontar a operacao que a maquina esta

        anterior = atual;
        atual = atual->seguinte;

        if (atual->job == job && atual->operacao == op && atual->maquina== maq){ // encontrar a maquina que o utilizador quer

            existe = 1;
            break;
        }
    }

    if (atual == NULL)  // caso esteja na ultima posicao
        return *aux;

    else if (existe == 0)
        return *aux;

    anterior->seguinte = atual->seguinte;

    free(atual);
    return *aux;
}

Lista* lerFicheiro(Lista* listaJob){

    int i=0;
    int job, operacao, maquina, tempo;
    char conteudo[200];
    char texto[200];

    FILE * ficheiro;

    ficheiro = fopen("Job.txt","r"); // pomos o nome do ficheiro que queremos ler

    if (ficheiro != NULL) {

        while (fgets(conteudo, 200, ficheiro) != NULL) {

            sscanf(conteudo, "%s%d\n", &texto, &job);

            fgets(conteudo, 200, ficheiro);
            sscanf(conteudo, "%s%d\n", &texto, &operacao); // separar o conteudo do texto para o programa nao se confundir com as variaveis

            fgets(conteudo, 200, ficheiro);
            sscanf(conteudo, "%s%d\n", &texto, &maquina);

            fgets(conteudo, 200, ficheiro);
            sscanf(conteudo, "%s%d\n", &texto, &tempo);

            listaJob = inserirMaquina(listaJob, job, operacao, maquina, tempo); // para garantir que fica ordenada na lista ligada

            i++;
        }
        fclose(ficheiro);

    }

    return listaJob;
}

void escreverFicheiro(Lista* listaJob){

    FILE * ficheiro; //descritor do ficheiro

    ficheiro = fopen("Job.txt","w"); //abrir ficheiro para escrita

    while (listaJob != NULL){

        fprintf(ficheiro,"Job: ");
        fprintf(ficheiro, "%d\n", listaJob->job);
        fprintf(ficheiro,"Operacao: ");
        fprintf(ficheiro, "%d\n", listaJob->operacao);
        fprintf(ficheiro,"Maquina: ");
        fprintf(ficheiro, "%d\n", listaJob->maquina);
        fprintf(ficheiro,"Tempo: ");
        fprintf(ficheiro, "%d\n", listaJob->tempo);

        listaJob=listaJob->seguinte; //passar para a posicao seguinte da lista
    }

    fclose(ficheiro);
}

void listarJob(Lista* listaJob){

    while (listaJob!=NULL){

        printf("     Job: %d\n", listaJob->job);
        printf("Operacao: %d\n", listaJob->operacao);
        printf(" Maquina: %d\n", listaJob->maquina);
        printf("   Tempo: %d\n", listaJob->tempo);
        printf("\n");
        listaJob=listaJob->seguinte; // para avancar na lista ligada
    }

}

int verificarJob(Lista* listaJob, int job){

    while (listaJob != NULL){

        if (job == listaJob->job)

            return 1;

        listaJob = listaJob->seguinte;
    }
    return 0;
}

int verificarOperacao(Lista * listaJob, int job, int op){

    while(listaJob != NULL){

        if ( job == listaJob->job && op==listaJob->operacao ) //repetido

            return (1); // encontrou

        listaJob=listaJob->seguinte;
    }

    return(0);  // nao encontrou a maquina
}

int verificarMaquina(Lista * listaJob,  int job, int op, int maq){

    while(listaJob!=NULL){

        if (job == listaJob->job && op==listaJob->operacao && maq==listaJob->maquina) //repetido

            return (1); // encontrou

        listaJob=listaJob->seguinte;
    }

    return(0);  // nao encontrou a maquina
}

int verMaior(Lista* listaJob){

    int op=0, maior = 0, soma = 0;

    while(listaJob!=NULL){

        if (op == listaJob->operacao){
            if (maior < listaJob->tempo)
                maior = listaJob->tempo; //atualiza tempo
        }

        else{ //operacao diferente, logo atualiza somatorio e "zera" o maior
            soma = soma + maior;
            maior = 0;

            op = listaJob->operacao;
            maior = listaJob->tempo; //atualiza tempo
        }

        listaJob = listaJob->seguinte;
    }
    soma = soma + maior;//atualizar soma da ultima operacao

    return (soma);
}

int verMenor(Lista* listaJob){

    int op=0, menor = 0, soma = 0;

    while(listaJob!=NULL){

        if (op == listaJob->operacao){
            menor = 1000;
            if (menor > listaJob->tempo)
                menor = listaJob->tempo; //atualiza tempo
        }

        else{ //operacao diferente, logo atualiza somatorio e "zera" o menor
            soma = soma + menor;
            menor = 0;

            op = listaJob->operacao;
            menor = listaJob->tempo; //atualiza tempo
        }

        listaJob = listaJob->seguinte;
    }

    return (soma);
}

int verMedia(Lista* listaJob){

    int op = 0, somaOp = 0, cont = 0;
    float media = 0;

    while(listaJob!=NULL){

        if (op == listaJob->operacao){

            somaOp = somaOp + listaJob->tempo; //atualiza tempo
        }

        else{ //operacao diferente logo soma e atualiza o contador

            op = listaJob->operacao;
            somaOp = somaOp + listaJob->tempo;
        }

        cont ++;
        listaJob = listaJob->seguinte;
    }

    media = somaOp / cont;//atualizar soma da ultima
    printf("A media de tempo por operacao e: %.1f\n", media);

    return (0);
}
