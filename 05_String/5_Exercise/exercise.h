#pragma once

#include <cstdint>
#include <vector>

typedef std::vector<std::uint8_t> ByteArray;

// Exercise 1
std::uint8_t hex_xor(std::uint8_t &hex1, std::uint8_t &hex2);

// Exercise 2
ByteArray hex_vector_xor(ByteArray &vec1, ByteArray &vec2);
