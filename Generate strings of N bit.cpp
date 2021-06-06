#include<iostream>

using namespace std;
char A[4]; // Global character Array.

void Generate (int n) {
    if (n<1) {
    printf("%s", A);
    cout << " ";
    }
    else
    {
        A[n - 1] = '0';
        Generate(n - 1);
        A[n - 1] = '1';
        Generate(n - 1);
    }
            
}


int main() {
    int n = 4;
    Generate(n);
}