#include <list>
#include <string>

class SortedList {
public:
    SortedList();
    void emptyList();
    void remove();
private:
    int sortMethod = 0;
    std::list<std::string> strings;
}