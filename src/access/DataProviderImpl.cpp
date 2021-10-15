/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include "DataProviderImpl.h"

namespace chip {
namespace access {

CHIP_ERROR DataProviderImpl::Init()
{
    return CHIP_NO_ERROR;
}

void DataProviderImpl::Finish() {}

EntryIterator * DataProviderImpl::Entries() const
{
    // TODO: provide iterator
    return nullptr;
}

EntryIterator * DataProviderImpl::Entries(FabricIndex fabricIndex) const
{
    // TODO: provide iterator
    return nullptr;
}

} // namespace access
} // namespace chip