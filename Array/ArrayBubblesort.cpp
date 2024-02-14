void bubblesort(){
    int array[coun];
    for(int i=0;i<coun;i++){
        array[i]=arr[i];
    }
    for(int i=0;i<coun-1;i++){
        for(int j=0;j<coun-i-1;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }

    }
    cout<<"Array after sorting : [ ";
    for(int i=0;i<coun;i++){
        cout<<array[i]<<" ";
    }
    cout<<" ]"<<endl;
}
