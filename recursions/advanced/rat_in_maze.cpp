#include<bits/stdc++.h>

using namespace std;

bool isSafe(int** a, int n, int x, int y){

     if(x<n && y<n && a[x][y]==1){
        return true;
     }
     return false;
}

bool ratiInMaze(int **a, int n, int x, int y, int **sol){
     // if destination reached.
     if(x==n-1&&y==n-1){
         sol[x][y]=1;
         return true;
     }

     if(isSafe(a,n,x,y)){
        sol[x][y]=1;
        
        // move horizontal
        if(ratiInMaze(a,n,x+1,y,sol)){
            return true;
        }
        
        //move vertical
        if(ratiInMaze(a,n,x,y+1,sol)){
            return true;
        }

        //back-tracking and move in reverse direction.
        sol[x][y]=0;
        return false;
     }
     return false;
}

int main(){
    int n;
    cin>>n;

    //maze array.
    int **a = new int*[n]; 

    for(int i=0;i<n;i++){
        a[i] = new int[n];
    }

      
      // solution array
    int **sol = new int*[n];
    for(int i=0;i<n;i++){
        sol[i]= new int[n];
        for(int j=0;j<n;j++){
            sol[i][j] = 0;
        }
    }

    if(ratiInMaze(a,n,0,n-1,sol)){
       for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
             cout<<sol[i][j]<<" ";
          }
          cout<<endl;
       }
    }

    cout<<"not found"<<endl;
}