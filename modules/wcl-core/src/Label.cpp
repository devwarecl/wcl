
#include <wcl/core/Label.h>

#include <wcl/core/WidgetPrivate.h>

namespace wcl::core {
    Label::Label() {
        getImpl()->mClassName = L"STATIC";
        getImpl()->mStyle = WS_CHILD;
    }
}
