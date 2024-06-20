#include <iostream>
#include "RAM.h"

void display(int numbers[], std::string cmd)
{	// Вывод выбранного содержимого на экран
	if (cmd == "BUFFER")
	{
		std::cout << "Numbers in memory:\n";
		for (int i = 0; i < 8; ++i)
		{
			std::cout << ram_read(numbers, i) << '\n';
		}
	}
	else if (cmd == "SUM")
		std::cout << "Summ of elements from buffer: " << ram_read(numbers, 8) << '\n';
	else
		std::cout << "Unknown command\n";
}