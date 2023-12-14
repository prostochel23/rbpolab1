

#include "Header.h"
#ifndef DO_NOT_DEFINE_MAIN
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
#endif
