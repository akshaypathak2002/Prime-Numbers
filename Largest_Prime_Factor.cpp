// To find the largest prime factor of a given number
#include <iostream>
using namespace std;
long long int LargesPrimeFactor(int N)
{
    // We are just going to use simple algorithm to find prime factors of a number
    long long int res = 0;
    if (N <= 1)
        return 1;
    while (N % 2 == 0)
    { // Removing all power of 2  and assigning 2 to res 
        res = 2;
        N /= 2;
    }
    while (N % 3 == 0)
    {
        // Removing all power of 3 and assigning 3 to res 
        res = 3;
        N /= 3;
    }
    for (int i = 5; i * i <= N; i += 6)
    {
        while (N % i == 0)
        {
            N /= i; // remove all power of i  and assigning i to res 
            res = i;
        }
        while (N % (i + 2) == 0)
        {
            N /= (i + 2);
            res = (i + 2); // If loop goes inside this then has the higest value
        }
    }
    if (N > 3) // If full divided then then last (i+2) is largest prime factor thne it become zero
        return N;
    else
        return res;
}
int main()
{
    int number; // Number to check Largest Prime
    cin >> number;
    cout << LargesPrimeFactor(number) << endl;
    return 0;
}