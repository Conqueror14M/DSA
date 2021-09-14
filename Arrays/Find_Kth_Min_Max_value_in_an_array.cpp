#include <iostream>
using namespace std;

int main()
{
    
    int n, k, temp;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the kth value: ";
    cin>>k;

    for(int i=0; i<n; i++){
        
        for(int j=i+1; j<n; j++){
            
            if (arr[i] > arr[j]) {
                
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout<<"\nThe kth Max Value: "<<arr[n-k]<<endl;
    cout<<"The kth Min Value: "<<arr[k-1]<<endl;
    
    return 0;
}
