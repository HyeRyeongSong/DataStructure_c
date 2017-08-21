#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int CompareValue(const void* a, const void* b);
bool binarySearch(int* iArray, int iLength, int iTarget);

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

    qsort(iArray, N, sizeof(int), CompareValue);

    for(int i=0; i<M; ++i)
    {
        scanf("%d", &iSearch[i]);
        bisExist[i] = binarySearch(iArray, N, iSearch[i]);
    }

    for(int i=0; i<M; ++i)
    {
        printf("%d\n", bisExist[i]);
    }
    return 0;
}

bool binarySearch(int* iArray, int iLength, int iTarget)
{
    int iFirst = 0;
    int iLast = iLength-1;
    int iMid;
    while(iFirst <= iLast)
    {
        iMid = (iFirst + iLast) / 2;
        if(iArray[iMid] == iTarget)
            return true;
        else
        {
            if(iArray[iMid] < iTarget)
                iFirst = iMid + 1;
            else
                iLast = iMid - 1;
        }
    }
    return false;
}

int CompareValue(const void* a, const void* b)
{
    return ( *(int*)a - *(int*)b);
}