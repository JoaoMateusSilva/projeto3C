#include <stdio.h>
#include <string.h>
#include "contatos.h"

int criar(Contato contatos[], int *pos) {
    if (*pos >= TOTAL)
        return 1;

    printf("Entre com o nome do contato: ");
    fgets(contatos[*pos].nome, 100, stdin);
    contatos[*pos].nome[strcspn(contatos[*pos].nome, "\n")] = '\0';

    printf("Entre com o numero do contato (até 11 digitos): ");
    fgets(contatos[*pos].numero, 11, stdin);
    contatos[*pos].numero[strcspn(contatos[*pos].numero, "\n")] = '\0';

    *pos = *pos + 1;

    return 0;
}

int deletar(Contato contatos[], int *pos) {
    if (*pos == 0)
        return 1;

    char numero_deletar[11];
    printf("Entre com o numero do contato a ser deletado: ");
    fgets(numero_deletar, 11, stdin);
    numero_deletar[strcspn(numero_deletar, "\n")] = '\0';

    int pos_deletar = -1;
    for (int i = 0; i < *pos; i++) {
        if (strcmp(contatos[i].numero, numero_deletar) == 0) {
            pos_deletar = i;
            break;
        }
    }

    if (pos_deletar == -1)
        return 2;

    for (int i = pos_deletar; i < *pos; i++) {
        strcpy(contatos[i].nome, contatos[i + 1].nome);
        strcpy(contatos[i].numero, contatos[i + 1].numero);
    }

    *pos = *pos - 1;

    return 0;
}

int listar(Contato contatos[], int pos) {
    if (pos == 0)
        return 1;

    for (int i = 0; i < pos; i++) {
        printf("Pos: %d\t", i + 1);
        printf("Contato: %s\t", contatos[i].nome);
        printf("Numero: %s\n", contatos[i].numero);
    }
}

int salvar (Contato contatos[], int total, int pos) {
    printf("funcao de salvar tarefas\n");
    return 0;
}

int carregar (Contato contatos[], int total, int pos) {
    printf("funcao de carregar tarefas\n");
    return 0;
}

