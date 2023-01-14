#include <stdio.h>
struct stduent
{
    char name[10];
    char sex[10];
    long long xuehao;
    int age;

};
int main()
{
    char name1[10];

    struct stduent a ={"Fluoxetine","man,",20220405384,19};
    struct stduent* pd=&a;
    printf("name is:%s\n",(*pd).name);
    printf("age is:%d\n",pd->age);
    printf("xuehao is:%d\n",pd->xuehao);
    printf("sex is:%s\n",pd->sex);
    return 0;


}