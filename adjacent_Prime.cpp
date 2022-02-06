// IN this we will how to find Number adjacent to N that is N-1 and N+1 is prime or  not
#include <iostream>
using namespace std;
bool isPrime(int n)
{
    // We simply use algorithm for find the prime number
    if (n == 0 || n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
bool isAdjacentPrime(int n)
{
    if (isPrime(n - 1) == true && isPrime(n + 1) == true)//Checking its both adjacent 
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    cout << isAdjacentPrime(n) << endl;
    return 0;
}