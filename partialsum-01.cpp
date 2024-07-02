#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
const int mx=2e5+123;
int a[mx];//array initalized with 0

ll presum[mx];


main(){
      optimize();
    int n,q;

    cin>>n>>q;

    for(int i=1;i<=n;i++){

        cin>>a[i];
    }

    for(int i=1;i<=n;i++){


        presum[i]=presum[i-1]+a[i];
    }

  while(q--){

        int l,r;

        cin>>l>>r;

        //l++,r++ for 0 based index

        cout<<presum[r]-presum[l-1]<<endl;






  }



}

//https://cses.fi/problemset/task/1646/


    /*Input:

8 4
3 2 4 5 1 1 5 3
2 4
5 6
1 8
3 3   */
