#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node* link;
};

node* start=NULL;

static void insert(int item){
	
	node* newnode=new node;
	newnode->data=item;
	newnode->link=NULL;
	if(!start){
		start=newnode;
		return;
	}
	else{
		node* buff=start;
		while(buff->link){
			buff=buff->link;
		}
		buff->link=newnode;
    }
}

void tolist(vector<int> &v){
	for(int i=0; i<v.size(); i++){
		insert(v[i]);
	}
}

void printlist(){
	node* ptr=start;
	if(!ptr){
		cout << "List is empty." << endl;
		return;
	}
	while(ptr!=NULL){
		cout << ptr->data << " ";
		ptr=ptr->link;
	}
	cout << endl;
}

int main(){
	
	vector<int> v={1, 5, 6, 3, 2};
	tolist(v);
	printlist();
	
	return 0;
}
