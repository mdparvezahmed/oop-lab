#include <iostream>
#include <cstring>

using namespace std;

class mystr
{
    char str[255];

public:
    void init();
    void buildstr(const char *s);
    void showstr();
};
void mystr::init()
{
    str[0] = '\0';
}

void mystr::buildstr(const char *s)
{
    if (str == '\0')
    {
        strcat(str, s);
    }

    else
    {

        strcat(str, s);
    }
}
void mystr::showstr()
{
    cout << str << endl;
}

int main()
{
    mystr s;
    s.init();
    s.buildstr("hello ");
    s.buildstr("there! ");
    s.showstr();

    return 0;
}