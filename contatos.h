#define TOTAL 255

typedef struct Contato {
    char nome[100];
    char numero[11];
} Contato;

typedef enum Erros {
    OK, MAX_CONTATOS, SEM_CONTATOS, NAO_EXISTE, ABRIR, FECHAR, ESCREVER, LER
} Erro;

Erro criar(Contato contatos[], int *pos);
Erro deletar(Contato contatos[], int *pos);
Erro listar(Contato contatos[], int pos);
Erro salvar(Contato contatos[], int total, int pos);
Erro carregar(Contato contatos[], int total, int *pos);
void clearBuffer();