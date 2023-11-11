#include <iostream>

double mean(double num1, double num2)
{
	return (num1 + num2) / 2;
}

int mean_arr( int arr[], int length)
{
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum / length;
	
}

void powers(int num1, int num2)
{
	for (int i = 0; i <= num2; i++)
	{
		long long result = 1;
		for (int j = 0; j < i; j++)
		{
			result *= num1;
		}
		std::cout << num1 << "^" << i << " = " << result << std::endl;
	}
}

void positive_arr(int arr[], const int length)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] < 0)
		{
			arr[i] = -arr[i];
		}
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Task1
	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	std::cout << mean(n, m) << "\n\n";

	//Task2
	const int size = 5;
	int arr[size]{ 1, 2, 3, 4, 8 };
	std::cout << mean_arr(arr, size) << "\n\n";

	//Task3
	int N, M;
	std::cout << "Введите два числа -> ";
	std::cin >> N >> M;
	powers(N, M);

	//Task4
	const int size2 = 5;
	int arr2[size2]{ -1, 2, -6 , 4, };
	std::cout << "Массив: ";
	positive_arr(arr2, size2);

	

	return 0;
}
