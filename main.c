#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int N;
    int M;
    int* iArray;
    int* iSearch;
    bool* bisExist;
    scanf("%d", &N);
    iArray = calloc(N, sizeof(int));
    for(int i=0; i<N; ++i)
    {
        scanf("%d", &iArray[i]);
    }
    scanf("%d", &M);
    iSearch = calloc(M, sizeof(int));
    bisExist = calloc(M, sizeof(bool));
    for(int i=0; i<M; ++i)
    {
        scanf("%d", &iSearch[i]);
    }

    for(int i=0; i<M; ++i)
    {
        for(int j=0; j<N; ++j)
        {
            if(iSearch[i] == iArray[j])
            {
                bisExist[i] = 1;
                break;
            }
        }
        printf("%d\n", bisExist[i]);
    }

}