// ques. -->
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = i; j > 0; j--)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// Ques. ->
// 1 
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main()
{
    int n = 4, num = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}