#include<iostream>

using namespace std;

int main(){
    int n , m;
    cout<<"value of n"<<"value of m"<<endl;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0 ; i<n; i++){
        cin>>arr1[i];
    }
    for(int j=0 ; j<m ; j++){
        cin>>arr2[j];
    }  

                        
    int ans[n+m];              
    int i=0 ;                  
    int j=0;                    
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            i++;
            k++;
        }
        else{
            ans[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        ans[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        ans[k]=arr2[j];
        j++;
        k++;

    }

    for(int i=0 ; i<(n+m) ; i++)
        cout<<ans[i]<<" ";
    

    
    return 0;
}
