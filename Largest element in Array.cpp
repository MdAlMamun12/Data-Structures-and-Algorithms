#include<iostream>
using namespace std;

void maxm_element(int arr[], int N){
     int k=0, loc=0, maxm=arr[k];
     for(k=0;k<N;k++){
       if(maxm<=arr[k]){
        loc=k;
        maxm=arr[k];
    }
}
cout<<"Maximum Value = "<<maxm<<"  Position = "<<loc+1;
}

int main(){
    int n;
    cout<<"Array Size = ";
    cin>>n;
    int arr1[n];
    cout<<"Array elements = ";
    for(int j=0;j<n;j++){
    cin>>arr1[j];
    }

    maxm_element(arr1, n);
}
