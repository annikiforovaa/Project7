#include <iostream>
template <typename T> // using template function to print array
void insertionSort(T arr[], int size_arr) //create logic of intertionSort
{
	for (int i = 1; i < size_arr; i++)
	{
		int j = i - 1;
		while (j >= 0 && arr[j] > arr[j + 1])
		{
			std::swap(arr[j], arr[j + 1]);
			
			j--;
		}
	}
}

int main()
{
	//create arrays (types - int and double)
	int arr[7] = { 13,6,3,0,-8,5,11};
	std::cout << "Input array ...\n";
	for (int i = 0; i < 7; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	insertionSort(arr, 7);

	std::cout << "\n Sorted array ... \n";
	for (int i = 0; i < 7; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	double arr2[8] = { 5.3,9.9,4.2,7.1,0.8,55.8,1.2 };
	std::cout << "\n Input array ...\n";
	for (int i = 0; i < 7; i++)
	{
		std::cout << arr2[i] << std::endl;
	}

	insertionSort(arr2, 7);

	std::cout << "\n Sorted array ... \n";
	for (int i = 0; i < 7; i++)
	{
		std::cout << arr2[i] << std::endl;
	}
	return 0;
}