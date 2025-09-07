extern "C"
int foo(int a);

int main(int argc, char * argv[]) {
    return foo(4);
}

extern "C" 
int foo(int a) {
    int s = 0;
    int t = 0;
    if(a > 0) {
        for(int i = 0; i < 10; i++) {
            s += i;
            if(a > 0) {
                t= 4;
            }
        }  
    } else if (a > 4) {
        t = 4;
    } else if (a > 8) {
        t = 6;
    } else {
        t = 2;
    }
    return t + s;
}