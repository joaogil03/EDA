#include <stdio.h>

typedef struct Lista{  // estrura de dados para a constituicao de um job
    int job;
    int operacao;
    int maquina;
    int tempo;
    struct Lista* seguinte;
}Lista;

int menuPrincipal();
int menuInserir();
int menuRemover();
int menuAlterar();
int menuTempo();
Lista* inserirMatriz(Lista* listaJob);
Lista* inserirMaquina(Lista* listaJob, int job,int op, int maq, int temp); // inserir os dados no meio
int alterarJob(Lista* listaJob, int job, int jobNovo);
int alterarOperacao(Lista* listaJob, int job, int op, int opNova);
int alterarMaquina(Lista* listaJob, int job, int op, int maq, int maqNova);
int alterarTempo(Lista* listaJob, int job, int op, int maq, int temp);
Lista* removerLista(Lista* listaJob);
Lista* removerJob(Lista* listaJob, int job);
Lista* removerOperacao(Lista* listaJob, int job, int op);
Lista* removerMaquina(struct Lista** aux, int job, int op, int maq);// remover um objeto passando por parametro a sua operacao e a maquina
Lista* lerFicheiro(Lista* listaJob); // ler os dados no ficheiro
void escreverFicheiro(Lista* listaJob); // escrever os dados do ficheiro
void listarJob(Lista* listaJob); // listar os elementos da lista
int verificarJob(Lista* listaJob, int job);
int verificarOperacao(Lista* listaJob, int job, int op); // ver se a operacao existe
int verificarMaquina(Lista* listaJob, int job, int op, int maq); // ver se a maquina existe
int verMaior(Lista* listaJob);
int verMenor(Lista* listaJob);
int verMedia(Lista* listaJob);
