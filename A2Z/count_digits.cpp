#include <bits/stdc++.h>
using namespace std;

 int countDigit(int n) {
        int cnt = 0;
        while(n>0){
            int last_digit = n%10;
            cnt = cnt+1;
            n=n/10;
        }
        return cnt;
    }

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
       cout<< countDigit(n);
    }

    return 0;
}