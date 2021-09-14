#include <iostream>
using namespace std;

int main()
{
    int n, min, max;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    min = max = arr[0];
    
    for(int i=0; i<n; i++) {
        
        if (arr[i]<=min)
            min = arr[i];
            
        else if (arr[i]>max)
            max = arr[i];
    }
    
    cout<<"Maximum value: "<<max<<endl;
    cout<<"Minimum value: "<<min<<endl;
    
    return 0;
}