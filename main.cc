/** My self-compilable C++ resume - https://github.com/r-lyeh/statvs  *
 * - rlyeh                                                           **/

#ifdef RESUME_EXTRA
#   include <stdlib.h>                      // C
#   include <algorithm>                     // C++ & STL
#   include <thread>                        // C++11
#   include <scripting>                     // V8+Javascript, Lua+Moonscript, runtime C/C++,
                                            // Angelscript, Squirrel, Lisp's, Scheme's...
#   include <memory>                        // Allocators, Stack allocators, Arenas...
#   include <compression>                   // Huffman, Deflate, LZMA, CM, DXT1/5, ETC1...
#   include <messaging>                     // XML, JSON, MSGPack, C++ serialization...
#   include <GL/gl.h>                       // OpenGL, shaders, extensions, glut...
#   include <AL/al.h>                       // OpenAL
#   include <ui/ux.h>                       // UI/UX, easings, interpolators...
#   include <Windows.h>                     // Win32 API, cross-compiling, porting...
#   include <unistd.h>                      // Unix & Posix APIs
#   include <sys/socket.h>                  // TCP, UDP sockets
#   include <enet/enet.h>                   // Reliable UDP sockets, NAT traversal
//  [...]                                   // gamedev tools, skeletal animation, etc.
#endif

#include <iostream>
#include <string>
#include <map>

struct string : public std::string {
    string() {}
    std::string operator =( const std::string &s ) {
        return assign( s.find(*this) != npos ? s : *this + "\n\t" + s );
}   };

int main() {
    std::map< int, string > any, &bio = any, &edu = any,
        &role = any, &game = any, &like = any, &love = any, &link = any;

     bio[ 1978 ] = "Mario \"rlyeh\" Rodriguez, 09/26 at Seville (Spain)";

     edu[ 1998 ] =
     edu[ 1999 ] = "Software Development (CFGS) at Instituto Cibernos Seville";

    role[ 2007 ] = "Senior gameplay, dev tools at VirtualToys Barcelona";
    role[ 2008 ] =
    role[ 2009 ] = "Lead programmer, master submission at VirtualToys Barcelona";
    role[ 2010 ] =
    role[ 2011 ] = "Lead server programmer, network at VirtualToys Barcelona";
    role[ 2013 ] = "Lord of Memory at Gameloft Madrid";
    role[ 2014 ] = "Compression Wizard at Gameloft Madrid";
    role[ 2015 ] = "Texture Berserker at Gameloft Madrid";
    role[ 2015 ] = "TransPorting Engineer at BlitWorks";
    role[ 2016 ] = "Serious Programmer at TequilaWorks";

    game[ 2007 ] = "Imagine: Pet Vet (DS)";
    game[ 2008 ] = "My Eco Planet (DS & DSi)";
    game[ 2008 ] = "Yummy Yummy Cooking Jam (DS)";
    game[ 2008 ] = "Rafa Nadal Tennis (DS)";
    game[ 2009 ] = "Cooking Party (Wii)";
    game[ 2009 ] = "Spaceballs (PS3)(port)(canceled)";
    game[ 2009 ] = "Yummy Yummy Cooking Jam (PS3)(port)(canceled)";
    game[ 2010 ] =
    game[ 2011 ] = "Freak Wars: Torrente Online 2 (Windows)";
    game[ 2013 ] = "Gods of Rome (iOS)(upcoming :)";
    game[ 2014 ] = "Asphalt Overdrive (iOS)";
    game[ 2015 ] = "NOVA Legacy (Android)";
    game[ 2015 ] = "Crypt of the NecroDancer (PSVita)";
    game[ 2016 ] = "RiME (PS4)";

    like[ 2000 ] = "+1 Emulation/JIT/Compilers/Virtual machines";
    like[ 2009 ] = "+1 Storytelling";
    like[ 2010 ] = "+1 Cinematography";
    like[ 2010 ] = "+1 Locomotion";
    like[ 2011 ] = "+1 Data-driven development";
    like[ 2012 ] = "+1 Character design";
    like[ 2012 ] = "+1 Readable code";
    like[ 2013 ] = "+1 Data structures";
    like[ 2014 ] = "+1 Texture and data-compression";
    like[ 2015 ] = "+1 Orthodox minimalistic C+";

    love[ 2006 ] = "<3 Pixels";
    love[ 2006 ] = "<3 Zombies";
    love[ 2010 ] = "<3 Post Rock";
    love[ 2010 ] = "<3 Scifi";
    love[ 2013 ] = "<3 Stoner Rock";

    link[ 2017 ] = "https://github.com/r-lyeh/statvs";

    for( auto &entry : any ) {
        std::cout << entry.first << ":\t" << entry.second << std::endl;
}   }
