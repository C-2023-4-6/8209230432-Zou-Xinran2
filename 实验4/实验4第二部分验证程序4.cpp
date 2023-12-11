#include<iostream>
using namespace std;
//不能，修改后程序如下：
int* f() {
    int* list = new int[4] {1, 2, 3, 4};
    return list;
}

int main() {
    int* p = f();
    std::cout << p[0] << std::endl;
    std::cout << p[1] << std::endl;

    delete[] p;

    return 0;
}