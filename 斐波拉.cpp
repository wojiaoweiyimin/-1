#include<iostream>
using namespace std;
int fbnq(int n){
 if(n==1)return 1;
 if(n==2)return 1;
 return fbnq(n-2)+fbnq(n-1);
} 
int main(){
 cout<<fbnq(6);
 return 0;
}
