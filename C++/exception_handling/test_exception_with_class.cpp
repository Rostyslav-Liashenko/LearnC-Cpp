#include <cstdio>
#include <cstring>
#include <cerrno>

class FileException {
    int err_code;
    char *filename;
    char *comment;
public:
    FileException(const char* fn, const char *cmt);
    FileException(const FileException& other);
    ~FileException();
    const char *GetName() const { return filename; }
    const char *GetComment() const { return comment; }
    int GetErrno() const { return err_code; }
private:
    static char *strdup(const char *str);

};

FileException::FileException(const char *fn, const char *cmt) {
    err_code = errno;
    filename = strdup(fn);
    comment = strdup(cmt);
}

FileException::FileException(const FileException& other) {
    err_code = other.err_code;
    filename = strdup(other.filename);
    comment = strdup(other.comment);
}

FileException::~FileException() {
    delete[] filename;
    delete[] comment;
}

char* FileException::strdup(const char *str) {
    char *res = new char(strlen(str) + 1);
    strcpy(res, str);
    return res;
}

unsigned int line_count_in_file(const char *file_name) {
    FILE *f = fopen(file_name, "r");
    if (!f)
        throw FileException(file_name, 
                "couldn't open for line counting");   
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
    catch (const FileException &ex) {
        fprintf(stderr, "File exception: %s (%s): %s\n",
                ex.GetName(), ex.GetComment(), strerror(ex.GetErrno()));
        return 1;
    }
    return 0;
}
