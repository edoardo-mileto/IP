#include <stdio.h>
//esercizio della scacchiera

//trova dalla lez. l'immagine di esempio del risultato da ottenere
void draw(int lato, int dim) {
	//contare le righe che ci servono, per ogni riga...
	int riga, col, rip_riga, rip_col;
	for (riga = 0; riga < lato; riga++) {
		for (rip_riga = 0; rip_riga < dim; rip_riga++) {
			for (col = 0; col < lato; col++) {
				for (rip_col = 0; rip_col < dim; rip_col++) {
					if ((riga + col) % 2 == 0) {
						printf(" ");
					} else {
						printf("#");
					}
				}
			}
			printf("\n");
		}
	}
}

int main() {
	int x = 10;

	draw(7, 2);

	//printf("Hello, World!");

	return 0;
}
