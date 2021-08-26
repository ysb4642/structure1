#include <string.h>
#include <stdlib.h>
#include "InfixToPostfix.h"
#include "PostCalculater.h"

int EvalInfixExp(char exp[])
{
    int len = strlen(exp);
    int ret;
    char * expcpy = (char*)malloc(len+1);
    strcpy(expcpy, exp);

    ConvToRPNExp(expcpy);           // 후기 표기법의 수식으로 변환
    ret = EvalRPNExp(expcpy);        // 번환된 수식의 계산

    free(expcpy);
    return ret;
}