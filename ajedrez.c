#include <stdio.h>


void ver_tablero(char tablero[64]){
	
	printf(tablero);	
}

void main(){

	// 8 bits deben ser suficientes para cada cuadrado del tablero.

	// El primer bit marca que es un bloque de memoria valido, así 0000 0000 lo usamos como memoria inicializada con valor ilegal.

	const char CUADRADO = 0b10000000;
	const char PEON = 0b00000001;
	const char CABALLO = 0b00000010;
	const char ALFIL = 0b00000100;
	const char TORRE = 0b00001000;
	const char DAMA = 0b00010000;
	const char REY = 0b00100000;
	//Se usará el septimo bit de estas 2 mascaras
	const char BLANCAS = 0b00000000; 
	const char NEGRAS = 0b01000000;

	const char VACIO = CUADRADO;


	const char PEON_BLANCO = CUADRADO | PEON | BLANCAS;
	const char PEON_NEGRO = CUADRADO | PEON | NEGRAS;

	const char CABALLO_BLANCO = CUADRADO | CABALLO | BLANCAS;
	const char CABALLO_NEGRO = CUADRADO | CABALLO | NEGRAS;

	const char ALFIL_BLANCO = CUADRADO | ALFIL | BLANCAS;
	const char ALFIL_NEGRO = CUADRADO | ALFIL | NEGRAS;

	const char TORRE_BLANCA = CUADRADO | TORRE | BLANCAS;
	const char TORRE_NEGRA = CUADRADO | TORRE | NEGRAS;

	const char DAMA_BLANCA = CUADRADO | TORRE | BLANCAS;
	const char DAMA_NEGRA = CUADRADO | TORRE | NEGRAS;

	const char REY_BLANCO = CUADRADO | REY | BLANCAS;
	const char REY_NEGRO = CUADRADO | REY | NEGRAS;
	char tablero_de_blancas_a_negras_y_de_rey_a_dama[64] = {TORRE_BLANCA, CABALLO_BLANCO, ALFIL_BLANCO, REY_BLANCO, DAMA_BLANCA,ALFIL_BLANCO,CABALLO_BLANCO,TORRE_BLANCA,
	PEON_BLANCO,PEON_BLANCO,PEON_BLANCO,PEON_BLANCO,PEON_BLANCO,PEON_BLANCO,PEON_BLANCO,PEON_BLANCO,
	VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,
	VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,
	VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,
	VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,VACIO,
	PEON_NEGRO,PEON_NEGRO,PEON_NEGRO,PEON_NEGRO,PEON_NEGRO,PEON_NEGRO,PEON_NEGRO,PEON_NEGRO,
	TORRE_NEGRA,CABALLO_NEGRO,ALFIL_NEGRO,REY_NEGRO,DAMA_NEGRA,ALFIL_NEGRO,CABALLO_NEGRO,TORRE_NEGRA};	
	char* tablero = tablero_de_blancas_a_negras_y_de_rey_a_dama;

	ver_tablero(tablero);
}


/*
//El segundo bit supongo que puede marcar el color de las piezas.
PEON_NEGRO = 0b11000001;
REY_BLANCO = 0b1010000;
REY_NEGRO = 0b11111111;
DAMA_BLANCA = 0b10011111;
DAMA_NEGRA = 0b11011111;
	*/
