#include <iostream>

using namespace std;
int N, arr[30000 + 10];

void Input()
{

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];		
	}

}


void Output() {
	for (int i = 0; i < N - 1; i++) {
		cout << arr[i];
		cout << " ";
	}
	cout << arr[N - 1];
}
void quickSort(int i, int j)
{ 
	
	if (i >= j) return;
	int pivot = arr[(i + j) / 2];
	int left = i;
	int right = j;

	while (left <= right)
	{
		while (arr[left] < pivot) left++;
		while (arr[right] > pivot) right--;
		if (left <= right)
		{
			swap(arr[left], arr[right]);
			left++; right--;
		}
	}
	quickSort(i, right);
	quickSort(left, j);
}

int main()
{
	Input();
	quickSort(0, N - 1);
	Output();

}