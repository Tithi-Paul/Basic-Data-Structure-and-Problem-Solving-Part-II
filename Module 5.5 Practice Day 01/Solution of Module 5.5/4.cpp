#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, m, flag;
    cin >> n;
    vector<int> a;
    vector<int> b;
    vector<int> k;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> x;
        b.push_back(x);
    }

    for(int i=0; i<n; i++){
        flag = 0;
        for(int j=0; j<m; j++){
            if(a[i] == b[j]){
                flag++;
            }
        }
        if(flag>0){
            k.push_back(a[i]);
            flag=0;
        }
    }
    for(int i=0; i<k.size(); i++){
        cout << k[i] << " ";
    }

    return 0;
}



