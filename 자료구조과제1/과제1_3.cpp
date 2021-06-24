#include <iostream>
using namespace std;
int print(int arr[], const int m, const int n) //m�� ã�� �ִ� ����, arr�� ���� �迭, n�� �迭 ����
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

int binarySearch(int arr[], const int m, const int n) //m�� ã�� �ִ� ����, arr�� ���� �迭, n�� �迭 ����
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
	cin >> n; //�迭�� ���� n�� �־�����. (�Է� 1��° ��)

	int* arr = new int[n]; //�迭�� n���� ������ �������� �Ҵ� (�Է� 2��° ��)
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> m; //ã���� �ϴ� ���� �Է�

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