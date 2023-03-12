#include<bits/stdc++.h>

using namespace std;


/***
 * Logic: while iterating mark the position of each character.
 *  At ith character, check the previous occurence and decided the start of substring 
 *    accordingly. 
 *  If the previous occurence is greater than start index (subarray) then start index should be previous occurence.     
 *  Critical logic: If in a subarray, if repeating character occurs then start index of sub array
 *                 should changed to previous occurance of repeating character. 
*/
int main(){
    string s;
    getline(cin,s);
    map<char,int> mappings;
    for(int i=0;i<s.length();i++){
        mappings.insert({s[i],-1});
    }

    int i=-1; //start index.
    int j; // end index.
    int maxLength=0;

    for(int j=0;j<s.length();j++){
       if(mappings[s[j]]>i){
          i=mappings[s[j]];
       } 
       mappings[s[j]]=j;
       maxLength=max(maxLength,j-i);
    }

    cout<<maxLength<<endl;

}