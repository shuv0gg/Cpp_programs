
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int temp = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void printArray(int arr[], int n)
{
    cout << "The sorted array is : ";
    for (int i = 0; i < n; ++i)
        cout <<arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<endl<<"Enter elements of array: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}

/* This code is contributed by ShuvoGG */
