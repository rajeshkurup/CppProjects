#include <iostream>
#include <typeinfo>
#include <set>
#include <map>

#define tweet std::cout
#define nline std::endl

using int_set = std::set<int>;
using py_dict = std::map<std::string, std::string>;
using py_dict_map = std::map<std::string, py_dict>;

int main() {
    tweet << "============ Program to demonstrate auto data type ==============" << nline << nline;

    auto x = 123;

    tweet << "x=" << x << " - Type = " << typeid(x).name() << nline;

    tweet << nline;

    int_set intSet = {34, 56, 23, 45, 67};

    for(const auto& val : intSet) {
        tweet << val << " ";
    }

    tweet << nline << nline;

    py_dict strMap = {{"key1", "val1"}, {"key2", "val2"}};

    for(auto iter = strMap.begin(); iter != strMap.end(); iter++) {
        tweet << "key = " << iter->first << ", value = " << iter->second << nline;
    }

    tweet << nline;

    py_dict_map strMapOfMap = {{"super_key1", strMap}, {"super_key2", {{"key3", "val3"}, {"key4", "val4"}}}};

    for(const auto& tmpStrMapPair : strMapOfMap) {
        for(auto iter2 = tmpStrMapPair.second.begin(); iter2 != tmpStrMapPair.second.end(); iter2++) {
            tweet << "key = " << iter2->first << ", value = " << iter2->second << nline;
        }

        tweet << nline;
    }

    if(strMapOfMap.contains("super_key2")) {
        auto tmpStrMap = strMapOfMap.find("super_key2")->second;

        for(auto iter3 = tmpStrMap.begin(); iter3 != tmpStrMap.end(); iter3++) {
            tweet << "key = " << iter3->first << ", value = " << iter3->second << nline;
        }
    }

    tweet << nline;

    if(strMapOfMap.contains("super_key1")) {
        auto& tmpStrMap = strMapOfMap.find("super_key1")->second;

        for(auto iter3 = tmpStrMap.begin(); iter3 != tmpStrMap.end(); iter3++) {
            tweet << "key = " << iter3->first << ", value = " << iter3->second << nline;
        }
    }

    tweet << nline;

    return 0;
}