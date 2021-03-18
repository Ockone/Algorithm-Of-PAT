#include <stdio.h>
#include <algorithm>

using namespace std;
int main(){
    int a[6] = { 9, 4, 2, 5, 6, -1 };
    //将a[0]-a[3]从小到大排序
    sort(a, a + 4);
    for (int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    //将a[0]~a[5]从小到大排序
    sort(a, a + 6);
    for (int i = 0; i < 6; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
