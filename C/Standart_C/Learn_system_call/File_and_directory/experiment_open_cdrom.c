#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <linux/cdrom.h>

int main() {
    int fd = open("/dev/cdrom",O_RDONLY | O_NONBLOCK);
    ioctl(fd,CDROMEJECT);
    ioctl(fd,CDROMCLOSETRAY);
    return 0;
}
