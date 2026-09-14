#pragma once

#include <string>
#include <string_view>

namespace noctalia::build_info {

  [[nodiscard]] std::string_view version() noexcept;

  [[nodiscard]] std::string_view revision() noexcept;

  // Empty unless this build was configured with -Dbuild_label=<text> (e.g. a personal build
  // identifier); folded into displayVersion() when set.
  [[nodiscard]] std::string_view buildLabel() noexcept;

  [[nodiscard]] std::string displayVersion();

} // namespace noctalia::build_info
