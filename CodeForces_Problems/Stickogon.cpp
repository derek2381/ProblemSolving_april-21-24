// problem link
// https://codeforces.com/contest/1957/problem/A

#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n;
        map<int, int> mp;

        for(int i = 0;i < n;i++){
            cin >> k;
            mp[k]++;
        }
        int count = 0;
        for(auto i : mp){
            count += i.second/3;
        }

        cout << count << endl;
    }
}
