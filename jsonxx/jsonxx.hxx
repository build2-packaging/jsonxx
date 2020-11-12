#pragma once

#include <iosfwd>
#include <string>

#include <jsonxx/export.hxx>

namespace jsonxx
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  JSONXX_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
