#include <iostream>
using namespace std;

int main(){
  int x;

  srand(time(0));
  x = rand() % 10;

  if (x==3000000){
    x = x+80;
    cout << " nilai x sudah di koreksi menjadi : " << x << endl;
  }

  cout << " bilangan yang diberikan = " << x;

}