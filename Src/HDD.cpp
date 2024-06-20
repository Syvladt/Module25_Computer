#include <iostream>
#include <fstream>
#include "RAM.h"

void file_save(int numbers[])
{	// Функция сохранения значений из BUFFER в файл buffers.vol
	std::ofstream file("buffers.vol", std::ios::binary);
	int number;
	if(file.is_open())
	{
		for (int i = 0; i < 8; ++i)
		{
			number = ram_read(numbers, i);
			file.write((char*)&number, sizeof(number));
		}
		file.close();
	}
	else
		std::cout << "File not opened.\n";
}

void file_load(int numbers[])
{	// Функция чтения значений из файла buffers.vol в BUFFER
	std::ifstream file("buffers.vol", std::ios::binary);
	int number, i = 0;
	if (file.is_open())
	{
		while (!file.eof() && i < 8)
		{
			file.read((char*)&number, sizeof(number));
			ram_write(numbers, number, i);
			++i;
		}
		file.close();
		if (i < 8)
			std::cout << "the file is corrupted.\n";
	}
	else
		std::cout << "File not opened.\n";
}