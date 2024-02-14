void selectionsort(){
    int array[coun];
    for(int i=0;i<coun;i++){
        array[i]=arr[i];
    }
    for(int key=0;key<coun;key++){

        int pos=key;
        for(int j=key+1;j<coun;j++){
            if(array[j]<array[pos]){
                pos=j;
            }
        }
        if(pos!=key){
            swap(array[pos],array[key]);
        }
    }
    cout<<"Array after sorting : [ ";
    for(int i=0;i<coun;i++){
        cout<<array[i]<<" ";
    }
    cout<<" ]"<<endl;

}
    
