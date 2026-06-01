// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Ques.  ->
// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>
using namespace std;

int main()
{
    int n = 3, num = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << num+1 << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}