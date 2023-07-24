#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <=n)
    {

        int j = 1;
        while (j <=n - i) // print space
        {
            cout << " ";
            j++;
        }
        int k = 1;
        int count = 1;
        while (k <= i) // printl Right count
        {
            cout << count;
            k++;
            count++;
        }
         int m=1;
         int start = i-1;
         while (m < i) // printl Left count
        {
            cout << start<<" ";
            m++;
            start++;
        }
        i++;
        cout << endl;
    }
}