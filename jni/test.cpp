#include <iostream>
#include <iterator>
#include <regex>
#include <string>
 
int main() {

    auto regex = std::vector<std::string>{"\\S*",
                                          "\\w*",
                                          "[\\S ]*",
                                          "[\\w ]*"};
    for (auto re_str : regex)
    {
        std::cmatch match;
        std::regex_search("foo bar", match, std::regex(re_str));

        std::cout << "matches " << re_str << ":\n";
        for (auto m : match)
            std::cout << "\"" << m << "\"" << '\n';
    }

    return 0;
}

