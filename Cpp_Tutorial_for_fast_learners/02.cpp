#include <iostream>
using namespace std;

class Printer {
public:
	// Same function name, different parameter types
	void print(int i) {
		cout << "Printing integer: " << i << endl;
	}

	void print(string s) {
		cout << "Printing string: " << s << endl;
	}
};

int main() {
	Printer p;

	// THE COMPILER DECIDES HERE:
	// The compiler sees '5' (int) and hardcodes the call to print(int).
	p.print(5);

	// The compiler sees "Hello" (string) and hardcodes the call to print(string).
	p.print("Hello");

	return 0;
}

// g++ 2.cpp -o ans && ./ans && rm -rf ./ans 
