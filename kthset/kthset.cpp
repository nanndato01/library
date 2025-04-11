#include <set>
template<typename T>
struct Kthset{
private:
  std::set<T>L, R;
  T K;
public:
  Kthset(int k) : K(k){}
  void insert(T v){
    R.insert(v);
    if(L.size() < K){
      L.insert(*R.begin());
      R.erase(R.begin());
    }else if(*R.begin() < *L.rbegin()){
      L.insert(*R.begin());
      R.erase(R.begin());
      R.insert(*L.rbegin());
      L.erase(--L.end());
    }
  }
  void erase(T v){
    auto itl = L.find(v), itr = R.find(v);
    if(itl != L.end()){
      L.erase(itl);
    }else if(itr != R.end()){
      R.erase(itr);
    }
    if(L.size() < K && !R.empty()){
      L.insert(*R.begin());
      R.erase(R.begin());
    }
  }
  int size(){return L.size() + R.size();}
  T getKth(){
    if(size() < K){
      throw std::runtime_error("Kth element does not exist: not enough elements");
    }
  return *L.rbegin();
  }
};