#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void arraymenu()
{
    cout << "Choose from the menu : " << endl
         << "1.To add elements" << endl
         << "2.To delete element" << endl
         << "3.To traverse the array" << endl
         << "4.Finding maximum" << endl
         << "5.Finding minimum" << endl
         << "6.To sort the array" << endl
         << "7.merging two arrays" << endl
         << "8. To check whether array is sorted or not" << endl
         << "9.Find the peak element in array" << endl
         << "10.array is rotated or not" << endl;
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
