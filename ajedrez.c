#include <stdio.h>

//mostrar_tablero?
void ver_tablero(char tablero[64]){	
	char nl = '\n'; 
	for (int i = 0;i<8;i++){
	       	fwrite(tablero,1,8,stdout);	
		tablero +=8;
		fwrite(&nl,1,1,stdout);
	}
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

	const char VACIO = ' ';

	const char V = CUADRADO;
	const char PB = CUADRADO | PEON | BLANCAS;
	const char PN = CUADRADO | PEON | NEGRAS;

	const char CB = CUADRADO | CABALLO | BLANCAS;
	const char CN = CUADRADO | CABALLO | NEGRAS;

	const char AB = CUADRADO | ALFIL | BLANCAS;
	const char AN = CUADRADO | ALFIL | NEGRAS;

	const char TB = CUADRADO | TORRE | BLANCAS;
	const char TN = CUADRADO | TORRE | NEGRAS;

	const char DB = CUADRADO | TORRE | BLANCAS;
	const char DN = CUADRADO | TORRE | NEGRAS;

	const char RB = CUADRADO | REY | BLANCAS;
	const char RN = CUADRADO | REY | NEGRAS;
	
	const char PEON_BLANCO = 'P';
        const char PEON_NEGRO = 'p';

	const char CABALLO_BLANCO = 'C';
	const char CABALLO_NEGRO = 'c';

	const char ALFIL_BLANCO = 'A';
	const char ALFIL_NEGRO = 'a';

	const char TORRE_BLANCA = 'T';
	const char TORRE_NEGRA = 't';

	const char DAMA_BLANCA = 'D';
	const char DAMA_NEGRA = 'd';

	const char REY_BLANCO = 'R';
	const char REY_NEGRO = 'r';	
	
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
