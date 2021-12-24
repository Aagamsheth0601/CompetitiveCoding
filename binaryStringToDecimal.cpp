#include <bits/stdc++.h>
using namespace std;

//Binary string to decimal

int main()
{
    int t;
    cin >> t;
    while (t--) //t is number of test cases
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long result = 0;
        long long power2 = 1;
        for (int i = s.size() - 1; i >= 0; i--) //loop begining from last index to first index
        {
            int binary_digit = s[i] - '0';
            result = result + (binary_digit * power2); //add the binary digit to the result
            power2 = power2 * 2;                       //multiply the power2 by 2
        }
        cout << result << endl;
    }
}
