#include<iostream>
using namespace std;

void diagoalSum(int **matrix,int r,int c){
    int sum = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=matrix[i][i];
            if(i==j||j==i){
            }
        }
    }
    cout<<"Sum is "<<sum;
}
int main(){
    int r,c;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    int **matrix = new int*[r];
    for(int i=0;i<r;i++){
        matrix[i] = new int[c];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter the value at matrix["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matrix+i)+j);
        }
    }
    cout<<"============Matrix============"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<*(*(matrix+i)+j)<<" ";
        }
        cout<<endl;
    }
    diagoalSum(matrix,r,c);
    for(int i=0;i<r;i++){
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}