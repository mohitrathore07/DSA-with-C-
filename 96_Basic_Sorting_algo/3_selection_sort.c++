
/* 
// selection sort algorithum

#include <iostream>
using namespace std;

int main() {
    int ary[] = {5,3,1,4,2};

    int n = sizeof(ary) / sizeof(ary[0]);
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if(ary[min] > ary[j]) min  = j;
        }
        int temp = ary[i];
        ary[i] = ary[min];
        ary[min]  = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<ary[i]<<" ";
    }
    
    
    return 0;
}
*/

// pw way above was mine

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int ary[] = {5,3,1,4,2};
    int n = 5;

    for(int ele : ary) cout<<ele<<" ";
    cout<<endl; 

    for (int i = 0; i < n-1; i++)
    {
        int min = ary[i];
        int mindx = -1;

        for (int j = i+1; j < n; j++)
        {
            if(ary[j] < min) {
                min = ary[j];
                mindx = j;
            }
        }
        swap(ary[i] , ary[mindx]);
    }

    for(int ele : ary) cout<<ele<<" "; 
    
    return 0;
}




#include <iostream>
#include <climits>
using namespace std;

int main() {
    int ary[] = {5, 3, 1, 4, 2};
    int n = 5;

    for (int ele : ary) cout << ele << " ";
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        int min = ary[i];
        int mindx = i;

        for (int j = i + 1; j < n; j++) {
            if (ary[j] < min) {
                min = ary[j];
                mindx = j;
            }
        }
        swap(ary[i], ary[mindx]);
    }

    for (int ele : ary) cout << ele << " ";

    return 0;
}
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int ary[] = {5, 3, 1, 4, 2};
    int n = 5;

    for (int ele : ary) cout << ele << " ";
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        int min = ary[i];
        int mindx = i;

        for (int j = i + 1; j < n; j++) {
            if (ary[j] < min) {
                min = ary[j];
                mindx = j;
            }
        }
        swap(ary[i], ary[mindx]);
    }

    for (int ele : ary) cout << ele << " ";

    return 0;
}
