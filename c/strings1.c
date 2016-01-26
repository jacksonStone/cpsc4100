// done in class Jan 25, 2016

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    /* char* a = "hello there sucka"; */
    /* char b[] = "hello there sucka"; */

    /* printf("a: %ld\n", sizeof(a)); */
    /* printf("b: %ld\n", sizeof(b)); */

    char* a = strdup("abc");
    char* b = strdup("def");

    
    /* a[3]='X'; */

    for (int i=4; i<1000; i++)
    {
        printf("trying %d\n", i);
        a[i] = 'X';

        if (b[0] != 'd')
            break;
    }



    printf("%s\n", a);
    printf("%s\n", b);
    
    return 0;
}
