// task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Header.h"

int main()
{
    
    unsigned short w = 0, a = 0, h1 = 0;
    double s = 0;
    string n = "";
    setlocale(LC_ALL, "Russian");
    ReadPersonData(n, a, s);
    ReadPersonData(n, a, h1, w);
    s_a = to_string(s);
    WritePersonData(n, to_string(h), to_string(w), &a);
}
