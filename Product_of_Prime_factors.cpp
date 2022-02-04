// We have to find product of prime factors of a number
#include <iostream>
using namespace std;
long long int prime_Factor_Product(int n)
{
    // We are simply modifiying standard prime factor algorithm
    int product = 1;
    if (n % 2 == 0)
    {
        product *= 2;      // Means 2 is prime factor of it
        while (n % 2 == 0) // Removing all power of 2
            n /= 2;
    }
    if (n % 3 == 0) // Means 3 is prime factor of it

    {
        product *= 3;
        while (n % 3 == 0) // Removing all power of 3
            n /= 3;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0) // Means i is prime factor of it
        {
            product *= i;
            while (n % i == 0) // Removing all power of i
                n /= i;
        }
        if (n % (i + 2) == 0)
        {
            product *= (i + 2);
            while (n % (i + 2) == 0) // Removing all power of i+2
                n /= (i + 2);
        }
    }
    if (n > 3)
    { // Means remaining is prime factor of given number
        return n * product;
    }
    return product;
    //Time complexity of this solution is 
}
int main()
{
    int number;
    cin >> number;
    cout << prime_Factor_Product(number) << endl;
    return 0;
}