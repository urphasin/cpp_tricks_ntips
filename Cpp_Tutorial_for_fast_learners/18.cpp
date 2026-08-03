#include <iostream>
#include <string>

using namespace std;

template <typename T, unsigned short S>
class OwnArray {
private:
    T *data;
    int size;
public:
    OwnArray(): size(S), data(new T[S]){}
    OwnArray(T *arr): OwnArray(){
        for(int i = 0; i < size; i++){
            data[i] = arr[i];
        }
    }
    void print(){
        for (int i = 0; i < size; i++){
            cout << " " << *(data + i);
        }
        cout << endl;
    }
    ~OwnArray(){
        delete[] data;
    }
};

int main(){
  string arr[] = {"ma", "ma", "mia"};
  OwnArray<string, 3> oa(arr);
  oa.print();

  return 0;
}