/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   hash.h
 * Author: rodri
 *
 * Created on 4 de Julho de 2017, 16:21
 */

#ifndef HASH_H
#define HASH_H

void GeraPesos(TipoPesos p);

TipoIndice h(TipoChave Chave, TipoPesos p);

void Inicializa(TipoDicionario T);

TipoApontador Pesquisa(TipoChave Ch, TipoPesos p, TipoDicionario T);

void Insere(TipoItem x, TipoPesos p, TipoDicionario T);

void Retira(TipoChave Ch, TipoPesos p, TipoDicionario T);

void Imprime(TipoDicionario tabela);

void LerPalavra(char *p, int Tam);

#endif /* HASH_H */

