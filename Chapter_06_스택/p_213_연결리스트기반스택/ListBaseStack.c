#include <stdio.h>
#include <stdlib.h>
#include "ListBaseStack.h"

void StackInit(Stack * pstack)      // 스택의 초기화
{
    pstack->head = NULL;
}

int SIsEmpty(Stack * pstack)        // 스택이 비었는지 확인
{
    if(pstack->head == NULL)
        return TRUE;
    else
        return FALSE;
}

void SPush(Stack * pstack, Data data)           // 스택의 push 연산
{
    Node * newNode = (Node*)malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = pstack->head;

    pstack->head = newNode;
}

Data Spop(Stack * pstack)                       // 스택의 pop 연산
{
    Data rdata;
    Node * rnode;

    if(SIsEmpty(pstack)) {
        printf("Stack Memory Error!");
        exit(-1);
    }

    rdata = pstack->head->data;
    rnode = pstack->head;

    pstack->head = pstack->head->next;
    free(rnode);

    return rdata;
}

Data SPeek(Stack * pstack)                      // 스택의 peek 연산
{
    if(SIsEmpty(pstack)){
        printf("Stack Memory Error!");
        exit(-1);
    }

    return pstack->head->data;
}
