#include <iostream>
#include <vector>
#include <tuple>

template<typename ...Types>
struct DataFrame {
    std::vector<std::string> columns;
    std::vector<std::tuple<Types...>> data;
};

int main() {
    DataFrame<float, int, std::string, bool> df;
    df.columns = {"float_col", "int_col", "string_col", "bool_col"};
    df.data = {
        {1.1, 2, "a", true},
        {2.2, 3, "b", false},
        {3.3, 4, "c", true}
    };

    // Print dataframe
    std::cout << "Dataframe:" << std::endl;
    for (const auto& col : df.columns) {
        std::cout << col << " ";
    }
    std::cout << std::endl;
    for (const auto& row : df.data) {
        std::cout << std::get<0>(row) << " " << std::get<1>(row) << " " << std::get<2>(row) << " " << std::get<3>(row) << std::endl;
    }

    return 0;
}
