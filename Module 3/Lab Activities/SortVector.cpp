#include <algorithm> // <-- REQUIRED for std::swap
#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int low, int high) {
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j <= high - 1; j++) {
    if (arr[j] > pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }

  swap(arr[i + 1], arr[high]);
  return i + 1;
}

void QSHelper(vector<int> &myVec, int low, int high) {

  if (low < high) {
    int partionIndex = partition(myVec, low, high);

    QSHelper(myVec, low, partionIndex - 1);
    QSHelper(myVec, partionIndex + 1, high);
  }
}

void SortVector(vector<int> &myVec) {
  int vectorSize = myVec.size();

  if (vectorSize > 1) {
    QSHelper(myVec, 0, vectorSize - 1);
  }
}

int main() {
  // vector to use
  vector<int> myVec;

  // for user input
  int numberOfInputs;
  int input;

  // take in number of inputs
  cin >> numberOfInputs;

  // for taking the inputs and putting them into a vector.
  for (int i = 0; i < numberOfInputs; i++) {
    cin >> input;
    myVec.push_back(input);
  }

  SortVector(myVec);

  for (size_t j = 0; j < myVec.size(); j++) {
    cout << myVec[j] << ",";
  }
  cout << endl;

  return 0;
}