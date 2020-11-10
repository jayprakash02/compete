#include <bits/stdc++.h>
using namespace std;

void convertStrtoArr(string str)
{
	int str_length = str.length();

	int arr[str_length] = { 0 };

	int j = 0, i, sum = 0;

	for (i = 0; str[i] != '\0'; i++) {

		if (str[i] == '/'){
			j++;
		}
		else {

			arr[j] = arr[j] * 10 + (str[i] - 48);
		}
	}
	cout << "arr[] = ";
	for (i = 0; i <= j; i++) {
		cout << arr[i] << " ";
	}
}

// Driver code
int main()
{
	string str = "2/3/2000";

	convertStrtoArr(str);

	return 0;
}
