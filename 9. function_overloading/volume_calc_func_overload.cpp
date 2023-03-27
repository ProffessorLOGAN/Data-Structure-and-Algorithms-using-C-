#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k = 0;

    cin >> n;

    for (i = 2; i <= n; i++)
    {
        k = 0;
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                 k=k+1;
             
            }
        }
        
    }
    if(k=2){
            cout<<i<<endl;
        }
}
