#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int BSearchRecur(int* iArray, int iFirst, int iLast, const int iTarget);

int main()
{
    int* iArray = calloc(10, sizeof(int));
    for(int i= 0; i<10; ++i)
        iArray[i] = i+1;
    int iNum = BSearchRecur(iArray, 0, 9, 2);
    if(iNum == -1)
        printf("No target available\n");
    else
        printf("The index of the targeted number is %d\n", iNum);
    return 0;
}

int BSearchRecur(int* iArray, int iFirst, int iLast, const int iTarget)
{
    int iMid;
    if(iFirst > iLast)
        return -1;
    iMid = (iFirst + iLast) / 2;
    if (iArray[iMid] == iTarget)
        return iMid;
    else if (iArray[iMid] > iTarget)
        return BSearchRecur(iArray, iFirst, iMid-1, iTarget);
    else
        return BSearchRecur(iArray, iMid+1, iLast, iTarget);
}

//오랜만에 코딩하더니 return문을 안쓰는 실수를 하다닛!!!