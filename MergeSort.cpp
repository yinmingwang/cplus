#include <iostream>
	using namespace std;
	void Merge(int arr[], int start, int mid, int end) {
		int LeftLen = mid - start + 1;
		int RightLen = end - mid;
		int* Left = new int[LeftLen];
		int* Right = new int[RightLen];
		int i = 0, j = 0, k = 0, f = 0;
		for (i = 0,k = start; i < LeftLen; i++, k++) {
			Left[i] = arr[k];
		}
		for (i = 0, k = mid+1; i < RightLen; i++, k++) {
			Right[i] = arr[k];
		}
		for (k = start, i = 0, j = 0; i < LeftLen & j < RightLen; k++) {
			if (Left[i] <= Right[j]) {
				arr[k] = Left[i];
				i++;
			}
			if (Left[i] > Right[j]) {
				arr[k] = Right[j];
				j++;
			}
		}
		if (i < LeftLen) {
			for (f = i; f < LeftLen; f++, k++) {
				arr[k] = Left[f];
			}
		}
		if (j < RightLen) {
			for (f = j; f < RightLen; f++,k++) {
				arr[k] = Right[f];
			}
		}
	}
	void MergeSort(int arr[], int start, int end) {
		if (start < end) {
		int mid = (start+end)/2;
		MergeSort(arr,start, mid);
		MergeSort(arr,mid+1, end);
		Merge(arr, start, mid, end);
		}
	}

	int main() {
  	int x;
  	cin >> x;
  	int arr[x];
  	for(int i = 0; i < x; i++) {
  		cin >> arr[i];
  	}
  	MergeSort(arr, 0, x-1);
  	for (int i = 0; i < x; i++) {
  		cout << arr[i] << " ";
  	}
  	cout << endl;
   	return 0;
  }