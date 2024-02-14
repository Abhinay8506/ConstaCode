void arraymax(){
    int maxi=INT_MIN;
    for(int i=0;i<coun;i++){
        /*if(maxi<arr[i])
        {
           maxi=arr[i];
        }*/
        maxi=max(maxi,arr[i]);
    
    }
    cout<<"Maximum Element : "<<maxi<<endl;
}
