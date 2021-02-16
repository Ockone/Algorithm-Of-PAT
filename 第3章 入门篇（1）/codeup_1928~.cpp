#include <stdio.h>
/*过于复杂易错，弃用*/
bool isLeap(int year) // 是否为闰年？
{
    if(year % 4 == 0){
        if(year % 100 != 0 || year % 400 == 0)
            return true;
    }
    return false;
}

int pro(int a) // 第一年剩余天数
{
    int date = a % 100;
    a /= 100;
    int month = a % 100;
    int year = a / 100;

    int result = 0;

    int Leap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 闰年月份表
    result += Leap[month] - date + 1; // +1是因为连续日期记作两天
    for(int i = month + 1; i <= 12; i++)
        result += Leap[i - 1];

    if(!isLeap && month <= 2)
        result--;
    return result;
}

int suf(int a) // 最后一年多余日子
{
    int date = a % 100;
    a /= 100;
    int month = a % 100;
    int year = a / 100;

    int result = 0;

    int Leap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 闰年月份表
    result += date;
    for(int i = 1; i < month; i++)
        result += Leap[i - 1];

    if(!isLeap && month > 2)
        result--;
    return result;
}

int daysOfOnlyYear(int a, int b) // 如果两日期在同一年内
{
    int date1 = a % 100, date2 = b % 100;
    a /= 100; b /= 100;
    int month1 = a % 100, month2 = b % 100;
    if(month1 == month2) // 不但同年，还同月
        return (date2 - date1 + 1);

    int result = 0;
    int Leap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 闰年月份表
    result += Leap[month1] - date1 + 1 + date2;
    for(int i = month1 + 1; i < month2; i++)
        result += Leap[i - 1];

    if(!isLeap && month1 <= 2 && month2 > 2)
        result--;
    return result;
}

int howmanyDays(int a, int b)
{
    if(a > b){ // 获取的两个日期，先后关系不确定
        int temp = b; // 确保a < b
        b = a;
        a = temp;
    }

    int result = 0;
    int x = a / 10000, y = b / 10000;
    if(x == y)
        return daysOfOnlyYear(a, b);

    for(int i = x + 1; i < y; i++){
        if(isLeap(i))
            result += 366;
        else
            result += 365;
    }
    result += (pro(a) + suf(b));

    return result;
}

int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF)
        printf("%d\n", howmanyDays(a, b));

    return 0;
}
