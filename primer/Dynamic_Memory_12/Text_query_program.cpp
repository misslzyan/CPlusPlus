#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <memory>
#include <string>
#include <fstream>
#include <sstream>
class QueryResult;
class TextQuery {
public:
  using line_no = std::vector<std::string>::size_type;
  TextQuery(){};
  TextQuery(std::ifstream &file_input):file(new std::vector<std::string>()) {
    std::string line;
    while(getline(file_input, line)) {
      file -> push_back(line);
      int n = file -> size() - 1;
      std::istringstream sin(line);
      std::string word;
      while(sin >> word){
        auto &f = wp[word];
        if(!f){
          // f is nullptr.
          f.reset(new std::set<line_no>());
        }
        f -> insert(n);
      }
    }
  }
  QueryResult query(const std::string &word) const;
private:
  std::shared_ptr<std::vector<std::string>> file;
  std::map<std::string, std::shared_ptr<std::set<line_no>>> wp;
};

std::ostream& print(std::ostream&,const QueryResult&);

class QueryResult{
  friend std::ostream& print(std::ostream&, const QueryResult&);
public:
  QueryResult(){};
  QueryResult(std::string word, std::shared_ptr<std::vector<std::string>> vec, std::shared_ptr<std::set<TextQuery::line_no>> s):
    sought(word),file(vec),lines(s){};
private:
  std::string sought;
  std::shared_ptr<std::vector<std::string>> file;
  std::shared_ptr<std::set<TextQuery::line_no>> lines;
};

  QueryResult TextQuery::query(const std::string &word) const {
    auto r = wp.find(word);
    static std::shared_ptr<std::set<line_no>> no_data(new std::set<line_no>());
    if (r == wp.end()) {
//    std::cout << "come here1" << std::endl;
      return QueryResult(word, file, no_data);
    } else {
//    std::cout << "come here2" << std::endl;
//      std::cout << "word:" << word << "\n";
//      for_each(file->begin(), file->end(), [](const std::string &s){
//        std::cout << s << "\n";
//       });
//      std::cout << std::endl;
//      for_each(r -> second ->begin(), r-> second->end(), [](const int &i){
    //    std::cout << i << "\n";
  //    });
//      std::cout << std::endl;
      return QueryResult(word, file, r->second);
    }
  }


//print.
std::ostream& print(std::ostream &out, const QueryResult& qr) {
  std::cout << qr.sought << " occurs " << qr.lines -> size() << "times.\n";
  
  for_each(qr.lines->cbegin(), qr.lines->cend(), [&] (const TextQuery::line_no &lineNo) {
    std::cout << "(" << lineNo << ") ";
    std::cout << *(qr.file -> begin() + lineNo) << "\n";
  });
  return out;
}


// do the query.
void run_Queries(std::ifstream &file_input) {
  TextQuery tq(file_input);
  std::string word;
  while(true) {
    std::cout << "Please input a word to query or 'q' to quit.\n";
    if(std::cin >> word && word != "q") {
      print(std::cout, tq.query(word)) << std::endl;
    } else {
      break;
    }
  }
}

int main (int argc, char* argv[]) {
  std::string file_name;
  if(argc < 2){
    file_name = "data/query.dat";
  } else {
    file_name = argv[1];
  }

  // get file input stream.
  std::ifstream file_input(file_name);
  run_Queries(file_input);
}
