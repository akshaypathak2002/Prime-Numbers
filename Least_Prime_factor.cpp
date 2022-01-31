// To find least prime factor of given number in range
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int primeFactor(int n)
{

    if (n % 2 == 0) // If goes inside this then it is the least prime factor
    {
        return 2;
    }
    if (n % 3 == 0) // If goes inside this then it is the lest prime factor
        return 3;
    // Now for the remaining number
    for (int i = 5; i <= sqrt(n); i += 6)
    {
        if (n % i == 0) // If divisble by this then go inside this
            return i;
        if (n % (i + 2) == 0) // If divisble by this then go inside this
            return i + 2;
    }
    if (n > 3) // IF goes inside this that means it is prime number and it least prime factor is itself
        return n;
    return 1;//IF nothing Above from then it means number is 1 then we return it simply 
}
vector<int> leastPrimeFactor(int n)
{ // To find least prime factors in given range 1 to n
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(primeFactor(i));
    }
    return ans;
}
int main()
{
    vector<int> res;
    int number;
    cin >> number;
    res = leastPrimeFactor(number);
    for (auto ele : res)
    {
        cout << ele << endl;
    }
    return 0;
}