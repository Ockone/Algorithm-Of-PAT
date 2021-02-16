#include <stdio.h>

bool isLeap(int year) // 判断是否为闰年
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int howmanydays(int a, int b)
{
    int date1 = a % 100, date2 = b % 100;
    a /= 100; b /= 100;
    int month1 = a % 100, month2 = b % 100;
    int year1 = a / 100, year2 = b / 100;

    int M[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                  {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    /* 第一个终止日期,是日期完全重合
     * 将该事件取非作为循环条件
     * 即!(y==year2 && m==month2 && d==date2)
     * => y < year2 || m < month2 || d < date2
     */
    int y = year1, m = month1, d = date1;
    int result = 1; // 初始化为1，因为连续日期记为2天
    int flag = isLeap(y) ? 1 : 0; // 选择月份记录
    while(y < year2 || m < month2 || d < date2){
        d++;
        if(d > M[flag][m]){
            d = 1;
            m++;
            if(m == 13){
                m = 1;
                y++;
                flag = isLeap(y) ? 1 : 0;
            }
        }
        result++;
    }
    return result;
}

int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF){
        if(a > b){ // 确保a < b
            int temp = b;
            b = a;
            a = temp;
        }
        printf("%d\n", howmanydays(a, b));
    }
    return 0;
}
