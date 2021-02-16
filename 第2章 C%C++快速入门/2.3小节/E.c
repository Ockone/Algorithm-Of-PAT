#include <stdio.h>
/*
本例在提交的时候报了一个返回值错误
事实却是我丢了一个括号，唉~~
*/
int main(){
    double profit, salary = 0.0;
    scanf("%lf", &profit);
    if(profit <= 100000.0){
        salary += (profit * 0.1);
    }else{
        salary += (100000.0 * 0.1);
        if(profit <= 200000.0){
            salary += ((profit-100000.0) * 0.075);
        }else{
            salary += (100000.0 * 0.075);
            if(profit <= 400000){
                salary += ((profit-200000.0) * 0.05);
            }else{
                salary += (200000.0 * 0.05);
                if(profit <= 600000.0){
                    salary += ((profit-400000.0) * 0.03);
                }else{
                    salary += (200000.0 * 0.03);
                    if(profit <= 1000000.0){
                        salary += ((profit-600000.0) * 0.015);
                    }else{
                        salary += (400000.0 * 0.015);
                        salary += ((profit-1000000.0) * 0.01);
                    }
                }
            }
        }
    }
    printf("%.2f", salary);
    return 0;
}