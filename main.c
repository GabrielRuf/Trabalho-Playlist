#include <stdio.h>
#include <stdlib.h>

typedef struct musica {
	int id;
	char titulo[200];
	int id_artista;
	int duracao; //segundos
}musica;

typedef struct artista {
	int id;
	char nome[200];
	char genero[200];
}artista;

typedef struct musica_no {
	musica *musica;
	struct musica_no *prox;
}musica_no,*MusicasCabeca;

typedef struct artista_no {
	artista *artista;
	struct artista_no *prox;
}artista_no,*ArtistasCabeca;

musica_no *Busca(musica_no *ini,musica Musica) {
	musica_no *p = ini->prox;
	while (p && p->prox != Musica)
		p = p->prox;
	return p;
}

int main(int argc, char *argv[]) {
	/*Ponteiros das cabeças*/
	MusicasCabeca = malloc(sizeof(musica_no));
	ArtistasCabeca = malloc(sizeof(artista_no));
	MusicasCabeca->prox = NULL;
	ArtistasCabeca->prox = NULL;
	
	
	return 0;
}
