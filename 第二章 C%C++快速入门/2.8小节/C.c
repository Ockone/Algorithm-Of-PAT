#include <stdio.h>
#include <string.h>

struct person {
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int class;
        char position[10];
    }category;
};

int main()
{
    int n; // 数据行数
    scanf("%d\n", &n);
    struct person ps[n];

    int i = 0;
	char category[20];
    while(i < n){
        scanf("%d %s %c %c %s", &ps[i].num, ps[i].name, &ps[i].sex, &ps[i].job, category);
		if(ps[i].job == 's'){
			sscanf(category, "%d", &ps[i].category.class);
		}else{
			strcpy(ps[i].category.position, category);
		}
		i++;
    }

	i = 0;
	while(i < n){
		if(ps[i].job == 's'){
			printf("%d %s %c %c %d\n", ps[i].num, ps[i].name, ps[i].sex, ps[i].job, ps[i].category.class);
		}else{
			printf("%d %s %c %c %s\n", ps[i].num, ps[i].name, ps[i].sex, ps[i].job, ps[i].category.position);
		}
		i++;
	}
	return 0;
}
