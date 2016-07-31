#include <iostream>
  using namespace std;
  void InsertSort(int arr[], int size) {
  	int j;
  	for (int i = 0; i < size; i++) {
  		int temp = arr[i];
  		for (j = i-1; j >= 0; j--) {
  			if (temp < arr[j]) {
  				arr[j+1] = arr[j];
  			} else {
  				break;
  			}
  		}
  		arr[j+1] = temp;
  	}
  	for (int i = 0; i < size; i++) {
  		cout << arr[i] << " ";
  	}
  	cout << endl;
  }
  int main() {
  	int x;
  	cin >> x;
  	int arr[x];
  	for(int i = 0; i < x; i++) {
  		cin >> arr[i];
  	}
  	InsertSort(arr, x);
  	return 0;
  }