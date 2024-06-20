#include <iostream>
#include <string>
#include <algorithm>
#include "CPU.h"
#include "GPU.h"
#include "HDD.h"
#include "Keyboard.h"
#include "RAM.h"

int main()
{	// Функция создания и обработки меню
	std::string cmd;
	bool finish = false;
	int numbers[9] = {}; // 9 элемент - сумма

	while(!finish)
	{
		std::cout << "Enter command (input, summ, display, save, load or exit): ";
		std::cin >> cmd;
		std::transform(cmd.begin(), cmd.end(), cmd.begin(), ::toupper);
		if (cmd == "SUM")
			compute(numbers);
		else if (cmd == "SAVE")
			file_save(numbers);
		else if (cmd == "LOAD")
			file_load(numbers);
		else if (cmd == "INPUT")
			get_input(numbers);
		else if (cmd == "DISPLAY")
		{	// Команда DISPLAY, но что отображать
			// Добавляем ещё меню, отобразить SUM или элементы BUFFER
			std::cout << "What should display on the screen SUM or BUFFER? ";
			std::cin >> cmd;
			std::transform(cmd.begin(), cmd.end(), cmd.begin(), ::toupper);
			display(numbers, cmd);
		}
		else if (cmd == "EXIT")
			finish = true;
		else
			std::cout << "Unknown command\n";
	}
	std::cout << "Thank you for use my program.\n";
}