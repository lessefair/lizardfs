#pragma once

#include "config.h"

#include <memory>

struct CFileCloser {
	void operator()(FILE*) const;
};

typedef std::unique_ptr<FILE, CFileCloser> cstream_t;

