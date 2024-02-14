void arrayinsertion(){
    if(coun<size){
      cout<<"Insertion limit exceeded"<<endl;
      return;
    }

    else{
        int idx;
        cout<<"enter index to insert:";
        cin>>idx;
        int value;
        cout<<"enter value to insert:";
        if(idx==coun){
            arr[idx]=value;//insertion in last
        }
        else{
            for(int i=coun;i>=idx+1;i--){
                arr[i]=arr[i-1];
            }
            arr[idx]=value;
        }
        coun++;
    }
}
