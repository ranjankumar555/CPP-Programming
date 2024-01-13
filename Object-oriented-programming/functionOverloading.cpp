#include<iostream>
using namespace std;
class Add{
  public:
  
  int add(int a, int b){
    int c=a+b;
    return c;
  }

  double add(double x, double y){
    double z = x+y;
    return z;
  }
};

int main(){
  Add obj;
  cout<<"obj.add(5,3) = "<<obj.add(5,3)<<endl;
  cout<<"obj.add(9.1,0.8) = "<<obj.add(9.1,0.8)<<endl;
  return 0;
}
