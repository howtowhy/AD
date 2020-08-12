#include <iostream>

using namespace std;

int N, T;

int search[10000 + 10];

int arr[50000 + 10];

int sol[10000 + 10];

void Input()
{

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cout << "ok" << endl;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> search[i];
	}
	cout << "ok" << endl;

}


void Output() {
	for (int i = 0; i < T; i++) {
		cout << sol[i];
		cout << " ";
	}
	cout << sol[T - 1];
}

//https://blockdmask.tistory.com/167
int BinarySearch(int key)
{
	int start = 0;
	int end = N-1;
	int mid;
	while (end - start > 2) {
		mid = (end - start) / 2;
		if (arr[mid] == key) {
			return (mid+1);
		}
		else if(arr[mid]>key){
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}

	}
	return 0;
}

int main()
{
	Input();
	for (int i=0; i < T; i++){
		sol[i] = BinarySearch(search[i]);
	}
	Output();

}