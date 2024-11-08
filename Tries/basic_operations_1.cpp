#include <string>
struct Node{
    Node* links[26];
    int EndsWith=0;
    int StartsWithPrefix=0;

    bool isContains(char ch){
        return links[ch-'a']!=NULL;
    }

    void put(char ch,Node* node){
        links[ch-'a']=node;
    }

    Node* get(char ch){
        return links[ch-'a'];
    }

    void increaseEndsWith(){
        EndsWith++;
    }

    void increaseStartsWithPrefix(){
        StartsWithPrefix++;
    }

    void decreaseEndsWith(){
        EndsWith--;
    }

    void decreaseStartsWithPrefix(){
        StartsWithPrefix--;
    }

    int getEnd(){
        return EndsWith;
    }

    int getPrefix(){
        return StartsWithPrefix;
    }
};

class Trie{
    private: Node* root;
    public:

    Trie(){
        // Write your code here.
        root=new Node();
    }

    void insert(string &word){
        // Write your code here.
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(!node->isContains(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
            node->increaseStartsWithPrefix();
        }
        node->increaseEndsWith();
    }

    int countWordsEqualTo(string &word){
        // Write your code here.
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(node->isContains(word[i])){
                node=node->get(word[i]);
            }
            else return 0;
        }
        return node->getEnd();
    }

    int countWordsStartingWith(string &word){
        // Write your code here.
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(node->isContains(word[i])){
                node=node->get(word[i]);
            }
            else return 0;
        }
        return node->getPrefix();
    }

    void erase(string &word){
        // Write your code here.
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(node->isContains(word[i])){
                node->decreaseStartsWithPrefix();
                node=node->get(word[i]);
            }
            else{
                return;
            }
        }
        node->decreaseEndsWith();
        
    }
};
