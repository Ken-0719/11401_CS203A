/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.h

   Developer: Yu-Feng Huang <yfhuang@saturn.yzu.edu.tw>
 */

 /*
 所用hash function是參考別人的Knuth乘法法(使用黃金分割數但只取到0.618)以及djb2字串hash function
 參考來源:
 https://www.google.com/search?q=knuth+%E4%B9%98%E6%B3%95+hashing&oq=&gs_lcrp=EgZjaHJvbWUqCQgCECMYJxjqAjIJCAAQIxgnGOoCMgkIARAjGCcY6gIyCQgCECMYJxjqAjIJCAMQIxgnGOoCMgkIBBAjGCcY6gIyCQgFECMYJxjqAjIJCAYQIxgnGOoCMg8IBxAuGCcYxwEY6gIY0QPSAQkxODc5ajBqMTWoAgiwAgHxBVFqJUFVb44r8QVRaiVBVW-OKw&sourceid=chrome&ie=UTF-8
 
 https://www.reddit.com/r/cs50/comments/ggvgvm/pset5_djb2_hash_function/?tl=zh-hant
 */ 

#include "hash_fn.h"

int myHashInt(int key, int m) {
    // TODO: replace with your own design
    float k = key*0.618;
    k = k - (int)k;

    return (int)(m * k);  // multiplication method example
}

int myHashString(const char* str, int m) {
    unsigned long hash = 5381;
    // TODO: replace with your own design

    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return (int)(hash % m); // basic division method
}
