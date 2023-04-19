// 文件写入

#include <stdio.h>
#include <errno.h> 
#include <string.h>

int main()
{
    FILE* pf = fopen("test1.txt","w");
    if(pf == NULL)
    {
        printf("%s\n",strerror(errno));
        return 0;
    }
    fputs("he llo\n",pf);
    fputc('i',pf);
    fputc('t',pf);
    fclose(pf);
    pf = NULL;
    return 0;
}  

//stdin 标准输入流   键盘
//stdout 标准输出流    屏幕
//gets   直接从标准输入读取
//puts   直接从标准输出输出