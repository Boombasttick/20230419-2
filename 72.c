// 读写文件(一行)

#include <stdio.h>
#include <errno.h> 
#include <string.h>

int main()
{
    char buf[1024] = {0};
    FILE* pf = fopen("test1.txt","r");
    if(pf == NULL)
    {
        printf("%s\n",strerror(errno));
        return 0;
    }
    fgets(buf,1024,pf);
    //printf("%s",buf);
    puts(buf);
    fgets(buf,1024,pf);
    puts(buf);
    //printf("%s",buf);
    fclose(pf);
    pf = NULL;
    return 0;
}  