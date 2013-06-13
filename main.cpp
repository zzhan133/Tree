#include <iostream>
#include "Tree_Node.h"
#include "include/Tree.h"

using namespace std;

void printTreeInorder(Tree_Node* root)
{

    if ( root == NULL ) {
        return;
    }
    cout<<root->get_data()<<"   ";
    printTreeInorder(root->get_left());
    printTreeInorder(root->get_right());

}

int main()
{
 //   cout << "Hello world!" << endl;
    //Tree_Node tmp = Tree_Node('F');
    Tree_Node* root = new Tree_Node('F');

    Tree_Node* tmp = new Tree_Node('B');
    root->set_left(tmp);

    tmp = new Tree_Node('G');
    root->set_right(tmp);
    tmp = new Tree_Node('A');
    root->get_left()->set_left(tmp);

    tmp = new Tree_Node('D');
    root->get_left()->set_right(tmp);
    tmp = new Tree_Node('C');
    root->get_left()->get_right()->set_left(tmp);
    tmp = new Tree_Node('E');
    root->get_left()->get_right()->set_right(tmp);
    tmp = new Tree_Node('I');
    root->get_right()->set_right(tmp);
    tmp = new Tree_Node('H');
    root->get_right()->get_right()->set_left(tmp);
 /*   root->set_left(&tmp);*/

    printTreeInorder(root);
    Tree mytree(root);
    int n = mytree.isBalanced();
    cout<<"The height of Tree: "<<n<<endl;
	//getchar();
    return 0;
}
