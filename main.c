#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void HanoiTowerMove(int iNum, char cFrom, char cBy, char cTo);

int main()
{
    HanoiTowerMove(4, 'A', 'B', 'C');
    return 0;
}

void HanoiTowerMove(int iNum, char cFrom, char cBy, char cTo)
{
    if(iNum == 1)
        printf("원반 1을 %c에서 %c로 이동\n", cFrom, cTo);
    else
    {
        HanoiTowerMove(iNum-1, cFrom, cTo, cBy);
        printf("원반 %d을(를) %c에서 %c로 이동\n", iNum, cFrom, cTo);
        HanoiTowerMove(iNum-1, cBy, cFrom, cTo);
    }
}