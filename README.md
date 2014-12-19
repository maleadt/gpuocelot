gpuocelot
=========

About
-----

This is a fork of the [gpuocelot](https://code.google.com/p/gpuocelot/) code to
make it work on a modern system, in combination with the [CUDA library for
Julia](https://github.com/maleadt/CUDA.jl).

As far as the functionality and tests in CUDA.jl go, this is a drop-in
replacement for the official CUDA driver.

Short overview of changes compared to upstream:

* Fix compilation on a modern system (`yyparse` hack)
* Support for Clang
* Add/extend/fix certain API calls (`cuLaunchKernel`, `cuCtxDestroy`,
  `cuLaunch`, `cuDeviceGetName`)
* Small bugfixes


Requirements
------------

* Scons
* CUDA toolkit <= 5.0 (you only need the toolkit, not the actual driver)
* Appropriate GCC for the CUDA toolkit you picked
* LLVM 3.5
* Boost


Compilation
-----------

Make sure you do a recursive check-out, so the
[hydrazine](https://github.com/maleadt/hydrazine) submodule is checked out too.

Example compilation:

    cd $(CHECKOUT_DIR)
    CUDA_BIN_PATH=/opt/cuda-5.0/bin CUDA_LIB_PATH=/opt/cuda-5.0/lib CUDA_INC_PATH=/opt/cuda-5.0/include \
    CC=clang CXX=clang++ python2 build.py \
        --install -p $(PREFIX) -j$(JOBS)

**Note**: if your main `gcc` binary is not compatible with your CUDA toolkit
version (for example, CUDA 5.0 requires gcc <= 4.6), you _will_ need to edit
`ocelot/scripts/build_environment.py` and change the two `nvcc` invocations to
include `-ccbin=gcc-4.6` (or something similar).

**Note**: due to restrictions of the build system, make sure you only use
absolute paths when passing information through environment variables, and
always build with `--install`.


Usage
-----

Compile and install gpuocelot into a directory you can load libraries from.
Next, you either rename `libocelot.so` to `libcuda.so`, or you use something
which knows about gpuocelot (like CUDA.jl does). After that, you can use the
available symbols just as it were the official NVIDIA implementation.
