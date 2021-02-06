    #include<bits/stdc++.h>
    using namespace std;

    int whowin(vector<int>& a){
        int lol=0;
        for(int i=0;i<a.size();i++) lol+=a[i];
        return lol;
    }
    int main(){
        int t,n;
        cin>>t;
        for(int i=0;i<t;i++){
            cin>>n;
            vector<int> a(n);
            for(int j=0;j<n;j++) cin>>a[j];
            if(whowin(a)%2==0) cout<<"1\n";
            else cout<<"2\n";
        }
    }