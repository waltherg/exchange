#include <string>
#include <list>


class Exchange {
  private:
    std::list<std::string> items;
  public:
    void list(std::string item, double price);
    void delist(std::string item);
    bool contains(std::string item);
    int length();
};
