void insertionsort(){
    int array[coun];
    for(int i=0;i<coun;i++){
        array[i]=arr[i];
    }
    for(int key=1;key<coun;key++){
        int j=key;
        while(arr[j-1]>arr[j] && j>0){
            swap(arr[j-1],arr[j]);
        }
    }
    cout<<"Array after sorting : [ ";
    for(int i=0;i<coun;i++){
        cout<<array[i]<<" ";
    }
    cout<<" ]"<<endl;

}
