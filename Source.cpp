#include <iostream>
#include <ctime>
using namespace std;
int main() {

	srand(time(nullptr));
	//variant 1
		//1.






	/*int arr[size];
		const int size = 10;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << ' ';



	}
	int b;
	b=arr[0] * arr[1] * arr[2] * arr[3] * arr[4] * arr[5] * arr[6] * arr[7] * arr[8] * arr[9];
	cout << b << endl;*/


	//2. 
	/*const int size = 8;
	int b=0;

	int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21-10;
		cout << arr[i] << ' ';
if(arr[i] < 0 == 0)
		b += arr[i]  ;


	}
	cout << endl;

	cout << b << endl;*/


	//4.
/*int b = 0;
		const int size = 9;
		int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << ' ';
		if (arr[i] % 2) {
			b +=arr[i];
		}

		}
		cout<< endl << b;*/

		//3. 
	int b = 0;
	const int size = 16;
	int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << ' ';
		if (arr[i] % 3 || arr[i] % 5) {
			b++;
		}

	}
	cout << endl << endl << endl << b;











}