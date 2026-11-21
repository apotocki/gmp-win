This repo contains project and solution files for building GMP library for Windows using Visual Studio.

The solution is able to build both static and dynamic libraries in debug and release configurations for x64 architecture

The actual gmp sources are included in a subfolder packages/gmp

At the moment generic C implementation for mpn is used.

Tested version: 6.3.0

> **Now available through [otok](https://otok-dev.github.io/).** otok builds GMP from source on your machine with your Visual Studio, with GMP's assembly, and hands it to your build: property sheets for Visual Studio projects and a CMake package. See [Using otok](#using-otok-recommended). The solution of this repository remains available.

## Using otok (recommended)

Install [otok](https://otok-dev.github.io/) (`scoop bucket add otok https://github.com/otok-dev/scoop-bucket; scoop install otok`) and put an `otok.toml` next to your solution:

```toml
[otok]
format = 1

[windows]
build-on = ["windows/msvc"]
architectures = { windows = ["x86_64"] }
configurations = ["debug", "release"]

[deps.gmp]
recipe = "apotocki/gmp"
version = "~> 6.3"
```

```powershell
otok install
```

- otok builds GMP 6.3.0 from the release archive with GMP's own configure and make (an MSYS2 tree that otok also builds from a recipe) and MSVC. Unlike the solution of this repository, which uses the generic C code of `mpn`, it keeps GMP's assembly as a fat binary, which chooses the code for the CPU it runs on.
- The products are `GMP` (libgmp, `gmp.h`) and `GMPXX` (the C++ class interface, `gmpxx.h`). Static libraries by default; `linkage = "dynamic"` in `[windows]` gives DLLs.
- `configurations` builds both: a debug program links the libraries built against the debug CRT.
- In a Visual Studio project, import `Otok\otok.props` before the project's settings and `Otok\otok.targets` at the end, and name the products to link in `<OtokProducts>GMP;GMPXX</OtokProducts>`. From CMake, `find_package(Otok CONFIG REQUIRED PATHS "${CMAKE_SOURCE_DIR}/Otok" NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH)` and `target_link_libraries(app PRIVATE otok::GMPXX)`. See [First project for Windows](https://otok-dev.github.io/start/windows/).
- `otok.lock` pins the versions, the recipes and the sources by their hashes: commit it with `otok.toml`. `Otok/` is generated: add it to `.gitignore`.
- The recipe is in the [catalog](https://otok-dev.github.io/index/recipes/apotocki/gmp/) (or `otok info apotocki/gmp`).

## How to build?
    # clone the repo
    git clone https://github.com/apotocki/gmp-win
    
    # open and build solution gmp.sln
    
    # have fun
    
## As an advertisement…
Look at my iOS application on App Store, please:

[<table align="center" border=0 cellspacing=0 cellpadding=0><tr><td><img src="https://is4-ssl.mzstatic.com/image/thumb/Purple112/v4/78/d6/f8/78d6f802-78f6-267a-8018-751111f52c10/AppIcon-0-1x_U007emarketing-0-10-0-85-220.png/460x0w.webp" width="70"/></td><td><a href="https://apps.apple.com/us/app/potohex/id1620963302">PotoHEX</a><br>HEX File Viewer & Editor</td><tr></table>]()

This application is designed to view and edit files at the byte or character level; calculate different hashes, encode/decode, and compress/decompress desired byte regions.
  
You can support my open-source development by trying the [App](https://apps.apple.com/us/app/potohex/id1620963302).

Feedback is welcome!
