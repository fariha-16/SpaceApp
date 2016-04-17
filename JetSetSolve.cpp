#include <iostream>
using namespace std;

int main()
{
    double m = 150,g = 3.7,F,a,v,t;
    char c,d;
    cout << "Which value do you want to find?\nf or a?\nEnter any character: ";
    cin >> c;
    if((c != 'a') && (c != 'f'))
    {
        cout << "You enter a wrong character: " << c << '\n';
    }
    else
    {
        if(c != 'a')
        {
            cout << "Enter the value of a: ";
            cin >> a;
            F = ((m*g) + (m*a));
            cout << F;
        }
        else
        {
            cout << "Enter the value of f: ";
            cin >> F;
            a = ((F/m) - g);
            cout << a;
        }

        cout << "\n\nWhich value do you want to find?\nv or t?\nEnter any character: ";
        cin >> d;
        if((d != 'v') && (d != 't'))
        {
            cout << "You enter a wrong character: " << d << '\n';
        }
        else
        {
            if(d != 'v')
            {
                cout << "Enter the value of v: ";
                cin >> v;
                t = (v/a);
                cout << t;
            }
            else
            {
                cout << "Enter the value of t: ";
                cin >> t;
                v = (a*t);
                cout << v;
            }
        }
    }
}
