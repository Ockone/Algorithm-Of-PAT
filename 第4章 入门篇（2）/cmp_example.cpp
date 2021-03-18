#include <stdio.h>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b; //可以理解为：当a>b时，将a放在b前面
}
int main() {
    int a[] = { 3, 1, 4, 2 };
    sort(a, a + 4, cmp);
    for (int i = 0; i < 4; i++) {
        printf("%d", a[i]); //输出4 3 2 1
    }
    return 0;
}
