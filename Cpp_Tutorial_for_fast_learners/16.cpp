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

  void setKey(K key) : key(key) {}
  void setValue(V value) : value(value) {}
private:
  K key;
  V value;
};