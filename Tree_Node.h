#pragma once
//
#include <stdlib.h>

typedef char T;

class Tree_Node
{
	public: Tree_Node(void){
		parent = NULL ;
		left = NULL ;
		right = NULL ;
		};
		Tree_Node(T n)
		{
		    data = n;
		    parent = NULL ;
            left = NULL ;
            right = NULL ;
		};
		~Tree_Node(void){};
	private:
		T data;
		Tree_Node* parent;
		Tree_Node* left;
		Tree_Node* right;
	public:
//        Tree_Node* newNode(T a)
//        {
//            return (new Tree_Node(a));
//        };
		void set_data(T n){this->data = n;};
		T get_data(){return this->data;};
		void set_left(Tree_Node*& left)
		{
			this->left = left;
		};
		Tree_Node* get_left()
		{
		return this->left;};

		void set_right (Tree_Node*& right)
		{
			this->right = right;
		};
		Tree_Node* get_right()
		{
		return this->right;};

		Tree_Node** get_left_ref()
		{
			return &(this->left);
		};
		Tree_Node** get_right_ref()
		{
			return &(this->right);
		};

		//parent node operation
		void set_parent (Tree_Node* parent)
		{
			this->parent = parent;
		};
		Tree_Node* get_parent()
		{
		return this->parent;};

		Tree_Node** get_parent_ref()
		{
			return &(this->parent);
		};
};
