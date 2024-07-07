#include <string>
#include <utility> // For std::move
#include <vector>
#include <unordered_set>
#include <memory> // Add this line to include the <memory> header
#include <gtest/gtest.h>

class Person {
public:
  Person() = default;
  Person(std::vector<int> st) : lst(std::move(st)) {};
  Person(Person&& other) noexcept : lst(std::move(other.lst)) {
    // Additional move operations if needed
  }
  //TO string method
  std::string to_string() const {
    std::string str;
    for (const auto& i : lst) {
      str += std::to_string(i) + " ";
    }
    return str;
  }

private:
  std::vector<int> lst;
};




TEST(MOVESEMANTICS, T1) {
  std::cout << "MOVE SEMANTICS START" << std::endl;
  std::vector<int> v = {1, 2, 3, 4, 5};
  auto p1 = std::make_shared<Person>(v);
  std::cout << "p1 field 1st time" << std::endl;
  std::cout << p1->to_string() << std::endl;

  auto p2 = std::make_shared<Person>(std::move(*p1));
  std::cout << "p2 field 1nd time" << std::endl;
  std::cout << p2->to_string() << std::endl;
  std::cout << "p1 field 2nd time" << std::endl;
  std::cout << p1->to_string() << std::endl;

}
