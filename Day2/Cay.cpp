#include<iostream>

using namespace std;
struct Node{
    

};

void traverseLNR(TNode* root)
{
    if(root == NULL) return;
    traverseLNR(root->Right);
    printf(“%4d”, root->Info); //Xử lý thông tin của nút gốc
    traverseLNR(root->Left);
}


//typedef <Kiểu dữ liệu cơ bản hoặc có cấu trúc> ItemType;
typedef int ItemType;
struct TNode
{
    ItemType Info; //Thông tin (dữ liệu) của nút
    TNode* Left; //Con trỏ đến nút con bên trái
    TNode* Right; //Con trỏ đến nút con bên phải
};
struct BTree
{ //Định nghĩa kiểu dữ liệu của cây nhị phân
    TNode* Root;
};
int main(){




    return 0;
}