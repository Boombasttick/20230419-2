// 文件

#include <stdio.h>
#include <errno.h> 
#include <string.h>

int main()
{
    FILE* pf = fopen("test.txt","r");
    if(pf == NULL)
    {
        printf("%s\n",strerror(errno));
        return 0;
    }
    fclose(pf);
    pf = NULL;
    return 0;
}  