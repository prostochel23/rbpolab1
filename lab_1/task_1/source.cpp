

#include <iostream>
using namespace std;
unsigned short h;
string s_a = "";

#include <iostream>
#include <string>

    unsigned short ReadPersonAge()
    {
        cout << "введите возраст человека" << endl;
        unsigned short a;
        cin >> a;
        return a;
    }
    string ReadPersonName()
    {
        cout << "введите имя человека" << endl;
        string n;
        cin >> n;
        return n;
    }
    void ReadPersonHeight()
    {
        cout << "введите рост человека" << endl;
        cin >> h;
    }
    void ReadPersonWeight(unsigned short& w) 
    {
        cout << "введите вес человека" << endl;
        cin >> w;
    }
    void ReadPersonSalary(double* s) 
    {
        cout << "введите зарплату человека" << endl;
        cin >> *s;
    }


    void ReadPersonData(string& n, unsigned short& a, double& s)
    {
        n = ReadPersonName();
        a = ReadPersonAge();
        ReadPersonSalary(&s);
    }
    void ReadPersonData(string& n, unsigned short& a, unsigned short& h1, unsigned short& w)
    {
        n = ReadPersonName();
        a = ReadPersonAge();
        ReadPersonHeight();
        h1 = h;
        ReadPersonWeight(w);
    }


    void WritePersonData(const string& n, const string& h, const string& w, const unsigned short* a) 
    {
        cout << "имя:" << n << endl;
        cout << "рост:" << h << endl;
        cout << "вес:" << w << endl;
        cout << "возраст:" << *a << endl;
        cout << "з/п:" << s_a << endl;
    }


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