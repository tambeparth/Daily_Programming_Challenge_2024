#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class PrimeFactorization
{
public:
    void factors(vector<int> &fact, int n)
    {
        while (n % 2 == 0)
        {
            fact.push_back(2);
            n /= 2;
        }

        for (int i = 3; i * i <= n; i += 2)
        {
            while (n % i == 0)
            {
                fact.push_back(i);
                n /= i;
            }
        }

        if (n > 1)
        {
            fact.push_back(n);
        }
    }
};

int main()
{
    vector<int> fact;
    PrimeFactorization o;
    o.factors(fact, 36);

    for (int i = 0; i < fact.size(); i++)
    {
        cout << fact[i] << " ";
    }
    return 0;
}