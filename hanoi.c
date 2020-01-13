#include <stdio.h>
#include <stdlib.h>

int calc_hanoi (int n, int orig, int dest, int temp) {
	int rodadas = 1;
	
	if (n == 1) {
		//mover o menor disco do pino Orig para o pino Dest;
		dest = orig;
	} else {
		rodadas += 2;
		calc_hanoi(n - 1, orig, temp, dest);
		//mover o N-ésimo menor disco do pino Orig para o pino Dest;
		calc_hanoi(n - 1, temp, dest, orig);
	}
      
	return rodadas;
}

int main () {
	
	FILE * fp;
	fp = freopen("input1.txt", "r", stdin);
	
	char buf[4];
	int i = 1;
	
	if (fp != NULL) {
		while(fgets(buf, 4, fp) != NULL) {
			int n = strtol(buf, NULL, 10);
						
			if (n == 0) break;
			
			printf("Teste %d\n", i++);
			printf("%d\n\n", calc_hanoi(n, 1, 3, 2));
		}
	}
	
	return (0);
}
