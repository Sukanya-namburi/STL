                                                     //vectors
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v={1,5,7,8,6};//vector declaration
    
    v.push_back(9);//adding element to vector
    
    v.emplace_back(30);//adding element to vector
    
    v.pop_back();//removes last element in vector 
    
    v.insert(v.begin(),4);//inserts four at beginning
    
    v.insert(v.begin()+2,10);//adds 10 at 3rd position
    
    v.erase(v.begin());//deletes the first element
    
    v.erase(v.begin()+3);//deletes the fourth element
    
    sort(v.begin(),v.end());//sorts the elements in ascending order
    
    sort(v.begin(),v.end(),greater<int>());//sorts the elements in descending order
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";//printing elements in vector
    }
        
	
	return 0;
}

                                                //2D Vectors
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>vee;//declaration of 2D vector
    vector<int>ve1={1,3,5,7,9};
    vector<int>ve2={2,4,6,8,10};
    vee.push_back(ve1);
    vee.push_back(ve2);
    //1st way to print the elements in 2D vector
    for(auto vctr:vee){
        for(auto it:vctr){
            cout<<it<<" ";
        }
    }
    cout<<endl;
    //2nd way to print the elements in 2D Vector
    for(int i=0;i<vee.size();i++){
        for(int j=0;j<vee[i].size();j++){
            cout<<vee[i][j]<<" ";
        }
    }
    
}


                                                           //sets

//ordered set----->prints the unique elements in ascending order
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    st.insert(18);//push element into the set
    st.emplace(2);//another way to push element to the set
    st.insert(16);
    st.insert(16);//set only allows unique elements
    //To print elements in the set
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //2nd way to print
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    //functions
    cout<<st.size()<<endl;//prints size of the set
    st.erase(st.begin());//deletes the first element in ascending order set
    st.erase(st.begin(),st.end());
    if(st.empty()){//checks whether the set is empty or not
        cout<<"yes";
    }
}

//unordered set----->prints unique elements in random order
//average time complexity is O(1)which is better than ordered set
//worst case--->O(n)---->happens very less times
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>st;//declaration of unordered set
    st.insert(2);
    st.insert(9);
    st.emplace(5);
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
}

//multiset---->multiset allows to store duplicates in ascending order
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>st;//declaration of unordered set
    st.insert(2);
    st.insert(9);
    st.emplace(5);
    st.insert(5);
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    st.erase(st.find(5));//deletes the first occurence of the element 5
}
