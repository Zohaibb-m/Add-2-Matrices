#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int** add(int** mat1, int** mat2, int r1, int r2, int c1, int c2){
if (r1!=r2 || c1!=c2){cout << "Addition not Possible";return 0;}
int** mat=new int*[r1];
for (int i=0;i<r1;i++){
    mat[i]=new int[c1];
    for (int j=0;j<c1;j++){
        mat[i][j]=mat1[i][j]+mat2[i][j];
    }
}
return mat;
}
int main(){
    srand (time(0));
    cout << "The First Array is:" << "\n";
int** ar1=0;
ar1=new int*[5];
for (int i=0;i<5;i++){
       ar1[i]=new int[5];
    for (int j=0;j<5;j++){
        ar1[i][j]=rand()%12;
        cout << ar1[i][j] << " ";
    }cout << "\n";
}
cout << "The Second Array is:" << "\n";
int** ar2 =0;
ar2=new int*[5];
for (int i=0;i<5;i++){
    ar2[i]=new int[5];
    for (int j=0;j<5;j++){
        ar2[i][j]=rand()%12;
        cout << ar2[i][j] << " ";
    }cout << "\n";
}
int** arr=0;
arr=add(ar1,ar2,5,5,5,5);
cout << "The Resultant Array is:" << "\n";

for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
        cout << arr[i][j] << " ";
    }cout << "\n";
}
for (int i=0;i<5;i++){
    delete [] ar1[i];
    delete [] ar2[i];
    delete [] arr[i];
}
delete [] ar1;
delete [] ar2;
delete [] arr;
}



//Good hogya aise hi shughal mela lgai rakho
