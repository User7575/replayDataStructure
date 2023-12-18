#include <stdio.h>


#define BUFFER_SIZE 16
#define DEFAULT_SIZE 2
//什么叫结构体/
//1.将不同类型的属性封装成一个类型/
//2.结构体怎么定义?/
struct stuInfo
{
    int age;
    int height;
    char sex;
    char name[BUFFER_SIZE];
    char *address;
} 

//取别名 typedef/
//typedef struct stuInfo stuInfo



//结构体会默认进行字节对齐：读取速度快（但是浪费空间）/
//什么叫变长结构体？/
//函数：结构体做函数/

//传入参数：不要改变值/ 
 
int printStruct(const stuInfo stu)
{
    int ret = 0;
    int len = sizeof(stu);
    printf("len:%d\n",len);
    //栈空间很小，不允许超过8兆/
    //结构体必须用指针 省内存/
    // stu->age = 100;
    return 0;
}
int printStructBuffer(stuInfo *stu, int stuSize)
{
    for(int idx = 0; idx < stuSize; idx++)
    {
        printf("stu.age:%d\t, stu.height:%d\t, stu.sex:%d\t, stu.weight:%d\t, stu.name:%d\n",
                stu[idx].age, stu[idx].height, stu[idx].sex, stu[idx].weight, stu[idx].name);
    }
}

int main ()
{
#if 0
    //3.怎么使用结构体/
    struct stuInfo stu;
    memset(&stu, 0,sizeof(stu));
    //4.结构体的大小/
    int len = sizeof(stu);
    printf("len:%d\n",len);

    //5.结构体数组/
    //数组：1.一块连续的内存地址/
    //      2.存放的是同一种数据类型/
    stuInfo buffer[DEFAULT_SIZE];

    buffer[0].age = 10;
    buffer[0].weight = 50;
    buffer[0].sex = 'm';
    buffer[0].height = 130;
    strncpy(buffer[0].name, "zhnagsan", sizeof(buffer[0].name) - 1); 

    buffer[1].age = 10;
    buffer[1].weight = 50;
    buffer[1].sex = 'f';
    buffer[1].height = 160;
    strncpy(buffer[1].name, "wangwu", sizeof(buffer[1].name) - 1); 

    printf("stu.age:%d\t, stu.height:%d\t, stu.sex:%c\t, stu.weight:%d\t, stu.name:%s\n",
           buffer[0].age, buffer[0].height, buffer[0].sex, buffer[0].weight, buffer[0].name);  

    printf("stu.age:%d\t, stu.height:%d\t, stu.sex:%c\t, stu.weight:%d\t, stu.name:%s\n",
           buffer[1].age, buffer[1].height, buffer[1].sex, buffer[1].weight, buffer[1].name);         

#endif
#if 0
    stu.age = 10
    stu.height = 50;
    stu.sex = 'm';
    stu. height = 170;
    strncpy(stu.name, "zhnagsan", sizeof(stu.name) - 1);

    printf("stu.age:%d\t, stu.height:%d\t, stu.sex:%d\t, stu.weight:%d\t, stu.name:%d\n",
    stu.age, stu.height, stu.sex, stu.weight, stu.weight, stu.name);

#endif   
#if 0
    //结构体指针/
    stu.age = 10
    stu.weight = 50;
    stu.sex = 'm';
    stu.height = 130;
    strncpy(stu.name, "zhnagsan", sizeof(stu.name) - 1);
#endif
#if 0
    //结构体指针/
    stuInfo * info = &stu;
#endif 
#if 0   
    printfStruct(&stu);

    printf("stu.age:%d\n",stu.age);
#endif
#if 0
    stuInfo buffer[DEFAULT_SIZE];

    buffer[0].age = 10;
    buffer[0].weight = 50;
    buffer[0].sex = 'm';
    buffer[0].height = 130;
    strncpy(buffer[0].name, "zhnagsan", sizeof(buffer[0].name) - 1); 

    buffer[1].age = 10;
    buffer[1].weight = 50;
    buffer[1].sex = 'f';
    buffer[1].height = 160;
    strncpy(buffer[1].name, "wangwu", sizeof(buffer[1].name) - 1); 

    printStructBuffer(buffer, sizeof(buffer) / sizeof(buffer[0]));
#endif

//结构体指针/
    stu.age = 10
    stu.weight = 50;
    stu.sex = 'm';
    stu.height = 130;
    strncpy(stu.name, "zhnagsan", sizeof(stu.name) - 1);

    stu.address = (char *)malloc(sizeof(char)*BUFFER_SIZE);
    if (stu.address == NULL)
    {
        return -1;
    }
    strcpy(stu.address, "china");


}