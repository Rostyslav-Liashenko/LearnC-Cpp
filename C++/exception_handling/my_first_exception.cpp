
unsigned int len_count_in_file(const char *file_name) {
    FILE *f = fopen(file_name,"r");
    if (!f) 
        throw "couldn't open the file";
    int n = 0;
    int c = 0;
    while ((c = fgetc(f)) != EOF)
        if (c == '\n')
             n++;
    fclose(f);
    return n;
}


int main(void) {

    return 0;
}
