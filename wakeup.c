#include <stdio.h>
#include <unistd.h>

//
// Wake up an USB Harddisk every 60 seconds - hg 2022-1025
// 

int main()
{
    while (1)
    {
        // replace path with the location of your hard disk
        FILE *fp = fopen("/media/hans/HD-EXT/wakeup.txt", "w");
        if (fp != NULL)
        {
            fputs("", fp);
            fclose(fp);
        }
        for (int i = 0; i < 60; i++)
            sleep(1);
    }
    return 0;
}
