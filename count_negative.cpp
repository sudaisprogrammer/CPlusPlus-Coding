//sort the matrix row wise and then return the total number of negative numbers in the matrix

#include<iostream>
using namespace std;
void sort(int &i,int &j){
//this function will swap the values of mat[i][j] and mat[i][k] by row wise 
    int temp = i;
    i=j;
    j=temp;
}

int countnegative(int r,int c,int **mat){
    int neg = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c-1;j++){
            if(mat[i][j+1]<=-1){
                neg++;
            }
            for(int k  =j+1;k<c;k++){
                if(mat[i][j]>mat[i][k]){
                    sort(mat[i][j],mat[i][k]);
                }
            }
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return neg;
}
int main(){
    int **matrix = new int*[3];
    for(int i=0;i<3;i++){
        matrix[i] = new int[3];
    }
    matrix[0][0] = 3;matrix[0][1] = -1;matrix[0][2] = 8;matrix[1][0] = 6;matrix[1][1] = -5;matrix[1][2] = -9;matrix[2][0] = 3;matrix[2][1] = 78;
    matrix[2][2] = 65;
    int neg = countnegative(3,3,matrix);
    cout<<"total number of negatives are: "<<neg<<endl;
    for(int i=0;i<3;i++){
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
    return 0;
}