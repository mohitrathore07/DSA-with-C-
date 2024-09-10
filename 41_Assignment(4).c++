/*                                                      09/09/2024                                                                      */
// Pattern Assignement

/*
1111
2222
3333
4444


#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    for(int i = 1 ; i <= n ;i++){
        for(int j = 1; j <= n; j++) {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
1 2 3 4
1 2 3
1 2
1

#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n+1)-i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

*/

/*
A
A B
A B C
A B C D
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i;j++) {
            cout<< char(64+j)<<" ";
        }
        cout<<endl;
    }
}

*/

/*
1
A B
1 2 3
A B C D
1 2 3 4 5

#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n;i++) {
        for(int j = 1; j <= i; j++) {
            if(i % 2 == 0) {
                cout<< char( 64 + j)<<" ";
            }
            else {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

*/

/*
*
**
***
****
***
**
*
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1; i <= n-1; i++) {
        for(int j = 1; j <= n-i;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
******
*    *
*    *
******
#include <iostream>
using namespace std;

int main () {
    int n,m;
    cin>>n>>m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(i == 1 || i == n || j == 1 || j == m) cout<<"*";
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
   ****
  ****
 ****
****


#include <iostream>
using namespace std;

int main () {
    int m;
    cin>>m;

    for(int i = 1; i <= m; i++ ) {
        for(int j = 1; j <= m - i; j++) {
            cout<<" ";
        }

        for(int j = 1; j <= m; j++) {
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}
*/

/*
1
1 2
1 2 3
1 2 3 4

#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n;i++) {
        for(int j = 1; j <= i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
    A
   AB
  ABC
 ABCD

#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n;i++) {
        for(int j = 1; j <= n+1-i; j++) {
            cout<<" ";
        }

        for(int j = 1; j <= i; j++) {
            cout<<char(64 + j)<< " ";
        }

        cout<<endl;
    }
    return 0;
}
*/

/*
1
2 1
3 2 1
4 3 2 1
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        for(int j = i ; j >= 1; j--) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

// Assignment - 2

/*

      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7

#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        int a = 1;
        for(int j = 1; j <= n - i; j++) {
            cout<<"  ";
        }

        for(int j = 1; j <= i * 2 - 1; j++) {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
     M - 2 above question
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i; j++) {
            cout<<"  ";
        }

        for(int j = 1; j <= i * 2 - 1; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
   A
  ABC
 ABCDE
ABCDEFG
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n ; i++) {
        for (int j = 1 ; j <= n-i; j++) {
            cout<<" ";
        }

        for (int j = 1 ; j <= i * 2 - 1; j++) {
            cout<<char(64+j);
        }
        cout<<endl;
    }
    return 0;
}

*/

/*
   A
  BAB
 CBABC
DCBABCD

#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        int x = i;
        for(int j = 1; j <= n-i; j++) {
        cout<<" ";
      }

        for(int j = 1; j <= (i * 2) - 1 ; j++) {
            cout<<char(x + 64);
            if(j < i) {
                x--;
            }
            else {
                x++;
            }
    }
    cout<<endl;
    }
    return 0;
}
*/

/* 
ABCDEFG
ABC EFG
AB   FG
A     G
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int nsp = 1;

    for(int i=1; i <= n*2-1; i++) {
        cout<<char(64+i);
    }
    cout<<endl;

    for (int i = 1; i <= n; i++)
    {
        int a = 1;

        for (int j = 1; j <= n - i; j++)
        {
            cout << char(64 + j);
            a++;
        }

        for (int j = 1; j <= nsp; j++)
        {
            cout<<" ";
            a++;
        }

        nsp += 2;

        for (int j = 1; j <= n - i ; j++)
        {
            cout<< char(a+64);
            a++;
        }

        cout<<endl;
    }
    return 0;
}
*/

/* 
1234321
123 321
12   21
1     1

#include <iostream>
using namespace std;

int main () {
    int  n = 4;
    int x = 1;
    for(int i = 1; i <= n*2-1 ; i++) {
        cout<<x;
        if(i <  n) x++;
        else x--;
    }
    int nsp= 1;
    cout<<endl;
    for(int i = 1; i <= n; i++) {
        int y = 0;

        for(int j = 1; j <= n - i; j++) {
            y++;
            cout<<y;
        }
        for(int  j = 1; j <= nsp; j++) {
            cout<<" ";
        }
        nsp+=2;
        for(int j = 1; j <= n - i; j++) {
            cout<<y;
            y--;
        }
        cout<<endl;
    }
    return 0;
}
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int x = n + 2;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i - 1; j++) {
            if(i == 1) break;
            cout<<" ";
        }
        cout<<"*";
        for(int j = 1; j <= x; j++) {
            cout<<" ";
    
        x -= 2;
        if(i == n) break;
        cout<<"*";
        cout<<endl;
    }
    return 0;
}