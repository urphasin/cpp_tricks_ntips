#include <sstream>
#include <iostream>
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
using namespace std;


struct Date {
    std::string month;
    int day;
    int year;
    static void print(const Date& d) {
        std::cout << "Date: " << d.month << "/" << d.day << "/" << d.year << "\n";
    }
};
struct Point2D {
    int x;
    int y;
    static void print(const Point2D& p) {
        std::cout << "[" << p.x << ", " << p.y << "]"<< std::endl;
    }
    static double EuclideanDistance(const Point2D& p, const Point2D& q) {
        double xr = q.x - p.x;
        double yr = q.y - p.y;

        double ans = sqrt(pow(xr, 2) + pow(yr, 2));
        return ans;
    }
    static std::string MidPoint(const Point2D& p, const Point2D& q) {
        double xr = (p.x + q.x) / 2.0;
        double yr = (p.y + q.y) / 2.0;
        std::ostringstream ans;
        ans << "(" << xr << ", " << yr << ")";
        return ans.str();
    }
};


// TODO: implement in your own style
int main() {

    Date today;
    std::cout << "Enter a date: ";
    char trash;
    cin >> today.month >> today.day >> today.year;
    Date::print(today);

    Point2D p, q;
    // Point p = (10, 30)
    // Point q = (45, 70)
    std::cout << "Enter point p: ";
    cin >> trash >> p.x >> trash >> p.y >> trash;
    std::cout << "Enter point q: ";
    cin >> trash >> q.x >> trash >> q.y >> trash;
    std::cout << "Euclidean Distance: " << Point2D::EuclideanDistance(p, q) << "\n";
    std::cout << "MidPoint : " << Point2D::MidPoint(p, q) << "\n";
}
