void arraysort(){
    int ch;
    cout<<"choice for sorting:"<<endl
        <<"1.Bubble sort"<<endl
        <<"2.Selection sort"<<endl
        <<"3.Insertion sort"<<endl
        <<"4.Merge Sort"<<endl
        <<"5.Quick Sort"<<endl
        <<"6.Heap Sort"<<endl;
    
    cout<<"enter your sorting path : ";
    cin>>ch;
    switch(ch){
        case 1:
          //bubblesort();
          break;
        case 2:
          //insertionsort();
          break;
        case 3:
          //selectionsort();
          break;
        case 4:
          //mergesort();
          break;
        case 5:
          //quicksort();
          break;
        case 6:
          //heapsort();
          break; 
        default:
          cout<<"This method doesn't exist in current database";
          break; 
    }
    
}
