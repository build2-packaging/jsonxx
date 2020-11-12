#pragma once

// The numeric version format is AAAAABBBBBCCCCCDDDE where:
//
// AAAAA - major version number
// BBBBB - minor version number
// CCCCC - bugfix version number
// DDD   - alpha / beta (DDD + 500) version number
// E     - final (0) / snapshot (1)
//
// When DDDE is not 0, 1 is subtracted from AAAAABBBBBCCCCC. For example:
//
// Version      AAAAABBBBBCCCCCDDDE
//
// 0.1.0        0000000001000000000
// 0.1.2        0000000001000020000
// 1.2.3        0000100002000030000
// 2.2.0-a.1    0000200001999990010
// 3.0.0-b.2    0000299999999995020
// 2.2.0-a.1.z  0000200001999990011
//
#define JSONXX_VERSION       21999990010ULL
#define JSONXX_VERSION_STR   "0.22.0-a.1"
#define JSONXX_VERSION_ID    "0.22.0-a.1"
#define JSONXX_VERSION_FULL  "0.22.0-a.1"

#define JSONXX_VERSION_MAJOR 0
#define JSONXX_VERSION_MINOR 22
#define JSONXX_VERSION_PATCH 0

#define JSONXX_PRE_RELEASE   true

#define JSONXX_SNAPSHOT_SN   0ULL
#define JSONXX_SNAPSHOT_ID   ""
