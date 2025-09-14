// question 3(b) (find missing number using binary search)

#include<iostream>

using namespace std;

int main(){
	
	int a[9]={1,2,3,4,5,6,8,9,10};
	int left=0;
	int right=8;
	int mid=0;
	
	while(left<=right){
		mid=(left+right)/2;
		if(a[mid]==mid+1){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
	}

	left=left+1;
	
	cout<<"mising number:"<<left;
	
	
	return 0;
}