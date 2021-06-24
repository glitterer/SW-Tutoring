#include <iostream>
using namespace std;
int print(int arr[], const int m, const int n) //m가 찾고 있는 숫자, arr는 들어온 배열, n은 배열 길이
{
	int cnt = 0;
	int left = 0, right = n - 1;
	while (left <= right) {
		int middle = (left + right) / 2;
		if (m < arr[middle]) {
			right = middle - 1;
			++cnt;
		}
		else if (m > arr[middle]) {
			left = middle + 1;
			++cnt;
		}
		else {
			++cnt;
			cout << cnt << endl;
			return middle;
		}
	}
	cout << cnt << endl;
	return 0;
}

int binarySearch(int arr[], const int m, const int n) //m가 찾고 있는 숫자, arr는 들어온 배열, n은 배열 길이
{
	int cnt = 0;
	int left = 0, right = n - 1;
	while (left <= right) {
		int middle = (left + right) / 2;
		if (m < arr[middle]) {
			right = middle - 1;
			++cnt;
		}
		else if (m > arr[middle]) {
			left = middle + 1;
			++cnt;
		}
		else {
			++cnt;
			return middle;
		}
	}
	return -1;
}


int main()
{
	int n, m, output;
	cin >> n; //배열의 길이 n이 주어진다. (입력 1번째 줄)

	int* arr = new int[n]; //배열에 n개의 정수가 동적으로 할당 (입력 2번째 줄)
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> m; //찾고자 하는 숫자 입력

	output = binarySearch(arr, m, n);

	if (output == -1) {
		cout << -1 << endl;
		print(arr, m, n);
	}
	else {
		cout << output << endl;
		print(arr, m, n);
	}

	delete[] arr;

	return 0;
}