// parsing.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <fstream>
#include <Windows.h>
#include <string>
#pragma hdrstop
using namespace std;

struct student
{
    char name[40];
    char fam[40];
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    setlocale(LC_ALL, "Rus");
   struct student b[750];
  
    int n, i;
    ifstream in_file;
    n = 0;
    in_file.open("new_baza.txt");
    if (in_file.is_open())
    {
        while (!in_file.eof())
        {
            in_file >> b[n].name;
            in_file >> b[n].fam;
            n++;

        }
    }
    else
    {
        cout << "No file";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {


        cout << b[i].fam << " "<< i+1 << endl;
        

    }
    

       
    return (0);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
