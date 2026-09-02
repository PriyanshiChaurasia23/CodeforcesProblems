#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    //string s;
    char s[35];
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    return 0;
}