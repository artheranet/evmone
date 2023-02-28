// evmone: Fast Ethereum Virtual Machine implementation
// Copyright 2023 The evmone Authors.
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include <intx/intx.hpp>
#include <memory>
#include <string_view>

namespace evmmax
{
using bytes_view = std::basic_string_view<uint8_t>;

class ModState
{
public:
    intx::uint384 mod;
    uint64_t mod_inv;
    size_t num_elems = 0;
    std::unique_ptr<intx::uint384[]> elems;
};

std::unique_ptr<ModState> setup(bytes_view modulus, size_t vals_used);
}  // namespace evmmax
