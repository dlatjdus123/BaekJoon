#include <stdio.h>

int main(void)
{
    int N, M;
    int basket[101] = {0};

    scanf("%d %d", &N, &M);

    for (int m = 0; m < M; m++) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);

        for (int b = i; b <= j; b++) {
            basket[b] = k;
        }
    }

    for (int i = 1; i <= N; i++) {
        printf("%d", basket[i]);
        if (i < N) printf(" ");
    }

    printf("\n");
    return 0;
}