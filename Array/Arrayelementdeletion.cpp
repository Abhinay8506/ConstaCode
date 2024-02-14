void arraydeletion(){
  if(coun==0){
    cout<<"Underflow:can't delete";
  }
  else{
    int idx;
    cout<<"Enter index to delete : ";
    cin>>idx;
    int val=arr[idx];
    for(int i=idx;i<coun;i++){
        arr[i]=arr[i+1];
    }
    coun--;
    cout<<"Deleted Element : "<<val<<endl;
  }
}
