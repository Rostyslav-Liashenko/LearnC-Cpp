#include <stdio.h>

unsigned int line_count_in_file(const char *file_name) {
    FILE *f = fopen(file_name, "r");
    if (!f)
        throw "could't open the file";
    int n = 0;
    int c = 0;
    while((c = fgetc(f)) != EOF)
        if (c == '\n')
            n++;
    fclose(f);
    return n;
}


int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "No file name\n");
        return 1;
    }
    try {
        int res = line_count_in_file(argv[1]);
        printf("The file %s constains %d lines\n", argv[1],res);
    }
    catch (const char *exception ) {
        fprintf(stderr,"Exception (string): %s\n",exception);
        return 1;
    }
    return 0;
}
