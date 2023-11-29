// C++ includes used for precompiling on Visual Studio

// Copyright (c) 2023 Xi Xu
// SPDX-License-Identifier: GPL-3.0-or-later

// This file is a modified version of the <bits/stdc++.h> file from GCC 13.1.0 that is compatible with Visual Studio.
// The modifications are made by Xi Xu whose personal official home page is https://www.xi-xu.me/.
// The original file is distributed under the GNU General Public License v3.0 or later.
// You can find the original file at https://gcc.gnu.org/onlinedocs/gcc-13.1.0/libstdc++/api/a00839_source.html.

// 17.4.1.2 Headers

#pragma once

// C
#include <cassert>
#include <cctype>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <csetjmp>
#include <cstdarg>
#include <cstddef>
#include <cstdlib>
#include <cstdint>

// C++
// #include <bitset>
// #include <complex>
#include <algorithm>
#include <bitset>
#include <functional>
#include <iterator>
#include <limits>
#include <memory>
#include <new>
#include <numeric>
#include <typeinfo>
#include <utility>
#include <array>
#include <atomic>
#include <initializer_list>
#include <ratio>
#include <scoped_allocator>
#include <tuple>
#include <typeindex>
#include <type_traits>

#if _HAS_CXX17
#include <any>
// #include <execution>
#include <optional>
#include <variant>
#include <string_view>
#endif

#if _HAS_CXX20
#include <bit>
#include <compare>
#include <concepts>
#include <numbers>
#include <ranges>
#include <span>
#include <source_location>
#include <version>
#endif

#if _HAS_CXX23
#include <expected>
#include <stdatomic.h>
#if __cpp_impl_coroutine
#include <coroutine>
#endif
#endif

// C
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cuchar>

// C++
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <shared_mutex>

#if _HAS_CXX17
#include <any>
#include <charconv>
// #include <execution>
#include <filesystem>
#include <optional>
#include <memory_resource>
#include <variant>
#endif

#if _HAS_CXX20
#include <barrier>
#include <bit>
#include <compare>
#include <concepts>
#include <format>
#include <latch>
#include <numbers>
#include <ranges>
#include <span>
#include <stop_token>
#include <semaphore>
#include <source_location>
#include <syncstream>
#include <version>
#endif

#if _HAS_CXX23
#include <expected>
#include <spanstream>
#if __has_include(<stacktrace>)
#include <stacktrace>
#endif
#include <stdatomic.h>
#include <stdfloat>
#endif
