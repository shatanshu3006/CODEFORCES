#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main(){
    vector<int>arr={1,2,3,4};
    Node*y=new Node(arr[0]);
    cout<<y<<endl;
    cout<<y->data<<endl;
}