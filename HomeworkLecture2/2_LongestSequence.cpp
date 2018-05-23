#include <iostream>
using namespace std;

int main(){
int cnt;
cin >> cnt;
int nums[cnt];
int currentNum=0;
int currentSequenceNum=0;
int currentSequenceLength=1;
int longestSequenceLength=1;
int longestSequenceNumber=0;

for (int i=0; i<cnt; i++) {
cin >> currentNum;
nums[i]=currentNum;
if (i>0) {
    if (nums[i-1]==nums[i]) {
        currentSequenceLength++;
        currentSequenceNum=nums[i];
        }
    else {
        if (longestSequenceLength<=currentSequenceLength) {
            longestSequenceLength=currentSequenceLength;
            longestSequenceNumber=currentSequenceNum;
            currentSequenceLength=1;
            }
        }
    }
}

if (longestSequenceLength==1 && currentSequenceLength==1) {
    longestSequenceNumber=nums[cnt-1];
}

if ( currentSequenceLength>longestSequenceLength) {
    longestSequenceLength=currentSequenceLength;
    longestSequenceNumber=currentSequenceNum;
}

for (int i=0; i< longestSequenceLength; i++) {
cout << longestSequenceNumber << " ";
}

return 0;
}
