Cork Boolean Library
====================

Welcome to the Cork Boolean/CSG library.  Cork is designed to support Boolean operations between triangle meshes.

Surprisingly, most Boolean/CSG libraries available today (early 2013) are not robust.  Due to floating-point error, some valid inputs will cause segmentation faults or produce grossly inaccurate results (e.g. nothing).  The few libraries which are robust (e.g. CGAL) require the user to correctly configure the arithmetic settings to ensure robustness.

Cork is designed with the philosophy that you, the user, don't know and don't care about esoteric problems with floating point arithmetic.  You just want a Boolean library with a simple interface, that you can rely on.

Cork was developed by Gilbert Bernstein, a computer scientist who has worked on robust geometric intersections in various projects since 2007.  He's reasonably confident he knows what he's doing. =D


Installation
============

Dependencies (Mac/Linux)
------------

In order to build Cork on Mac or Linux, you will need Clang 3.1+ and GMP (GNU Multi-Precision arithmetic library).  Eventually, Cork will support GCC.  If you would like more information, or have special system requirements, please e-mail me: I'm much more likely to extend support to a platform if I receive requests.

Mac
---

On OS X 10.8, Clang 3.1+ is the default compiler.  If you are using the Homebrew package manager, I recommend installing GMP that way.

Linux
-----

Clang/LLVM 3.1 and GMP can be installed via your package manager.


Mac/Linux
----

To build the project, type

    make

that's it.


If the build system is unable to find your GMP installation, please edit the paths in file makeConstants.  In general, the project uses a basic makefile.  In the event that you have to do something more complicated to get the library to compile, or if you are unable to get it to compile, please e-mail me or open an issue on GitHub.  Doing so is much more effective than cursing at your computer, and will save other users trouble in the future.


Windows
----

Cork uses C++11, so you will need the most recent compiler; Visual Studio 2012 or higher please.  You will also need to install the MPIR (www.mpir.org, LGPL) arithmetic library into your Visual Studio environment.

Once this is done, you can use the solution and project files in the /win/ subdirectory to build the demo program.  The solution/project is not currently configured to build a DLL.  Please bug me if this is an issue for you.




