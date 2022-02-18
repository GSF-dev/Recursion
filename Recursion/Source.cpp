#include<iostream>

using namespace std;

int fact(int num) {
	if (num == 1)
		return 1;
	else
		return fact(num - 1) * num;
}
int fib(int fn) {
	if (fn == 0)
		return 0;
	if (fn == 1)
		return 1;
	return fib(fn - 1) + fib(fn - 2);
}
template <typename T> void bubbleSort(T array[], int length, bool type = false) {
	if (!type) {
		for (int i = length - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (array[j] > array[j + 1])
					swap(array[j], array[j + 1]);
	}
	else
		for (int i = length - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (array[j] < array[j + 1])
					swap(array[j], array[j + 1]);
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	/*cin >> n;
	cout << fact(n);
	//Задача 1
	cout << "Первые 13 чисел Фибоначчи:\n";
	for (int i = 0; i < 13; i++)
		cout << i + 1 << ". " << fib(i) << endl;
	cout << endl;*/
	

	//Задача 2
	cout<<"Изначальный массив:\n";
	double z2[5] = { 6.3, 5.1, 7.404, 0.45, 1.6 };
	for (int i = 0; i < 5; i++)
		cout << z2[i] << " ";
	cout << "\nОтсортированный масиив:\n";

	bubbleSort(z2, 5, true);
	for (int i = 0; i < 5; i++)
		cout << z2[i] << " ";


	return 0;
}

