
#include <iostream>
using namespace std;


int main() {
    
    int size ,a[10000],i;
    
    cin>>size;
    size--;
    
    for (i=0;i<=size;i++){
        cin>>a[i];
        
    }
    
    for (i=size;i>=0;i--){
        cout<<a[i]<<" ";
        
    }
    
    
    
    
    
    return 0;
}
