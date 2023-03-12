#include<bits/stdc++.h>

using namespace std;

//solution reference: https://www.youtube.com/watch?v=hGl8Boeb7S4&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=84

int get_max_area(vector<int> a){
    int ans=0;
    // for storing the element indexes.
    stack<int> st;
    a.push_back(0);
    for(int i=0;i<a.size();i++){
         // pop untill element is greater than top element
         // area consideration stops at non decreasing point and rectangle can be created.
         while(!st.empty()&&(a[st.top()]>a[i])){
            int height = a[st.top()];
            st.pop();
            if(st.empty()){
                // width will be i. Rectangle having width i
                ans = max(ans,height*i);
            } else {
                ans=max(ans,(i-st.top()-1)*height);
            }

         }
         st.push(i);
    }
    return ans;
}

int main(){
   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++){
      cin>>a[i];
   }

   cout<<get_max_area(a)<<endl;
}