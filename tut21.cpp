#include <iostream>
using namespace std;
// oops classes and objects.
// nesting of member functions.

class binary
{
    string s; // for input the binary number........

public:
    void read(void);
    void chk_bin(void);
    void once(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Please entre the number = " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary::once(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << "Displaying the number is" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.once();
    b.display();

    return 0;
}