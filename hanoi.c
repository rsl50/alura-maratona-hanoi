#include <stdio.h>
#include <stdlib.h>

int calc_hanoi (int n) {

	/*
	if (n == 1) {
		//mover o menor disco do pino Orig para o pino Dest;
		dest = orig;		
	} else {
		calc_hanoi(n - 1, orig, temp, dest);
		//mover o N-ésimo menor disco do pino Orig para o pino Dest;
		calc_hanoi(n - 1, temp, dest, orig);
	}
	*/
	
	if (n == 1) return 1;
    return 2*calc_hanoi(n-1) + 1;
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
			
			//long long int movimentos = pow(2, n) - 1;
			long long int movimentos = calc_hanoi(n);

			printf("Teste %d\n", i++);
			printf("%d\n\n", movimentos);
		}
	}
	
	return (0);
}
