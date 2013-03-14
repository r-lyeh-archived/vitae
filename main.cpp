/* A condensed resume
 * - rlyeh // https://github.com/r-lyeh/
 */

#ifdef RESUME_EXTRA
#   include <stdlib.h>                      // C
#   include <algorithm>                     // C++ & STL
#   include <thread>                        // C++11

#   include <v8/v8.h>                       // V8
#   include <lua/lua.h>                     // Lua
#   include <squirrel/squirrel.h>           // Squirrel
#   include <angelscript/angelscript.h>     // Angelscript
#   include <lisp/many.h>                   // SBCL
#   include <scheme/many.h>                 // R6RS

#   include <GL/gl.h>                       // OpenGL, shaders
#   include <AL/al.h>                       // OpenAL

#   include <Windows.h>                     // Win32 API
#   include <unistd.h>                      // Unix & Posix APIs

#   include <sys/socket.h>                  // TCP, UDP sockets
#   include <enet/enet.h>                   // Reliable UDP sockets, NAT traversal

#   include <msgpack.hpp>                   // Serialization, messaging
//  [...]
#endif

#include <iostream>
#include <string>
#include <map>

void main()
{
    struct str : public std::string {
        str() {}
        std::string operator =( const std::string &s ) {
            return assign( s.find(*this) != npos ? s : *this + "\n\t" + s );
        }
    };

    std::map< int, str > all, &bio  = all, &edu  = all,
        &task = all, &game = all, &like = all, &meta = all, &link = all;

     bio[ 1978 ] = "Mario \"rlyeh\" Rodriguez, 09/26 @ Seville/ES";

     edu[ 1998 ] =
     edu[ 1999 ] = "Software Development (CFGS) @ Instituto Cibernos/Seville/ES";

    task[ 2007 ] = "Senior gameplay, dev tools @ VirtualToys/Barcelona/ES";
    task[ 2008 ] =
    task[ 2009 ] = "Lead programmer, master submission @ VirtualToys/Barcelona/ES";
    task[ 2010 ] =
    task[ 2011 ] = "Lead server programmer, dev tools, networking @ VirtualToys/Barcelona/ES";

    game[ 2007 ] = "Imagine: Pet Vet (DS)";
    game[ 2008 ] = "My Eco Planet (DS & DSi)";
    game[ 2008 ] = "Yummy Yummy Cooking Jam (DS)";
    game[ 2008 ] = "Rafa Nadal Tennis (DS)";
    game[ 2009 ] = "Cooking Party (Wii)";
    game[ 2009 ] = "Spaceballs (PS3)(port)(cancelled)";
    game[ 2009 ] = "Yummy Yummy Cooking Jam (PS3)(port)(cancelled)";
    game[ 2010 ] =
    game[ 2011 ] = "Freak Wars: Torrente Online 2 (Windows)";

    like[ 2000 ] = "Emulation/JIT/virtual machines";
    like[ 2009 ] = "Storytelling";
    like[ 2010 ] = "Cinematography";
    like[ 2010 ] = "Locomotion";
    like[ 2011 ] = "Data-driven development";
    like[ 2012 ] = "Character design";
    like[ 2012 ] = "Readable code";

    meta[ 2006 ] = "<3 Pixels";
    meta[ 2006 ] = "<3 Zombies";
    meta[ 2010 ] = "<3 Rock";
    meta[ 2010 ] = "<3 Scifi";

    link[ 2013 ] = "https://github.com/r-lyeh/";

    for( auto &entry : all )
        std::cout << entry.first << ":\t" << entry.second << std::endl;
}
