#include "Header.h"
string s_a = "";
void WritePersonData(const string& n, const string& h, const string& w, const unsigned short* a) {
    cout << "èìÿ:" << n << endl;
    cout << "ðîñò:" << h << endl;
    cout << "âåñ:" << w << endl;
    cout << "âîçðàñò:" << *a << endl;
    cout << "ç/ï:" << s_a << endl;
}
