/*
 * MessagePack for Ruby
 *
 * Copyright (C) 2008-2013 Sadayuki Furuhashi
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
#ifndef MSGPACK_RUBY_UNPACKER_CLASS_H__
#define MSGPACK_RUBY_UNPACKER_CLASS_H__

#include "unpacker.h"

extern VALUE cMessagePack_Unpacker;

void MessagePack_Unpacker_module_init(VALUE mMessagePack);

VALUE MessagePack_Unpacker_new(int argc, VALUE* argv);

VALUE MessagePack_unpack(int argc, VALUE* argv);

void MessagePack_Unpacker_initialize(msgpack_unpacker_t* uk, VALUE io, VALUE options);

#endif

