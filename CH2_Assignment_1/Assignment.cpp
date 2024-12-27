#include <iostream>
#include <vector>

using namespace std;

vector<int> arr_int(5);

void Ascending()
{
	int temp_int = 0;
	for(int i = 1; i<=arr_int.size(); i++)
	{
		for (int j = 0; j < arr_int.size()-i; j++)
		{
			if (arr_int[j] < arr_int[j + 1])
				continue;
			temp_int = arr_int[j];
			arr_int[j] = arr_int[j + 1];
			arr_int[j + 1] = temp_int;
		}
	}
}

void descending()
{
	int temp_int = 0;
	for (int i = 1; i <= arr_int.size(); i++)
	{
		for (int j = 0; j < arr_int.size() - i; j++)
		{
			if (arr_int[j] > arr_int[j + 1])
				continue;
			temp_int = arr_int[j];
			arr_int[j] = arr_int[j + 1];
			arr_int[j + 1] = temp_int;
		}
	}
}

int main(void)
{
	int input_int = 0;

	for (int i = 0; i < arr_int.size(); i++)
	{
		cin >> arr_int[i];
	}

	cin >> input_int;

	if (input_int == 1)
		Ascending();
	else if(input_int == 2)
		descending();
	

	for (int i = 0; i < arr_int.size();i++)
		cout << arr_int[i] << " ";

	return 0;
}
