bool underflow(){
    if(coun=0){
        return true;
    }
    else
      return false;
}
int main()
{
    cin >> size;
    arr = new int[size];
    int ch;
    char ach = 'N';
    do
    {
        arraymenu();
        cout << "Enter your choice : ";
        cin >> ch;
        menuexecute(ch);
        cout << "do you want to continue(Y/N) : ";
        cin >> ach;
    } while (ach != 'N');
    cout << "Thanks for visiting";

    return 0;
}
