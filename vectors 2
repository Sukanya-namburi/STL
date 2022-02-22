#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>ve={1,3,3,2,7,5};
    for(auto it:ve){
        cout<<it<<" ";
    }
    cout<<endl;
    sort(ve.begin(),ve.end());//sorts the entire vector
    sort(ve.begin()+1,ve.begin()+3);//it sorts elements from 1st index to 3rd index
    int sum=0;
    //1st way to find sum of elements in vector
    for(auto it:ve){
        sum+=it;
    }
    cout<<sum<<endl;
    //2nd way to find sum of elements in vector
    int sum2=accumulate(ve.begin(),ve.end(),0);
    cout<<sum2<<endl;
    //to find the index of a paticular element in vector
    auto it=find(ve.begin(),ve.end(),5);
    int ind=it-ve.begin();
    cout<<ind<<endl;
    //1 st way to find maximum element in vector
    int maxi=INT_MIN;
    for(auto it:ve){
        if(it>maxi){
            maxi=it;
        }
    }
        cout<<maxi<<endl;
    //2nd way to find maximum element in vector
    int maxi2=*max_element(ve.begin(),ve.end());
    cout<<maxi2<<endl;
    //to find minimum element in vector
    int mini=*min_element(ve.begin(),ve.end());
    cout<<mini<<endl;
    int cnt=count(ve.begin(),ve.end(),3);//counts the occurence of the paticular element
    cout<<cnt;
}
