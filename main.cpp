/** A condensed resume - https://github.com/r-lyeh/status  *
 * - rlyeh                                                **/

#ifdef RESUME_EXTRA
#   include <stdlib.h>                      // C
#   include <algorithm>                     // C++ & STL
#   include <thread>                        // C++11

#   include <scripting>                     // V8+Javascript, Lua+Moonscript, runtime C/C++,
                                            // Angelscript, Squirrel, Lisp's, Scheme's...

#   include <memory>                        // Allocators, Stack allocators, Arenas...
#   include <compressors>                   // Huffman, Deflate, LZMA, CM...
#   include <messaging>                     // XML, JSON, MSGPack, C++ serialization...

#   include <GL/gl.h>                       // OpenGL, shaders, extensions, glut...
#   include <AL/al.h>                       // OpenAL
#   include <ui>                            // UI/UX, easings, interpolators...

#   include <Windows.h>                     // Win32 API
#   include <unistd.h>                      // Unix & Posix APIs

#   include <sys/socket.h>                  // TCP, UDP sockets
#   include <enet/enet.h>                   // Reliable UDP sockets, NAT traversal
//  [...]                                   // Etc.
#endif

#include <iostream>
#include <string>
#include <map>

struct string : public std::string {
    string() {}
    std::string operator =( const std::string &s ) {
        return assign( s.find(*this) != npos ? s : *this + "\n\t" + s );
} };

int main() {
    std::map< int, string > all, &bio = all, &edu = all,
        &task = all, &game = all, &like = all, &meta = all, &link = all;

     bio[ 1978 ] = "Mario \"rlyeh\" Rodriguez, 09/26 @ Seville/ES";

     edu[ 1998 ] =
     edu[ 1999 ] = "Software Development (CFGS) @ Instituto Cibernos/Seville/ES";

    task[ 2007 ] = "Senior gameplay, dev tools @ VirtualToys/Barcelona/ES";
    task[ 2008 ] =
    task[ 2009 ] = "Lead programmer, master submission @ VirtualToys/Barcelona/ES";
    task[ 2010 ] =
    task[ 2011 ] = "Lead server programmer, dev tools, networking @ VirtualToys/Barcelona/ES";
    task[ 2013 ] =
    task[ 2014 ] = "Lord of Memory and Compression Wizard @ Gameloft/Madrid/ES";

    game[ 2007 ] = "Imagine: Pet Vet (DS)";
    game[ 2008 ] = "My Eco Planet (DS & DSi)";
    game[ 2008 ] = "Yummy Yummy Cooking Jam (DS)";
    game[ 2008 ] = "Rafa Nadal Tennis (DS)";
    game[ 2009 ] = "Cooking Party (Wii)";
    game[ 2009 ] = "Spaceballs (PS3)(port)(canceled)";
    game[ 2009 ] = "Yummy Yummy Cooking Jam (PS3)(port)(canceled)";
    game[ 2010 ] =
    game[ 2011 ] = "Freak Wars: Torrente Online 2 (Windows)";

    like[ 2000 ] = "Emulation/JIT/Compilers/Virtual machines";
    like[ 2009 ] = "Storytelling";
    like[ 2010 ] = "Cinematography";
    like[ 2010 ] = "Locomotion";
    like[ 2011 ] = "Data-driven development";
    like[ 2012 ] = "Character design";
    like[ 2012 ] = "Readable code";
    like[ 2013 ] = "Data structures";

    meta[ 2006 ] = "<3 Pixels";
    meta[ 2006 ] = "<3 Zombies";
    meta[ 2010 ] = "<3 Post Rock";
    meta[ 2010 ] = "<3 Scifi";
    meta[ 2013 ] = "<3 Stoner Rock";

    link[ 2014 ] = "https://github.com/r-lyeh/status";

    for( auto &entry : all )
        std::cout << entry.first << ":\t" << entry.second << std::endl;
}
