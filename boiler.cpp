#include <iostream>
// #include <type_traits> // c++20
// #include <random>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
// #include <tuple>
#include <stack>
#include <queue>
#include <deque>
// #include <list>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <map>
// #include <bit>
#include <bitset>
#include <limits>
#include <numeric>
#include <functional>
#include <utility>
#include <memory>
using namespace std;

/*
POST SUBMISSION QUESTIONS:

1.  

*/

// CLASSES AND STRUCTURES




// PROTOTYPES
std::ostream& operator<<(std::ostream& os, unsigned __int128 x);

template <typename OP>
void print_vector(vector<OP> arr) {
    for (auto i : arr) {
        std::cout << i << ", ";
    }
    std::cout<<std::endl;
    for (size_t i{0}; i < arr.size(); i++)
    {
        std::cout << i << ", ";
    }
    std::cout << std::endl;
}

template <typename OP>
void print_array(int size, OP *arr) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[size] << ", ";
    }
    std::cout << std::endl;
}

template <typename O, typename P>
void print_unordered_map(std::unordered_map<O, P> table) {
    for(auto i = table.begin(); i != table.end(); i++) {
        std::cout << i->first << " : " << i->second << std::endl;
    }
    std::cout << std::endl;
}


// solve
void solve() {

}


// MAIN
int main() {
    /*
    unsigned __int128 is a compiler extension (mainly GCC/Clang), 
    not a standard C++ integer type, 
    so the standard stream operators (<<) were never overloaded for it.
    */
    unsigned __int128 x = 4;
    // std::cout << x << std::endl;
    int arr[] = {1, 9, 7, 3, 2, 5};
    *(arr + 2) = 6;
    cout << *(arr + 2) << endl;



    return 0;
}


// DEFINITIONS
std::ostream& operator<<(std::ostream& os, unsigned __int128 x) {
    if (x == 0) {
        os << '0';
        return os;
    }

    std::string s;

    while (x > 0) {
        s += '0' + (x % 10);
        x /= 10;
    }

    std::reverse(s.begin(), s.end());

    os << s;
    return os;
}






