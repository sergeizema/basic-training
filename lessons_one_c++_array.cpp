#include "MyForm.h"
#include <Windows.h>
using namespace ProjectName; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}


#include <iostream> // для организации ввода-вывода

using namespace std; // пространство имен 

/* К уроку 1: Массивы
Решаем две задачи: 
1) Задан целочисленный массив размера N.Определить кол-во элементов больших 4.
2) Задан целочисленный массив размера N.Определить кол-во элементов в массиве кратных 2
*/

int main() // точка входа в программу
{
	setlocale(LC_ALL, "Ru"); // русский текст в консоли

	const int N = 10; // размерность массива
	int arr[N]; // объявление массива
	for (int i = 0; i < N; i++) { // перебираем элементы массива
		arr[i] = rand() % 10; // заполняем рандомными числами от 0 до 10
		cout << arr[i] << " "; // выводим массив через пробел
	}

	int k = 0, h = 0; // переменные счетчика
	for (int i = 0; i < N; i++) { // перебираем элементы массива
		if (arr[i] > 4) k += 1; // ЕСЛИ (Элемент массива больше 4) То к пременной 'k' + 1
		if (arr[i] % 2 == 0) h += 1; // ЕСЛИ (Элемент массива делится на 2 с остатком равным 0) То к пременной 'h' + 1
	}
	cout << endl << k << " " << h; // Выводим результат

	return 0; // возвращение результата функции
}

/* К уроку 2: Двумерные массивы */
int main()
{
	setlocale(LC_ALL, "Ru");
	// 1. Создайте матрицу N на N. Заполните ее случайными числами.
	// 2. Выведите ее в виде таблицы. Выведите элементы главной и побочной диагонали в строку.
	// 3. Найти введенный пользователем элемент.
	const int n = 6;
	int arr[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Главная диагональ: ";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				cout << arr[i][j] << " ";
			}
		}
	}
	cout << "Побочная диагональ: ";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + j == n - 1) {
				cout << arr[i][j] << " ";
			}
		}
	}
	return 0;
}
