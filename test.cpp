

#include <iostream>
using namespace std;

int main(){

	int count;
	cout << "How many numbers do you want to enter: ";
	cin >> count;
	int* arr = new int[count];


		for (int i = 0 ; i < count; i++)
		{
			cout << "Enter the number ";
			cin >> arr[count];
		}
		cout << "The numbers that you enterd: ";
		for (int i = 0; i < count; i++)
		{
			cout << arr[count] << endl;
		}

		return 0;
}
