#include <iostream>
#include <vector>
using namespace std;

vector<int> createListInt(vector<int> list, int quantity)
{
    srand(time(0)); 
  for (int i = 0; i < quantity; i++)
  {
    int num=static_cast<int>(rand())/static_cast<int>(1000);
    list.push_back(int(num));
   
  }
  return list; 
}

void print(vector<int>list){
    for(int i=0;i<list.size();i++){
        cout<<list[i]<<" "; 
    }   
}

void add(vector<int>list,int begin,int end){
    for (int i=0;i<=list.size();i++){
        if(i==0){
            list[i]=list[i]; 
        }
        else{
            list[i]=list[i]+list[i-1]; 
        }
    }
    cout<<"\nThe sum of the values from "<<begin << " to "<<end<<" is = "<<list[end]-list[begin-1]<<endl;
}


void addSearch(vector<int>list){
    bool res=true;
    while (res){
        cout<<"Digit the range that yo want to add"<<endl;
        cout<<"FORMAT: 1 3"<<endl; 
        int begin, end; 
        cin>> begin >> end; 
        if(end>list.size() || begin<0 || end<begin){
            cout<<"The range is not valid"<<endl; 
            cout<<"The list is from 0 to "<<list.size()-1<<endl;
        }else{ 
            add(list,begin,end);
            res=false;
        }
    }
}

int main(){
    cout<<"Adder of Ranges in list"<<endl; 
    bool res=true;
    while (res) {
        vector<int>list; 
        cout<<"How many numbers in the random list"<<endl; 
        int n; 
        cin>>n; 
        list=createListInt(list,n);
        cout<<"This youre list"<<endl;
        print(list); 
        cout<<endl;
        system ("pause");

        addSearch(list);

        cout<<"Do you want to repeat? 1/0"<<endl;
        cin>>res;
}
    return 0;    
}
