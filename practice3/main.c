#include <stdio.h>

int main()
{
    //����ˮ����

    int money = 0;
    scanf("%d",&money);
    int empty = money;
    int total = money;


    while(empty >= 2)
    {
        total += empty / 2;
        empty = empty / 2 + empty % 2;
    }
    printf("%d",total);
    return 0;
}
