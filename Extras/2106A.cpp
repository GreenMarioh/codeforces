#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;

    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}

int decimalToBinary(int n)
{
    int binaryNum = 0;
    int base = 1;

    while (n > 0)
    {
        int last_digit = n % 2;
        n = n / 2;

        binaryNum += last_digit * base;
        base = base * 10;
    }

    return binaryNum;
}

int countOnes(int num)
{
    int count = 0;
    while (num > 0)
    {
        if (num % 10 == 1)
            count++;
        num /= 10;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int m;
        cin >> n;
        cin >> m;
        vector<int> v;
        int decN = binaryToDecimal(n);
        int x = m;
        m--;

        for (int i = m - 1; i >= 0; i--)
        {
            if (decN & (1 << i))
            {
                v.push_back(decimalToBinary(decN & ~(1 << i)));
            }
            else
            {
                v.push_back(decimalToBinary(decN | (1 << i)));
            }
        }
        int sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum += countOnes(v[i]);
        }
        cout << sum << endl;
    }
}
