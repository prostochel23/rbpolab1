#include "Header.h"
string s_a = "";
void WritePersonData(const string& n, const string& h, const string& w, const unsigned short* a) {
    cout << "���:" << n << endl;
    cout << "����:" << h << endl;
    cout << "���:" << w << endl;
    cout << "�������:" << *a << endl;
    cout << "�/�:" << s_a << endl;
}