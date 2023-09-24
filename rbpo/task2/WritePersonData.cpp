#include "Header.h"
string s_toOutPut = "";
void WritePersonData(const string& n, const string& h, const string& w, const unsigned short* a) {
    cout << "имя:" << n << endl;
    cout << "рост:" << h << endl;
    cout << "вес:" << w << endl;
    cout << "возраст:" << *a << endl;
    cout << "з/п:" << s_toOutPut << endl;
}