#include <iostream>
using namespace std;
int main() {
    long long int n;
    int k;
    cin>>n>>k;
    while(k--)
    {           
            if(n>=9){
                if(n%10==0){
                  n=n/10;   
                }
                else{
                    n=n-1;
                }
            }
            else{
                n=n-1;
            }
            
    }
    cout<<n;
}
