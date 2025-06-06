#include <stdio.h>

int main(void)
{
    int N, X;
    int A[10000];

    scanf("%d %d", &N, &X);

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++) {
        if (A[i] < X) {
            printf("%d", A[i]);
           
            if (i != N - 1) {
               
                for (int j = i + 1; j < N; j++) {
                    if (A[j] < X) {
                        printf(" ");
                        break;
                    }
                }
            }
        }
    }

    printf("\n");
    return 0;
}