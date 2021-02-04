#include <stdio.h>
#include <string.h>
// 杨辉三角 2021/1/15/18:27

int main()
{
    void print(int sum[], int n); // C/C++需要对被调用函数先声明，很烦。。

    int n;
    scanf("%d", &n);
    int pre[n], sum[n]; // pre上层；sum下层
    for(int i = 1; i <= n; i++){
        sum[0] = 1; sum[i-1] = 1; // 预设边缘元素数值
        for(int j = 1; j < i-1; j++){
            sum[j] = pre[j-1] + pre[j]; // 中间元素杨辉三角计算
        }
        print(sum, i); // 打印数组
        /*
        pre = sum; // 将层级上推
        错误代码：数组不能相互赋值。
        */
        // memcpy内存拷贝函数，属于<string.h>
        // void *memcpy(void *destin, void *source, unsigned n);
        memcpy(pre, sum, i * sizeof(int)); // n表示需要拷贝字节数
    }
    return 0;
}

void print(int sum[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", sum[i]);
    printf("\n");
}
