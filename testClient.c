#include "headers.h"

int main () {

    char cp[20];
    char key[20];
    printf ("输入需读取文件的文件名:");
    scanf ("%s", cp);
    if (!OpenFile(cp)) {
        printf ("文件不存在或无读取权限!\n");
        return -1;
    }

    printf ("输入秘钥:");
    scanf("%s", key);
    setKey(key);
    
    if (!input (gl_fi)) {
        printf ("未能正确读取数据!\n");
        return -1;
    }

    if (output (gl_fo)) {
        printf ("写入失败!\n");
        return -1;
    }

    printf ("已成功解密，输出到文件:output.txt!\n");
    return 0;
}
