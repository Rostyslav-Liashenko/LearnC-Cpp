int main(void) {
    int i;
    const int &r = i; 
    int x = r + 5; // correct
    i = 7; // correct
    r = 12; // error
    return 0;
}
