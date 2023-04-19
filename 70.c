// 文件写入

#include <stdio.h>
#include <errno.h> 
#include <string.h>

int main()
{
    FILE* pf = fopen("test.txt","w");
    if(pf == NULL)
    {
        printf("%s\n",strerror(errno));
        return 0;
    }
    fputc('b',pf);
    fputc('i',pf);
    fputc('t',pf);
    fclose(pf);
    pf = NULL;
    return 0;
}   