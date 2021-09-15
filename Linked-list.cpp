#include<iostream>
using namespace std;
struct node{
	int data=0;
	node *link=0;
};
struct List{
	node head;
	int no_comp=0;
	List(int x=1){
		int i=0;
		node *temp;
		while(i<x){
			if(i==0){
				cout<<"Enter the variables : ";
				cin>>head.data;
				head.link=new node();
				temp=head.link;
				i++;
				no_comp++;
			}
			cout<<"Enter the variables List : ";
			cin>>temp->data;
			i++;
			no_comp++;
			temp->link=new node();
			temp=temp->link;
		}
	}
	void Add_to_First(int n){
		node *temp;
		int t;
		temp=new node();
		temp->data=head.data;
		head.data=n;
		temp->link=head.link;
		head.link=temp;
	}
	void Add_to_End(int n){
		node *temp;
		temp=head.link;
		for(;temp->link;temp=temp->link);
		temp->link=new node();
		temp->data=n;
	}
	
	void show(void){
		node *temp;
		temp=&head;
		for(;temp->link;temp=temp->link) cout<<temp->data<<" , ";
	}
};
int main(){
	int x,n=0,x2;
	cout<<"How many numbers do you want to add ?  ";
	cin>>x;
	List l1(x);
	do{
		cout<<"What do you want to do ? (to exit enter 0)"<<endl<<"1.Adding to the start of the list "<<" 2.Adding to the end of the list ";
		cin>>n;
		if(n==1){
			cout<<"Enter the variable : ";
			cin>>x;
			l1.Add_to_First(x);
		}
		if(n==2){
			cout<<"Enter the variable : ";
			cin>>x;
			l1.Add_to_End(x);
		}
		l1.show();
	}while(!n);
	return 0;
}
