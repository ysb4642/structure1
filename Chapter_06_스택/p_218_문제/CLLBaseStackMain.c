#include <stdio.h>
#include "CLLBaseStack.h"

int main(void)
{
    // Stack의 생성 및 초기화
    Stack stack;
    StackInit(&stack);

    // 데이터 넣기
    Spush(&stack, 1); Spush(&stack, 2);
    Spush(&stack, 3); Spush(&stack, 4);
    Spush(&stack, 5);

    // 데이터 꺼내기
    while(!SIsEmpty(&stack))
        printf("%d ", Spop(&stack));
    printf("\n");
    return 0;
}
