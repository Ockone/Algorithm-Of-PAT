#include <stdio.h>
#include <string.h>
// ������� 2021/1/15/18:27

int main()
{
    void print(int sum[], int n); // C/C++��Ҫ�Ա����ú������������ܷ�����

    int n;
    scanf("%d", &n);
    int pre[n], sum[n]; // pre�ϲ㣻sum�²�
    for(int i = 1; i <= n; i++){
        sum[0] = 1; sum[i-1] = 1; // Ԥ���ԵԪ����ֵ
        for(int j = 1; j < i-1; j++){
            sum[j] = pre[j-1] + pre[j]; // �м�Ԫ��������Ǽ���
        }
        print(sum, i); // ��ӡ����
        /*
        pre = sum; // ���㼶����
        ������룺���鲻���໥��ֵ��
        */
        // memcpy�ڴ濽������������<string.h>
        // void *memcpy(void *destin, void *source, unsigned n);
        memcpy(pre, sum, i * sizeof(int)); // n��ʾ��Ҫ�����ֽ���
    }
    return 0;
}

void print(int sum[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", sum[i]);
    printf("\n");
}
