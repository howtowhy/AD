#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

int N;
vector <int> arr;

void Input()
{

    cin >> N;
    int a;
    for (int i = 0; i < N; i++) {
        cin >> a;
        arr.push_back(a);
    }

}
void Order() {
    sort(arr.begin(), arr.end(), greater<int>());
}

void Output() {
    for (int i = 0; i < N - 1; i++) {
        cout << arr[i];
        cout << " ";
    }
    cout << arr[N - 1];
}
int main()
{
    Input();
    Order();
    Output();

    return 0;
}