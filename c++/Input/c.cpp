#include<iostream>
using namespace std;
int main(){
    cout << "Updated version running\n";

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    
    }
    int max= arr[0];
    for (int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

    }
    cout<<"largest no. is"<<max;
    return 0;
  

}
