#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    int j=0;
    for(int i=0; i<n; i++) {
        if (arr[i] < 0) {
            if(i != j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
    
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
