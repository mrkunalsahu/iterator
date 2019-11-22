#include<iostream>
#include<vector>
using namespace std;
int main()
{
	float t=10,k=0;
	vector <float> arr;
cout<<"Enter the numbers (0 to quit) : ";
while(cin>>t&&t){
	arr.push_back(t);
}

cout<<"\nAll the non_zero elements entered by you are : ";
 for(vector<float>::iterator it=arr.begin();it!=arr.end();++it)
 cout<<*it<<" ";

vector<float>::iterator it,ot;
it=arr.begin();
ot=
arr.erase(it);
//arr.clear();//It will remove all elements from the vector
cout<<"\nCleared Vector is : ";
 for(vector<float>::iterator it=arr.begin();it!=arr.end();++it)
 cout<<*it<<" ";

	return 0;
}