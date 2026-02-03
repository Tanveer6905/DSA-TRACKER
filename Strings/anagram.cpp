#include<iostream>
using namespace std;
bool isAnagram(string s, string t){
    // unordered_map<char, int> count;
    int arr[1000] ={0};


    for(int i = 0; i<s.size();i++){
        char ch= s[i];
        arr[ch]++;
    }
    for(int i = 0; i<t.size();i++){
        char ch= t[i];
        arr[ch]--;
    }

    for(int i = 0; i<1000;i++){
        if(arr[i]!=0){
            return false;
        }
    }
    return true;
 }    
 int main(){
    string ana;
    string ana1;
    cout<<"Enter the string you want check its anagram or not."<<endl;
    cin>>ana;
    cout<<"2nd string."<<endl;
    cin>>ana1;
cout << "Is it an anagram? " << boolalpha << isAnagram(ana, ana1) << endl;
return 0;

}