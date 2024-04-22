#include<iostream>
#include<algorithm>
using namespace std;
 
int max_size=100;

int main(){
    int number[max_size];
    int count[max_size]={0};
    int n,i,mode,mode_count;
    cout<<"Enter the number of Integers";
    cin>>n;
    cout<<"Enter" " "<<n<<" " "intergers, saparated by Spaces:";

    for(i=0;i<n;i++){
        cin>>number[i];
    }
sort(number,number+n);
for (int i = 0; i < n; i++) {
        count[number[i]]++;
        if (count[number[i]] > mode_count) {
            mode_count = count[number[i]];
            mode = number[i];
        }
    }
    cout << "Mode: " << mode << endl;
    return 0;

}