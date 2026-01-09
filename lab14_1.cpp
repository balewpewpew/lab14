#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    for(int k=0;k<N-1;k++){
        for(int i=k;i>=0;i--){
            if(d[i]<d[i+1]){
                T x = d[i];
                d[i] = d[i+1];
                d[i+1] = x;
            }
        }
        cout << "Pass " << k+1 << ":";
        for(int j=0;j<N;j++){
            cout << d[j] << " ";
        }
        cout << "\n";
    }    
}
    

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
