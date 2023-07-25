static int instance = 42;

int* getSingletonInt() {
     return &instance;
}