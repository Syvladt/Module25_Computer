#include <iostream>

// Функция записи значений в BUFFER
void ram_write(int numbers[], int number, int i)
{
	numbers[i] = number;
	std::cout << "Write to BUFFER succesfuly.\n";
}

// Функция чтения значений из BUFFER
int ram_read(int numbers[], int i)
{
	std::cout << "Read from BUFFER succesfuly.\n";
	return numbers[i];
}