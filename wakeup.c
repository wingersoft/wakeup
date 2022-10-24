#include<stdio.h>
#include <unistd.h>
 
int main()
{
    while (1)
    {
        FILE *fp = fopen("/media/hans/HD-EXT/wakeup.txt", "w");
        if (fp != NULL)
        {
            fputs("Wakeup HD!\n", fp);
            fclose(fp);
        }
        for (int i = 0; i < 60; i++)
            sleep(1);
    }
    return 0;
}
