/*
# Задача 2. Удаление дубликатов

### Описание
Вам поступают числа из стандартного потока ввода. Первым числом вводится количество элементов, далее сами значения.

Нужно вывести все эти числа без дубликатов в порядке убывания.

---

### Пример правильной работы программы
```
[IN]:
6
1
5
1
3
4
4
[OUT]:
5
4
3
1
```
*/

#include <iostream>
#include <set>
#include <list>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите количесво чисел: ";
    int a;
    std::cin >> a;
    std::cout << "Введите чила: ";
    std::set<int> userSet;
    for (int i = 0; i < a - 1; ++i)
    {
        std::cin >> a;
        userSet.insert(a);
    }
    std::list<int> userList;    
    for (const auto & elem : userSet)    
        userList.push_front(elem);    
    std::cout << "Были введены следующие числа (без дублекатов): " << std::endl;
    for (const auto& elem : userList) 
        std::cout << elem << std::endl;
}


