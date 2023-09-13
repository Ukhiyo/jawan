/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int n;
    int arr[4]={1,2,3,4};
    for(int i=0;i<4;i++){
        sum=sum+arr[i]*arr[i];
    }
    cout<<sum<<endl;
    

    return 0;
}
