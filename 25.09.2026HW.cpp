#include <iostream>

using namespace std;

int main()
{
	/* Task 1

	int arr[10] = { 3, 8, -3, 9, 0, 16, 55, 32, -22, 40 };

	int max = arr[0];
	int min = arr[0];

	for (int i = 1; i < 10; i++) {

		if (arr[i] > max) {
			max = arr[i];
		}

		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << "Min: " << min << "\n";
	cout << "Max: " << max << "\n";

	*/

	/* Task 2 

	int salary[12];
	int total, start, end;



	cout << "Enter your salary for each month: \n";
	for (int i = 0; i < 12; i++) {
		cin >> salary[i];
	}

	cout << "Enter range between two month: \n";
	cin >> start >> end;

	int min = salary[start - 1];
	int max = salary[start - 1];

	int MinPerMonth = start;
	int MaxPerMonth = start;

	for (int i = start - 1; i < end; ++i) {

		if (salary[i] < min) {
			min = salary[i];
			MinPerMonth = i + 1;
		}

		if (salary[i] > max) {
			max = salary[i];
			MaxPerMonth = i + 1;
		}
	}

	cout << "In this month salary was minimum: " << MinPerMonth << "\n";
	cout << "In this month salary was maximum: " << MaxPerMonth << "\n";
	
	*/

	/* Task 3 

	int N[8] = { 9, 0, -4, 2, 8, -7, 5, 1 };
	int sum = 0;

	for (int i = 0; i < 8; i++) {
		if (N[i] < 0) {
			sum += N[i];
		}
	}
	cout << "Sum of negative elements: " << sum << "\n";

	int minIndex = 0;
	int maxIndex = 0;

	int min = N[0];
	int max = N[0];

	for (int i = 1; i < 8; ++i) {
		if (N[i] < min) {
			min = N[i];
			minIndex = i;
		}

		if (N[i] > max) {
			max = N[i];
			maxIndex = i;
		}
	}

	int left;
	int right;

	if (minIndex < maxIndex) {
		left = minIndex;
		right = maxIndex;
	}
	else {
		left = maxIndex;
		right = minIndex;
	}



	int product = 1;
	for (int i = left + 1; i < right; i++) {
		product *= N[i];
	}
	cout << "Product of elements between min and max: " << product << "\n";




	int productEven = 1;
	for (int i = 0; i < 8; i += 2) {
		productEven *= N[i];
	}

	cout << "Product of even indexes: " << productEven << "\n";


	int firstNegative = -1;
	int lastNegative = -1;

	for (int i = 0; i < 8; i++) {
		if (N[i] < 0) {
			if (firstNegative == -1) {
				firstNegative = i;
			}

			lastNegative = i;
		}
	}






	int sumbetween = 0;
	for (int i = firstNegative + 1; i < lastNegative; i++) {
		sumbetween += N[i];
	}
	cout << "Sum between negative elements: " << sumbetween << "\n";

	*/

	/* Task 5 


	int arr1[5] = { 5, 0, -6, 10, 30 };
	int arr2[5] = { 8, -20, 3, 32, -17 };
	int arr3[5];

	for (int i = 0; i < 5; i++) {
		arr3[i] = arr1[i] + arr2[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << arr3[i] << " ";
	}
	*/
}

