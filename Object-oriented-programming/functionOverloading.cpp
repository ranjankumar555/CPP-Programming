#include<iostream>
using namespace std;
class Add{
  private:
  int a,b;
  float x,y;

  public:
  int add(int a, int b){
    a=a;
    b=b;
    int c=a+b;
    return c;
  }

  int add(double x, double y){
    x=x;
    y=y;
    int z = x+y;
    return z;
  }
};

int main(){
  Add obj;
  Add obj1;
  cout<<"obj.add(5,3) = "<<obj.add(5,3)<<endl;
  cout<<"obj.add(9.1,0.9) = "<<obj.add(9.1,0.9)<<endl;
  return 0;
}
