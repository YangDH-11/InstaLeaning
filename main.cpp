#include <iostream>

using namespace std;

int add(int a, int b){
  cout << "run add fun" << endl;
  return a + b;
}

int main(int argc, char *argv[]) {
  
  cout << "Hello Word!" << endl;
  cout << "Hello Insta360!" << endl;
  int num1 = 1, num2 = 1;
  int res = add(num1, num2);
  cout << res << endl;

  return 0;
}
