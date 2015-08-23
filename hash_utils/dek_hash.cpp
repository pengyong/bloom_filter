// Copyright 2015, Baidu Inc. All rights reserved.
// Author: Peng Yong <pengyong@baidu.com>

#include "bloom_filter/hash_utils/hash_function.h"

namespace baidu {
namespace bloom_filter {

uint64_t dek_hash(const std::string& input) {
    uint64_t hash = input.length();

    for (size_t i = 0; i < input.length(); ++i) {
        hash = ((hash << 5) ^ (hash >> 27)) ^ input[i];
    }

    return hash;
}

} // namespace bloom_filter
} // namespace baidu

