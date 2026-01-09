#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool x[][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << x[i][j] << " ";
        }
        cout << "\n";
    }
}

void inputMatrix(double y[][N]){
    for(int i=1;i<=N;i++){
        cout << "Row " << i << ": ";
        for(int j=0;j<N;j++){
            cin >> y[i-1][j];
        }
    }
}

void findLocalMax(const double a[][N], bool b[][N]){
    for(int i=1;i<N;i++){
        for(int j=1;j<N;j++){
            if(j==0||j==N-1||i==0||i==N-1){
                b[i][j] = false;
            }else{
                if((a[i][j] >= a[i][j-1]) && (a[i][j] >= a[i+1][j]) && (a[i][j] >= a[i][j+1]) && (a[i][j] >= a[i-1][j])) b[i][j] = true;
                else b[i][j] = false;
            }
        }
    }
}

