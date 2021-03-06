#ifndef EstruturaDaFila
#define EstruturaDaFila

/*Definição dos tipos para uma fila usando apontadores*/

typedef struct Celula_str *Apontador;
typedef int TipoChave;

typedef struct TipoItem {
	TipoChave andar_de_origem, andar_de_destino, tempo_de_chamada, tempo_que_entrou;
} TipoItem;

typedef struct Celula_str {
	TipoItem Item;
	Apontador Prox;
} Celula;

typedef struct TipoFila {
	Apontador Frente, Tras;
} TipoFila;

void Faz_Fila_Vazia(TipoFila *Fila);

int Vazia(TipoFila Fila);

void Enfileira(TipoItem x, TipoFila *Fila);

void Desenfileira(TipoFila *Fila, TipoItem *Item);

/*Definição de funções extras*/
	
int Modulo(int Numero);

#endif
