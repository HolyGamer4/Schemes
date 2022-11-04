#include <algorithm>
#include <cmath>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

vector<int> deliteli(int n) {
  vector<int> delitel;
  for (int i = 1; i <= (sqrt(n)); i++) {
    if (i * i == n)
      delitel.push_back(i);
    else if (n % i == 0) {
      delitel.push_back(i);
      delitel.push_back(n / i);
    }
  }
  sort(begin(delitel), end(delitel));
  return delitel;
}

int prost(vector <int> dels) {
  if (dels[0] == 1) {
    cout << "PROSTOE"
         << " ";
  } else {
    cout << "NEPROSTOE"
         << " ";
  }
  return 0;
}

int soversh(int x1) {
  if (x1 == 6 || x1 == 28 || x1 == 496 || x1 == 8128 || x1 == 33550336 ||
      x1 == 8589869056 || x1 == 137438691328) {
    cout << "SOVERSHENN";
  } else {
    cout << "NESOVERSENN";
  }
  cout << endl;
  return 0;
}

// Вот тут можно создать функцию, которая из main будет принимать 2 числа. Для каждого создавать массив делителей и этот массив передавать в soversh и prost. Сейчас мне не очень нравятся алгоритмы этих 2 функций.

int main() {
  int x1, x2;
  cin >>x1>>x2;
  vector <int> a = deliteli(x1);
  for (auto now : a) {
    cout << now << " ";
  }
  prost(a);
  //soversh(x1);
  //prost(x2);
  //soversh(x2);
}