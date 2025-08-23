#include<iostream>
#include<algorithm>
using namespace std;
//MAXIUM FIND IN ARRAY
/*int main(){
    int arr[5]={3,44,55,66,77};
    int n = sizeof(arr)/sizeof(int);
    int maxx = arr[0];
    for(int i = 1;i<n;i++){
        
        if(arr[i]>maxx){
            maxx=arr[i];
        }
    }
    cout<<"Your maximum number in array is: "<<maxx;
}*/








// LINEAR SEARCH

/*void linsearch(int* num,int x,int key){ //also use int num[]
    int m=0;
    for(int i =0 ; i < x ;i++){
        if(num[i]==key){
            m=0;
            cout<<"The index is: "<<i;
            return;
        }
        else{
            m=1;
        }

        
        

    }
    if(m==1){
        cout<<"Your key not match with array database";
    }
}
int main(){
    int arr[10]={22,44,55,77,33,66,44,77,567,895};
    int n = sizeof(arr)/sizeof(int);
    int key;
    

    cout<<"Enter your key: ";
    cin>>key;
    linsearch(arr,n,key);
}*/






//REVERSE THE ARRAY WITHOUT EXTRA SPACE

/*int main(){
    int arr[7] = {12,23,34,56,78,90,100};
    int n = sizeof(arr)/sizeof(int);
    int a;
    int b;
    int j=0;
    if(n%2==0){
        for(int i = n-1 ; i >= n/2 ; i--){
            a=arr[i];
            b=arr[j];
            arr[j]=a;
            j=j+1;
            arr[i]=b;

        }

    }
    else{
      for(int i = n-1 ; i >= (n-1)/2 ; i--){
            a=arr[i];
            b=arr[j];
            arr[j]=a;
            j=j+1;
            arr[i]=b; 
      } 
    }

    
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" , ";
    }

}*/







//SORT THE ARRAY


// int main(){


//     int arr[10]={14,23,56,78,12,44,90,43,27,80};
//     int n=sizeof(arr)/sizeof(int);
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
// }








//BINARY SEARCH WITH UNSORTED ARRAY


int main(){


    int arr[10]={14,23,56,78,12,44,90,43,27,80};
    int n=sizeof(arr)/sizeof(int);
    int key = 14;
    sort(arr,arr+n);
    int st=0,end=n-1;
    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid]==key){
            cout<<mid;
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            
            st=mid+1;
        }
        
    }
    return -1;
    
}



