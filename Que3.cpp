// Find the first non-repeating element in the array .
#include<iostream>
#include<vector>
using namespace std;
void firstNonRepeating(vector<int> v,int n){
    bool flag=false;
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(i!=j && v[i]==v[j]) break;
        }
        if(j==n){
            cout<<v[i]<<" is the first non-repeating element"<<endl;
            flag = true;
            break;
        }
    }
    if(flag==false) cout<<"There is no non-repeating element in array";
}
int main()
{
    vector<int> arr;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter array element "<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    } 
    firstNonRepeating(arr,n);  
    return 0;
}