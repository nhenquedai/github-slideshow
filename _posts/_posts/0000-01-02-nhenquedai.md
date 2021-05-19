#include <bits/stdc++.h>
using namespace std;

float tbc_chia3(int n, int m){
    int t=0,v=0;
    float tbc;
    for(int i=n;i<=m;i++){
        if(i%3==0){
            t+=i;
            v++;
        }
    }
    if(v!=0){
        tbc=(float)t/v;
    }
    return tbc;
}

int tong_chan(int n, int m){
    int t=0;
    for(int i=n;i<=2*m;i++){
        if(i%2==0){
            t+=i;
        }
    }
    return t;
}

int main(){
    int n,m;
    cout<<"Nhap 2 so nguyen n,m: ";cin>>n>>m;
    cout<<"Tong cac so chan trong doan la: "<< tong_chan(n,m)<<endl;
    cout<<"Trung binh cong so chia het ccho 3 trong doan la: "<<tbc_chia3(n,m)<<endl;
    return 0;
}
