#include <iostream>
#include <windows.h>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
 vector<std::vector<string>> arr; //Создаем двумерный массив строк
    ifstream in("test.txt"); // Читаем файл

    if (in.is_open()) { // Проверка успешного открытия файла
            string line; // Создаем переменную для строки(т.к читаем файл построчно)
      while(getline(in, line)) { // Cчитываем значение из файла в строковую переменную
           arr.push_back({{line[0]}, line.substr(2)}); // Добавляем в массив: 1 символ строки - "Ключ", 3 символ - "Значение"
      }
      in.close(); // Закрываем файл
      for (auto& row : arr) { // Выводим "ключи" до сортировки
        std::cout << row[0] << std::endl;
    }

    sort(arr.begin(), arr.end()); // Сортируем массив

    cout << endl; // Отступ

    for (auto& row : arr) { //Выводим "значения" по "ключам" после сортировки
        cout << row[1] << endl;
    }
    return 0;
}
}
