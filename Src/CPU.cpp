#include <iostream>
#include "CPU.h"
#include "RAM.h"

void compute(int numbers[])
{	// Функция рассчёта суммы элементов и запись суммы в 8 элемент BUFFER
	int result = 0;
	for (int i = 0; i < 8; ++i)
		result += ram_read(numbers, i);
	ram_write(numbers, result, 8);
}