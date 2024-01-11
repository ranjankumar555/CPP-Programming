#include<iostream>
using namespace std;

class demoAbstract{
  public:
  virtual void func()=0;

  void func1(){
    cout<<"I am func1() method under Abstract class type demoAbstract."<<endl;
  }
};
class demoAbstractInherited: public demoAbstract{
  public:
  void func(){
    cout<<"Congratullation!!! You got the func() method accessible."<<endl;
  }

};
int main(){
  demoAbstractInherited obj;
  obj.func();
  obj.func1();
  return 0;
}