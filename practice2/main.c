#include <stdio.h>
#include <math.h>

int main()   //ˮ�ɻ�������
{
    int i = 0;
    for(i = 0;i <= 100000 ; i++)
    {
        int j = i;
        int sum = 0;
        int count = 1;//0��һλ��
        while(j / 10)
        {
            j /= 10;
            count++;
        }
        j = i;
        while(j)
        {
            sum += pow(j % 10,count);
            j /= 10;
        }
        if(sum == i)
        printf("%d\n",sum);
    }

    return 0;
}
