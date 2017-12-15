#pragma once
#include <windows/windows_h.hpp>     // Before <PluginInterace.h> includes it.
#include <notepad++/original/PluginInterface.h>

namespace npp {
    using Notification_id = decltype( Sci_NotifyHeader::code );
}  // namespace npp
