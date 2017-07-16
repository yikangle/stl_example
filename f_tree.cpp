#include <iostream>
#include <stack>
using namespace std;


struct node;
typedef struct node* pnode; 
struct node{
	int value;
	pnode left;
	pnode right;
};


int first_iterater(pnode root){
    pnode temp ,last;
	stack<pnode> sa;
	//cout<<root->value;
    sa.push(root);
	
	while(!sa.empty()){
   temp= sa.top();
    if(temp->left!=0&&temp->left!=last)
	{
		cout<<sa.top()->value;
		sa.push(temp->left);
	}
	else if(temp->right!=0&&temp->right!=last){

		cout<<sa.top()->value;
		sa.push(temp->right);
	}
	else
	{
     cout<<sa.top()->value;
	 last=sa.pop();
	}
}

}


int main()
{


}
