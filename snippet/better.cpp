// Reference: https://www.youtube.com/watch?v=i_wDa2AS_8w

void using_namespace_std() {
    using namespace std;
    //
}

// Dont use std::endl in a loop
void print_range(int start, int end) {
    for (auto i = start; i != end; i++)
        std::cout << i << std::endl;
}

void print_range(int start, int end) {
    for (auto i = start; i != end; i++)
        std::cout << i << '\n';
}

// Dont use index for loop
// Use range based for loop
void train_model(const std::vector<int> &data, auto &model) {
    for (std::size_t i = 0; i < data.size(); ++i) {
        model.update(data[i]);
    }
}

void train_model(const std::vector<int> &data, auto &model) {
    for (const auto &x: data) {
        model.update(x);
    }
}

// Dont use loop when there is shortcut
void know_your_algorithms() {
    const std::vector<int> data = { -1, -3, -5, 7, 5, -1 };

    std::size_t first_pos_idx;
    for (std::size_t i = 0; i < data.size(); ++i) {
        if (data[i] > 0) {
            first_pos_idx = i;
            break;
        }
    }
}

void know_your_algorithms() {
    const std::vector<int> data = { -1, -3, -5, 7, 5, -1 };

    const auto is_positive = [](const auto &x) { return x > 0; };
    auto first_pos_it = std::find_if(
        data.cbegin(),
        data.cend(),
        is_positive
    );
}

// Dont use c style array
void f(int *arr, int n) {
    //
}

void using_c_array() {
    const int n = 256;
    int arr[n] = { 0 };

    f(arr, n);
}

template<std::size_t size>
void better_f(std::array<int, size> &arr) {

}

void using_std_array {
    const int n = 256;
    std::array<int, n> arr{};

    better_f(arr);
}

// 
void any_use_of_reinterpret_cast() {
    long long x = 0;
    auto xp = reinterpret_cast<char *>(x);
    auto x2 = reinterpret_cast<long long>(xp);
}

void any_use_of_reinterpret_cast() {
    float y = .123f;
    long i = *(long *) &y;
    //
    y = *(float *) &i;
}

template<typename T>
void print_bytes(const T &input) {
    auto *bytes = reinterpret_cast<const std::byte *>(&input);

}

/* c++ 20 */
template<typename T>
void print_bytes(const T &input) {
    using bytearray = std::array<std::byte, sizeof(T)>;
    const auto &bytes = std::bit_cast<bytearray, T>(input);
}

// casting away const
const std::string &
more_frequent(const std::unordered_map<std::string, int> &word_counts,
              const std::string &word1,
              const std::string &word2) {
    auto &counts = const_cast<std::unordered_map<std::string, int> &>(word_counts);
    return counts[word1] > counts[word2] ? word1 : word2;
}

const std::string &
more_frequent(const std::unordered_map<std::string, int> &word_counts,
              const std::string &word1,
              const std::string &word2) {
    return word_counts.at(word1) > word_counts.at(word2) ? word1 : word2;
}

// use const for safety
void print_vec_one_per_line(const std::vector<int> &arr) {
    for (const auto &x: arr) {
        std::cout << x << '\n';
    }
}

// knowing string literal lifetimes
const char *string_literal_lifetimes() {
    return "string literals";
}


// using structure bindings
void loop_map_items() {
    std::unordered_map<std::string, std::string> colors = {
        {"RED",     "#FF0000"},
        {"GREEN",   "#00FF00"},
        {"BLUE",    "#0000FF"}
    };

    for (const auto &pair: colors) {
        std::cout << "name: " << pair.first << ", hex: " << pair.second << '\n';
    }
}

void loop_map_items() {
    std::unordered_map<std::string, std::string> colors = {
        {"RED",     "#FF0000"},
        {"GREEN",   "#00FF00"},
        {"BLUE",    "#0000FF"}
    };

    for (const auto&[name, hex]: colors) {
        std::cout << "name: " << name << ", hex: " << hex << '\n';
    }
}

// Return multiple vals in struct
struct Values {
    int x, y;
};

Values get_values_return_struct(const int n) {
    return { n, n + 1 };
}

void use_values() {
    auto [x, y] = get_values_return_struct(2);
}

// let compiler know ahead of time
int sum_of_1_to_n(const int n) {
    return n * (n + 1) / 2;
}

void uses_sum() {
    const int limit = 1000;
    auto triangle_n = sum_of_1_to_n(limit);
}

constexpr sum_of_1_to_n(const int n) {
    return n * (n + 1) / 2;
}

// forgetting to mark destructor virtual
class BaseWithNonvirtualDescturtor {
public:
    void foo() {
        std::cout << "do foo\n";
    }

    virtual ~BaseWithNonvirtualDescturtor() {
        std::cout << "base destructor\n";
    }
};

class Derived: public BaseWithNonvirtualDescturtor {
public:
    ~Derived() override {
        std::cout << "called derived destructor\n";
    }
};

void consume_base(std::unique_ptr<BaseWithNonvirtualDescturtor> p) {
    p->foo();
    // deleted p when done
}

// thinking class members init in order of init list
class View {
public:
    View(char *start, std::size_t size) : m_start{start}, m_end{start + size} {

    }
private:
    char *m_start;
    char *m_end;
};

// default vs value init
void default_vs_value_initialization() {
    int x;
    int *x2 = new int;

    int y{};
    int *y2 = new int{};
    int *y3 = new int();
}

struct S {
    int n, m;
    std::string s;
}

void default_vs_value_initialization2() {
    S x; // n and m is garbage
    S *x2 = new S;

    S y{}; // n and m is 0
    S *y2 = new S{};
    S *y3 = new S();
}

// Use constants
float energy(float m) {
    constexpr float SPEED_OF_LIGHT = 299792458.0;
    return m * SPEED_OF_LIGHT * SPEED_OF_LIGHT;
}

// 
void modify_while_iterating() {
    std:;vector<int> v{1, 2, 3, 4};

    for (auto it = v.begin(), end=v.end(); it != end; ++it) {
        v.push_back(*it);
    }

    for (auto x: v) {
        std::cout << x;
    }
    std::cout << '\n';
}

void modify_while_iterating() {
    std::vector<int> v{1, 2, 3, 4};

    const std::size_t size = v.size();
    for (std::size_t i = 0; i < size; ++i) {
        v.push_back(v[i]);
    }

    for (auto x: v) {
        std::cout << x;
    }
    std::cout << '\n';
}

// never returning std move of a local
std::vector<int> make_vector(const int n) {
    std::vector<int> v{1, 2, 3, 4, 5};

    return std::move(v);
}

template<typename T>
constexpr std::remove_reference_t<T> &&
move(T &&value) noexcept {
    return static_cast<std::remove_reference_t<T> &&>(value);
}

constexpr int&&
move(int &&value) noexcept {
    return static_cast<int &&>(value);
}

// not using unique ptr and shared ptr
struct Record {
    int id;
    std::string name;

    Record(int id, std::string name) : id{id}, name{name} {}
};

void necessary_heap_allocations() {
    Record *customer = new Record{0, "James"};
    Record *other = new Record{1, "Someone"};

    // do work

    delete customer;
    delete other;
}

void necessary_heap_allocations() {
    auto customer = std::unique_ptr<Record>(new Record{0, "James"});
    auto other = std::shared_ptr<Record>(new Record{1, "Someone"});
}

// use make instead, pass to constructor directly
void necessary_heap_allocations() {
    auto customer = std::make_unique<Record>(0, "James");
    auto other = std::make_shared<Record>(1, "Someone");
}

// RAII

//
std::shared_ptr<int> max(std::shared_ptr<int> a, std::shared_ptr<int> b) {
    return *a > *b ? a : b;
}