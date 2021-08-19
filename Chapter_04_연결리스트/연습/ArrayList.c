#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist)                // 초기화
{
    (plist->numOfData) = 0;
    (plist->curPosition) = -1;
}
void LInsert(List *plist, LData data)      // 데이터 저장
{
    if(plist->numOfData >= LIST_LEN)
    {
        puts("저장이 불능합니다.");
        return ;
    }

    plist->arr[plist->numOfData] = data;
    (plist->numOfData)++;
}

int LFirst(List * plist, LData * pdata)    // 첫 데이터 참조
{
    if(plist->numOfData == 0)
        return FALSE;
    
    (plist->curPosition) = 0;
    *pdata = plist->arr[0];
    return TRUE;
}

int LNext(List * plist, LData * pdata)     // 두 번째 이후 데이터 참조
{
    if(plist->curPosition >= (plist->numOfData)-1)
        return FALSE;

    (plist->curPosition)++;
    *pdata = plist->arr[plist->curPosition];
    return TRUE;
}

LData LRemove(List * plist)        // 참조한 데이터 삭제
{
    int rpos = plist->curPosition;
    int num = plist->numOfData;
    int i;
    LData rdata = plist->arr[rpos];

    for(i = rpos; i < num -1; i++)
        plist->arr[i] = plist->arr[i+1];
    
    (plist->numOfData)--;
    (plist->curPosition)--;
    return rdata;
}
int LCount(List * plist)           // 저장된 데이터의 수 반환
{
    return plist->numOfData;
}
