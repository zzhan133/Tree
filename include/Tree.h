#ifndef TREE_H
#define TREE_H

#include    "../Tree_Node.h"

typedef char T;

class Tree
{
private:
    Tree_Node* root;
    int size;
public:
    Tree(){size = 0; root = NULL;};
    ~Tree(){};
    Tree(Tree_Node*& ptr){size = 1; root = ptr;};
    Tree_Node* getroot(){return root;};
    bool isBalanced()
    {
        if(this->root == NULL)
        {
            return true;
        }
        int leftheight = get_height(this->root->get_left())+1;
        int rightheight = get_height(this->root->get_right())+1;
        int dif = leftheight - rightheight;
        if(dif>1 || dif<-1)
            return false;
        else
            return true;
    };

    int max(int a, int b)
    {

        if ( a>b ) {
            return a;
        }
        else
            return b;
    };

    int get_height(Tree_Node* node){

        if ( node == NULL ) {
            return 0;
        }

        else {

            if ( node->get_left() == NULL && node->get_right() == NULL) {
                return 1;
            }

            else {
                if( node->get_left() == NULL )
                    return get_height( node->get_right() );
                else if( node->get_right() == NULL )
                    return get_height( node->get_left() );

                else {
                    return max(get_height(node->get_left()), get_height(node->get_left()))+1;
                }

            }

        }
    };
};

#endif // TREE_H
