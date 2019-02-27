#include<iostream>

using namespace std;

struct node{
	int data;
	node *next;
};

node *head = new node;
int c = 0, e = 0, flag = 1;
node *start = new node;
void Insert(int x){
	node *temp = new node;
	if(c<=1){
		start->data = x;
		head = start;
	}
	else{
		temp->data = x;
		head->next = temp;
		head = head->next;
	}
}

void print(){
	head = start;
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;	
}

int search(int y){
	head = start;
	while(head != NULL){
		++e;
		if(y == head->data){
			//return e;
			flag = 1;
			break;
		}
		else
			flag = 0;
		head = head->next;
	}
	return e;
}

void Insertap(int d, int n){
	head = start;
	int i =1;
	node *tmp = new node;
	node *tmp1 = new node;
	tmp1->data = d;
	//node *rakhi = new node;
	tmp = head; 
	while(i !=n-1){
		tmp = tmp->next;
		//if(i==n-2)
			//head->next = jeitadhukabo;
		i++;
	}
	tmp1->next = tmp->next;
	tmp->next = tmp1;
}

int main()
{
	int a, b, w;
	cout << "How many numbers?"<<endl;
	cin >> a;
	cout << "Give the numbers: ";
	while(a--){
		cin >> b;
		c++;
		Insert(b);
	}
	cout << endl << "Linked List: " << endl;
	print();
	
	cout << "Input the number you want to search: " << endl;
	cin >> w;
	int f = search(w);
	if(flag == 1){
		cout << "Number found at position: " << f << endl;
	}
	else
		cout << "Not found :( " << endl;
	
	cout << "Insert the Data & location: " << endl;
	int d, l;
	cin >> d >> l;
	Insertap(d, l);
	cout << "After Inserting: " << endl;
	print();
	return 0;
}
