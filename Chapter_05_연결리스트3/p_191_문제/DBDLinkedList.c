#include <stdio.h>
#include <stdlib.h>
#include "DBDLinkedList.h"

void ListInit(List * plist)
{
    plist->head = (Node*)malloc(sizeof(Node));
    plist->tail = (Node*)malloc(sizeof(Node));

    plist->head->prev = NULL;
    plist->head->next = plist->tail;

    plist->tail->prev = plist->head;
    plist->tail->next = NULL;

    plist->numOfData = 0;
}

void LInsert(List * plist, Data data)      // 꼬리에 노드를 추가
{
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

    newNode->prev = plist->tail->prev;
    plist->tail->prev->next = newNode;

    newNode->next = plist->tail;
    plist->tail->prev = newNode;

    (plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata)
{
    if(plist->head->next == plist->tail)
        return FALSE;
    
    plist->cur = plist->head->next;
    *pdata = plist->cur->data;
    return TRUE;
}

int LNext(List * plist, Data * pdata)
{
    if(plist->cur->next == plist->tail)
        return FALSE;
    
    plist->cur = plist->cur->next;
    *pdata = plist->cur->data;
    return TRUE;
}

Data LRemove(List * plist)          // 앞에서 참조가 이뤄진 노드를 삭제한다.
{
    Node * rpos = plist->cur;
    Data remv = rpos->data;

    plist->cur->prev->next = plist->cur->next;
    plist->cur->next->prev = plist->cur->prev;

    plist->cur = plist->cur->prev;      // cur의 위치를 재조정

    free(rpos);
    (plist->numOfData)--;
    return remv;
}

int LCount(List * plist)
{
    return plist->numOfData;
}