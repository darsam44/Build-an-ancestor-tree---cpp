#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

namespace family{
class Tree{
    public:
    Tree *root;
    Tree *father;
    Tree *mother;
    string name;
    string rel;

    public:
    Tree(){
        root =NULL;
    }
    Tree(string name){
        root=new Tree;
        root->name=name;
        root->rel="child";
        root->father=NULL;
        root->mother=NULL;
    }
    Tree &addFather ( string name,string father);
    Tree &addMother ( string name,string Mother);
    string relation (string relat);
    string find(string rel);
    void remove(string name);
    void display();
    Tree* findTree(string name, Tree *root);
    Tree* remove_all_parents(Tree *root);
};

};
