#include<iostream>
#include <cstring>
using namespace std;
int main(){
    int i,j;
    char str[10][50],temp[50];
    cout << "Enter 10 words: " << endl;
    for(i=0;i<10;++i)
        cin.getline(str[i], 50);
    for(i=0;i<9;++i)
       for(j=i+1;j<10 ;++j){
          if(strcmp(str[i],str[j])>0)
          {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
          }
    }
    cout << "In lexicographical order: " << endl;
    for(i=0;i<10;++i){
       cout << str[i] << endl;
    }
return 0;
}
