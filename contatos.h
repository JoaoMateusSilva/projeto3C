#define TOTAL 255

typedef struct Tarefa {
    char contato[100];
    char numero[11];
} Contato;

int criar(Contato contatos[], int *pos) {}
int deletar(Contato contatos[], int *pos) {}
int listar(Contato contatos[], int pos) {}
int salvar(Contato contatos[], int total, int pos) {}
int carregar(Contato contatos[], int total, int pos) {}