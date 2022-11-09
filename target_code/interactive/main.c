#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("This programs demonstrates interactive operation using semihosting:\n"
           "Write something to the console and see it beeing printed back.\n"
           "Type q to exit\n");
    char buf[1024];
    while (1)
    {
        fgets(buf, 1024, stdin);
        if (buf[0] == 'q')
        {
            exit(0);
        }
        printf("You wrote: %s", buf);
    }
}
