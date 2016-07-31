#include <iostream>
	using namespace std;
void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int arr[], int size) {
	for (int i = 0; i < size-1; i++) {
		for (int j = size-1; j > i; j--) {
			if (arr[j] < arr[j-1]) {
				Swap(arr[j], arr[j-1]);
			}
		}
		for (int k = 0; k < size; k++) {
  		cout << arr[k] << " ";
  	}
  	cout << endl;
	}
	
}

void BubbleSort1(int arr[], int size) {
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				Swap(arr[j], arr[j+1]);
			}
		}
		for (int k = 0; k < size; k++) {
  		cout << arr[k] << " ";
  	}
  	cout << endl;
	}
}

int main() {
  	int x;
  	cin >> x;
  	int arr[x];
  	for(int i = 0; i < x; i++) {
  		cin >> arr[i];
  	}
  	BubbleSort1(arr, x);
  	return 0;
  }