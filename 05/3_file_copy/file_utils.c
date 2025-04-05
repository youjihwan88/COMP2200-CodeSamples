#include <stdio.h>

#include "file_utils.h"

void copy_file(const char *src, const char *dst)
{
    FILE *src_file;
    FILE *dst_file;
    int c;

    src_file = fopen(src, "rb");
    if (src_file == NULL)
    {
        perror("Error opening source file");
        return;
    }

    dst_file = fopen(dst, "wb");
    if (dst_file == NULL)
    {
        perror("Error opening destination file");
        goto close_resource;
    }

    c = fgetc(src_file);
    while (c != EOF)
    {
        fputc(c, dst_file);
        c = fgetc(src_file);
    }

    if (fclose(dst_file) == EOF)
    {
        perror("Error closing destination file");
        goto close_resource;
    }

close_resource:
    if (fclose(src_file) == EOF)
    {
        perror("Error closing source file");
    }
}
