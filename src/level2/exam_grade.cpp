#include <iostream>

using namespace std;

int main() {
  
  int num;
  cin >> num;

  if (num < 60) {
    cout << "F" << endl;
  } else if (num < 70) {
    cout << "D" << endl;
  } else if (num < 80) {
    cout << "C" << endl;
  } else if (num < 90) {
    cout << "B" << endl;
  } else {
    cout << "A" << endl;
  }

  return 0;
}
