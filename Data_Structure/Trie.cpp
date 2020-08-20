#include <iostream>
#include <string>
class Trie{
private:
  Trie* child[26];
  bool isWord;
public:
  Trie():isWord(false){
    for (int i = 0 ;i < 26; i++) {
      child[i] = nullptr;
    }
  }

   void insert(std::string s) {
    Trie* t = this;
    for(char c : s) {
      if (!t -> child[c - 'a']){
        t -> child[c - 'a'] = new Trie();
      }
      t = t -> child[c -'a'];
    }
    t -> isWord = true;
  }

   bool search(std::string s) {
    Trie* t = this;
    for (char c : s) {
      if (!t -> child[c - 'a'])return false;
      t = t -> child[c - 'a']; 
    }
    return t->isWord;
  }  

   bool prefix(std::string s) {
    Trie* t = this;
    for (char c : s) {
      
      if (!t -> child[c - 'a'])return false;
      t = t -> child[c - 'a']; 
    }
    return true;
  }
};

int main() {
   Trie* t = new Trie();
   t -> insert("abc");
   std::cout << t -> search("aaa") << std::endl;
   std::cout << t -> search("abc") << std::endl;
}
