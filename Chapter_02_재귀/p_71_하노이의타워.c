#include <stdio.h>

void HanoiTowerMovd(int num, char from, char by, char to)
{
    if(num == 1)
        printf("원반 1을 %c에서 %c로 이동\n", from, to);
    else
    {
        HanoiTowerMovd(num-1, from, to, by);
        printf("원반 %d을 %c에서 %c로 이동\n", num, from, to);
        HanoiTowerMovd(num-1,by, from, to);
    }
}

int main(void)
{
    // 막대 A의 원반 3개를 막대 B를 경유하여 막대 C로 옮기기
    HanoiTowerMovd(3, 'A', 'B', 'C');
    return 0;
}