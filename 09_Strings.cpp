#include<iostream>
using namespace std;
int main(){

  string ch1,ch2,temp;
    cin>>ch1;
    cin>>ch2;
    cout<<ch1.length()<<" "<<ch2.length()<<endl;
    cout<<ch1+ch2<<endl;
    
    temp=ch2[0];
    ch2[0]=ch1[0];
    ch1[0]=temp[0];
    
    cout<<ch1<<" "<<ch2;
    
    
    
  
      
    
    
    return 0;
}
