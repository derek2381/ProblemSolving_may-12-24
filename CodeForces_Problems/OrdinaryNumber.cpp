// problem link
// https://codeforces.com/problemset/problem/1520/B

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        for(long long int i = 1;i <= 9;i++){
            for(long long int j = i;j <= n;){
                count++;
                j = (j*10)+i;
            }
        }

        cout << count << endl;
    }
}
