#include <bits/stdc++.h>
using namespace std;

void print(int a[], int n){
    
    for(int i=0;i<n;i++){
        cout<<endl<<a[i];
}
}

void menu(){
    
    cout << "Press 1 for linear search\n";
    cout << "Press 2 for binary search\n";
    cout << "Press 3 for bubble sort\n";
    cout << "Press 4 for selection sort\n";
    cout << "Press 5 for insertion sort\n";
    cout << "Press 6 to exit\n";
    
    cout<<endl<<"Enter choice ";
}

void ls(int a[], int n, int x){
    int f=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cout<<"Element "<<x<<"found at index "<<i<<endl;
            f++;
        }
    }
    if(!f){
        cout<<endl<<"Element not found!";
    }
}

void bins(int a[], int n, int x){
    int s=0,e=n-1,f=0;
    while(s<=e){
        int mid=(s+e)/2;
        if(x==a[mid]){
           cout<<"Element "<<x<<"found at index "<<mid<<endl;
            f++;
            break;

        }
        
        else if(x>a[mid]){
            s=mid+1;
        }
        
        else{
            e=mid-1;
        }
    }
    
    if(!f)
        cout<<endl<<"Element not found!";
}

void bs(int a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

void ss(int a[], int n){
    for(int i=0;i<n-1;i++){
        int min=a[i], minindex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<min){
                min=a[j];
                minindex=j;
            }
        }
        swap(a[i],a[minindex]);
    }
}

void is(int a[], int n){
    for(int i=1;i<n;i++){
        int t=a[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(a[j]>t){
                a[j+1]=a[j];
            }
            
            else
                break;
        }
        
        a[j+1]=t;
        
    }
}



int main()
{
	int choice,a[]={5,4,3,2,1};
    menu();
    cin>>choice;
   
	switch (choice) {
	case 1:
		ls(a,5,2);
		break;
	case 2:
		bins(a,5,3);
		break;
		
	case 3:
		bs(a,5);
        print(a,5);
        break;
            
    case 4:
        ss(a,5);
        print(a,5);
        break;
            
    case 5:
        is(a,5);
        print(a,5);
        break;
            
    case 6:
        break;
    
    default:
		cout << "Choice invalid";
		
	}
	return 0;
}
