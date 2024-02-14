void arraymin(){
    int mini=INT_MAX;
    for(int i=0;i<coun;i++){
        /*if(mini>arr[i])
        {
           mini=arr[i];
        }*/
        mini=min(mini,arr[i]);
    
    }
    cout<<"Minimum Element : "<<mini<<endl;
}
