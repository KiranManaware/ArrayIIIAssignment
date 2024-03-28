//count the number of triplet whose sum is equal to the given value of x
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter array element "<<endl;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    int x;
    cout<<"Enter target : ";
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==x){
                    count++;
                }
            }
        }
    }
    cout<<"Number of tripelets : "<<count;
    return 0;
}