#include<iostream>

using namespace std;
void sort( int arr[],int size)
{
    for(int i= 1; i < size; ++i)
    {
        int j = i - 1;
        int val = arr[j];
        for(; j>=0&&arr[j]>val ; --j) 
        {
            arr[j+1] = arr[j];

        }
        arr[j+1] = val;
    }

}

int main()
{
    int arr[]={18,3,78,33,53};
    int size = sizeof(arr)/sizeof(int);
    sort(arr,size);
    for(int& v:arr)
    {
        cout << v <<" ";
    }
    cout << endl;

    return 0;

}