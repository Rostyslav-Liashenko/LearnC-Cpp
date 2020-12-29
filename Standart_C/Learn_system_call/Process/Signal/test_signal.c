#include <signal.h>
#include <unistd.h>
#include <errno.h>
volatile static sig_atomic_t n = 0;
const char message[] = "Press it again, I like it\n";

void handler(int s) {
    int save_errno = errno;
    signal(SIGINT,handler);
    n++;
    write(1,message,sizeof(message)-1);
    errno = save_errno;
}

int main() {
    signal(SIGINT,handler);
    while(n < 25) {
        pause();
    }
    return 0;
}
