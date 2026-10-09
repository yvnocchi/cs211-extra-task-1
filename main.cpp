#include <iostream>
#include "extra-task-1.h";
#include <assert.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, ".UTF8");

	// ========== Задание 1 ==========
	assert(seconds_difference(1800.0, 3600.0) == 1800.0);
	assert(seconds_difference(3600.0, 1800.0) == -1800.0);
	assert(seconds_difference(1800.0, 2160.0) == 360.0);
	assert(seconds_difference(1800.0, 1800.0) == 0.0);

	cout << "Все тесты прошли" << endl;
}
