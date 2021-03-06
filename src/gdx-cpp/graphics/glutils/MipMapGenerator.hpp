
/*
    Copyright 2011 Aevum Software aevum @ aevumlab.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

    @author Victor Vicente de Carvalho victor.carvalho@aevumlab.com
    @author Ozires Bortolon de Faria ozires@aevumlab.com
*/

#ifndef GDX_CPP_GRAPHICS_GLUTILS_MIPMAPGENERATOR_HPP_
#define GDX_CPP_GRAPHICS_GLUTILS_MIPMAPGENERATOR_HPP_

#include "gdx-cpp/graphics/Pixmap.hpp"

namespace gdx_cpp {
namespace graphics {


namespace glutils {

class MipMapGenerator {
public:
    static bool useHWMipMap;

    static void setUseHardwareMipMap (bool useHWMipMap);
    static void generateMipMap (gdx_cpp::graphics::Pixmap::ptr pixmap, int textureWidth, int textureHeight, bool disposePixmap);

protected:


private:
    static void generateMipMapGLES20 (gdx_cpp::graphics::Pixmap::ptr pixmap, bool disposePixmap);
    static void generateMipMapDesktop (gdx_cpp::graphics::Pixmap::ptr pixmap, int textureWidth, int textureHeight, bool disposePixmap);
    static void generateMipMapCPU (gdx_cpp::graphics::Pixmap::ptr pixmap, int textureWidth, int textureHeight, bool disposePixmap);
};

} // namespace gdx_cpp
} // namespace graphics
} // namespace glutils

#endif // GDX_CPP_GRAPHICS_GLUTILS_MIPMAPGENERATOR_HPP_
