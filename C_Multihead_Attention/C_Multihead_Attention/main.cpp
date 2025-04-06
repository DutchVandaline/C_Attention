#include <stdio.h>
#include <math.h>

// Calculating position of 2 dimension i,j to 1 dimension value
#define IDX(i,j,cols) ((i)*(cols) + (j))

void matmul(const double* A, const double* B, double* C, int m, int n, int p) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			C[IDX(i, j, p)] = 0.0;
			for (int k = 0; k < p; k++) {
				C[IDX(i, j, p)] += A[IDX(i, k, n)] * B[IDX(k, j, p)];
			}
		}
	}
}


int main() {
	printf("Hello World");
}