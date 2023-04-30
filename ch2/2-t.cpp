#include<bits/stdc++.h>
using namespace std;
int n, a[1000004], ret[1000004];
stack<int> s;
int main(){
    cin >> n;
    memset(ret, -1, sizeof(ret));
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cout << "for i: " << i << " " << " s.size(): " << s.size() << " "; 
        while(s.size() && a[s.top()] < a[i]){
            cout << "a[s.top()]: "<< a[s.top()] << " a[i]: "<< a[i] << " ";
            ret[s.top()] = a[i]; 
            cout << "ret[s.top()]: " << ret[s.top()] << "\n";
            s.pop();
        }
        s.push(i);
        
        cout << s.top() << "\n";
    }
    for(int i = 0; i < n; i++) cout << ret[i] << " ";
    cout << "\n";
}