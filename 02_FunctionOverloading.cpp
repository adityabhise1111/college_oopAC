#include <iostream>
using namespace std;
int add( int a ,int b ){
    cout<<a+b<<endl;
    return 0;
    
}
int add( int a ,int b , int c){
    cout<<a+b+c<<endl;
    return 0;
    
}
int main (){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    add(a,b);
    
    add(a,b,c);
    
}