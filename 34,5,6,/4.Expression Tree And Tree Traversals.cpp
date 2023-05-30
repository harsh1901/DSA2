#include<ctype.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class tree
{
	public:
	 char data;
	 int flag;
	 tree()
	 {
		flag=0;
	 }
	tree *l,*r;
	tree* create(tree*,char[]);
	void inorder(tree*);
	void preorder(tree*);
	void postorder(tree*);
	void rec_in(tree* );
	void rec_pre(tree*);
	void rec_post(tree*);




};
class stack
{
	public:
	 tree *a[30];
	 int top;
	 stack()
	 {
		top=-1;
	 }
	void push(tree *);
	tree* pop();
	int isempty();
};


int stack::isempty()
{
	if(top==-1)

		return 0;

	else

		return 1;

}

void stack::push(tree *x)
{
	top++;
	a[top]=x;
}

tree* stack::pop()
{
	tree *s;
	s=a[top];
	top--;
	return s;
}
stack s1;
tree *root;

tree *tree::create(tree *root,char a1[30])
{
	tree *nn;
	int i=0;
	while(a1[i]!=0)
	{
		nn=new tree;
		nn->data=a1[i];
		nn->l=nn->r=NULL;
		if(isalnum(a1[i])!=0)
		{
			s1.push(nn);
		}
		else
		{
			nn->r=s1.pop();
			nn->l=s1.pop();
			s1.push(nn);
		}
		i++;
	}
	root=s1.pop();
	return root;


}

void tree::preorder(tree* root)

{
	tree *tp;
	tp=root;
	while(tp!=NULL)

	{

		cout<<"\t"<<tp->data;
		s1.push(tp);
		tp=tp->l;
	}
	while(s1.isempty()!=0)
	    {
	tp=s1.pop();
	tp=tp->r;
	while(tp!=NULL)
		{
		cout<<"\t"<<tp->data;
		s1.push(tp);
		tp=tp->l;

		}
		}


}


void tree::inorder(tree *root)
{
	tree *tp;
	tp=root;
	while(tp!=NULL)

	{
		s1.push(tp);
		tp=tp->l;
	}
	while(s1.isempty()!=0)
	{

	tp=s1.pop();
        cout<<"\t"<<tp->data;
	tp=tp->r;
	while(tp!=NULL)
		{

		s1.push(tp);
		tp=tp->l;
		}
}
}

void tree::postorder(tree *root)
{
    tree *tp;
    tp=root;
    while(tp!=NULL)
    {
    s1.push(tp);
    tp=tp->l;
    }
while(s1.isempty()!=0)
        {
        tp=s1.pop();
        if(tp->flag==0)
            {
            tp->flag=1;
            s1.push(tp);
            tp=tp->r;
        while(tp!=NULL)
                    {
                        s1.push(tp);
                        tp=tp->l;
                    }
            }

        else
        {
            cout<<"\t"<<tp->data;
        }
}
}
void tree::rec_in(tree *root)
{
	if(root!=NULL)
	{
		rec_in(root->l);
		cout<<"\t"<<root->data;
		rec_in(root->r);
	}
}

void tree::rec_pre(tree* root)
{
	if(root!=NULL)
	{
		cout<<"\t"<<root->data;
		rec_in(root->l);
		rec_in(root->r);
	}
}

void tree::rec_post(tree* root)
{
	if(root!=NULL)
	{
		rec_in(root->l);
		rec_in(root->r);
		cout<<"\t"<<root->data;
	}
}

int main()
{
	int ch;
	tree o;
	root=NULL;
	char ac[10];
	do
	{
	    cout<<"\n1.Create \n2.Rec_in \n3.Rec_pre \n4.Rec_post \n5.Inorder \n6.Preorder \n7.Postorder";
	    cout<<"\n enter your choice:";
	    cin>>ch;
	    switch(ch)
	    {
		case 1:
			cout<<"\n Enter expression:";
			cin>>ac;
			root=o.create(root,ac);
			break;
		case 2:
			o.rec_in(root);
			break;
		case 3:
			o.rec_pre(root);
			break;
		case 4:
			o.rec_post(root);
			break;
		case 5:
			o.inorder(root);
			break;
		case 6:
			o.preorder(root);
			break;
		case 7:
			o.postorder(root);
			break;
}
	}while(ch!=8);
        return 0;
}





