#include<iostream>
using namespace std;

int sumOfAllDivisors(int n)
{
    int ans = 0;

    // Iterating over all 'i'.
    for (int i = 1; i <= n; i++)
    {

        // Calculating the value of ’sumOfDivisors(i)’ for current 'i'.
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {

                // Avoid counting sqrt(i) twice.
                if (i / j == j)
                {
                    ans += j;
                }
                else
                {
                    ans += j + i / j;
                }
            }
        }
    }

    return ans;
}
int main()
{
    int ans;
    ans=sumOfAllDivisors(5);
    return 0;
}