// 文件写入结构体

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
    struct S s = {100,3.1415926,"bit"};
    FILE* pf = fopen("test1.txt","w");
    if(pf == NULL)
    {
        printf("%s\n",strerror(errno));
        return 0;
    }
    fprintf(pf, "%d\n%f\n%s",s.n,s.score,s.arr);
    fclose(pf);
    pf = NULL;
    return 0;
}  

//stdin 标准输入流   键盘
//stdout 标准输出流    屏幕
//gets   直接从标准输入读取
//puts   直接从标准输出输出