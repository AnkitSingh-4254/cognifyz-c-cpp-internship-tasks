#include <iostream>
#include <string>
#include <utility>
using namespace std;

void stringReversal(string &str) {
  int i = 0;
  int j = str.length() - 1;

  while (i <= j) {

    swap(str[i], str[j]);
    i++;
    j--;
  }
  return;
}

int main() {
  string str = "helloWorld";
  cout << "String before reversal : " << str << endl;

  stringReversal(str);
  cout << "String after reversal : " << str << endl;
}