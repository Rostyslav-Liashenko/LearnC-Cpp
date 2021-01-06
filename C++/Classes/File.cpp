// I create this class for descript deconstructor

class File {
    int fd;
public:
    File() { fd = -1; }
    
    bool OpenRO(const char *name) {
        fd = open(name,O_RDONLY);
        return (fd != -1);
    }
    // somes methotd for worok with file 
    ~File() { if(fd!=-1) close(fd);}
};
