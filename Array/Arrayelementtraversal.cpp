#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool underflow(){
    if(coun=0){
        return true;
    }
    else
      return false;
}
void arraytraverse(){
    if(underflow){
        cout<<"Not possible"<<endl;
        return;
    }
    cout<<"[ ";
    for(int i=0;i<coun;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
}
