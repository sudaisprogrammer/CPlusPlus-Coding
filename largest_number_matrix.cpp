/* Write a function that finds and returns the largest element in a dynamically allocated 2D array.
Use pointers for array traversal.
*/
#include<iostream>
using namespace std;
int findlargestelement(int **matrix,int rows,int columns){
    int max = INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(matrix[i][j]>max){
                max = matrix[i][j];
            }
        }
    }
    return max;
}
int main(){
    int rows,columns;
    cout<<"Enter the Number of rows: ";
    cin>>rows;
    cout<<"Enter the Number of columns: ";
    cin>>columns;

    //allocating rows
    int **matrix = new int*[rows];
    for(int i=0;i<rows;i++){
        //allocating columns
        *(matrix+i) = new int[columns]; 
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"Enter the value at Matrix["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matrix+i)+j);
        }
    }
    //displaying matrix
    cout<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<*(*(matrix+i)+j)<<" ";
        }
        cout<<endl;
    }
    int largest = findlargestelement(matrix,rows,columns);
    cout<<endl;
    cout<<"largest vlaue is "<<largest<<endl;
    for(int i=0;i<rows;i++){
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
    return 0;
}