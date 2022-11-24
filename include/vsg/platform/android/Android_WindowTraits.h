#pragma once

/* <editor-fold desc="MIT License">

Copyright(c) 2018 Robert Osfield

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

</editor-fold> */

#include <vsg/app/WindowTraits.h>

#include <android/native_window.h>

namespace vsgAndroid
{
    /// WindowTraits specifies the settings required when creating windows/vulkan instance/device.
class VSG_DECLSPEC Android_WindowTraits : public vsg::Inherit<vsg::WindowTraits, Android_WindowTraits>
    {
    public:
        Android_WindowTraits();
        explicit Android_WindowTraits(const Android_WindowTraits& traits);
        explicit Android_WindowTraits(ANativeWindow* nativeWindow);
        Android_WindowTraits& operator=(const Android_WindowTraits&) = delete;

        ANativeWindow* nativeWindow;

    protected:
        virtual ~Android_WindowTraits() {}
    };

} // namespace vsgAndroid

EVSG_type_name(vsgAndroid::Android_WindowTraits);
