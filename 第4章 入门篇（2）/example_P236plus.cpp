#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    double a[] = { 1.4, -2.1, 9 };
    sort(a, a + 3);
    for (int i = 0; i < 3; i++) {
        printf("%.1f", a[i]);
        if (i == 2) 
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}
