int main() {
    char mem[20] = {"test\n"};
    write(1,mem,sizeof(mem));
    return 0;
}
