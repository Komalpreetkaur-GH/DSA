class Trie {

private:
    struct TrieNode {
        TrieNode* children[26];
        bool isend;
    

    TrieNode (){
        isend=false;
        for(int i=0;i<26;i++){
            children[i]=nullptr;
        }
    }
    };
        TrieNode* root; 
public:
    Trie() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr=root;

        for(char ch: word){
            int ind=ch - 'a';
            if(curr->children[ind]==nullptr){
                curr->children[ind]=new TrieNode();
            }
            curr=curr->children[ind];
        }
        curr->isend=true;
        
    }
    
    bool search(string word) {
        TrieNode* curr=root;
        for(char ch:word){
            int ind= ch -'a';
            if(curr->children[ind]==nullptr){
                return false;
            }
            curr=curr->children[ind];
        }
        return curr->isend;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr=root;

        for(char ch:prefix){
            int ind=ch-'a';
            if(curr->children[ind]==nullptr){
                return false;
            }
            curr=curr->children[ind];
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */