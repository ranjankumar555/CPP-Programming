#include<iostream>
using namespace std;

class A{
  private:
  int a;
  public:
  
    void display(){
    cout<<"Class A invoked"<<endl;
  }
};

class B: public A{
  private:
  int b;
  public:
  void display(){
    cout<<"Class B invoked"<<endl;
  }
};

int main(){
  B obj;
  obj.display();
  return 0;
}