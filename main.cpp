#include <iostream>
using namespace std;
int main(){
    int i,n,x[100],temp,j;
    
    cout<<"Enter value of n: ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
   
    for(i=0;i<n-1;i++)
    {
    for(j=i+1;j<n;j++)
    {
    if(x[i]>x[j])
    {
    temp=x[i];
        x[i]=x[j];
        x[j]=temp;
    }
  
    
        cout<<endl<<"Data = "<<x[i];
        
        
    }
    
}
}
