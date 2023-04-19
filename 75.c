// 文件输出结构体       文件里的内容赋给结构体

#include <stdio.h>
#include <errno.h> 
#include <string.h>

struct S
{
    int n;
    float score;
    char arr[10];
};


int main()
{
    struct S s = {0};
    FILE* pf = fopen("test1.txt","r");
    if(pf == NULL)
    {
        printf("%s\n",strerror(errno));
        return 0;
    }
    fscanf(pf, "%d %f %s",&(s.n),&(s.score),s.arr);
    printf("%d\n%f\n%s",s.n,s.score,s.arr);
    fclose(pf);
    pf = NULL;
    return 0;
}  