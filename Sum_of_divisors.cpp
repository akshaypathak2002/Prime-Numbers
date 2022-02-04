#include <iostream>
using namespace std;
// We are given a number  then we have to find the divisor of the number (then sum of divisor of the divisor of number )
int sum_of_divisors(int n)
{
    // We find the sum of given number in O(n^1/2)
    int res = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0) // Then it is the divisor of given number
        {
            res += i;
            if (i != (n / i))   // If this condtion is true then go inside this
                res += (n / i); // If is the divisor of n
        }
    }
    return res;
}
int sumOfDivisors(int N)
{
    int res = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0) // Check if divisor the number
        {
            res += sum_of_divisors(i); // Sum of the divisor and calling sum_of_divisors(n) to get sum of divisior of divisors
        }
    }
    return res;
    //Its total time complexity is O(n.n^1/2)
}
int main()
{
    int number;
    cin >> number;
    cout << sumOfDivisors(number) << endl;
    return 0;
}
