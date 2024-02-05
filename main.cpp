#include<bits/stdc++.h>
#include<string>
using namespace std;


int main(){
    string ch3="1",ch,ch1="",ch2="oiyeauOIYEAU";
    int i,l;
    cin>>ch;
    l=ch.length();
    for(i=0;i<l;i++){
        if (ch2.find(ch[i]) == string::npos){
            ch3[0]=tolower(ch[i]);
            ch1=ch1+"."+ch3;
        }
    }
    cout<<ch1;
    return 0;
}
