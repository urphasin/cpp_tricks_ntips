#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

template<typename T>
class MyAllocator {
public:
    using value_type = T;

    MyAllocator() = default;

    T* allocate(size_t n) {
        cout << "Vector allocating "
             << n * sizeof(T)
             << " bytes\n";

        return static_cast<T*>(malloc(n * sizeof(T)));
    }

    void deallocate(T* p, size_t) {
        free(p);
    }
};

int main() {
    vector<int, MyAllocator<int>> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
}