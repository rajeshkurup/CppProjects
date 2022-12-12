#include <vector>
#include <memory>

template<class T>
using dyn_arr = std::vector<T>;

template<class T>
using sptr = std::shared_ptr<T>;
