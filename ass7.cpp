//ASsignment-7
//Title:
//PRN No.:123B1B143
//Name:Mohini A. Jadhav
//Class:SY B          DIV:B(B-4)

//CODE: 
#include<iostream>
using namespace std;

int insert_url(string stk[],int top){
	string s;
	cout<<"Enter url: ";
	cin>>s;
	if(top>=9){
	cout<<"Stack overflow";
	}
	else{
		top++;
		stk[top]=s;
		cout<<stk[top]<<endl;
	}
	return top;
}

void navigateback(string stk[],int top){
	if(top==-1){
		cout<<"stack is empty"<<endl;
	}
	else if(top==0){
		cout<<"single url in browser history"<<endl;
	}
	else{
		top--;
		cout<<"Browser history: "<<endl;
		while(top!=-1){
		
			cout<<stk[top]<<endl;
			top--;
		}
	}
}
void view(string stk[],int top){
	if(top==-1){
		cout<<"stack is empty";
	}
	else{
		cout<<"Current url: "<<stk[top]<<endl;
	}
}
void check_empty(string stk[],int top){
	if(top==-1){
	cout<<"stack is empty! ";
	}
	else{
	cout<<"satck is not empty ";
	}
}

int main(){
	 int ch;
	 char val;
	 string stk[10];
	 int top=-1;
	 cout<<"1. Add visited page "<<endl;
	 cout<<"2. Navigate back "<<endl;
	 cout<<"3. View current page "<<endl;
	 cout<<"4. check if history empty or not"<<endl;
	 
	 do{
	 	cout<<"Enter your choice ";
	 	cin>>ch;
	 switch(ch){
	 	case 1:
	 		top=insert_url(stk,top);
	 		break;
	 	case 2:
	 		navigateback(stk,top);
	 		break;
	 	case 3:
	 		view(stk,top);
	 		break;
	 	case 4:
	 		check_empty(stk,top);
	 		break;
	 	default :
	 		cout<<"Enter valid choice";
	 		break;

	 	}
	 cout<<endl<<"You want to continue 1.yes(y)  2.No() ";
	 cin>>val;
	 }while(val=='y');
	 

return 0;
}
//OUTPUT:

/*
1. Add visited page 
2. Navigate back 
3. View current page 
4. check if history empty or not
Enter your choice 4
stack is empty! 
You want to continue 1.yes(y)  2.No() y
Enter your choice 1
Enter url: google
google

You want to continue 1.yes(y)  2.No() y
Enter your choice 2
single url in browser history

You want to continue 1.yes(y)  2.No() y
Enter your choice 3
Current url: google

You want to continue 1.yes(y)  2.No() y
Enter your choice 1
Enter url: facebook
facebook

You want to continue 1.yes(y)  2.No() y
Enter your choice 1
Enter url: snapchat
snapchat

You want to continue 1.yes(y)  2.No() y
Enter your choice 1
Enter url: instagram
instagram

You want to continue 1.yes(y)  2.No() y
Enter your choice 1
Enter url: youtube
youtube

You want to continue 1.yes(y)  2.No() y
Enter your choice 1
Enter url: linkedin
linkedin

You want to continue 1.yes(y)  2.No() y
Enter your choice 1
Enter url: twitter
twitter

You want to continue 1.yes(y)  2.No() y
Enter your choice 1
Enter url: pinterest
pinterest

You want to continue 1.yes(y)  2.No() y
Enter your choice 1      
Enter url: spotify
spotify

You want to continue 1.yes(y)  2.No() y
Enter your choice 1
Enter url: amazon
amazon

You want to continue 1.yes(y)  2.No() y
Enter your choice 1
Enter url: whatsapp
Stack overflow
You want to continue 1.yes(y)  2.No() y
Enter your choice 2
Browser history: 
spotify
pinterest
twitter
linkedin
youtube
instagram
snapchat
facebook
google

You want to continue 1.yes(y)  2.No() y
Enter your choice 3
Current url: amazon

You want to continue 1.yes(y)  2.No() y
Enter your choice 4
satck is not empty 
You want to continue 1.yes(y)  2.No() n

*/
