
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    vector<Node*> children;
    int data;
    Node()
    {
        children.resize(26,NULL);
        data=0;
    }
};
class FileSystem {
Node *root;
public:
    FileSystem() {
        root=new Node();
    }
    bool check(Node *root)
    {
        for(int i=0;i<26;i++)
        {
            if(root->children[i]!=NULL)
                return true;
        }
        return false;
    }
    bool createPath(string path, int value) {
        // Your code goes here
        Node *temp=root;
        for(int i=0;path[i];i++)
        {
            if(path[i]!='/')
            {
                if(temp->children[path[i]-'a']==NULL)
                {
                    if(check(temp))
                        return false;
                    temp->children[path[i]-'a']=new Node();
                }
                temp=temp->children[path[i]-'a'];
            }
        }
        if(temp->data or temp==root)
            return false;
        temp->data=value;
        return true;
    }

    int get(string path) {
        // Your code goes here
        Node *temp=root;
        for(int i=0;path[i];i++)
        {
            if(path[i]!='/')
            {
                if(temp->children[path[i]-'a']==NULL)
                {
                    return -1;
                }
                temp=temp->children[path[i]-'a'];
            }
        }
        if(temp->data==0)
            return -1;
        return temp->data;
    }
};

int main() {
    FileSystem fs;
    std::cout << fs.createPath("/a",1) << std::endl;
    std::cout << fs.createPath("/a/b",2) << std::endl;
    std::cout << fs.createPath("/ab/c",3) << std::endl;
    return 0;
}