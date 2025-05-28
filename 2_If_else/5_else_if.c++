/*                                                              28/07/2024                                                                       */

// grades according to marks
/*
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter marks out of 100:" << endl;
    cin >> marks;

    if (marks >= 91)
    {
        cout << "excellent work" << endl;
    }
    else
    {
        if (marks >= 81)
        {
            cout << " very good work" << endl;
        }
        else
        {
            if (marks >= 71)
            {
                cout << "good work" << endl;
            }
            else
            {
                if (marks >= 61)
                {
                    cout << "can do better work" << endl;
                }
                else
                {
                    if (marks >= 51)
                    {
                        cout << "avarage work" << endl;
                    }
                    else
                    {
                        if (marks >= 41)
                        {
                            cout << "below" << endl;
                        }
                        else {
                            cout<<"fail"<<endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

*/

// else if
/*#include <iostream>
using namespace std;

int main () {
    int marks;
    cout<<"enter marks out of 100:"<<endl;
    cin>>marks;
    if( marks >= 91) {
        cout<<"excellent work"<<endl;
    }
    else if (marks <= 90 && marks >= 81) {
        cout<<" very good work"<<endl;
    }
    else if (marks <= 80 && marks >= 71) {
        cout<<"good"<<endl;
    }
    else if (marks <= 70 && marks >= 61) {
        cout<<"can do better"<<endl;
    }
    else if (marks <= 60 && marks >= 51) {
        cout<<"avarage"<<endl;
    }
    else if (marks <= 50 && marks >= 41) {
        cout<<"below avarage"<<endl;
    }
    else {
        cout<<"fail ho gya bhai tu"<<endl;
    }
    return 0;
}
*/

/*
// vowel or consonant
#include <iostream>
using namespace std;

int main () {
    char ch;
    cout<<"enter a character"<<endl;
    cin>>ch;

    int ascii = (int)ch;
    if((ascii >=97 && ascii <= 122) || (ascii >= 65 && ascii <= 90) ) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout<<"given character is a vowel"<<endl;
        }
        else {
            cout<<"given character is a consonant"<<endl;
        }
    }
    else {
            cout<<"wrong input"<<endl;
    }
}
*/

// take 3 numbers input and tell if they can be the sides of the triangle
#include <iostream>
using namespace std;

int main () {
   int a,b,c;

   cout<<"enter the sides"<<endl;
   cin>>a;
   cin>>b;
   cin>>c;

   if((a+b > c) && (b+c > a) && (c+a > b)) {
    cout<<a<<","<<b<<","<<c<<" can be the sides of a triangle"<<endl;
   }
   else {
    cout<<"can't be the sides of a triangle"<<endl;
   }
}

