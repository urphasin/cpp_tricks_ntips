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


// CONSTANTS
const double pi = M_PI;


// CLASSES AND STRUCTURES
struct Fraction {
    long long num;
    long long den;
};

//##############################

// FUNCTION PROTOTYPES
std::ostream& operator<<(std::ostream& os, unsigned __int128 x);
std::ostream& operator<<(std::ostream& os, Fraction f);
Fraction limit_denominator(double value, long long max_den = 1'000'000L);

//##############################

// FUNCTION TEMPLATES DEFINITIONS
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

//##############################

// solve
void solve() {

}

//##############################

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

    double d = 0.2093023255814;
    Fraction f = limit_denominator(d);
    cout << f << endl;



    return 0;
}

//##############################

// FUNCTION DEFINITIONS
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
std::ostream& operator<<(std::ostream& os, Fraction f) {
    os << f.num << "/" << f.den << std::endl;
    return os;
}
Fraction limit_denominator(double value, long long max_den) {
    long long a = std::floor(value);

    long long h1 = 1, k1 = 0;
    long long h = a, k = 1;

    double frac = value;

    while ( std::fabs(value - static_cast<double>(h) / k) > 1e-12 && k < max_den ) {
        frac = 1.0 / (frac - a);
        a = std::floor(frac);

        long long h2 = h1;
        h1 = h;

        long long k2 = k1;
        k1 = k;

        h = a * h1 + h2;
        k = a * k1 + k2;
    }

    return {h, k};
}



