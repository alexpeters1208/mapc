// In a C/C++ program, can you define a global variable that is not accessible by a certain function?

static int k = 3; // referencing `k` in main will fail due to static declaration

int f21() {
    return k;
}