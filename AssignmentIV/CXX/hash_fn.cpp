/*
   ========================================
   hash_fn.cpp — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.hpp

   Developer: Yu-Feng Huang <yfhuang@saturn.yzu.edu.tw>
 */

 /*
 所用hash function是參考別人的Knuth乘法法(使用黃金分割數但只取到0.618)以及djb2字串hash function
 參考來源:
 https://www.google.com/search?q=knuth+%E4%B9%98%E6%B3%95+hashing&oq=&gs_lcrp=EgZjaHJvbWUqCQgCECMYJxjqAjIJCAAQIxgnGOoCMgkIARAjGCcY6gIyCQgCECMYJxjqAjIJCAMQIxgnGOoCMgkIBBAjGCcY6gIyCQgFECMYJxjqAjIJCAYQIxgnGOoCMg8IBxAuGCcYxwEY6gIY0QPSAQkxODc5ajBqMTWoAgiwAgHxBVFqJUFVb44r8QVRaiVBVW-OKw&sourceid=chrome&ie=UTF-8
 
 https://www.reddit.com/r/cs50/comments/ggvgvm/pset5_djb2_hash_function/?tl=zh-hant
 */ 

#include "hash_fn.hpp"

int myHashInt(int key, int m) {
    // TODO: replace with your own design

    const double A = 0.6180339887;  // (sqrt(5) - 1) / 2
    double frac = (key * A) - static_cast<long long>(key * A);
    return static_cast<int>(m * frac);
}

int myHashString(const std::string& str, int m) {
    unsigned long hash = 5381;
    // TODO: replace with your own design

    for (char c : str) {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return static_cast<int>(hash % m);  // basic division method
}
