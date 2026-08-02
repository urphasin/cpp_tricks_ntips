#include <iostream>
#include <string>
#include <memory>

using namespace std;

template<typename K, typename V>
class Pair {
public:
  Pair(K k, V v) : key(k), value(v) {}
  ~Pair() {}

  K getKey() const { return key; }
  V getValue() const { return value; }

  void setKey(K key) {
    this->key = key;
  }
  void setValue(V value) {
    this->value = value;
  }
private:
  K key;
  V value;
};

int main() {

  // 2 stack allocation
  Pair<int, int> pair1(5, 6);
  pair1.setKey(20);
  cout << pair1.getKey() << "  :  " << pair1.getValue() << "\n\n";

  Pair<int, short> pair2(15, 16);
  pair2.setValue(2001);
  cout << pair2.getKey() << "  :  " << pair2.getValue() << "\n\n";  
  

  //new dynamic allocation 
  Pair<double, long>* pair3 = new Pair(5.0, 20L);
  pair3->setKey(45.8);
  pair3->setValue(156L);
  cout << pair3->getKey() << "  :  " << pair3->getValue() << "\n\n";

  delete pair3;


  // smart pointer heap allocation
  unique_ptr<Pair<string, char>> pair4 = make_unique<Pair<string, char>>("Otito", 'c');
  cout << pair4->getKey() << "  :  " << pair4->getValue() << "\n\n";  

  return 0;
}