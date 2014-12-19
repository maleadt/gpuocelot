General
-------

* Add a configuration option for passing `ccbin` to `nvcc`


Differences with NVIDIA implementation
--------------------------------------

* cuLaunchKernel and similar should throw INVALID_VALUE when any dimension is 0
