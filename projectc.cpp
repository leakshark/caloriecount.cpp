#include<bits/stdc++.h>
#include<bitset>
#include<complex>
#include<algorithm>
#include<set>
#include<list>
#include<vector>
#include<map>
#include<utility>
#include<valarray>
#include<queue>
#include<stack>
#include<fstream>
#include<iostream>
#include<memory>
//#include<malloc>
//==========================================================================================================================================================
using namespace std;

int check(vector<string>&v1,vector<int>v2){//function to check the given input with their given calories)
    
    map<string,int>mp; //inserting values with respective food to their calories
    mp.insert({"roti",70});
    mp.insert({"dal",100});
    mp.insert({"salad",10});
    mp.insert({"egg",77});
    mp.insert({"chicken",100});
    mp.insert({"rice",100});
    mp.insert({"potatocurry",50});
    
    
    
    
    int sum=0;//initializing sum so that it count upto the respective calorie count
    for(int i=0;i<v1.size();i++){//here we use map to sum up their respective calories with the given quantity so that adquete calories can be count
        sum+=(mp[v1[i]])*(v2[i]);//here the key string of the vector is compared with the inserted data in map and then its been executed 
    }
    return sum;//returns the sum of the given food at a particular time
    
}

int main(){
    int t;
    int ans=0;
    cout<<"ENTER THE TIME YOU CONSUME:::"<<endl;
    cin>>t;
    while(t--){
        string ele;
        int a;
        int n;
        int fi;
        cout<<"ENTER THE TIME::"<<endl;
        
        cin>>n;
        
        
        vector<string>v1;
        vector<int>v2;
        
        pair<string,int>p1("BREAKFAST::",1);
        pair<string,int>p2("LUNCH::",2);
        pair<string,int>p3("DINNER::",3);
        
        if(n==p1.second){
            cout<<p1.first<<endl;
        }
        cout<<endl;
        if(n==p2.second){
            cout<<p2.first<<endl;
        }
        cout<<endl;
        if(n==p3.second){
            cout<<p3.first<<endl;
        }
       // cout<<endl;
        else{
            cout<<"INVLID INPUT"<<endl;
        }
        cout<<endl;
        cout<<"ENTER THE NO OF FOOD ITEM::"<<endl;
        cin>>fi;
        cout<<"-------------------------------------------"<<endl;
        cout<<"ENTER THE FOOD ITEMS::"<<" "<<"ENTER THE QUANTITY"<<endl;
        for(int i=0;i<fi;i++){
            cin>>ele>>a;
            cout<<endl;
            v1.push_back(ele);
            v2.push_back(a);
            
        }
        
        cout<<"--------------------------------------------"<<endl;
        
        cout<<"THE COLORIES CONSUME::"<<endl;
       
       cout<<check(v1,v2)<<"cal"<<endl;
       
       ans+=check(v1,v2);//stores the overall calories of all day
        
    }
    cout<<"-----------------------------------------------"<<endl;
    cout<<"TOTAL CALORIES CONSUME::"<<endl;
    cout<<ans<<"cal"<<endl;
}
