#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
#include <map>

// 使用C++标识符
using namespace std;

struct node {
    double num;     //操作数
    char op;    //操作符
    bool flag;  //true表示操作数，false表示操作符
};

string str;
stack<node> s;  //操作符栈
queue<node> q;  //后缀表达式
//符号优先级，映射表
map<char, int> isp;     //栈内符号优先级
map<char, int> icp;     //栈外符号优先级

/**
 * 操作符   #   (   *./     +,-     )
 * isp      0   1   5       3      6
 * icp      0   6   4       2      1
 */
void initMap()  //初始化符号优先级
{
    //栈内
    isp['#'] = 0; isp['('] = 1; isp['*'] = isp['/'] = 5; isp['+'] = isp['-'] = 3; isp[')'] = 6;
    //栈外
    icp['#'] = 0; icp['('] = 6; icp['*'] = icp['/'] = 4; icp['+'] = icp['-'] = 2; icp[')'] = 1;
}

//将中缀表达式转换为后缀表达式
void Change() {
    double num;
    node temp;
    for (int i = 0; i < str.length();) {
        if (str[i] >= '0' && str[i] <= '9') {   //如果是操作数（只考虑整数）
            temp.flag = true;   //true表示操作数
            temp.num = str[i++] - '0'; // 记录第一个数位。后i++
            while (i < str.length() && str[i] >= '0' && str[i] <= '9') {    //从字符串中读取整个操作数
                temp.num = temp.num * 10 + (str[i] - '0');
                i++;
            }
            q.push(temp);   //将操作数入队
        } else {    //如果是操作符
            temp.flag = false;  //false表示操作符
            //如果操作符栈s中栈顶元素优先级高于该操作符
            //将栈顶元素弹出，入队
            while (!s.empty() && icp[str[i]] < isp[s.top().op]) {
                q.push(s.top());    //操作符入队
                s.pop();            //出栈
            }
            if (!s.empty() && icp[str[i]] == isp[s.top().op]) {     //括号或#号对匹配
                s.pop();    //将符号对一体丢弃
            } else {
                temp.op = str[i];
                s.push(temp);   //将该操作符入栈
            }
            i++;
        }
    }
    //将栈内剩余符号全部弹出，入队
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

/**
 * 依据后缀表达式，计算值
 * @return 结果值，double型
 */
double Calculate()  //计算后缀表达式
{
    double temp1, temp2;    //操作数1，操作数2
    node cur, temp;     //cur记录出队元素，temp记录入栈元素
    while (!q.empty()) {    //只要后缀表达式非空
        cur = q.front();     //cur记录队首元素
        q.pop();
        if (cur.flag == true) {   //如果是操作数，入栈
            s.push(cur);    //重用栈s
        } else {  //如果是操作符，立即运算
            temp2 = s.top().num;    // 弹出*第二*操作数
            s.pop();
            temp1 = s.top().num;    //弹出第二个操作数
            s.pop();
            temp.flag = true;   //temp用于记录该操作结果
            if (cur.op == '+')
                temp.num = temp1 + temp2;   //加法
            else if (cur.op == '-')
                temp.num = temp1 - temp2;   //减法
            else if (cur.op == '*')
                temp.num = temp1 * temp2;   //乘法
            else
                temp.num = temp1 / temp2;   //除法
            s.push(temp);   //将结果入栈
        }
    }
    return s.top().num;     //最终栈顶元素就是，运算结果
}

int main()
{
    //初始化符号优先级，映射表
    initMap();
    while (getline(cin, str), str != "0") {
        for (string::iterator it = str.end(); it != str.begin(); it--) {
            if(*it == ' ')
                str.erase(it);  //去除表达式中的空格
        }
        while (!s.empty()) s.pop();     //初始化栈
        Change();   //将中缀表达式转换为后缀表达式
        printf("%.2f\n", Calculate());  //计算后缀表达式并输出
    }
    return 0;

}

