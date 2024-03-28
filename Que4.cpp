//Move all zeroes to the end of the array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter array element "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    } 
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}