#include <bits/stdc++.h>
using namespace std;

class candidate{
	public:
		string name;
		int vote;
};

void outputElection(candidate* arr){
	int total_vote=0;
	for(int i=0;i<5;i++){
		//finding total no of votes
		total_vote=total_vote+arr[i].vote; 
	}

	cout<<"result of the election............."<<endl;
	cout<<"name of candidate"<<"\t"<<"vote received"<<"\t"<<"percentage"<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i].name<<"\t\t\t";
		cout<<arr[i].vote<<"\t\t";
		cout<<(arr[i].vote*100)/total_vote<<"%"<<endl;
	}

	int max=INT_MIN,count=0;
	int index[5]={0};

	for(int i=0;i<5;i++){
		if(arr[i].vote>max){
			max=arr[i].vote;
		}
	}
	
	for(int i=0;i<5;i++){
		if(arr[i].vote==max){
			index[count]=i;
			count++;
		}
	}
	
	if(count==1)
		cout<<"The winner is "<<arr[index[count-1]].name<<endl;
	else{
		cout<<"There is tie between:"<<endl;
		for(int i=0;i<count-1;i++)
			cout<<arr[index[i]].name<<", ";
		cout<<arr[index[count-1]].name<<endl;
		cout<<"all are winner\n";
	}
	return ;
}

int main(){
	string s;
	int v;
	candidate arr[5];
	cout<<"enter candidates last name, there are five candidates\n";
	for(int i=0;i<5;i++){
		cout<<"enter candidate "<<i<<" last name\n";
		cin>>s;
		arr[i].name=s;
		cout<<"enter no of votes received by candidate "<<i<<endl;
		cin>>v;
		arr[i].vote=v;
	}
	outputElection(arr);
	return 0;
}