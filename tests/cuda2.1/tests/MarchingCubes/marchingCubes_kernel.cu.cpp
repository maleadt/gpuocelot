# 1 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.cpp"
# 1 "marchingCubes_kernel.cu"
# 233 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
namespace std __attribute__((visibility("default"))) {
# 245 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
}
# 152 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 3
typedef long ptrdiff_t;
# 214 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 1 3
# 69 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 1 3
# 54 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/host_defines.h" 1 3
# 55 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/builtin_types.h" 1 3
# 42 "/home/gdiamos/temp/cuda/bin//../include/builtin_types.h" 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/device_types.h" 1 3
# 46 "/home/gdiamos/temp/cuda/bin//../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/home/gdiamos/temp/cuda/bin//../include/builtin_types.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/driver_types.h" 1 3
# 59 "/home/gdiamos/temp/cuda/bin//../include/driver_types.h" 3
enum cudaError
{
  cudaSuccess = 0,
  cudaErrorMissingConfiguration,
  cudaErrorMemoryAllocation,
  cudaErrorInitializationError,
  cudaErrorLaunchFailure,
  cudaErrorPriorLaunchFailure,
  cudaErrorLaunchTimeout,
  cudaErrorLaunchOutOfResources,
  cudaErrorInvalidDeviceFunction,
  cudaErrorInvalidConfiguration,
  cudaErrorInvalidDevice,
  cudaErrorInvalidValue,
  cudaErrorInvalidPitchValue,
  cudaErrorInvalidSymbol,
  cudaErrorMapBufferObjectFailed,
  cudaErrorUnmapBufferObjectFailed,
  cudaErrorInvalidHostPointer,
  cudaErrorInvalidDevicePointer,
  cudaErrorInvalidTexture,
  cudaErrorInvalidTextureBinding,
  cudaErrorInvalidChannelDescriptor,
  cudaErrorInvalidMemcpyDirection,
  cudaErrorAddressOfConstant,
  cudaErrorTextureFetchFailed,
  cudaErrorTextureNotBound,
  cudaErrorSynchronizationError,
  cudaErrorInvalidFilterSetting,
  cudaErrorInvalidNormSetting,
  cudaErrorMixedDeviceExecution,
  cudaErrorCudartUnloading,
  cudaErrorUnknown,
  cudaErrorNotYetImplemented,
  cudaErrorMemoryValueTooLarge,
  cudaErrorInvalidResourceHandle,
  cudaErrorNotReady,
  cudaErrorInsufficientDriver,
  cudaErrorSetOnActiveProcess,
  cudaErrorStartupFailure = 0x7f,
  cudaErrorApiFailureBase = 10000
};


enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned,
  cudaChannelFormatKindUnsigned,
  cudaChannelFormatKindFloat,
  cudaChannelFormatKindNone
};


struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};


struct cudaArray;


enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice,
  cudaMemcpyDeviceToHost,
  cudaMemcpyDeviceToDevice
};


struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};


struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};


struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};


struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};


struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int __cudaReserved[39];
};
# 224 "/home/gdiamos/temp/cuda/bin//../include/driver_types.h" 3
typedef enum cudaError cudaError_t;


typedef int cudaStream_t;


typedef int cudaEvent_t;
# 44 "/home/gdiamos/temp/cuda/bin//../include/builtin_types.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/texture_types.h" 1 3
# 54 "/home/gdiamos/temp/cuda/bin//../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap,
  cudaAddressModeClamp
};


enum cudaTextureFilterMode
{
  cudaFilterModePoint,
  cudaFilterModeLinear
};


enum cudaTextureReadMode
{
  cudaReadModeElementType,
  cudaReadModeNormalizedFloat
};


struct textureReference
{
  int normalized;
  enum cudaTextureFilterMode filterMode;
  enum cudaTextureAddressMode addressMode[3];
  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 45 "/home/gdiamos/temp/cuda/bin//../include/builtin_types.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/vector_types.h" 1 3
# 54 "/home/gdiamos/temp/cuda/bin//../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct char2
{
  signed char x, y;
};


struct uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct char4
{
  signed char x, y, z, w;
};


struct uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct short2
{
  short x, y;
};


struct ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct short4
{
  short x, y, z, w;
};


struct ushort4
{
  unsigned short x, y, z, w;
};


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct int2
{
  int x, y;
};


struct uint2
{
  unsigned int x, y;
};


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct int4
{
  int x, y, z, w;
};


struct uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};


struct



      

                                             long2
{
  long int x, y;
};


struct



      

                                                      ulong2
{
  unsigned long int x, y;
};
# 262 "/home/gdiamos/temp/cuda/bin//../include/vector_types.h" 3
struct float1
{
  float x;
};


struct float2
{
  float x, y;
};


struct float3
{
  float x, y, z;
};


struct float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct longlong2
{
  long long int x, y;
};


struct ulonglong2
{
  unsigned long long int x, y;
};


struct double1
{
  double x;
};


struct double2
{
  double x, y;
};
# 328 "/home/gdiamos/temp/cuda/bin//../include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct double1 double1;

typedef struct double2 double2;
# 419 "/home/gdiamos/temp/cuda/bin//../include/vector_types.h" 3
typedef struct dim3 dim3;


struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int x = 1, unsigned int y = 1, unsigned int z = 1) : x(x), y(y), z(z) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};
# 45 "/home/gdiamos/temp/cuda/bin//../include/builtin_types.h" 2 3
# 56 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 2 3
# 79 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 3
extern "C" {
# 88 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3D(struct cudaPitchedPtr* pitchDevPtr, struct cudaExtent extent);
extern cudaError_t cudaMalloc3DArray(struct cudaArray** arrayPtr, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent);
extern cudaError_t cudaMemset3D(struct cudaPitchedPtr pitchDevPtr, int value, struct cudaExtent extent);
extern cudaError_t cudaMemcpy3D(const struct cudaMemcpy3DParms *p);
extern cudaError_t cudaMemcpy3DAsync(const struct cudaMemcpy3DParms *p, cudaStream_t stream);
# 101 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc(void **devPtr, size_t size);
extern cudaError_t cudaMallocHost(void **ptr, size_t size);
extern cudaError_t cudaMallocPitch(void **devPtr, size_t *pitch, size_t width, size_t height);
extern cudaError_t cudaMallocArray(struct cudaArray **array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height );
extern cudaError_t cudaFree(void *devPtr);
extern cudaError_t cudaFreeHost(void *ptr);
extern cudaError_t cudaFreeArray(struct cudaArray *array);
# 116 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyFromArray(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DFromArray(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyToSymbol(const char *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyFromSymbol(void *dst, const char *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind );







extern cudaError_t cudaMemcpyAsync(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromArrayAsync(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DFromArrayAsync(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToSymbolAsync(const char *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromSymbolAsync(void *dst, const char *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);







extern cudaError_t cudaMemset(void *mem, int c, size_t count);
extern cudaError_t cudaMemset2D(void *mem, size_t pitch, int c, size_t width, size_t height);







extern cudaError_t cudaGetSymbolAddress(void **devPtr, const char *symbol);
extern cudaError_t cudaGetSymbolSize(size_t *size, const char *symbol);







extern cudaError_t cudaGetDeviceCount(int *count);
extern cudaError_t cudaGetDeviceProperties(struct cudaDeviceProp *prop, int device);
extern cudaError_t cudaChooseDevice(int *device, const struct cudaDeviceProp *prop);
extern cudaError_t cudaSetDevice(int device);
extern cudaError_t cudaGetDevice(int *device);







extern cudaError_t cudaBindTexture(size_t *offset, const struct textureReference *texref, const void *devPtr, const struct cudaChannelFormatDesc *desc, size_t size );
extern cudaError_t cudaBindTextureToArray(const struct textureReference *texref, const struct cudaArray *array, const struct cudaChannelFormatDesc *desc);
extern cudaError_t cudaUnbindTexture(const struct textureReference *texref);
extern cudaError_t cudaGetTextureAlignmentOffset(size_t *offset, const struct textureReference *texref);
extern cudaError_t cudaGetTextureReference(const struct textureReference **texref, const char *symbol);







extern cudaError_t cudaGetChannelDesc(struct cudaChannelFormatDesc *desc, const struct cudaArray *array);
extern struct cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, enum cudaChannelFormatKind f);







extern cudaError_t cudaGetLastError(void);
extern const char* cudaGetErrorString(cudaError_t error);







extern cudaError_t cudaConfigureCall(dim3 gridDim, dim3 blockDim, size_t sharedMem , cudaStream_t stream );
extern cudaError_t cudaSetupArgument(const void *arg, size_t size, size_t offset);
extern cudaError_t cudaLaunch(const char *symbol);







extern cudaError_t cudaStreamCreate(cudaStream_t *stream);
extern cudaError_t cudaStreamDestroy(cudaStream_t stream);
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream);
extern cudaError_t cudaStreamQuery(cudaStream_t stream);







extern cudaError_t cudaEventCreate(cudaEvent_t *event);
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream);
extern cudaError_t cudaEventQuery(cudaEvent_t event);
extern cudaError_t cudaEventSynchronize(cudaEvent_t event);
extern cudaError_t cudaEventDestroy(cudaEvent_t event);
extern cudaError_t cudaEventElapsedTime(float *ms, cudaEvent_t start, cudaEvent_t end);







extern cudaError_t cudaSetDoubleForDevice(double *d);
extern cudaError_t cudaSetDoubleForHost(double *d);







extern cudaError_t cudaThreadExit(void);
extern cudaError_t cudaThreadSynchronize(void);


}
# 70 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/crt/storage_class.h" 1 3
# 71 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 2 3
# 216 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 2 3
# 88 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
# 89 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent);
# 90 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
# 91 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
# 92 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t);
# 101 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
# 102 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void **, size_t);
# 103 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
# 104 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (1));
# 105 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void *);
# 106 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void *);
# 107 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray *);
# 116 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
# 117 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
# 118 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
# 119 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 120 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 121 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 122 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
# 123 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 124 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 125 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 133 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t);
# 134 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t);
# 135 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 136 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 137 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 138 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 139 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 140 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 148 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
# 149 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 157 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
# 158 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 166 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
# 167 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
# 168 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
# 169 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int);
# 170 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int *);
# 178 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
# 179 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 180 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
# 181 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
# 182 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 190 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
# 191 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 199 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 200 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t);
# 208 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = (0));
# 209 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
# 210 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char *);
# 218 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
# 219 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
# 220 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
# 221 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 229 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
# 230 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t);
# 231 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
# 232 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
# 233 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
# 234 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 242 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
# 243 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 251 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 252 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 58 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 59 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 60 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 61 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 63 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 64 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 65 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(char)) * 8);
# 70 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 72 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 74 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 75 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 76 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(signed char)) * 8);
# 78 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 79 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 81 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 82 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 83 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned char)) * 8);
# 85 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 86 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 88 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 89 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 90 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(signed char)) * 8);
# 92 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 93 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 95 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 96 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 97 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned char)) * 8);
# 99 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 100 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 102 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 103 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 104 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(signed char)) * 8);
# 106 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 107 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 109 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 110 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 111 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned char)) * 8);
# 113 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 114 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 116 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 117 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 118 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(signed char)) * 8);
# 120 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 121 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 123 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 124 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 125 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned char)) * 8);
# 127 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 128 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 130 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 131 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 132 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(short)) * 8);
# 134 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 135 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 137 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 138 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 139 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned short)) * 8);
# 141 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 142 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 144 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 145 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 146 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(short)) * 8);
# 148 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 149 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 151 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 152 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 153 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned short)) * 8);
# 155 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 156 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 158 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 159 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 160 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(short)) * 8);
# 162 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 163 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 165 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 166 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 167 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned short)) * 8);
# 169 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 170 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 172 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 173 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 174 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(short)) * 8);
# 176 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 177 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 179 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 180 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 181 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned short)) * 8);
# 183 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 184 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 186 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 187 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 188 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(int)) * 8);
# 190 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 191 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 193 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 194 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 195 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned)) * 8);
# 197 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 198 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 200 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 201 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 202 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(int)) * 8);
# 204 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 205 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 207 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 208 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 209 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned)) * 8);
# 211 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 212 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 214 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 215 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 216 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(int)) * 8);
# 218 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 219 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 221 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 222 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 223 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned)) * 8);
# 225 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 226 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 228 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 229 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 230 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(int)) * 8);
# 232 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 233 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 235 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 236 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 237 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned)) * 8);
# 239 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 240 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 302 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 303 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 304 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(float)) * 8);
# 306 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 307 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 309 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 310 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 311 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(float)) * 8);
# 313 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 314 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 316 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 317 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 318 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(float)) * 8);
# 320 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 321 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 323 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 324 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 325 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(float)) * 8);
# 327 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 328 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 54 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 55 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
{
# 56 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
auto cudaPitchedPtr s;
# 58 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(s.ptr) = d;
# 59 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(s.pitch) = p;
# 60 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(s.xsize) = xsz;
# 61 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(s.ysize) = ysz;
# 63 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
return s;
# 64 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
}
# 66 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 67 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
{
# 68 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
auto cudaPos p;
# 70 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(p.x) = x;
# 71 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(p.y) = y;
# 72 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(p.z) = z;
# 74 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
return p;
# 75 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
}
# 77 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 78 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
{
# 79 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
auto cudaExtent e;
# 81 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(e.width) = w;
# 82 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(e.height) = h;
# 83 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(e.depth) = d;
# 85 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
return e;
# 86 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
}
# 54 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 55 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 56 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto char1 t; (t.x) = x; return t;
# 57 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 59 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 60 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 61 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uchar1 t; (t.x) = x; return t;
# 62 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 64 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 65 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 66 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto char2 t; (t.x) = x; (t.y) = y; return t;
# 67 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 69 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 70 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 71 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uchar2 t; (t.x) = x; (t.y) = y; return t;
# 72 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 74 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 75 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 76 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 77 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 79 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 80 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 81 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 82 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 84 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 85 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 86 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 87 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 89 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 90 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 91 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 92 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 94 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline short1 make_short1(short x)
# 95 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 96 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto short1 t; (t.x) = x; return t;
# 97 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 99 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 100 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 101 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ushort1 t; (t.x) = x; return t;
# 102 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 104 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 105 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 106 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto short2 t; (t.x) = x; (t.y) = y; return t;
# 107 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 109 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 110 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 111 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ushort2 t; (t.x) = x; (t.y) = y; return t;
# 112 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 114 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 115 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 116 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 117 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 119 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 120 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 121 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 122 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 124 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 125 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 126 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 127 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 129 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 130 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 131 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 132 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 134 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline int1 make_int1(int x)
# 135 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 136 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto int1 t; (t.x) = x; return t;
# 137 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 139 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 140 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 141 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uint1 t; (t.x) = x; return t;
# 142 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 144 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 145 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 146 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto int2 t; (t.x) = x; (t.y) = y; return t;
# 147 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 149 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 150 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 151 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uint2 t; (t.x) = x; (t.y) = y; return t;
# 152 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 154 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 155 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 156 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 157 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 159 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 160 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 161 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 162 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 164 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 165 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 166 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 167 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 169 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 170 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 171 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 172 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 174 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline long1 make_long1(long x)
# 175 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 176 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto long1 t; (t.x) = x; return t;
# 177 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 179 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 180 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 181 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ulong1 t; (t.x) = x; return t;
# 182 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 184 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 185 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 186 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto long2 t; (t.x) = x; (t.y) = y; return t;
# 187 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 189 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 190 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 191 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ulong2 t; (t.x) = x; (t.y) = y; return t;
# 192 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 218 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline float1 make_float1(float x)
# 219 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 220 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto float1 t; (t.x) = x; return t;
# 221 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 223 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 224 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 225 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto float2 t; (t.x) = x; (t.y) = y; return t;
# 226 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 228 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 229 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 230 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 231 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 233 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 234 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 235 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 236 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 238 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 239 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 240 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto longlong1 t; (t.x) = x; return t;
# 241 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 243 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 244 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 245 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ulonglong1 t; (t.x) = x; return t;
# 246 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 248 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 249 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 250 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto longlong2 t; (t.x) = x; (t.y) = y; return t;
# 251 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 253 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 254 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 255 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 256 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 258 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline double1 make_double1(double x)
# 259 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 260 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto double1 t; (t.x) = x; return t;
# 261 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 263 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 264 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 265 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto double2 t; (t.x) = x; (t.y) = y; return t;
# 266 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 33 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 34 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 37 "/usr/include/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 38 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 39 "/usr/include/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 40 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 41 "/usr/include/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 42 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 44 "/usr/include/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 45 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 54 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 135 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 136 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 137 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 138 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 139 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 140 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 141 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 142 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 143 "/usr/include/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 144 "/usr/include/bits/types.h" 3
extern "C" { typedef struct __fsid_t { int __val[2]; } __fsid_t; }
# 145 "/usr/include/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 146 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 147 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 148 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 149 "/usr/include/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 150 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 151 "/usr/include/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 153 "/usr/include/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 154 "/usr/include/bits/types.h" 3
extern "C" { typedef long __swblk_t; }
# 155 "/usr/include/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 158 "/usr/include/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 161 "/usr/include/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 164 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 169 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 170 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 173 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 177 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 180 "/usr/include/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 184 "/usr/include/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 185 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 186 "/usr/include/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 189 "/usr/include/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 192 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __socklen_t; }
# 61 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 77 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 93 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 105 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 121 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 123 "/usr/include/time.h" 3
__time_t tv_sec;
# 124 "/usr/include/time.h" 3
long tv_nsec;
# 125 "/usr/include/time.h" 3
}; }
# 134 "/usr/include/time.h" 3
extern "C" { struct tm {
# 136 "/usr/include/time.h" 3
int tm_sec;
# 137 "/usr/include/time.h" 3
int tm_min;
# 138 "/usr/include/time.h" 3
int tm_hour;
# 139 "/usr/include/time.h" 3
int tm_mday;
# 140 "/usr/include/time.h" 3
int tm_mon;
# 141 "/usr/include/time.h" 3
int tm_year;
# 142 "/usr/include/time.h" 3
int tm_wday;
# 143 "/usr/include/time.h" 3
int tm_yday;
# 144 "/usr/include/time.h" 3
int tm_isdst;
# 147 "/usr/include/time.h" 3
long tm_gmtoff;
# 148 "/usr/include/time.h" 3
const char *tm_zone;
# 153 "/usr/include/time.h" 3
}; }
# 162 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 164 "/usr/include/time.h" 3
timespec it_interval;
# 165 "/usr/include/time.h" 3
timespec it_value;
# 166 "/usr/include/time.h" 3
}; }
# 169 "/usr/include/time.h" 3
struct sigevent;
# 175 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 184 "/usr/include/time.h" 3
extern "C" __attribute__((__weak__)) clock_t clock() throw();
# 187 "/usr/include/time.h" 3
extern "C" time_t time(time_t *) throw();
# 190 "/usr/include/time.h" 3
extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));
# 194 "/usr/include/time.h" 3
extern "C" time_t mktime(tm *) throw();
# 200 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 208 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct locale_data *__locales[13];
# 34 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 36 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 39 "/usr/include/xlocale.h" 3
const char *__names[13];
# 40 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 218 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();
# 223 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 232 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();
# 236 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t *) throw();
# 242 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 247 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 254 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();
# 257 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t *) throw();
# 265 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();
# 269 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 275 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 276 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 277 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 282 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 286 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 290 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 291 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 297 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 312 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();
# 315 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm *) throw();
# 318 "/usr/include/time.h" 3
extern "C" int dysize(int) throw() __attribute__((__const__));
# 327 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);
# 332 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t, timespec *) throw();
# 335 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t, timespec *) throw();
# 338 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 346 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);
# 351 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();
# 356 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();
# 361 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t) throw();
# 364 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();
# 369 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t, itimerspec *) throw();
# 373 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t) throw();
# 389 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 398 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 412 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 38 "/usr/include/string.h" 3
extern "C" __attribute__((__weak__)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw();
# 43 "/usr/include/string.h" 3
extern "C" void *memmove(void *, const void *, size_t) throw();
# 51 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw();
# 59 "/usr/include/string.h" 3
extern "C" __attribute__((__weak__)) void *memset(void *, int, size_t) throw();
# 62 "/usr/include/string.h" 3
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__));
# 66 "/usr/include/string.h" 3
extern "C" void *memchr(const void *, int, size_t) throw() __attribute__((__pure__));
# 73 "/usr/include/string.h" 3
extern "C" void *rawmemchr(const void *, int) throw() __attribute__((__pure__));
# 77 "/usr/include/string.h" 3
extern "C" void *memrchr(const void *, int, size_t) throw() __attribute__((__pure__));
# 84 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw();
# 87 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw();
# 92 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw();
# 95 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw();
# 99 "/usr/include/string.h" 3
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__));
# 102 "/usr/include/string.h" 3
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__));
# 106 "/usr/include/string.h" 3
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__));
# 109 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw();
# 121 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__));
# 124 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw();
# 130 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__));
# 138 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__));
# 167 "/usr/include/string.h" 3
extern "C" char *strchr(const char *, int) throw() __attribute__((__pure__));
# 170 "/usr/include/string.h" 3
extern "C" char *strrchr(const char *, int) throw() __attribute__((__pure__));
# 177 "/usr/include/string.h" 3
extern "C" char *strchrnul(const char *, int) throw() __attribute__((__pure__));
# 184 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__));
# 188 "/usr/include/string.h" 3
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__));
# 191 "/usr/include/string.h" 3
extern "C" char *strpbrk(const char *, const char *) throw() __attribute__((__pure__));
# 194 "/usr/include/string.h" 3
extern "C" char *strstr(const char *, const char *) throw() __attribute__((__pure__));
# 199 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw();
# 205 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw();
# 210 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw();
# 217 "/usr/include/string.h" 3
extern "C" char *strcasestr(const char *, const char *) throw() __attribute__((__pure__));
# 225 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__));
# 231 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw();
# 234 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw();
# 242 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__));
# 249 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__));
# 256 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 281 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw();
# 288 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 294 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw();
# 298 "/usr/include/string.h" 3
extern "C" void bcopy(const void *, void *, size_t) throw();
# 302 "/usr/include/string.h" 3
extern "C" void bzero(void *, size_t) throw();
# 305 "/usr/include/string.h" 3
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__));
# 309 "/usr/include/string.h" 3
extern "C" char *index(const char *, int) throw() __attribute__((__pure__));
# 313 "/usr/include/string.h" 3
extern "C" char *rindex(const char *, int) throw() __attribute__((__pure__));
# 318 "/usr/include/string.h" 3
extern "C" int ffs(int) throw() __attribute__((__const__));
# 323 "/usr/include/string.h" 3
extern "C" int ffsl(long) throw() __attribute__((__const__));
# 325 "/usr/include/string.h" 3
extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 331 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__));
# 335 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__));
# 342 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__));
# 346 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__));
# 354 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw();
# 361 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__));
# 365 "/usr/include/string.h" 3
extern "C" char *strsignal(int) throw();
# 368 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw();
# 370 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw();
# 375 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw();
# 378 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw();
# 383 "/usr/include/string.h" 3
extern "C" char *strfry(char *) throw();
# 386 "/usr/include/string.h" 3
extern "C" void *memfrob(void *, size_t) throw();
# 393 "/usr/include/string.h" 3
extern "C" char *basename(const char *) throw();
# 56 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h"
extern "C" __attribute__((__weak__)) clock_t clock() throw();
# 59 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h"
extern "C" __attribute__((__weak__)) void *memset(void *, int, size_t) throw();
# 62 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h"
extern "C" __attribute__((__weak__)) void *memcpy(void *, const void *, size_t) throw();
# 65 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int abs(int) throw() __attribute__((__const__));
# 67 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long labs(long) throw() __attribute__((__const__));
# 69 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llabs(long long) throw() __attribute__((__const__));
# 71 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fabs(double) throw() __attribute__((__const__));
# 73 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fabsf(float) throw() __attribute__((__const__));
# 76 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int min(int, int);
# 78 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) unsigned umin(unsigned, unsigned);
# 80 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fminf(float, float) throw();
# 82 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fmin(double, double) throw();
# 85 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int max(int, int);
# 87 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) unsigned umax(unsigned, unsigned);
# 89 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fmaxf(float, float) throw();
# 91 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fmax(double, double) throw();
# 94 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double sin(double) throw();
# 96 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float sinf(float) throw();
# 99 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double cos(double) throw();
# 101 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float cosf(float) throw();
# 104 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) void sincos(double, double *, double *) throw();
# 106 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *) throw();
# 109 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double tan(double) throw();
# 111 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float tanf(float) throw();
# 114 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double sqrt(double) throw();
# 116 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float sqrtf(float) throw();
# 119 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double rsqrt(double);
# 121 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float rsqrtf(float);
# 124 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double exp2(double) throw();
# 126 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float exp2f(float) throw();
# 129 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double exp10(double) throw();
# 131 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float exp10f(float) throw();
# 134 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double expm1(double) throw();
# 136 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float expm1f(float) throw();
# 139 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double log2(double) throw();
# 141 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float log2f(float) throw();
# 144 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double log10(double) throw();
# 146 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float log10f(float) throw();
# 149 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double log(double) throw();
# 151 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float logf(float) throw();
# 154 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double log1p(double) throw();
# 156 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float log1pf(float) throw();
# 159 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double floor(double) throw() __attribute__((__const__));
# 161 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float floorf(float) throw() __attribute__((__const__));
# 164 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double exp(double) throw();
# 166 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float expf(float) throw();
# 169 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double cosh(double) throw();
# 171 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float coshf(float) throw();
# 174 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double sinh(double) throw();
# 176 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float sinhf(float) throw();
# 179 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double tanh(double) throw();
# 181 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float tanhf(float) throw();
# 184 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double acosh(double) throw();
# 186 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float acoshf(float) throw();
# 189 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double asinh(double) throw();
# 191 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float asinhf(float) throw();
# 194 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double atanh(double) throw();
# 196 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float atanhf(float) throw();
# 199 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double ldexp(double, int) throw();
# 201 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float ldexpf(float, int) throw();
# 204 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double logb(double) throw();
# 206 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float logbf(float) throw();
# 209 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int ilogb(double) throw();
# 211 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int ilogbf(float) throw();
# 214 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double scalbn(double, int) throw();
# 216 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float scalbnf(float, int) throw();
# 219 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double scalbln(double, long) throw();
# 221 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float scalblnf(float, long) throw();
# 224 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double frexp(double, int *) throw();
# 226 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float frexpf(float, int *) throw();
# 229 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double round(double) throw() __attribute__((__const__));
# 231 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float roundf(float) throw() __attribute__((__const__));
# 234 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long lround(double) throw();
# 236 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long lroundf(float) throw();
# 239 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llround(double) throw();
# 241 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llroundf(float) throw();
# 244 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double rint(double) throw();
# 246 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float rintf(float) throw();
# 249 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long lrint(double) throw();
# 251 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long lrintf(float) throw();
# 254 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llrint(double) throw();
# 256 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llrintf(float) throw();
# 259 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double nearbyint(double) throw();
# 261 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float nearbyintf(float) throw();
# 264 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double ceil(double) throw() __attribute__((__const__));
# 266 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float ceilf(float) throw() __attribute__((__const__));
# 269 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double trunc(double) throw() __attribute__((__const__));
# 271 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float truncf(float) throw() __attribute__((__const__));
# 274 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fdim(double, double) throw();
# 276 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fdimf(float, float) throw();
# 279 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double atan2(double, double) throw();
# 281 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float atan2f(float, float) throw();
# 284 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double atan(double) throw();
# 286 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float atanf(float) throw();
# 289 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double asin(double) throw();
# 291 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float asinf(float) throw();
# 294 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double acos(double) throw();
# 296 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float acosf(float) throw();
# 299 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double hypot(double, double) throw();
# 301 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float hypotf(float, float) throw();
# 304 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double cbrt(double) throw();
# 306 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float cbrtf(float) throw();
# 309 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double pow(double, double) throw();
# 311 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float powf(float, float) throw();
# 314 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double modf(double, double *) throw();
# 316 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float modff(float, float *) throw();
# 319 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fmod(double, double) throw();
# 321 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fmodf(float, float) throw();
# 324 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double remainder(double, double) throw();
# 326 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float remainderf(float, float) throw();
# 329 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double remquo(double, double, int *) throw();
# 331 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float remquof(float, float, int *) throw();
# 334 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double erf(double) throw();
# 336 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float erff(float) throw();
# 339 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double erfc(double) throw();
# 341 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float erfcf(float) throw();
# 344 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double lgamma(double) throw();
# 346 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float lgammaf(float) throw();
# 349 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double tgamma(double) throw();
# 351 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float tgammaf(float) throw();
# 354 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double copysign(double, double) throw() __attribute__((__const__));
# 356 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float copysignf(float, float) throw() __attribute__((__const__));
# 359 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double nextafter(double, double) throw() __attribute__((__const__));
# 361 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float nextafterf(float, float) throw() __attribute__((__const__));
# 364 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double nan(const char *) throw() __attribute__((__const__));
# 366 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float nanf(const char *) throw() __attribute__((__const__));
# 369 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isinf(double) throw() __attribute__((__const__));
# 371 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isinff(float) throw() __attribute__((__const__));
# 374 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isnan(double) throw() __attribute__((__const__));
# 376 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isnanf(float) throw() __attribute__((__const__));
# 390 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finite(double) throw() __attribute__((__const__));
# 392 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finitef(float) throw() __attribute__((__const__));
# 394 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __signbit(double) throw() __attribute__((__const__));
# 399 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __signbitf(float) throw() __attribute__((__const__));
# 402 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fma(double, double, double) throw();
# 404 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fmaf(float, float, float) throw();
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double acos(double) throw(); extern "C" double __acos(double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double asin(double) throw(); extern "C" double __asin(double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double atan(double) throw(); extern "C" double __atan(double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double cos(double) throw(); extern "C" double __cos(double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double sin(double) throw(); extern "C" double __sin(double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double tan(double) throw(); extern "C" double __tan(double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double cosh(double) throw(); extern "C" double __cosh(double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double sinh(double) throw(); extern "C" double __sinh(double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double tanh(double) throw(); extern "C" double __tanh(double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double acosh(double) throw(); extern "C" double __acosh(double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double asinh(double) throw(); extern "C" double __asinh(double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp(double) throw(); extern "C" double __exp(double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double log(double) throw(); extern "C" double __log(double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double log10(double) throw(); extern "C" double __log10(double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp10(double) throw(); extern "C" double __exp10(double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double expm1(double) throw(); extern "C" double __expm1(double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double log1p(double) throw(); extern "C" double __log1p(double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp2(double) throw(); extern "C" double __exp2(double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isinf(double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finite(double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnan(double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnan(double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double rint(double) throw(); extern "C" double __rint(double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lround(double) throw(); extern "C" long __lround(double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long long llround(double) throw(); extern "C" long long __llround(double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassify(double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __signbit(double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float acosf(float) throw(); extern "C" float __acosf(float) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float asinf(float) throw(); extern "C" float __asinf(float) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float atanf(float) throw(); extern "C" float __atanf(float) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float cosf(float) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float sinf(float) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float tanf(float) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float coshf(float) throw(); extern "C" float __coshf(float) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float expf(float) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float logf(float) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float log10f(float) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float exp10f(float) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float powf(float, float) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isinff(float) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitef(float) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnanf(float) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanf(float) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float rintf(float) throw(); extern "C" float __rintf(float) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __signbitf(float) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isinfl(long double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitel(long double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnanl(long double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanl(long double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __signbitl(long double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 157 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 199 "/usr/include/math.h" 3
enum __cuda_FP_NAN {
# 200 "/usr/include/math.h" 3
FP_NAN,
# 202 "/usr/include/math.h" 3
FP_INFINITE,
# 204 "/usr/include/math.h" 3
FP_ZERO,
# 206 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 208 "/usr/include/math.h" 3
FP_NORMAL
# 210 "/usr/include/math.h" 3
};
# 291 "/usr/include/math.h" 3
extern "C" { typedef
# 285 "/usr/include/math.h" 3
enum {
# 286 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 287 "/usr/include/math.h" 3
_SVID_,
# 288 "/usr/include/math.h" 3
_XOPEN_,
# 289 "/usr/include/math.h" 3
_POSIX_,
# 290 "/usr/include/math.h" 3
_ISOC_
# 291 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 296 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 307 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 312 "/usr/include/math.h" 3
int type;
# 313 "/usr/include/math.h" 3
char *name;
# 314 "/usr/include/math.h" 3
double arg1;
# 315 "/usr/include/math.h" 3
double arg2;
# 316 "/usr/include/math.h" 3
double retval;
# 317 "/usr/include/math.h" 3
}; }
# 320 "/usr/include/math.h" 3
extern "C" int matherr(__exception *) throw();
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {
# 69 "/usr/include/bits/waitstatus.h" 3
int w_status;
# 71 "/usr/include/bits/waitstatus.h" 3
struct {
# 73 "/usr/include/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 74 "/usr/include/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 75 "/usr/include/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 76 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;
# 86 "/usr/include/bits/waitstatus.h" 3
struct {
# 88 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 89 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 90 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
# 98 "/usr/include/bits/waitstatus.h" 3
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct div_t {
# 100 "/usr/include/stdlib.h" 3
int quot;
# 101 "/usr/include/stdlib.h" 3
int rem;
# 102 "/usr/include/stdlib.h" 3
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct ldiv_t {
# 108 "/usr/include/stdlib.h" 3
long quot;
# 109 "/usr/include/stdlib.h" 3
long rem;
# 110 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct lldiv_t {
# 120 "/usr/include/stdlib.h" 3
long long quot;
# 121 "/usr/include/stdlib.h" 3
long long rem;
# 122 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 145 "/usr/include/stdlib.h" 3
extern "C" double atof(const char *) throw() __attribute__((__pure__));
# 148 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char *) throw() __attribute__((__pure__));
# 151 "/usr/include/stdlib.h" 3
extern "C" long atol(const char *) throw() __attribute__((__pure__));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char *) throw() __attribute__((__pure__));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw();
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw();
# 176 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw();
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw();
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw();
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw();
# 201 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw();
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw();
# 215 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw();
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 244 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 261 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw();
# 265 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw();
# 269 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw();
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char *) throw() __attribute__((__pure__));
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 36 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 37 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 38 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 39 "/usr/include/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 40 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 41 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 46 "/usr/include/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 50 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 57 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 62 "/usr/include/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 67 "/usr/include/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 72 "/usr/include/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 77 "/usr/include/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 82 "/usr/include/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 88 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 95 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110 "/usr/include/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 117 "/usr/include/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141 "/usr/include/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 153 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
# 196 "/usr/include/sys/types.h" 3
extern "C" { typedef short int16_t; }
# 197 "/usr/include/sys/types.h" 3
extern "C" { typedef int int32_t; }
# 198 "/usr/include/sys/types.h" 3
extern "C" { typedef long int64_t; }
# 201 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t; }
# 202 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t; }
# 203 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t; }
# 204 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t; }
# 206 "/usr/include/sys/types.h" 3
extern "C" { typedef int register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct __sigset_t {
# 31 "/usr/include/bits/sigset.h" 3
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
# 32 "/usr/include/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 69 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {
# 71 "/usr/include/bits/time.h" 3
__time_t tv_sec;
# 72 "/usr/include/bits/time.h" 3
__suseconds_t tv_usec;
# 73 "/usr/include/bits/time.h" 3
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct fd_set {
# 72 "/usr/include/sys/select.h" 3
__fd_mask fds_bits[((1024) / ((8) * sizeof(__fd_mask)))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long) throw();
# 34 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long) throw();
# 37 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned, unsigned) throw();
# 228 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 235 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 239 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 243 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 262 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 263 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 264 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union pthread_attr_t {
# 55 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 56 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 57 "/usr/include/bits/pthreadtypes.h" 3
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 63 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 64 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 65 "/usr/include/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union pthread_mutex_t {
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 80 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/bits/pthreadtypes.h" 3
int __owner;
# 84 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nusers;
# 88 "/usr/include/bits/pthreadtypes.h" 3
int __kind;
# 90 "/usr/include/bits/pthreadtypes.h" 3
int __spins;
# 91 "/usr/include/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 102 "/usr/include/bits/pthreadtypes.h" 3
char __size[40];
# 103 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 104 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union pthread_mutexattr_t {
# 108 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union pthread_cond_t {
# 118 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/bits/pthreadtypes.h" 3
unsigned long long __total_seq;
# 122 "/usr/include/bits/pthreadtypes.h" 3
unsigned long long __wakeup_seq;
# 123 "/usr/include/bits/pthreadtypes.h" 3
unsigned long long __woken_seq;
# 124 "/usr/include/bits/pthreadtypes.h" 3
void *__mutex;
# 125 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 126 "/usr/include/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 127 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 128 "/usr/include/bits/pthreadtypes.h" 3
char __size[48];
# 129 "/usr/include/bits/pthreadtypes.h" 3
long long __align;
# 130 "/usr/include/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union pthread_condattr_t {
# 134 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 135 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 136 "/usr/include/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 140 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 144 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union pthread_rwlock_t {
# 154 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 155 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 156 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 157 "/usr/include/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 158 "/usr/include/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 159 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 160 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 161 "/usr/include/bits/pthreadtypes.h" 3
int __writer;
# 162 "/usr/include/bits/pthreadtypes.h" 3
int __shared;
# 163 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad1;
# 164 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 167 "/usr/include/bits/pthreadtypes.h" 3
unsigned __flags;
# 168 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 188 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 189 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union pthread_rwlockattr_t {
# 193 "/usr/include/bits/pthreadtypes.h" 3
char __size[8];
# 194 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 195 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union pthread_barrier_t {
# 208 "/usr/include/bits/pthreadtypes.h" 3
char __size[32];
# 209 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union pthread_barrierattr_t {
# 214 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw();
# 341 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char *) throw();
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 351 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 352 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 353 "/usr/include/stdlib.h" 3
int32_t *state;
# 354 "/usr/include/stdlib.h" 3
int rand_type;
# 355 "/usr/include/stdlib.h" 3
int rand_deg;
# 356 "/usr/include/stdlib.h" 3
int rand_sep;
# 357 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 358 "/usr/include/stdlib.h" 3
}; }
# 360 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw();
# 363 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned, random_data *) throw();
# 366 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw();
# 371 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw();
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 382 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned) throw();
# 387 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 396 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw();
# 399 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 400 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw();
# 404 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 405 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw();
# 409 "/usr/include/stdlib.h" 3
extern "C" void srand48(long) throw();
# 410 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw();
# 412 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw();
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 420 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 421 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 422 "/usr/include/stdlib.h" 3
unsigned short __c;
# 423 "/usr/include/stdlib.h" 3
unsigned short __init;
# 424 "/usr/include/stdlib.h" 3
unsigned long long __a;
# 425 "/usr/include/stdlib.h" 3
}; }
# 428 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw();
# 430 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw();
# 435 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw();
# 438 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw();
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw();
# 447 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw();
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw();
# 456 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data *) throw();
# 459 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw();
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));
# 473 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw();
# 488 "/usr/include/stdlib.h" 3
extern "C" void free(void *) throw();
# 493 "/usr/include/stdlib.h" 3
extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 502 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));
# 507 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void **, size_t, size_t) throw();
# 513 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));
# 517 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (*)(void)) throw();
# 523 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw();
# 531 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 538 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 545 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw();
# 550 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char *) throw();
# 557 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw();
# 563 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw();
# 567 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char *) throw();
# 574 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 583 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw();
# 594 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *);
# 604 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *);
# 614 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw();
# 625 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int);
# 635 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int);
# 645 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 652 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw();
# 662 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw();
# 670 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 673 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 677 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 683 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t);
# 689 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t);
# 692 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *);
# 699 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) int abs(int) throw() __attribute__((__const__));
# 700 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) long labs(long) throw() __attribute__((__const__));
# 704 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) long long llabs(long long) throw() __attribute__((__const__));
# 713 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));
# 715 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 721 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 735 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw();
# 741 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw();
# 747 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw();
# 753 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw();
# 756 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw();
# 759 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double, int, char *) throw();
# 765 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();
# 768 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();
# 772 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();
# 776 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();
# 787 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();
# 790 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 794 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char *, wchar_t) throw();
# 798 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 801 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw();
# 812 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw();
# 823 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw();
# 832 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw();
# 840 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 848 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();
# 852 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int) throw();
# 857 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int) throw();
# 864 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int, char *, size_t) throw();
# 868 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 875 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw();
# 74 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 76 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Iterator, class _Container> class __normal_iterator;
# 79 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
}
# 81 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
namespace std __attribute__((visibility("default"))) {
# 83 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __true_type { };
# 84 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __false_type { };
# 86 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<bool >
# 87 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __truth_type {
# 88 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 91 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 92 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 96 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Sp, class _Tp>
# 97 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __traitor {
# 99 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 100 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef typename __truth_type< (((bool)_Sp::__value) || ((bool)_Tp::__value))> ::__type __type;
# 101 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 105 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Sp, class _Tp>
# 106 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __traitand {
# 108 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = (((bool)_Sp::__value) && ((bool)_Tp::__value))};
# 109 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef typename __truth_type< (((bool)_Sp::__value) && ((bool)_Tp::__value))> ::__type __type;
# 110 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 113 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class , class >
# 114 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __are_same {
# 116 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 117 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 118 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 120 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 121 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 123 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 124 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 125 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 128 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 129 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_void {
# 131 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 132 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 133 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 136 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 138 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 139 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 140 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 145 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 146 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_integer {
# 148 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 149 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 150 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 158 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 159 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 165 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 166 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 170 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 172 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 173 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 174 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 177 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 179 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 180 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 181 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 185 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 187 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 188 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 189 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 193 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 195 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 196 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 197 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 200 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 202 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 203 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 204 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 207 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 209 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 210 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 211 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 214 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 216 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 217 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 218 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 221 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 223 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 224 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 225 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 228 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 230 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 231 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 232 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 235 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 237 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 238 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 239 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 242 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 244 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 245 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 246 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 251 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 252 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_floating {
# 254 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 255 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 256 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 260 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 262 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 263 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 264 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 267 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 269 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 270 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 271 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 274 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 276 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 277 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 278 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 283 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 284 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 286 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 287 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 288 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 290 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 291 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 293 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 294 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 295 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 300 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 301 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 303 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 304 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 305 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 307 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Iterator, class _Container>
# 308 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 311 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 312 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 313 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 318 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 319 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 321 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 326 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 327 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 329 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 334 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 335 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 337 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 342 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 343 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_char {
# 345 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 346 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 347 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 350 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 352 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 353 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 354 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 358 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 360 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 361 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 362 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 365 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 366 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_byte {
# 368 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 369 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 370 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 373 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 375 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 376 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 377 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 380 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 382 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 383 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 384 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 387 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 389 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 390 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 391 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 396 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 397 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 399 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 400 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 401 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 415 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
}
# 43 "/usr/include/c++/4.3/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 46 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<bool , class >
# 47 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __enable_if {
# 48 "/usr/include/c++/4.3/ext/type_traits.h" 3
};
# 50 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp>
# 51 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 52 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef _Tp __type; };
# 56 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<bool _Cond, class _Iftrue, class _Iffalse>
# 57 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __conditional_type {
# 58 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 60 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Iftrue, class _Iffalse>
# 61 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 62 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 66 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp>
# 67 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __add_unsigned {
# 70 "/usr/include/c++/4.3/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 73 "/usr/include/c++/4.3/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 74 "/usr/include/c++/4.3/ext/type_traits.h" 3
};
# 77 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 78 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef unsigned char __type; };
# 81 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 82 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef unsigned char __type; };
# 85 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 86 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef unsigned short __type; };
# 89 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 90 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef unsigned __type; };
# 93 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 94 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef unsigned long __type; };
# 97 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 98 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 102 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 105 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 109 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp>
# 110 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __remove_unsigned {
# 113 "/usr/include/c++/4.3/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 116 "/usr/include/c++/4.3/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 117 "/usr/include/c++/4.3/ext/type_traits.h" 3
};
# 120 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 121 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef signed char __type; };
# 124 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 125 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef signed char __type; };
# 128 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 129 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef short __type; };
# 132 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 133 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef int __type; };
# 136 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 137 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef long __type; };
# 140 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 141 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef long long __type; };
# 145 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 148 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 152 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Type> inline bool
# 154 "/usr/include/c++/4.3/ext/type_traits.h" 3
__is_null_pointer(_Type *__ptr)
# 155 "/usr/include/c++/4.3/ext/type_traits.h" 3
{ return __ptr == 0; }
# 157 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Type> inline bool
# 159 "/usr/include/c++/4.3/ext/type_traits.h" 3
__is_null_pointer(_Type)
# 160 "/usr/include/c++/4.3/ext/type_traits.h" 3
{ return false; }
# 164 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp, bool = std::__is_integer< _Tp> ::__value>
# 165 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __promote {
# 166 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef double __type; };
# 168 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp>
# 169 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 170 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef _Tp __type; };
# 172 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp, class _Up>
# 173 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __promote_2 {
# 176 "/usr/include/c++/4.3/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 177 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 180 "/usr/include/c++/4.3/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2())) __type;
# 181 "/usr/include/c++/4.3/ext/type_traits.h" 3
};
# 183 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp, class _Up, class _Vp>
# 184 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __promote_3 {
# 187 "/usr/include/c++/4.3/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 188 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 189 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 192 "/usr/include/c++/4.3/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3())) __type;
# 193 "/usr/include/c++/4.3/ext/type_traits.h" 3
};
# 195 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp, class _Up, class _Vp, class _Wp>
# 196 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __promote_4 {
# 199 "/usr/include/c++/4.3/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 200 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 201 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 202 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 205 "/usr/include/c++/4.3/ext/type_traits.h" 3
public: typedef __typeof__((((__type1() + __type2()) + __type3()) + __type4())) __type;
# 206 "/usr/include/c++/4.3/ext/type_traits.h" 3
};
# 208 "/usr/include/c++/4.3/ext/type_traits.h" 3
}
# 82 "/usr/include/c++/4.3/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 86 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> extern inline _Tp __cmath_power(_Tp, unsigned);
# 89 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline _Tp
# 91 "/usr/include/c++/4.3/cmath" 3
__pow_helper(_Tp __x, int __n)
# 92 "/usr/include/c++/4.3/cmath" 3
{
# 93 "/usr/include/c++/4.3/cmath" 3
return (__n < 0) ? (((_Tp)(1)) / __cmath_power(__x, -__n)) : (__cmath_power(__x, __n));
# 96 "/usr/include/c++/4.3/cmath" 3
}
# 99 "/usr/include/c++/4.3/cmath" 3
inline double abs(double __x)
# 100 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fabs(__x); }
# 103 "/usr/include/c++/4.3/cmath" 3
inline float abs(float __x)
# 104 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fabsf(__x); }
# 107 "/usr/include/c++/4.3/cmath" 3
inline long double abs(long double __x)
# 108 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fabsl(__x); }
# 110 "/usr/include/c++/4.3/cmath" 3
using ::acos;
# 113 "/usr/include/c++/4.3/cmath" 3
inline float acos(float __x)
# 114 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_acosf(__x); }
# 117 "/usr/include/c++/4.3/cmath" 3
inline long double acos(long double __x)
# 118 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_acosl(__x); }
# 120 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 123 "/usr/include/c++/4.3/cmath" 3
acos(_Tp __x)
# 124 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_acos(__x); }
# 126 "/usr/include/c++/4.3/cmath" 3
using ::asin;
# 129 "/usr/include/c++/4.3/cmath" 3
inline float asin(float __x)
# 130 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_asinf(__x); }
# 133 "/usr/include/c++/4.3/cmath" 3
inline long double asin(long double __x)
# 134 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_asinl(__x); }
# 136 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 139 "/usr/include/c++/4.3/cmath" 3
asin(_Tp __x)
# 140 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_asin(__x); }
# 142 "/usr/include/c++/4.3/cmath" 3
using ::atan;
# 145 "/usr/include/c++/4.3/cmath" 3
inline float atan(float __x)
# 146 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_atanf(__x); }
# 149 "/usr/include/c++/4.3/cmath" 3
inline long double atan(long double __x)
# 150 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_atanl(__x); }
# 152 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 155 "/usr/include/c++/4.3/cmath" 3
atan(_Tp __x)
# 156 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_atan(__x); }
# 158 "/usr/include/c++/4.3/cmath" 3
using ::atan2;
# 161 "/usr/include/c++/4.3/cmath" 3
inline float atan2(float __y, float __x)
# 162 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 165 "/usr/include/c++/4.3/cmath" 3
inline long double atan2(long double __y, long double __x)
# 166 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 168 "/usr/include/c++/4.3/cmath" 3
template<class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< typename __gnu_cxx::__enable_if< (__traitand< __is_arithmetic< _Tp> , __is_arithmetic< _Up> > ::__value), _Tp> ::__type, _Up> ::__type
# 174 "/usr/include/c++/4.3/cmath" 3
atan2(_Tp __y, _Up __x)
# 175 "/usr/include/c++/4.3/cmath" 3
{
# 176 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type;
# 177 "/usr/include/c++/4.3/cmath" 3
return atan2(((__type)(__y)), ((__type)(__x)));
# 178 "/usr/include/c++/4.3/cmath" 3
}
# 180 "/usr/include/c++/4.3/cmath" 3
using ::ceil;
# 183 "/usr/include/c++/4.3/cmath" 3
inline float ceil(float __x)
# 184 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_ceilf(__x); }
# 187 "/usr/include/c++/4.3/cmath" 3
inline long double ceil(long double __x)
# 188 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_ceill(__x); }
# 190 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 193 "/usr/include/c++/4.3/cmath" 3
ceil(_Tp __x)
# 194 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_ceil(__x); }
# 196 "/usr/include/c++/4.3/cmath" 3
using ::cos;
# 199 "/usr/include/c++/4.3/cmath" 3
inline float cos(float __x)
# 200 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_cosf(__x); }
# 203 "/usr/include/c++/4.3/cmath" 3
inline long double cos(long double __x)
# 204 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_cosl(__x); }
# 206 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 209 "/usr/include/c++/4.3/cmath" 3
cos(_Tp __x)
# 210 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_cos(__x); }
# 212 "/usr/include/c++/4.3/cmath" 3
using ::cosh;
# 215 "/usr/include/c++/4.3/cmath" 3
inline float cosh(float __x)
# 216 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_coshf(__x); }
# 219 "/usr/include/c++/4.3/cmath" 3
inline long double cosh(long double __x)
# 220 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_coshl(__x); }
# 222 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 225 "/usr/include/c++/4.3/cmath" 3
cosh(_Tp __x)
# 226 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_cosh(__x); }
# 228 "/usr/include/c++/4.3/cmath" 3
using ::exp;
# 231 "/usr/include/c++/4.3/cmath" 3
inline float exp(float __x)
# 232 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_expf(__x); }
# 235 "/usr/include/c++/4.3/cmath" 3
inline long double exp(long double __x)
# 236 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_expl(__x); }
# 238 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 241 "/usr/include/c++/4.3/cmath" 3
exp(_Tp __x)
# 242 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_exp(__x); }
# 244 "/usr/include/c++/4.3/cmath" 3
using ::fabs;
# 247 "/usr/include/c++/4.3/cmath" 3
inline float fabs(float __x)
# 248 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fabsf(__x); }
# 251 "/usr/include/c++/4.3/cmath" 3
inline long double fabs(long double __x)
# 252 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fabsl(__x); }
# 254 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 257 "/usr/include/c++/4.3/cmath" 3
fabs(_Tp __x)
# 258 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fabs(__x); }
# 260 "/usr/include/c++/4.3/cmath" 3
using ::floor;
# 263 "/usr/include/c++/4.3/cmath" 3
inline float floor(float __x)
# 264 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_floorf(__x); }
# 267 "/usr/include/c++/4.3/cmath" 3
inline long double floor(long double __x)
# 268 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_floorl(__x); }
# 270 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 273 "/usr/include/c++/4.3/cmath" 3
floor(_Tp __x)
# 274 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_floor(__x); }
# 276 "/usr/include/c++/4.3/cmath" 3
using ::fmod;
# 279 "/usr/include/c++/4.3/cmath" 3
inline float fmod(float __x, float __y)
# 280 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 283 "/usr/include/c++/4.3/cmath" 3
inline long double fmod(long double __x, long double __y)
# 284 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 286 "/usr/include/c++/4.3/cmath" 3
using ::frexp;
# 289 "/usr/include/c++/4.3/cmath" 3
inline float frexp(float __x, int *__exp)
# 290 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 293 "/usr/include/c++/4.3/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 294 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 296 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 299 "/usr/include/c++/4.3/cmath" 3
frexp(_Tp __x, int *__exp)
# 300 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_frexp(__x, __exp); }
# 302 "/usr/include/c++/4.3/cmath" 3
using ::ldexp;
# 305 "/usr/include/c++/4.3/cmath" 3
inline float ldexp(float __x, int __exp)
# 306 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 309 "/usr/include/c++/4.3/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 310 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 312 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 315 "/usr/include/c++/4.3/cmath" 3
ldexp(_Tp __x, int __exp)
# 316 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_ldexp(__x, __exp); }
# 318 "/usr/include/c++/4.3/cmath" 3
using ::log;
# 321 "/usr/include/c++/4.3/cmath" 3
inline float log(float __x)
# 322 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_logf(__x); }
# 325 "/usr/include/c++/4.3/cmath" 3
inline long double log(long double __x)
# 326 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_logl(__x); }
# 328 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 331 "/usr/include/c++/4.3/cmath" 3
log(_Tp __x)
# 332 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_log(__x); }
# 334 "/usr/include/c++/4.3/cmath" 3
using ::log10;
# 337 "/usr/include/c++/4.3/cmath" 3
inline float log10(float __x)
# 338 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_log10f(__x); }
# 341 "/usr/include/c++/4.3/cmath" 3
inline long double log10(long double __x)
# 342 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_log10l(__x); }
# 344 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 347 "/usr/include/c++/4.3/cmath" 3
log10(_Tp __x)
# 348 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_log10(__x); }
# 350 "/usr/include/c++/4.3/cmath" 3
using ::modf;
# 353 "/usr/include/c++/4.3/cmath" 3
inline float modf(float __x, float *__iptr)
# 354 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 357 "/usr/include/c++/4.3/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 358 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 360 "/usr/include/c++/4.3/cmath" 3
using ::pow;
# 363 "/usr/include/c++/4.3/cmath" 3
inline float pow(float __x, float __y)
# 364 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_powf(__x, __y); }
# 367 "/usr/include/c++/4.3/cmath" 3
inline long double pow(long double __x, long double __y)
# 368 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_powl(__x, __y); }
# 372 "/usr/include/c++/4.3/cmath" 3
inline double pow(double __x, int __i)
# 373 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_powi(__x, __i); }
# 376 "/usr/include/c++/4.3/cmath" 3
inline float pow(float __x, int __n)
# 377 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_powif(__x, __n); }
# 380 "/usr/include/c++/4.3/cmath" 3
inline long double pow(long double __x, int __n)
# 381 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_powil(__x, __n); }
# 383 "/usr/include/c++/4.3/cmath" 3
template<class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< typename __gnu_cxx::__enable_if< (__traitand< __is_arithmetic< _Tp> , __is_arithmetic< _Up> > ::__value), _Tp> ::__type, _Up> ::__type
# 389 "/usr/include/c++/4.3/cmath" 3
pow(_Tp __x, _Up __y)
# 390 "/usr/include/c++/4.3/cmath" 3
{
# 391 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type;
# 392 "/usr/include/c++/4.3/cmath" 3
return pow(((__type)(__x)), ((__type)(__y)));
# 393 "/usr/include/c++/4.3/cmath" 3
}
# 395 "/usr/include/c++/4.3/cmath" 3
using ::sin;
# 398 "/usr/include/c++/4.3/cmath" 3
inline float sin(float __x)
# 399 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sinf(__x); }
# 402 "/usr/include/c++/4.3/cmath" 3
inline long double sin(long double __x)
# 403 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sinl(__x); }
# 405 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 408 "/usr/include/c++/4.3/cmath" 3
sin(_Tp __x)
# 409 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sin(__x); }
# 411 "/usr/include/c++/4.3/cmath" 3
using ::sinh;
# 414 "/usr/include/c++/4.3/cmath" 3
inline float sinh(float __x)
# 415 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sinhf(__x); }
# 418 "/usr/include/c++/4.3/cmath" 3
inline long double sinh(long double __x)
# 419 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sinhl(__x); }
# 421 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 424 "/usr/include/c++/4.3/cmath" 3
sinh(_Tp __x)
# 425 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sinh(__x); }
# 427 "/usr/include/c++/4.3/cmath" 3
using ::sqrt;
# 430 "/usr/include/c++/4.3/cmath" 3
inline float sqrt(float __x)
# 431 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sqrtf(__x); }
# 434 "/usr/include/c++/4.3/cmath" 3
inline long double sqrt(long double __x)
# 435 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sqrtl(__x); }
# 437 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 440 "/usr/include/c++/4.3/cmath" 3
sqrt(_Tp __x)
# 441 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sqrt(__x); }
# 443 "/usr/include/c++/4.3/cmath" 3
using ::tan;
# 446 "/usr/include/c++/4.3/cmath" 3
inline float tan(float __x)
# 447 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_tanf(__x); }
# 450 "/usr/include/c++/4.3/cmath" 3
inline long double tan(long double __x)
# 451 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_tanl(__x); }
# 453 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 456 "/usr/include/c++/4.3/cmath" 3
tan(_Tp __x)
# 457 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_tan(__x); }
# 459 "/usr/include/c++/4.3/cmath" 3
using ::tanh;
# 462 "/usr/include/c++/4.3/cmath" 3
inline float tanh(float __x)
# 463 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_tanhf(__x); }
# 466 "/usr/include/c++/4.3/cmath" 3
inline long double tanh(long double __x)
# 467 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_tanhl(__x); }
# 469 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 472 "/usr/include/c++/4.3/cmath" 3
tanh(_Tp __x)
# 473 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_tanh(__x); }
# 475 "/usr/include/c++/4.3/cmath" 3
}
# 483 "/usr/include/c++/4.3/cmath" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 485 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline int
# 487 "/usr/include/c++/4.3/cmath" 3
__capture_fpclassify(_Tp __f) { return (sizeof(__f) == sizeof(float)) ? (__fpclassifyf(__f)) : ((sizeof(__f) == sizeof(double)) ? (__fpclassify(__f)) : (__fpclassifyl(__f))); }
# 489 "/usr/include/c++/4.3/cmath" 3
}
# 505 "/usr/include/c++/4.3/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 507 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 510 "/usr/include/c++/4.3/cmath" 3
fpclassify(_Tp __f)
# 511 "/usr/include/c++/4.3/cmath" 3
{
# 512 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 513 "/usr/include/c++/4.3/cmath" 3
return __gnu_cxx::__capture_fpclassify(((__type)(__f)));
# 514 "/usr/include/c++/4.3/cmath" 3
}
# 516 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 519 "/usr/include/c++/4.3/cmath" 3
isfinite(_Tp __f)
# 520 "/usr/include/c++/4.3/cmath" 3
{
# 521 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 522 "/usr/include/c++/4.3/cmath" 3
return __builtin_isfinite(((__type)(__f)));
# 523 "/usr/include/c++/4.3/cmath" 3
}
# 525 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 528 "/usr/include/c++/4.3/cmath" 3
isinf(_Tp __f)
# 529 "/usr/include/c++/4.3/cmath" 3
{
# 530 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 531 "/usr/include/c++/4.3/cmath" 3
return __builtin_isinf(((__type)(__f)));
# 532 "/usr/include/c++/4.3/cmath" 3
}
# 534 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 537 "/usr/include/c++/4.3/cmath" 3
isnan(_Tp __f)
# 538 "/usr/include/c++/4.3/cmath" 3
{
# 539 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 540 "/usr/include/c++/4.3/cmath" 3
return __builtin_isnan(((__type)(__f)));
# 541 "/usr/include/c++/4.3/cmath" 3
}
# 543 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 546 "/usr/include/c++/4.3/cmath" 3
isnormal(_Tp __f)
# 547 "/usr/include/c++/4.3/cmath" 3
{
# 548 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 549 "/usr/include/c++/4.3/cmath" 3
return __builtin_isnormal(((__type)(__f)));
# 550 "/usr/include/c++/4.3/cmath" 3
}
# 552 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 555 "/usr/include/c++/4.3/cmath" 3
signbit(_Tp __f)
# 556 "/usr/include/c++/4.3/cmath" 3
{
# 557 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 558 "/usr/include/c++/4.3/cmath" 3
return __builtin_signbit(((__type)(__f)));
# 559 "/usr/include/c++/4.3/cmath" 3
}
# 561 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 564 "/usr/include/c++/4.3/cmath" 3
isgreater(_Tp __f1, _Tp __f2)
# 565 "/usr/include/c++/4.3/cmath" 3
{
# 566 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 567 "/usr/include/c++/4.3/cmath" 3
return __builtin_isgreater(((__type)(__f1)), ((__type)(__f2)));
# 568 "/usr/include/c++/4.3/cmath" 3
}
# 570 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 573 "/usr/include/c++/4.3/cmath" 3
isgreaterequal(_Tp __f1, _Tp __f2)
# 574 "/usr/include/c++/4.3/cmath" 3
{
# 575 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 576 "/usr/include/c++/4.3/cmath" 3
return __builtin_isgreaterequal(((__type)(__f1)), ((__type)(__f2)));
# 577 "/usr/include/c++/4.3/cmath" 3
}
# 579 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 582 "/usr/include/c++/4.3/cmath" 3
isless(_Tp __f1, _Tp __f2)
# 583 "/usr/include/c++/4.3/cmath" 3
{
# 584 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 585 "/usr/include/c++/4.3/cmath" 3
return __builtin_isless(((__type)(__f1)), ((__type)(__f2)));
# 586 "/usr/include/c++/4.3/cmath" 3
}
# 588 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 591 "/usr/include/c++/4.3/cmath" 3
islessequal(_Tp __f1, _Tp __f2)
# 592 "/usr/include/c++/4.3/cmath" 3
{
# 593 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 594 "/usr/include/c++/4.3/cmath" 3
return __builtin_islessequal(((__type)(__f1)), ((__type)(__f2)));
# 595 "/usr/include/c++/4.3/cmath" 3
}
# 597 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 600 "/usr/include/c++/4.3/cmath" 3
islessgreater(_Tp __f1, _Tp __f2)
# 601 "/usr/include/c++/4.3/cmath" 3
{
# 602 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 603 "/usr/include/c++/4.3/cmath" 3
return __builtin_islessgreater(((__type)(__f1)), ((__type)(__f2)));
# 604 "/usr/include/c++/4.3/cmath" 3
}
# 606 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 609 "/usr/include/c++/4.3/cmath" 3
isunordered(_Tp __f1, _Tp __f2)
# 610 "/usr/include/c++/4.3/cmath" 3
{
# 611 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 612 "/usr/include/c++/4.3/cmath" 3
return __builtin_isunordered(((__type)(__f1)), ((__type)(__f2)));
# 613 "/usr/include/c++/4.3/cmath" 3
}
# 615 "/usr/include/c++/4.3/cmath" 3
}
# 40 "/usr/include/c++/4.3/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {
# 42 "/usr/include/c++/4.3/bits/cmath.tcc" 3
template<class _Tp> inline _Tp
# 44 "/usr/include/c++/4.3/bits/cmath.tcc" 3
__cmath_power(_Tp __x, unsigned __n)
# 45 "/usr/include/c++/4.3/bits/cmath.tcc" 3
{
# 46 "/usr/include/c++/4.3/bits/cmath.tcc" 3
auto _Tp __y = ((__n % (2)) ? __x : ((_Tp)(1)));
# 48 "/usr/include/c++/4.3/bits/cmath.tcc" 3
while (__n >>= 1)
# 49 "/usr/include/c++/4.3/bits/cmath.tcc" 3
{
# 50 "/usr/include/c++/4.3/bits/cmath.tcc" 3
__x = __x * __x;
# 51 "/usr/include/c++/4.3/bits/cmath.tcc" 3
if (__n % (2)) {
# 52 "/usr/include/c++/4.3/bits/cmath.tcc" 3
__y = __y * __x; }
# 53 "/usr/include/c++/4.3/bits/cmath.tcc" 3
}
# 55 "/usr/include/c++/4.3/bits/cmath.tcc" 3
return __y;
# 56 "/usr/include/c++/4.3/bits/cmath.tcc" 3
}
# 58 "/usr/include/c++/4.3/bits/cmath.tcc" 3
}
# 54 "/usr/include/c++/4.3/cstddef" 3
namespace std __attribute__((visibility("default"))) {
# 56 "/usr/include/c++/4.3/cstddef" 3
using ::ptrdiff_t;
# 57 "/usr/include/c++/4.3/cstddef" 3
using ::size_t;
# 59 "/usr/include/c++/4.3/cstddef" 3
}
# 105 "/usr/include/c++/4.3/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 107 "/usr/include/c++/4.3/cstdlib" 3
using ::div_t;
# 108 "/usr/include/c++/4.3/cstdlib" 3
using ::ldiv_t;
# 110 "/usr/include/c++/4.3/cstdlib" 3
using ::abort;
# 111 "/usr/include/c++/4.3/cstdlib" 3
using ::abs;
# 112 "/usr/include/c++/4.3/cstdlib" 3
using ::atexit;
# 113 "/usr/include/c++/4.3/cstdlib" 3
using ::atof;
# 114 "/usr/include/c++/4.3/cstdlib" 3
using ::atoi;
# 115 "/usr/include/c++/4.3/cstdlib" 3
using ::atol;
# 116 "/usr/include/c++/4.3/cstdlib" 3
using ::bsearch;
# 117 "/usr/include/c++/4.3/cstdlib" 3
using ::calloc;
# 118 "/usr/include/c++/4.3/cstdlib" 3
using ::div;
# 119 "/usr/include/c++/4.3/cstdlib" 3
using ::exit;
# 120 "/usr/include/c++/4.3/cstdlib" 3
using ::free;
# 121 "/usr/include/c++/4.3/cstdlib" 3
using ::getenv;
# 122 "/usr/include/c++/4.3/cstdlib" 3
using ::labs;
# 123 "/usr/include/c++/4.3/cstdlib" 3
using ::ldiv;
# 124 "/usr/include/c++/4.3/cstdlib" 3
using ::malloc;
# 126 "/usr/include/c++/4.3/cstdlib" 3
using ::mblen;
# 127 "/usr/include/c++/4.3/cstdlib" 3
using ::mbstowcs;
# 128 "/usr/include/c++/4.3/cstdlib" 3
using ::mbtowc;
# 130 "/usr/include/c++/4.3/cstdlib" 3
using ::qsort;
# 131 "/usr/include/c++/4.3/cstdlib" 3
using ::rand;
# 132 "/usr/include/c++/4.3/cstdlib" 3
using ::realloc;
# 133 "/usr/include/c++/4.3/cstdlib" 3
using ::srand;
# 134 "/usr/include/c++/4.3/cstdlib" 3
using ::strtod;
# 135 "/usr/include/c++/4.3/cstdlib" 3
using ::strtol;
# 136 "/usr/include/c++/4.3/cstdlib" 3
using ::strtoul;
# 137 "/usr/include/c++/4.3/cstdlib" 3
using ::system;
# 139 "/usr/include/c++/4.3/cstdlib" 3
using ::wcstombs;
# 140 "/usr/include/c++/4.3/cstdlib" 3
using ::wctomb;
# 144 "/usr/include/c++/4.3/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 147 "/usr/include/c++/4.3/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 149 "/usr/include/c++/4.3/cstdlib" 3
}
# 162 "/usr/include/c++/4.3/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 165 "/usr/include/c++/4.3/cstdlib" 3
using ::lldiv_t;
# 171 "/usr/include/c++/4.3/cstdlib" 3
using ::_Exit;
# 175 "/usr/include/c++/4.3/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 178 "/usr/include/c++/4.3/cstdlib" 3
using ::llabs;
# 181 "/usr/include/c++/4.3/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 182 "/usr/include/c++/4.3/cstdlib" 3
{ auto lldiv_t __q; (__q.quot) = __n / __d; (__q.rem) = __n % __d; return __q; }
# 184 "/usr/include/c++/4.3/cstdlib" 3
using ::lldiv;
# 195 "/usr/include/c++/4.3/cstdlib" 3
using ::atoll;
# 196 "/usr/include/c++/4.3/cstdlib" 3
using ::strtoll;
# 197 "/usr/include/c++/4.3/cstdlib" 3
using ::strtoull;
# 199 "/usr/include/c++/4.3/cstdlib" 3
using ::strtof;
# 200 "/usr/include/c++/4.3/cstdlib" 3
using ::strtold;
# 202 "/usr/include/c++/4.3/cstdlib" 3
}
# 204 "/usr/include/c++/4.3/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 207 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 209 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::_Exit;
# 210 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::abs;
# 212 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::llabs;
# 213 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::div;
# 214 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::lldiv;
# 216 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::atoll;
# 217 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::strtof;
# 218 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::strtoll;
# 219 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::strtoull;
# 220 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::strtold;
# 222 "/usr/include/c++/4.3/cstdlib" 3
}
# 424 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __signbitl(long double) throw() __attribute__((__const__));
# 426 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isinfl(long double) throw() __attribute__((__const__));
# 428 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isnanl(long double) throw() __attribute__((__const__));
# 438 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finitel(long double) throw() __attribute__((__const__));
# 463 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
namespace __gnu_cxx {
# 465 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline long long abs(long long) __attribute__((visibility("default")));
# 466 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 468 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
namespace std {
# 470 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
template<class T> extern inline T __pow_helper(T, int);
# 471 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
template<class T> extern inline T __cmath_power(T, unsigned);
# 472 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 474 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::abs;
# 475 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::fabs;
# 476 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::ceil;
# 477 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::floor;
# 478 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::sqrt;
# 479 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::pow;
# 480 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::log;
# 481 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::log10;
# 482 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::fmod;
# 483 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::modf;
# 484 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::exp;
# 485 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::frexp;
# 486 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::ldexp;
# 487 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::asin;
# 488 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::sin;
# 489 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::sinh;
# 490 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::acos;
# 491 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::cos;
# 492 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::cosh;
# 493 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::atan;
# 494 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::atan2;
# 495 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::tan;
# 496 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::tanh;
# 550 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
namespace std {
# 553 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline long abs(long) __attribute__((visibility("default")));
# 554 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float abs(float) __attribute__((visibility("default")));
# 555 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline double abs(double) __attribute__((visibility("default")));
# 556 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float fabs(float) __attribute__((visibility("default")));
# 557 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float ceil(float) __attribute__((visibility("default")));
# 558 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float floor(float) __attribute__((visibility("default")));
# 559 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float sqrt(float) __attribute__((visibility("default")));
# 560 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float pow(float, float) __attribute__((visibility("default")));
# 561 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float pow(float, int) __attribute__((visibility("default")));
# 562 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline double pow(double, int) __attribute__((visibility("default")));
# 563 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float log(float) __attribute__((visibility("default")));
# 564 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float log10(float) __attribute__((visibility("default")));
# 565 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float fmod(float, float) __attribute__((visibility("default")));
# 566 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float modf(float, float *) __attribute__((visibility("default")));
# 567 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float exp(float) __attribute__((visibility("default")));
# 568 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float frexp(float, int *) __attribute__((visibility("default")));
# 569 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float ldexp(float, int) __attribute__((visibility("default")));
# 570 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float asin(float) __attribute__((visibility("default")));
# 571 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float sin(float) __attribute__((visibility("default")));
# 572 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float sinh(float) __attribute__((visibility("default")));
# 573 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float acos(float) __attribute__((visibility("default")));
# 574 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float cos(float) __attribute__((visibility("default")));
# 575 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float cosh(float) __attribute__((visibility("default")));
# 576 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float atan(float) __attribute__((visibility("default")));
# 577 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float atan2(float, float) __attribute__((visibility("default")));
# 578 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float tan(float) __attribute__((visibility("default")));
# 579 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float tanh(float) __attribute__((visibility("default")));
# 582 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 585 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float logb(float a)
# 586 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 587 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return logbf(a);
# 588 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 590 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline int ilogb(float a)
# 591 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 592 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return ilogbf(a);
# 593 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 595 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float scalbn(float a, int b)
# 596 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 597 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return scalbnf(a, b);
# 598 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 600 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float scalbln(float a, long b)
# 601 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 602 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return scalblnf(a, b);
# 603 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 605 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float exp2(float a)
# 606 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 607 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return exp2f(a);
# 608 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 610 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float exp10(float a)
# 611 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 612 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return exp10f(a);
# 613 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 615 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float expm1(float a)
# 616 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 617 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return expm1f(a);
# 618 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 620 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float log2(float a)
# 621 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 622 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return log2f(a);
# 623 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 625 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float log1p(float a)
# 626 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 627 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return log1pf(a);
# 628 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 630 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float rsqrt(float a)
# 631 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 632 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return rsqrtf(a);
# 633 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 635 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float acosh(float a)
# 636 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 637 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return acoshf(a);
# 638 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 640 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float asinh(float a)
# 641 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 642 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return asinhf(a);
# 643 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 645 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float atanh(float a)
# 646 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 647 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return atanhf(a);
# 648 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 650 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float hypot(float a, float b)
# 651 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 652 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return hypotf(a, b);
# 653 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 655 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float cbrt(float a)
# 656 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 657 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return cbrtf(a);
# 658 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 660 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 661 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 662 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
sincosf(a, sptr, cptr);
# 663 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 665 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float erf(float a)
# 666 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 667 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return erff(a);
# 668 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 670 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float erfc(float a)
# 671 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 672 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return erfcf(a);
# 673 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 675 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float lgamma(float a)
# 676 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 677 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return lgammaf(a);
# 678 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 680 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float tgamma(float a)
# 681 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 682 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return tgammaf(a);
# 683 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 685 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float copysign(float a, float b)
# 686 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 687 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return copysignf(a, b);
# 688 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 690 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double copysign(double a, float b)
# 691 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 692 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return copysign(a, (double)b);
# 693 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 695 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float copysign(float a, double b)
# 696 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 697 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return copysignf(a, (float)b);
# 698 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 700 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float nextafter(float a, float b)
# 701 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 702 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return nextafterf(a, b);
# 703 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 705 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float remainder(float a, float b)
# 706 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 707 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return remainderf(a, b);
# 708 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 710 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 711 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 712 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return remquof(a, b, quo);
# 713 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 715 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float round(float a)
# 716 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 717 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return roundf(a);
# 718 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 720 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline long lround(float a)
# 721 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 722 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return lroundf(a);
# 723 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 725 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline long long llround(float a)
# 726 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 727 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return llroundf(a);
# 728 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 730 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float trunc(float a)
# 731 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 732 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return truncf(a);
# 733 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 735 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float rint(float a)
# 736 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 737 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return rintf(a);
# 738 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 740 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline long lrint(float a)
# 741 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 742 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return lrintf(a);
# 743 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 745 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline long long llrint(float a)
# 746 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 747 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return llrintf(a);
# 748 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 750 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float nearbyint(float a)
# 751 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 752 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return nearbyintf(a);
# 753 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 755 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float fdim(float a, float b)
# 756 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 757 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fdimf(a, b);
# 758 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 760 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float fma(float a, float b, float c)
# 761 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 762 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmaf(a, b, c);
# 763 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 765 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 766 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 767 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return umin(a, b);
# 768 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 770 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 771 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 772 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return umin((unsigned)a, b);
# 773 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 775 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 776 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 777 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return umin(a, (unsigned)b);
# 778 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 780 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float min(float a, float b)
# 781 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 782 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fminf(a, b);
# 783 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 785 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double min(double a, double b)
# 786 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 787 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmin(a, b);
# 788 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 790 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double min(float a, double b)
# 791 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 792 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmin((double)a, b);
# 793 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 795 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double min(double a, float b)
# 796 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 797 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmin(a, (double)b);
# 798 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 800 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 801 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 802 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return umax(a, b);
# 803 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 805 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 806 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 807 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return umax((unsigned)a, b);
# 808 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 810 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 811 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 812 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return umax(a, (unsigned)b);
# 813 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 815 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float max(float a, float b)
# 816 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 817 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmaxf(a, b);
# 818 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 820 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double max(double a, double b)
# 821 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 822 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmax(a, b);
# 823 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 825 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double max(float a, double b)
# 826 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 827 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmax((double)a, b);
# 828 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 830 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double max(double a, float b)
# 831 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 832 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmax(a, (double)b);
# 833 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 59 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
template<class T, int dim = 1, cudaTextureReadMode = cudaReadModeElementType>
# 60 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
struct texture : public textureReference {
# 62 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 63 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 64 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 65 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
{
# 66 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
(this->normalized) = norm;
# 67 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
(this->filterMode) = fMode;
# 68 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
((this->addressMode)[0]) = aMode;
# 69 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
((this->addressMode)[1]) = aMode;
# 70 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
((this->addressMode)[2]) = aMode;
# 71 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
(this->channelDesc) = cudaCreateChannelDesc< T> ();
# 72 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
}
# 74 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 75 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 76 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 77 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
desc)
# 78 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
{
# 79 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
(this->normalized) = norm;
# 80 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
(this->filterMode) = fMode;
# 81 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
((this->addressMode)[0]) = aMode;
# 82 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
((this->addressMode)[1]) = aMode;
# 83 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
((this->addressMode)[2]) = aMode;
# 84 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
(this->channelDesc) = desc;
# 85 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
}
# 86 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
};
# 77 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 78 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaSetupArgument(T
# 79 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
arg, size_t
# 80 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset)
# 82 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 83 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 84 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 94 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 95 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, const void *
# 96 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
src, size_t
# 97 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 98 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 99 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 101 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 102 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 103 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 105 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 106 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 107 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, const void *
# 108 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
src, size_t
# 109 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 110 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 111 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 113 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 114 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 115 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 117 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 118 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, const void *
# 119 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
src, size_t
# 120 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 121 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, cudaMemcpyKind
# 122 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind, cudaStream_t
# 123 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
stream)
# 125 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 126 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 127 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 129 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 130 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 131 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, const void *
# 132 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
src, size_t
# 133 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 134 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, cudaMemcpyKind
# 135 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind, cudaStream_t
# 136 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
stream)
# 138 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 139 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 140 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 148 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 149 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
dst, char *
# 150 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, size_t
# 151 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 152 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 153 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 155 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 156 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 157 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 159 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 160 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 161 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
dst, const T &
# 162 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, size_t
# 163 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 164 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 165 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 167 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 168 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 169 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 171 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 172 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
dst, char *
# 173 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, size_t
# 174 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 175 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, cudaMemcpyKind
# 176 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind, cudaStream_t
# 177 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
stream)
# 179 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 180 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 181 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 183 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 184 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 185 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
dst, const T &
# 186 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, size_t
# 187 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 188 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, cudaMemcpyKind
# 189 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind, cudaStream_t
# 190 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
stream)
# 192 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 193 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 194 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 196 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 197 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
devPtr, char *
# 198 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol)
# 200 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 201 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 202 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 204 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 205 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 206 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
devPtr, const T &
# 207 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol)
# 209 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 210 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 211 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 219 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 220 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
size, char *
# 221 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol)
# 223 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 224 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 225 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 227 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 228 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 229 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
size, const T &
# 230 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol)
# 232 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 233 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 234 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 242 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 243 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 244 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 245 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
tex, const void *
# 246 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 247 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
desc, size_t
# 248 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 250 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 251 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, (&desc), size);
# 252 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 254 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 255 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 256 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 257 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
tex, const void *
# 258 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
devPtr, size_t
# 259 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 261 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 262 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 263 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 265 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 266 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 267 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
tex, const cudaArray *
# 268 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 269 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
desc)
# 271 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 272 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, (&desc));
# 273 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 275 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 276 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 277 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
tex, const cudaArray *
# 278 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
array)
# 280 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 281 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
auto cudaChannelFormatDesc desc;
# 282 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
auto cudaError_t err = cudaGetChannelDesc(&desc, array);
# 284 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? (cudaBindTextureToArray(tex, array, desc)) : err;
# 285 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 293 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 294 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 295 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
tex)
# 297 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 298 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 299 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 307 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 308 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 309 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 310 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
tex)
# 312 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 313 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 314 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 322 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 323 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaLaunch(T *
# 324 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol)
# 326 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 327 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaLaunch((const char *)symbol);
# 328 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;
# 49 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 90 "/usr/include/wchar.h" 3
extern "C" { typedef
# 79 "/usr/include/wchar.h" 3
struct __mbstate_t {
# 80 "/usr/include/wchar.h" 3
int __count;
# 82 "/usr/include/wchar.h" 3
union {
# 84 "/usr/include/wchar.h" 3
unsigned __wch;
# 88 "/usr/include/wchar.h" 3
char __wchb[4];
# 89 "/usr/include/wchar.h" 3
} __value;
# 90 "/usr/include/wchar.h" 3
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct _G_fpos_t {
# 24 "/usr/include/_G_config.h" 3
__off_t __pos;
# 25 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 26 "/usr/include/_G_config.h" 3
} _G_fpos_t; }
# 31 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct _G_fpos64_t {
# 29 "/usr/include/_G_config.h" 3
__off64_t __pos;
# 30 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 31 "/usr/include/_G_config.h" 3
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
# 54 "/usr/include/_G_config.h" 3
extern "C" { typedef int _G_int32_t; }
# 55 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned short _G_uint16_t; }
# 56 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned _G_uint32_t; }
# 43 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
# 187 "/usr/include/libio.h" 3
_IO_marker *_next;
# 188 "/usr/include/libio.h" 3
_IO_FILE *_sbuf;
# 192 "/usr/include/libio.h" 3
int _pos;
# 203 "/usr/include/libio.h" 3
}; }
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {
# 208 "/usr/include/libio.h" 3
__codecvt_ok,
# 209 "/usr/include/libio.h" 3
__codecvt_partial,
# 210 "/usr/include/libio.h" 3
__codecvt_error,
# 211 "/usr/include/libio.h" 3
__codecvt_noconv
# 212 "/usr/include/libio.h" 3
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
# 272 "/usr/include/libio.h" 3
int _flags;
# 277 "/usr/include/libio.h" 3
char *_IO_read_ptr;
# 278 "/usr/include/libio.h" 3
char *_IO_read_end;
# 279 "/usr/include/libio.h" 3
char *_IO_read_base;
# 280 "/usr/include/libio.h" 3
char *_IO_write_base;
# 281 "/usr/include/libio.h" 3
char *_IO_write_ptr;
# 282 "/usr/include/libio.h" 3
char *_IO_write_end;
# 283 "/usr/include/libio.h" 3
char *_IO_buf_base;
# 284 "/usr/include/libio.h" 3
char *_IO_buf_end;
# 286 "/usr/include/libio.h" 3
char *_IO_save_base;
# 287 "/usr/include/libio.h" 3
char *_IO_backup_base;
# 288 "/usr/include/libio.h" 3
char *_IO_save_end;
# 290 "/usr/include/libio.h" 3
_IO_marker *_markers;
# 292 "/usr/include/libio.h" 3
_IO_FILE *_chain;
# 294 "/usr/include/libio.h" 3
int _fileno;
# 298 "/usr/include/libio.h" 3
int _flags2;
# 300 "/usr/include/libio.h" 3
__off_t _old_offset;
# 304 "/usr/include/libio.h" 3
unsigned short _cur_column;
# 305 "/usr/include/libio.h" 3
signed char _vtable_offset;
# 306 "/usr/include/libio.h" 3
char _shortbuf[1];
# 310 "/usr/include/libio.h" 3
_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
# 329 "/usr/include/libio.h" 3
void *__pad2;
# 330 "/usr/include/libio.h" 3
void *__pad3;
# 331 "/usr/include/libio.h" 3
void *__pad4;
# 332 "/usr/include/libio.h" 3
size_t __pad5;
# 334 "/usr/include/libio.h" 3
int _mode;
# 336 "/usr/include/libio.h" 3
char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];
# 338 "/usr/include/libio.h" 3
}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;
# 346 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
# 347 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
# 348 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }
# 384 "/usr/include/libio.h" 3
extern "C" { typedef int __io_close_fn(void *); }
# 389 "/usr/include/libio.h" 3
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 390 "/usr/include/libio.h" 3
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 391 "/usr/include/libio.h" 3
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 392 "/usr/include/libio.h" 3
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct _IO_cookie_io_functions_t {
# 397 "/usr/include/libio.h" 3
__io_read_fn *read;
# 398 "/usr/include/libio.h" 3
__io_write_fn *write;
# 399 "/usr/include/libio.h" 3
__io_seek_fn *seek;
# 400 "/usr/include/libio.h" 3
__io_close_fn *close;
# 401 "/usr/include/libio.h" 3
} _IO_cookie_io_functions_t; }
# 402 "/usr/include/libio.h" 3
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 404 "/usr/include/libio.h" 3
struct _IO_cookie_file;
# 407 "/usr/include/libio.h" 3
extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
# 417 "/usr/include/libio.h" 3
extern "C" int __uflow(_IO_FILE *);
# 418 "/usr/include/libio.h" 3
extern "C" int __overflow(_IO_FILE *, int);
# 458 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
# 459 "/usr/include/libio.h" 3
extern "C" int _IO_putc(int, _IO_FILE *);
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_feof(_IO_FILE *) throw();
# 461 "/usr/include/libio.h" 3
extern "C" int _IO_ferror(_IO_FILE *) throw();
# 463 "/usr/include/libio.h" 3
extern "C" int _IO_peekc_locked(_IO_FILE *);
# 469 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
# 470 "/usr/include/libio.h" 3
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
# 471 "/usr/include/libio.h" 3
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 488 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);
# 490 "/usr/include/libio.h" 3
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 492 "/usr/include/libio.h" 3
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
# 493 "/usr/include/libio.h" 3
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);
# 495 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
# 496 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
# 498 "/usr/include/libio.h" 3
extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 91 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 97 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 145 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 146 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 147 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 155 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();
# 157 "/usr/include/stdio.h" 3
extern "C" int rename(const char *, const char *) throw();
# 162 "/usr/include/stdio.h" 3
extern "C" int renameat(int, const char *, int, const char *) throw();
# 172 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 182 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 186 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 204 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 214 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);
# 219 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE *);
# 229 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 249 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 255 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 274 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);
# 276 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 283 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 289 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 300 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 307 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();
# 311 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 318 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();
# 322 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE *) throw();
# 331 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 337 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);
# 339 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 346 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 352 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__, __gnuc_va_list);
# 354 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 361 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();
# 365 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 374 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 377 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 380 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 390 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list);
# 393 "/usr/include/stdio.h" 3
extern "C" int dprintf(int, const char *__restrict__, ...);
# 403 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 409 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);
# 411 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 449 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 457 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);
# 461 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 509 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
# 510 "/usr/include/stdio.h" 3
extern "C" int getc(FILE *);
# 516 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 528 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE *);
# 529 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 539 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE *);
# 551 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
# 552 "/usr/include/stdio.h" 3
extern "C" int putc(int, FILE *);
# 558 "/usr/include/stdio.h" 3
extern "C" int putchar(int);
# 572 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int, FILE *);
# 580 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int, FILE *);
# 581 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int);
# 588 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);
# 591 "/usr/include/stdio.h" 3
extern "C" int putw(int, FILE *);
# 600 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__);
# 608 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 618 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__);
# 634 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 637 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 647 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__);
# 658 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 664 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 671 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 678 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 684 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 695 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 706 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 708 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 718 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);
# 723 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE *);
# 728 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE *);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);
# 747 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE *);
# 767 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);
# 772 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE *, const fpos_t *);
# 787 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
# 788 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE *);
# 789 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
# 790 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE *, const fpos64_t *);
# 795 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE *) throw();
# 797 "/usr/include/stdio.h" 3
extern "C" int feof(FILE *) throw();
# 799 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE *) throw();
# 804 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE *) throw();
# 805 "/usr/include/stdio.h" 3
extern "C" int feof_unlocked(FILE *) throw();
# 806 "/usr/include/stdio.h" 3
extern "C" int ferror_unlocked(FILE *) throw();
# 815 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 28 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 31 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 32 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 827 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();
# 832 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE *) throw();
# 842 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 848 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 854 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 860 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);
# 865 "/usr/include/stdio.h" 3
struct obstack;
# 868 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();
# 871 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 882 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();
# 886 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE *) throw();
# 889 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE *) throw();
# 52 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef unsigned CUdeviceptr; }
# 54 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef int CUdevice; }
# 55 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUctx_st *CUcontext; }
# 56 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUmod_st *CUmodule; }
# 57 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUfunc_st *CUfunction; }
# 58 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUarray_st *CUarray; }
# 59 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUtexref_st *CUtexref; }
# 60 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUevent_st *CUevent; }
# 61 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUstream_st *CUstream; }
# 78 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 72 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUctx_flags_enum {
# 73 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_CTX_SCHED_AUTO,
# 74 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_CTX_SCHED_SPIN,
# 75 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_CTX_SCHED_YIELD,
# 76 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_CTX_SCHED_MASK,
# 77 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_CTX_FLAGS_MASK = 3
# 78 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUctx_flags; }
# 92 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 83 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUarray_format_enum {
# 84 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
# 85 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT16,
# 86 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT32,
# 87 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT8 = 8,
# 88 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT16,
# 89 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT32,
# 90 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_HALF = 16,
# 91 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_FLOAT = 32
# 92 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUarray_format; }
# 101 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 97 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUaddress_mode_enum {
# 98 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TR_ADDRESS_MODE_WRAP,
# 99 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TR_ADDRESS_MODE_CLAMP,
# 100 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TR_ADDRESS_MODE_MIRROR
# 101 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUaddress_mode; }
# 109 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 106 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUfilter_mode_enum {
# 107 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TR_FILTER_MODE_POINT,
# 108 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TR_FILTER_MODE_LINEAR
# 109 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUfilter_mode; }
# 135 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 114 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUdevice_attribute_enum {
# 115 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
# 116 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
# 117 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
# 118 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
# 119 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
# 120 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
# 121 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
# 122 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
# 123 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
# 124 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
# 125 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
# 126 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
# 127 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
# 128 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
# 129 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
# 130 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,
# 132 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
# 133 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
# 134 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT
# 135 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUdevice_attribute; }
# 151 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 140 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
struct CUdevprop_st {
# 141 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int maxThreadsPerBlock;
# 142 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int maxThreadsDim[3];
# 143 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int maxGridSize[3];
# 144 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int sharedMemPerBlock;
# 145 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int totalConstantMemory;
# 146 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int SIMDWidth;
# 147 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int memPitch;
# 148 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int regsPerBlock;
# 149 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int clockRate;
# 150 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int textureAlign;
# 151 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUdevprop; }
# 160 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 156 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUmemorytype_enum {
# 157 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_MEMORYTYPE_HOST = 1,
# 158 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_MEMORYTYPE_DEVICE,
# 159 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_MEMORYTYPE_ARRAY
# 160 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUmemorytype; }
# 220 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 166 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUjit_option_enum {
# 169 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_MAX_REGISTERS,
# 178 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 182 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_WALL_TIME,
# 186 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 192 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 196 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 202 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 206 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 210 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,
# 213 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_TARGET,
# 218 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_FALLBACK_STRATEGY
# 220 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUjit_option; }
# 231 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 225 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUjit_target_enum {
# 227 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TARGET_COMPUTE_10,
# 228 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TARGET_COMPUTE_11,
# 229 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TARGET_COMPUTE_12,
# 230 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TARGET_COMPUTE_13
# 231 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUjit_target; }
# 244 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 236 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUjit_fallback_enum {
# 239 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_PREFER_PTX,
# 242 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_PREFER_BINARY
# 244 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUjit_fallback; }
# 289 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 252 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum cudaError_enum {
# 254 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_SUCCESS,
# 255 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_INVALID_VALUE,
# 256 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_OUT_OF_MEMORY,
# 257 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_NOT_INITIALIZED,
# 258 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_DEINITIALIZED,
# 260 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_NO_DEVICE = 100,
# 261 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_INVALID_DEVICE,
# 263 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_INVALID_IMAGE = 200,
# 264 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_INVALID_CONTEXT,
# 265 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
# 266 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_MAP_FAILED = 205,
# 267 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_UNMAP_FAILED,
# 268 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_ARRAY_IS_MAPPED,
# 269 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_ALREADY_MAPPED,
# 270 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_NO_BINARY_FOR_GPU,
# 271 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_ALREADY_ACQUIRED,
# 272 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_NOT_MAPPED,
# 274 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_INVALID_SOURCE = 300,
# 275 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_FILE_NOT_FOUND,
# 277 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_INVALID_HANDLE = 400,
# 279 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_NOT_FOUND = 500,
# 281 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_NOT_READY = 600,
# 283 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_LAUNCH_FAILED = 700,
# 284 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
# 285 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_LAUNCH_TIMEOUT,
# 286 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,
# 288 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_UNKNOWN = 999
# 289 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUresult; }
# 300 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuInit(unsigned);
# 308 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice *, int);
# 309 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceGetCount(int *);
# 310 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceGetName(char *, int, CUdevice);
# 311 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceComputeCapability(int *, int *, CUdevice);
# 312 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceTotalMem(unsigned *, CUdevice);
# 313 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceGetProperties(CUdevprop *, CUdevice);
# 314 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceGetAttribute(int *, CUdevice_attribute, CUdevice);
# 322 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxCreate(CUcontext *, unsigned, CUdevice);
# 323 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxDestroy(CUcontext);
# 324 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxAttach(CUcontext *, unsigned);
# 325 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxDetach(CUcontext);
# 326 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxPushCurrent(CUcontext);
# 327 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxPopCurrent(CUcontext *);
# 328 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxGetDevice(CUdevice *);
# 329 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxSynchronize();
# 338 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule *, const char *);
# 339 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleLoadData(CUmodule *, const void *);
# 340 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleLoadDataEx(CUmodule *, const void *, unsigned, CUjit_option *, void **);
# 341 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleLoadFatBinary(CUmodule *, const void *);
# 342 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleUnload(CUmodule);
# 343 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleGetFunction(CUfunction *, CUmodule, const char *);
# 344 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleGetGlobal(CUdeviceptr *, unsigned *, CUmodule, const char *);
# 345 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleGetTexRef(CUtexref *, CUmodule, const char *);
# 353 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemGetInfo(unsigned *, unsigned *);
# 355 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemAlloc(CUdeviceptr *, unsigned);
# 356 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemAllocPitch(CUdeviceptr *, unsigned *, unsigned, unsigned, unsigned);
# 364 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemFree(CUdeviceptr);
# 365 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemGetAddressRange(CUdeviceptr *, unsigned *, CUdeviceptr);
# 367 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemAllocHost(void **, unsigned);
# 368 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemFreeHost(void *);
# 381 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyHtoD(CUdeviceptr, const void *, unsigned);
# 382 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyDtoH(void *, CUdeviceptr, unsigned);
# 385 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyDtoD(CUdeviceptr, CUdeviceptr, unsigned);
# 388 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyDtoA(CUarray, unsigned, CUdeviceptr, unsigned);
# 389 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyAtoD(CUdeviceptr, CUarray, unsigned, unsigned);
# 392 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyHtoA(CUarray, unsigned, const void *, unsigned);
# 393 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyAtoH(void *, CUarray, unsigned, unsigned);
# 396 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyAtoA(CUarray, unsigned, CUarray, unsigned, unsigned);
# 418 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 400 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
struct CUDA_MEMCPY2D_st {
# 402 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned srcXInBytes; unsigned srcY;
# 403 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUmemorytype srcMemoryType;
# 404 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
const void *srcHost;
# 405 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUdeviceptr srcDevice;
# 406 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUarray srcArray;
# 407 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned srcPitch;
# 409 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned dstXInBytes; unsigned dstY;
# 410 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUmemorytype dstMemoryType;
# 411 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
void *dstHost;
# 412 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUdeviceptr dstDevice;
# 413 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUarray dstArray;
# 414 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned dstPitch;
# 416 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned WidthInBytes;
# 417 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Height;
# 418 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUDA_MEMCPY2D; }
# 419 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpy2D(const CUDA_MEMCPY2D *);
# 420 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpy2DUnaligned(const CUDA_MEMCPY2D *);
# 449 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 424 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
struct CUDA_MEMCPY3D_st {
# 426 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned srcXInBytes; unsigned srcY; unsigned srcZ;
# 427 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned srcLOD;
# 428 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUmemorytype srcMemoryType;
# 429 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
const void *srcHost;
# 430 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUdeviceptr srcDevice;
# 431 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUarray srcArray;
# 432 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
void *reserved0;
# 433 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned srcPitch;
# 434 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned srcHeight;
# 436 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned dstXInBytes; unsigned dstY; unsigned dstZ;
# 437 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned dstLOD;
# 438 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUmemorytype dstMemoryType;
# 439 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
void *dstHost;
# 440 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUdeviceptr dstDevice;
# 441 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUarray dstArray;
# 442 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
void *reserved1;
# 443 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned dstPitch;
# 444 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned dstHeight;
# 446 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned WidthInBytes;
# 447 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Height;
# 448 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Depth;
# 449 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUDA_MEMCPY3D; }
# 450 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpy3D(const CUDA_MEMCPY3D *);
# 465 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync(CUdeviceptr, const void *, unsigned, CUstream);
# 467 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyDtoHAsync(void *, CUdeviceptr, unsigned, CUstream);
# 471 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyHtoAAsync(CUarray, unsigned, const void *, unsigned, CUstream);
# 473 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyAtoHAsync(void *, CUarray, unsigned, unsigned, CUstream);
# 477 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpy2DAsync(const CUDA_MEMCPY2D *, CUstream);
# 480 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpy3DAsync(const CUDA_MEMCPY3D *, CUstream);
# 487 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemsetD8(CUdeviceptr, unsigned char, unsigned);
# 488 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemsetD16(CUdeviceptr, unsigned short, unsigned);
# 489 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemsetD32(CUdeviceptr, unsigned, unsigned);
# 491 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemsetD2D8(CUdeviceptr, unsigned, unsigned char, unsigned, unsigned);
# 492 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemsetD2D16(CUdeviceptr, unsigned, unsigned short, unsigned, unsigned);
# 493 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemsetD2D32(CUdeviceptr, unsigned, unsigned, unsigned, unsigned);
# 502 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction, int, int, int);
# 503 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuFuncSetSharedSize(CUfunction, unsigned);
# 526 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 512 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
struct CUDA_ARRAY_DESCRIPTOR {
# 516 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Width;
# 517 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Height;
# 522 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUarray_format Format;
# 525 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned NumChannels;
# 526 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUDA_ARRAY_DESCRIPTOR; }
# 528 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuArrayCreate(CUarray *, const CUDA_ARRAY_DESCRIPTOR *);
# 529 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuArrayGetDescriptor(CUDA_ARRAY_DESCRIPTOR *, CUarray);
# 530 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuArrayDestroy(CUarray);
# 552 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 533 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
struct CUDA_ARRAY3D_DESCRIPTOR {
# 537 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Width;
# 538 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Height;
# 539 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Depth;
# 543 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUarray_format Format;
# 546 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned NumChannels;
# 550 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Flags;
# 552 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUDA_ARRAY3D_DESCRIPTOR; }
# 553 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuArray3DCreate(CUarray *, const CUDA_ARRAY3D_DESCRIPTOR *);
# 554 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuArray3DGetDescriptor(CUDA_ARRAY3D_DESCRIPTOR *, CUarray);
# 561 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref *);
# 562 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefDestroy(CUtexref);
# 564 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefSetArray(CUtexref, CUarray, unsigned);
# 567 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefSetAddress(unsigned *, CUtexref, CUdeviceptr, unsigned);
# 568 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefSetFormat(CUtexref, CUarray_format, int);
# 570 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefSetAddressMode(CUtexref, int, CUaddress_mode);
# 571 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefSetFilterMode(CUtexref, CUfilter_mode);
# 572 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefSetFlags(CUtexref, unsigned);
# 580 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefGetAddress(CUdeviceptr *, CUtexref);
# 581 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefGetArray(CUarray *, CUtexref);
# 582 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode *, CUtexref, int);
# 583 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode *, CUtexref);
# 584 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefGetFormat(CUarray_format *, int *, CUtexref);
# 585 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefGetFlags(unsigned *, CUtexref);
# 593 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction, unsigned);
# 594 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuParamSeti(CUfunction, int, unsigned);
# 595 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuParamSetf(CUfunction, int, float);
# 596 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuParamSetv(CUfunction, int, void *, unsigned);
# 597 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuParamSetTexRef(CUfunction, int, CUtexref);
# 608 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction);
# 609 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuLaunchGrid(CUfunction, int, int);
# 610 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuLaunchGridAsync(CUfunction, int, int, CUstream);
# 617 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent *, unsigned);
# 618 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuEventRecord(CUevent, CUstream);
# 619 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuEventQuery(CUevent);
# 620 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuEventSynchronize(CUevent);
# 621 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuEventDestroy(CUevent);
# 622 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuEventElapsedTime(float *, CUevent, CUevent);
# 629 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream *, unsigned);
# 630 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuStreamQuery(CUstream);
# 631 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuStreamSynchronize(CUstream);
# 632 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuStreamDestroy(CUstream);
# 64 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
enum CUTBoolean {
# 66 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
CUTFalse,
# 67 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
CUTTrue
# 68 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
};
# 76 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" void cutFree(void *);
# 94 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" void cutCheckBankAccess(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, const char *, const int, const char *, const int);
# 107 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" char *cutFindFilePath(const char *, const char *);
# 122 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFilef(const char *, float **, unsigned *, bool = false);
# 138 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFiled(const char *, double **, unsigned *, bool = false);
# 154 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFilei(const char *, int **, unsigned *, bool = false);
# 169 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFileui(const char *, unsigned **, unsigned *, bool = false);
# 185 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFileb(const char *, char **, unsigned *, bool = false);
# 201 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFileub(const char *, unsigned char **, unsigned *, bool = false);
# 215 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFilef(const char *, const float *, unsigned, const float, bool = false);
# 229 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFiled(const char *, const float *, unsigned, const double, bool = false);
# 241 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFilei(const char *, const int *, unsigned, bool = false);
# 253 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFileui(const char *, const unsigned *, unsigned, bool = false);
# 265 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFileb(const char *, const char *, unsigned, bool = false);
# 277 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFileub(const char *, const unsigned char *, unsigned, bool = false);
# 293 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMub(const char *, unsigned char **, unsigned *, unsigned *);
# 306 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPPMub(const char *, unsigned char **, unsigned *, unsigned *);
# 320 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPPM4ub(const char *, unsigned char **, unsigned *, unsigned *);
# 336 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMi(const char *, unsigned **, unsigned *, unsigned *);
# 352 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMs(const char *, unsigned short **, unsigned *, unsigned *);
# 367 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMf(const char *, float **, unsigned *, unsigned *);
# 379 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMub(const char *, unsigned char *, unsigned, unsigned);
# 391 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePPMub(const char *, unsigned char *, unsigned, unsigned);
# 404 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePPM4ub(const char *, unsigned char *, unsigned, unsigned);
# 416 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMi(const char *, unsigned *, unsigned, unsigned);
# 428 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMs(const char *, unsigned short *, unsigned, unsigned);
# 440 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMf(const char *, float *, unsigned, unsigned);
# 461 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCheckCmdLineFlag(const int, const char **, const char *);
# 475 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumenti(const int, const char **, const char *, int *);
# 489 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentf(const int, const char **, const char *, float *);
# 503 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentstr(const int, const char **, const char *, char **);
# 518 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentListstr(const int, const char **, const char *, char **, unsigned *);
# 532 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCheckCondition(int, const char *, const int);
# 544 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutComparef(const float *, const float *, const unsigned);
# 557 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutComparei(const int *, const int *, const unsigned);
# 571 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareuit(const unsigned *, const unsigned *, const unsigned, const float, const float);
# 584 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareub(const unsigned char *, const unsigned char *, const unsigned);
# 599 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareubt(const unsigned char *, const unsigned char *, const unsigned, const float, const float);
# 613 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareube(const unsigned char *, const unsigned char *, const unsigned, const float);
# 627 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutComparefe(const float *, const float *, const unsigned, const float);
# 642 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutComparefet(const float *, const float *, const unsigned, const float, const float);
# 657 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareL2fe(const float *, const float *, const unsigned, const float);
# 672 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutComparePPM(const char *, const char *, const float, const float, bool = false);
# 685 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCreateTimer(unsigned *);
# 694 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutDeleteTimer(unsigned);
# 702 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutStartTimer(const unsigned);
# 710 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutStopTimer(const unsigned);
# 718 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutResetTimer(const unsigned);
# 727 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" float cutGetTimerValue(const unsigned);
# 738 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" float cutGetAverageTimerValue(const unsigned);
# 19 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_bankchecker.h"
inline void __cutilBankChecker(unsigned tidx, unsigned tidy, unsigned tidz, unsigned
# 20 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_bankchecker.h"
bdimx, unsigned bdimy, unsigned bdimz, char *
# 21 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_bankchecker.h"
aname, int index, char *file, int line)
# 22 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_bankchecker.h"
{
# 23 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_bankchecker.h"
cutCheckBankAccess(tidx, tidy, tidz, bdimx, bdimy, bdimz, file, line, aname, index);
# 24 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_bankchecker.h"
}
# 162 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { typedef float2 cuFloatComplex; }
# 164 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline float cuCrealf(cuFloatComplex x)
# 165 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 166 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return x.x;
# 167 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 169 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline float cuCimagf(cuFloatComplex x)
# 170 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 171 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return x.y;
# 172 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 174 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuFloatComplex make_cuFloatComplex(float
# 175 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
r, float i)
# 176 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 177 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto cuFloatComplex res;
# 178 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
(res.x) = r;
# 179 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
(res.y) = i;
# 180 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return res;
# 181 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 183 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuConjf(cuFloatComplex x)
# 184 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 185 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x), -cuCimagf(x));
# 186 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 187 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCaddf(cuFloatComplex x, cuFloatComplex
# 188 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 189 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 190 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x) + cuCrealf(y), cuCimagf(x) + cuCimagf(y));
# 192 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 194 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCsubf(cuFloatComplex x, cuFloatComplex
# 195 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 196 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 197 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x) - cuCrealf(y), cuCimagf(x) - cuCimagf(y));
# 199 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 206 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCmulf(cuFloatComplex x, cuFloatComplex
# 207 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 208 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 209 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto cuFloatComplex prod;
# 210 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
prod = make_cuFloatComplex(cuCrealf(x) * cuCrealf(y) - cuCimagf(x) * cuCimagf(y), cuCrealf(x) * cuCimagf(y) + cuCimagf(x) * cuCrealf(y));
# 214 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return prod;
# 215 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 222 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCdivf(cuFloatComplex x, cuFloatComplex
# 223 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 224 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 225 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto cuFloatComplex quot;
# 226 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float s = ((float)fabs((double)cuCrealf(y)) + (float)fabs((double)cuCimagf(y)));
# 228 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float oos = ((1.0F) / s);
# 229 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float ars = (cuCrealf(x) * oos);
# 230 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float ais = (cuCimagf(x) * oos);
# 231 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float brs = (cuCrealf(y) * oos);
# 232 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float bis = (cuCimagf(y) * oos);
# 233 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
s = brs * brs + bis * bis;
# 234 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
oos = (1.0F) / s;
# 235 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
quot = make_cuFloatComplex((ars * brs + ais * bis) * oos, (ais * brs - ars * bis) * oos);
# 237 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return quot;
# 238 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 248 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline float cuCabsf(cuFloatComplex x)
# 249 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 250 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float a = cuCrealf(x);
# 251 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float b = cuCimagf(x);
# 252 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float v; auto float w; auto float t;
# 253 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
a = (float)fabs(a);
# 254 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
b = (float)fabs(b);
# 255 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
if (a > b) {
# 256 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
v = a;
# 257 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
w = b;
# 258 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} else {
# 259 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
v = b;
# 260 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
w = a;
# 261 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 262 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = w / v;
# 263 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = (1.0F) + t * t;
# 264 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = v * (float)sqrt(t);
# 265 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
if (((v == (0.0F)) || (v > (3.402823466e+38F))) || (w > (3.402823466e+38F))) {
# 266 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = v + w;
# 267 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 268 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return t;
# 269 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 272 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { typedef double2 cuDoubleComplex; }
# 274 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline double cuCreal(cuDoubleComplex x)
# 275 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 276 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return x.x;
# 277 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 279 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline double cuCimag(cuDoubleComplex x)
# 280 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 281 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return x.y;
# 282 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 284 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex make_cuDoubleComplex(double
# 285 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
r, double i)
# 286 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 287 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto cuDoubleComplex res;
# 288 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
(res.x) = r;
# 289 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
(res.y) = i;
# 290 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return res;
# 291 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 293 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuConj(cuDoubleComplex x)
# 294 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 295 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x), -cuCimag(x));
# 296 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 298 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCadd(cuDoubleComplex x, cuDoubleComplex
# 299 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 300 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 301 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x) + cuCreal(y), cuCimag(x) + cuCimag(y));
# 303 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 305 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCsub(cuDoubleComplex x, cuDoubleComplex
# 306 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 307 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 308 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x) - cuCreal(y), cuCimag(x) - cuCimag(y));
# 310 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 317 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCmul(cuDoubleComplex x, cuDoubleComplex
# 318 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 319 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 320 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto cuDoubleComplex prod;
# 321 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
prod = make_cuDoubleComplex(cuCreal(x) * cuCreal(y) - cuCimag(x) * cuCimag(y), cuCreal(x) * cuCimag(y) + cuCimag(x) * cuCreal(y));
# 325 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return prod;
# 326 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 333 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCdiv(cuDoubleComplex x, cuDoubleComplex
# 334 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 335 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 336 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto cuDoubleComplex quot;
# 337 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double s = (fabs(cuCreal(y)) + fabs(cuCimag(y)));
# 338 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double oos = ((1.0) / s);
# 339 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double ars = (cuCreal(x) * oos);
# 340 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double ais = (cuCimag(x) * oos);
# 341 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double brs = (cuCreal(y) * oos);
# 342 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double bis = (cuCimag(y) * oos);
# 343 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
s = brs * brs + bis * bis;
# 344 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
oos = (1.0) / s;
# 345 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
quot = make_cuDoubleComplex((ars * brs + ais * bis) * oos, (ais * brs - ars * bis) * oos);
# 347 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return quot;
# 348 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 356 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline double cuCabs(cuDoubleComplex x)
# 357 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 358 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double a = cuCreal(x);
# 359 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double b = cuCimag(x);
# 360 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double v; auto double w; auto double t;
# 361 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
a = fabs(a);
# 362 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
b = fabs(b);
# 363 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
if (a > b) {
# 364 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
v = a;
# 365 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
w = b;
# 366 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} else {
# 367 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
v = b;
# 368 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
w = a;
# 369 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 370 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = w / v;
# 371 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = (1.0) + t * t;
# 372 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = v * sqrt(t);
# 373 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
if (((v == (0.0)) || (v > (1.797693134862315708e+308))) || (w > (1.797693134862315708e+308)))
# 374 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 375 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = v + w;
# 376 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 377 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return t;
# 378 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 387 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
typedef cuFloatComplex cuComplex;
# 388 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
static inline cuComplex make_cuComplex(float x, float
# 389 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 390 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 391 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuFloatComplex(x, y);
# 392 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 395 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
static inline cuDoubleComplex cuComplexFloatToDouble(cuFloatComplex
# 396 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
c)
# 397 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 398 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuDoubleComplex((double)cuCrealf(c), (double)cuCimagf(c));
# 399 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 401 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
static inline cuFloatComplex cuComplexDoubleToFloat(cuDoubleComplex
# 402 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
c)
# 403 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 404 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuFloatComplex((float)cuCreal(c), (float)cuCimag(c));
# 405 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 74 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" { typedef
# 64 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
enum cufftResult_t {
# 65 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_SUCCESS,
# 66 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_INVALID_PLAN,
# 67 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_ALLOC_FAILED,
# 68 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_INVALID_TYPE,
# 69 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_INVALID_VALUE,
# 70 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_INTERNAL_ERROR,
# 71 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_EXEC_FAILED,
# 72 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_SETUP_FAILED,
# 73 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_INVALID_SIZE
# 74 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
} cufftResult; }
# 79 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" { typedef unsigned cufftHandle; }
# 82 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" { typedef float cufftReal; }
# 87 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" { typedef cuComplex cufftComplex; }
# 98 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" { typedef
# 94 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
enum cufftType_t {
# 95 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_R2C = 42,
# 96 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_C2R = 44,
# 97 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_C2C = 41
# 98 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
} cufftType; }
# 100 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftPlan1d(cufftHandle *, int, cufftType, int);
# 105 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftPlan2d(cufftHandle *, int, int, cufftType);
# 109 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftPlan3d(cufftHandle *, int, int, int, cufftType);
# 113 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftDestroy(cufftHandle);
# 115 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftExecC2C(cufftHandle, cufftComplex *, cufftComplex *, int);
# 120 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftExecR2C(cufftHandle, cufftReal *, cufftComplex *);
# 124 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftExecC2R(cufftHandle, cufftComplex *, cufftReal *);
# 22 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cutilCondition(int val, char *file, int line)
# 23 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 24 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((CUTFalse) == (cutCheckCondition(val, file, line))) {
# 25 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(1);
# 26 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 27 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 29 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cutilExit(int argc, char **argv)
# 30 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 31 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if (!(cutCheckCmdLineFlag(argc, (const char **)argv, "noprompt"))) {
# 32 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
printf("\nPress ENTER to exit...\n");
# 33 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fflush(stdout);
# 34 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fflush(stderr);
# 35 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
getchar();
# 36 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 37 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(0);
# 38 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 41 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline int cutGetMaxGflopsDeviceId()
# 42 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 43 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int device_count = 0;
# 44 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
cudaGetDeviceCount(&device_count);
# 46 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto cudaDeviceProp device_properties;
# 47 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int max_gflops_device = 0;
# 48 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int max_gflops = 0;
# 50 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int current_device = 0;
# 51 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
cudaGetDeviceProperties(&device_properties, current_device);
# 52 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
max_gflops = device_properties.multiProcessorCount * device_properties.clockRate;
# 53 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
++current_device;
# 55 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
while (current_device < device_count)
# 56 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 57 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
cudaGetDeviceProperties(&device_properties, current_device);
# 58 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int gflops = (device_properties.multiProcessorCount * device_properties.clockRate);
# 59 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if (gflops > max_gflops)
# 60 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 61 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
max_gflops = gflops;
# 62 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
max_gflops_device = current_device;
# 63 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 64 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
++current_device;
# 65 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 67 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
return max_gflops_device;
# 68 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 70 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cudaSafeCallNoSync(cudaError err, const char *file, const int line)
# 71 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 72 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 73 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cudaSafeCallNoSync() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));
# 75 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 76 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 77 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 79 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cudaSafeCall(cudaError err, const char *file, const int line)
# 80 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 81 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 82 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cudaSafeCall() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));
# 84 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 85 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 86 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 88 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cudaSafeThreadSync(const char *file, const int line)
# 89 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 90 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto cudaError err = cudaThreadSynchronize();
# 91 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 92 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cudaThreadSynchronize() Driver API error in file \'%s\' in line %i : %s.\n", file, line, cudaGetErrorString(err));
# 94 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 95 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 96 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 98 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cufftSafeCall(cufftResult err, const char *file, const int line)
# 99 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 100 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((CUFFT_SUCCESS) != err) {
# 101 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cufftSafeCall() CUFFT error in file <%s>, line %i.\n", file, line);
# 103 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 104 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 105 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 107 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cutilCheckError(CUTBoolean err, const char *file, const int line)
# 108 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 109 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((CUTTrue) != err) {
# 110 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "CUTIL CUDA error in file <%s>, line %i.\n", file, line);
# 112 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 113 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 114 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 116 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cutilCheckMsg(const char *errorMessage, const char *file, const int line)
# 117 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 118 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto cudaError_t err = cudaGetLastError();
# 119 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 120 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cutilCheckMsg() CUTIL CUDA error: %s in file <%s>, line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 122 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 123 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 132 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 133 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cutilSafeMalloc(void *pointer, const char *file, const int line)
# 134 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 135 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if (!(pointer)) {
# 136 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cutilSafeMalloc host malloc failure in file <%s>, line %i\n", file, line);
# 138 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 139 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 140 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 145 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void cutilDeviceInit(int ARGC, char **ARGV)
# 146 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 147 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int deviceCount;
# 148 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceCount(&deviceCount), "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h", 148);
# 149 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if (deviceCount == 0) {
# 150 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "CUTIL CUDA error: no devices supporting CUDA.\n");
# 151 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 152 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 153 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int dev = 0;
# 154 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
# 155 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if (dev < 0) { dev = 0; } if (dev > (deviceCount - 1)) { dev = deviceCount - 1; }
# 157 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto cudaDeviceProp deviceProp;
# 158 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceProperties(&deviceProp, dev), "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h", 158);
# 159 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((deviceProp.major) < 1) {
# 160 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cutil error: device does not support CUDA.\n");
# 161 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1); }
# 163 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
# 164 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "Using device %d: %s\n", dev, deviceProp.name); }
# 165 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
__cudaSafeCall(cudaSetDevice(dev), "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h", 165);
# 166 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 171 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void cutilCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
# 172 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 173 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto cudaError_t err = cudaGetLastError();
# 174 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 175 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "CUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 177 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 178 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 179 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
err = cudaThreadSynchronize();
# 180 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 181 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "CCUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 183 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 184 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 185 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 16 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
inline void __cuSafeCallNoSync(CUresult err, const char *file, const int line)
# 17 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
{
# 18 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 19 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "cuSafeCallNoSync() Driver API error = %04d from file <%s>, line %i.\n", err, file, line);
# 21 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 22 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 23 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 24 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
inline void __cuSafeCall(CUresult err, const char *file, const int line)
# 25 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
{
# 26 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(err, file, line);
# 27 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 29 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
inline void __cuCtxSync(const char *file, const int line)
# 30 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
{
# 31 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto CUresult err = cuCtxSynchronize();
# 32 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 33 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "cuCtxSynchronize() API error = %04d in file <%s>, line %i.\n", err, file, line);
# 35 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 36 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 37 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 39 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
inline void __cuCheckMsg(const char *msg, const char *file, const int line)
# 40 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
{
# 41 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto CUresult err = cuCtxSynchronize();
# 42 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 43 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "cutilDrvCheckMsg -> %s", msg);
# 44 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "cutilDrvCheckMsg -> cuCtxSynchronize API error = %04d in file <%s>, line %i.\n", err, file, line);
# 46 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 47 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 48 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 54 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
inline void cutilDeviceInitDrv(int cuDevice, int ARGC, char **ARGV)
# 55 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
{
# 56 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
cuDevice = 0;
# 57 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto int deviceCount = 0;
# 58 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto CUresult err = cuInit(0);
# 59 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) == err) {
# 60 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetCount(&deviceCount), "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h", 60); }
# 61 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if (deviceCount == 0) {
# 62 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "CUTIL DeviceInitDrv error: no devices supporting CUDA\n");
# 63 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 64 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 65 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto int dev = 0;
# 66 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
# 67 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if (dev < 0) { dev = 0; }
# 68 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if (dev > (deviceCount - 1)) { dev = deviceCount - 1; }
# 69 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGet(&cuDevice, dev), "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h", 69);
# 70 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto char name[100];
# 71 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
cuDeviceGetName(name, 100, cuDevice);
# 72 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
# 73 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "Using device %d: %s\n", dev, name); }
# 74 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 78 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
inline void cutilDrvCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
# 79 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
{
# 80 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto CUresult err = cuCtxSynchronize();
# 81 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((CUDA_ERROR_INVALID_CONTEXT) != err) {
# 82 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);
# 84 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 85 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 86 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
err = cuCtxSynchronize();
# 87 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 88 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);
# 90 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 91 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 92 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 12 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
inline void print_NVCC_min_spec(const char *sSDKsample, const char *sNVCCReq, const char *sDriverReq)
# 13 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
{
# 14 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
printf("CUDA %d.%02d Toolkit built this project.\n", 2010 / 1000, 2010 % 100);
# 15 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
printf("  [ %s ] requirements:\n", sSDKsample);
# 16 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
printf(" -> CUDA %s Toolkit\n", sNVCCReq);
# 17 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
printf(" -> %s NVIDIA Display Driver.\n", sDriverReq);
# 18 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
}
# 49 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
extern "C" { typedef unsigned uint; }
# 50 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
extern "C" { typedef unsigned short ushort; }
# 85 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float lerp(float a, float b, float t)
# 86 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 87 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return a + t * (b - a);
# 88 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 91 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float clamp(float f, float a, float b)
# 92 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 93 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return fmaxf(a, fminf(f, b));
# 94 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 100 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int2 operator-(int2 &a)
# 101 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 102 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int2(-(a.x), -(a.y));
# 103 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 106 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int2 operator+(int2 a, int2 b)
# 107 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 108 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int2(a.x + b.x, a.y + b.y);
# 109 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 110 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator+=(int2 &a, int2 b)
# 111 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 112 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) += b.x; (a.y) += b.y;
# 113 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 116 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int2 operator-(int2 a, int2 b)
# 117 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 118 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int2(a.x - b.x, a.y - b.y);
# 119 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 120 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator-=(int2 &a, int2 b)
# 121 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 122 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) -= b.x; (a.y) -= b.y;
# 123 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 126 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int2 operator*(int2 a, int2 b)
# 127 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 128 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int2(a.x * b.x, a.y * b.y);
# 129 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 130 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int2 operator*(int2 a, int s)
# 131 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 132 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int2(a.x * s, a.y * s);
# 133 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 134 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int2 operator*(int s, int2 a)
# 135 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 136 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int2(a.x * s, a.y * s);
# 137 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 138 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator*=(int2 &a, int s)
# 139 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 140 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) *= s; (a.y) *= s;
# 141 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 147 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 make_float2(float s)
# 148 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 149 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(s, s);
# 150 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 151 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 make_float2(int2 a)
# 152 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 153 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2((float)(a.x), (float)(a.y));
# 154 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 157 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator-(float2 &a)
# 158 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 159 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(-(a.x), -(a.y));
# 160 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 163 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator+(float2 a, float2 b)
# 164 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 165 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(a.x + b.x, a.y + b.y);
# 166 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 167 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator+=(float2 &a, float2 b)
# 168 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 169 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) += b.x; (a.y) += b.y;
# 170 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 173 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator-(float2 a, float2 b)
# 174 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 175 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(a.x - b.x, a.y - b.y);
# 176 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 177 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator-=(float2 &a, float2 b)
# 178 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 179 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) -= b.x; (a.y) -= b.y;
# 180 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 183 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator*(float2 a, float2 b)
# 184 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 185 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(a.x * b.x, a.y * b.y);
# 186 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 187 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator*(float2 a, float s)
# 188 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 189 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(a.x * s, a.y * s);
# 190 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 191 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator*(float s, float2 a)
# 192 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 193 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(a.x * s, a.y * s);
# 194 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 195 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator*=(float2 &a, float s)
# 196 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 197 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) *= s; (a.y) *= s;
# 198 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 201 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator/(float2 a, float2 b)
# 202 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 203 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(a.x / b.x, a.y / b.y);
# 204 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 205 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator/(float2 a, float s)
# 206 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 207 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 208 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a * inv);
# 209 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 210 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator/(float s, float2 a)
# 211 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 212 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 213 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a * inv);
# 214 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 215 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator/=(float2 &a, float s)
# 216 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 217 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 218 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a *= inv);
# 219 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 222 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 lerp(float2 a, float2 b, float t)
# 223 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 224 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a + (t * (b - a)));
# 225 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 228 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 clamp(float2 v, float a, float b)
# 229 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 230 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(clamp(v.x, a, b), clamp(v.y, a, b));
# 231 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 233 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 clamp(float2 v, float2 a, float2 b)
# 234 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 235 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y));
# 236 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 239 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float dot(float2 a, float2 b)
# 240 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 241 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return a.x * b.x + a.y * b.y;
# 242 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 245 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float length(float2 v)
# 246 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 247 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return sqrtf(dot(v, v));
# 248 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 251 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 normalize(float2 v)
# 252 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 253 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float invLen = rsqrtf(dot(v, v));
# 254 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (v * invLen);
# 255 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 258 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 floor(const float2 v)
# 259 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 260 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(floor(v.x), floor(v.y));
# 261 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 264 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 reflect(float2 i, float2 n)
# 265 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 266 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (i - (((2.0F) * n) * dot(n, i)));
# 267 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 270 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 fabs(float2 v)
# 271 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 272 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(fabs(v.x), fabs(v.y));
# 273 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 279 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 make_float3(float s)
# 280 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 281 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(s, s, s);
# 282 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 283 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 make_float3(float2 a)
# 284 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 285 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x, a.y, (0.0F));
# 286 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 287 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 make_float3(float2 a, float s)
# 288 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 289 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x, a.y, s);
# 290 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 291 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 make_float3(float4 a)
# 292 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 293 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x, a.y, a.z);
# 294 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 295 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 make_float3(int3 a)
# 296 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 297 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3((float)(a.x), (float)(a.y), (float)(a.z));
# 298 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 301 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator-(float3 &a)
# 302 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 303 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(-(a.x), -(a.y), -(a.z));
# 304 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 307 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
static inline float3 fminf(float3 a, float3 b)
# 308 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 309 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(fminf(a.x, b.x), fminf(a.y, b.y), fminf(a.z, b.z));
# 310 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 313 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
static inline float3 fmaxf(float3 a, float3 b)
# 314 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 315 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(fmaxf(a.x, b.x), fmaxf(a.y, b.y), fmaxf(a.z, b.z));
# 316 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 319 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator+(float3 a, float3 b)
# 320 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 321 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x + b.x, a.y + b.y, a.z + b.z);
# 322 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 323 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator+(float3 a, float b)
# 324 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 325 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x + b, a.y + b, a.z + b);
# 326 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 327 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator+=(float3 &a, float3 b)
# 328 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 329 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) += b.x; (a.y) += b.y; (a.z) += b.z;
# 330 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 333 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator-(float3 a, float3 b)
# 334 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 335 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x - b.x, a.y - b.y, a.z - b.z);
# 336 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 337 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator-(float3 a, float b)
# 338 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 339 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x - b, a.y - b, a.z - b);
# 340 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 341 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator-=(float3 &a, float3 b)
# 342 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 343 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) -= b.x; (a.y) -= b.y; (a.z) -= b.z;
# 344 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 347 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator*(float3 a, float3 b)
# 348 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 349 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x * b.x, a.y * b.y, a.z * b.z);
# 350 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 351 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator*(float3 a, float s)
# 352 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 353 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x * s, a.y * s, a.z * s);
# 354 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 355 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator*(float s, float3 a)
# 356 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 357 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x * s, a.y * s, a.z * s);
# 358 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 359 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator*=(float3 &a, float s)
# 360 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 361 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) *= s; (a.y) *= s; (a.z) *= s;
# 362 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 365 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator/(float3 a, float3 b)
# 366 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 367 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x / b.x, a.y / b.y, a.z / b.z);
# 368 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 369 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator/(float3 a, float s)
# 370 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 371 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 372 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a * inv);
# 373 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 374 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator/(float s, float3 a)
# 375 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 376 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 377 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a * inv);
# 378 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 379 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator/=(float3 &a, float s)
# 380 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 381 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 382 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a *= inv);
# 383 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 386 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 lerp(float3 a, float3 b, float t)
# 387 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 388 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a + (t * (b - a)));
# 389 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 392 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 clamp(float3 v, float a, float b)
# 393 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 394 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
# 395 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 397 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 clamp(float3 v, float3 a, float3 b)
# 398 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 399 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
# 400 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 403 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float dot(float3 a, float3 b)
# 404 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 405 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a.x * b.x + a.y * b.y) + a.z * b.z;
# 406 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 409 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 cross(float3 a, float3 b)
# 410 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 411 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
# 412 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 415 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float length(float3 v)
# 416 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 417 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return sqrtf(dot(v, v));
# 418 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 421 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 normalize(float3 v)
# 422 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 423 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float invLen = rsqrtf(dot(v, v));
# 424 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (v * invLen);
# 425 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 428 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 floor(const float3 v)
# 429 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 430 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(floor(v.x), floor(v.y), floor(v.z));
# 431 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 434 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 reflect(float3 i, float3 n)
# 435 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 436 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (i - (((2.0F) * n) * dot(n, i)));
# 437 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 440 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 fabs(float3 v)
# 441 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 442 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(fabs(v.x), fabs(v.y), fabs(v.z));
# 443 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 449 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 make_float4(float s)
# 450 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 451 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(s, s, s, s);
# 452 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 453 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 make_float4(float3 a)
# 454 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 455 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x, a.y, a.z, (0.0F));
# 456 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 457 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 make_float4(float3 a, float w)
# 458 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 459 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x, a.y, a.z, w);
# 460 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 461 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 make_float4(int4 a)
# 462 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 463 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4((float)(a.x), (float)(a.y), (float)(a.z), (float)(a.w));
# 464 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 467 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator-(float4 &a)
# 468 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 469 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(-(a.x), -(a.y), -(a.z), -(a.w));
# 470 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 473 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
static inline float4 fminf(float4 a, float4 b)
# 474 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 475 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(fminf(a.x, b.x), fminf(a.y, b.y), fminf(a.z, b.z), fminf(a.w, b.w));
# 476 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 479 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
static inline float4 fmaxf(float4 a, float4 b)
# 480 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 481 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(fmaxf(a.x, b.x), fmaxf(a.y, b.y), fmaxf(a.z, b.z), fmaxf(a.w, b.w));
# 482 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 485 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator+(float4 a, float4 b)
# 486 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 487 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
# 488 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 489 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator+=(float4 &a, float4 b)
# 490 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 491 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) += b.x; (a.y) += b.y; (a.z) += b.z; (a.w) += b.w;
# 492 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 495 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator-(float4 a, float4 b)
# 496 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 497 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
# 498 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 499 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator-=(float4 &a, float4 b)
# 500 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 501 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) -= b.x; (a.y) -= b.y; (a.z) -= b.z; (a.w) -= b.w;
# 502 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 505 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator*(float4 a, float s)
# 506 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 507 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x * s, a.y * s, a.z * s, a.w * s);
# 508 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 509 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator*(float s, float4 a)
# 510 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 511 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x * s, a.y * s, a.z * s, a.w * s);
# 512 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 513 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator*=(float4 &a, float s)
# 514 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 515 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) *= s; (a.y) *= s; (a.z) *= s; (a.w) *= s;
# 516 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 519 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator/(float4 a, float4 b)
# 520 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 521 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
# 522 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 523 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator/(float4 a, float s)
# 524 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 525 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 526 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a * inv);
# 527 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 528 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator/(float s, float4 a)
# 529 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 530 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 531 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a * inv);
# 532 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 533 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator/=(float4 &a, float s)
# 534 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 535 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 536 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a *= inv);
# 537 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 540 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 lerp(float4 a, float4 b, float t)
# 541 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 542 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a + (t * (b - a)));
# 543 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 546 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 clamp(float4 v, float a, float b)
# 547 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 548 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b), clamp(v.w, a, b));
# 549 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 551 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 clamp(float4 v, float4 a, float4 b)
# 552 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 553 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z), clamp(v.w, a.w, b.w));
# 554 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 557 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float dot(float4 a, float4 b)
# 558 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 559 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return ((a.x * b.x + a.y * b.y) + a.z * b.z) + a.w * b.w;
# 560 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 563 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float length(float4 r)
# 564 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 565 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return sqrtf(dot(r, r));
# 566 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 569 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 normalize(float4 v)
# 570 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 571 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float invLen = rsqrtf(dot(v, v));
# 572 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (v * invLen);
# 573 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 576 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 floor(const float4 v)
# 577 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 578 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(floor(v.x), floor(v.y), floor(v.z), floor(v.w));
# 579 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 582 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 fabs(float4 v)
# 583 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 584 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(fabs(v.x), fabs(v.y), fabs(v.z), fabs(v.w));
# 585 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 591 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 make_int3(int s)
# 592 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 593 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(s, s, s);
# 594 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 595 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 make_int3(float3 a)
# 596 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 597 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3((int)(a.x), (int)(a.y), (int)(a.z));
# 598 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 601 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator-(int3 &a)
# 602 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 603 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(-(a.x), -(a.y), -(a.z));
# 604 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 607 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 min(int3 a, int3 b)
# 608 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 609 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z));
# 610 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 613 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 max(int3 a, int3 b)
# 614 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 615 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z));
# 616 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 619 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator+(int3 a, int3 b)
# 620 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 621 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x + b.x, a.y + b.y, a.z + b.z);
# 622 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 623 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator+=(int3 &a, int3 b)
# 624 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 625 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) += b.x; (a.y) += b.y; (a.z) += b.z;
# 626 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 629 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator-(int3 a, int3 b)
# 630 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 631 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x - b.x, a.y - b.y, a.z - b.z);
# 632 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 634 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator-=(int3 &a, int3 b)
# 635 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 636 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) -= b.x; (a.y) -= b.y; (a.z) -= b.z;
# 637 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 640 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator*(int3 a, int3 b)
# 641 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 642 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x * b.x, a.y * b.y, a.z * b.z);
# 643 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 644 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator*(int3 a, int s)
# 645 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 646 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x * s, a.y * s, a.z * s);
# 647 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 648 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator*(int s, int3 a)
# 649 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 650 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x * s, a.y * s, a.z * s);
# 651 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 652 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator*=(int3 &a, int s)
# 653 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 654 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) *= s; (a.y) *= s; (a.z) *= s;
# 655 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 658 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator/(int3 a, int3 b)
# 659 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 660 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x / b.x, a.y / b.y, a.z / b.z);
# 661 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 662 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator/(int3 a, int s)
# 663 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 664 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x / s, a.y / s, a.z / s);
# 665 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 666 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator/(int s, int3 a)
# 667 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 668 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x / s, a.y / s, a.z / s);
# 669 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 670 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator/=(int3 &a, int s)
# 671 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 672 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) /= s; (a.y) /= s; (a.z) /= s;
# 673 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 676 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int clamp(int f, int a, int b)
# 677 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 678 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return max(a, min(f, b));
# 679 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 681 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 clamp(int3 v, int a, int b)
# 682 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 683 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
# 684 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 686 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 clamp(int3 v, int3 a, int3 b)
# 687 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 688 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
# 689 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 696 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 make_uint3(uint s)
# 697 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 698 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(s, s, s);
# 699 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 700 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 make_uint3(float3 a)
# 701 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 702 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3((unsigned)(a.x), (unsigned)(a.y), (unsigned)(a.z));
# 703 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 706 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 min(uint3 a, uint3 b)
# 707 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 708 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z));
# 709 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 712 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 max(uint3 a, uint3 b)
# 713 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 714 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z));
# 715 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 718 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator+(uint3 a, uint3 b)
# 719 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 720 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x + b.x, a.y + b.y, a.z + b.z);
# 721 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 722 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator+=(uint3 &a, uint3 b)
# 723 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 724 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) += b.x; (a.y) += b.y; (a.z) += b.z;
# 725 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 728 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator-(uint3 a, uint3 b)
# 729 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 730 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x - b.x, a.y - b.y, a.z - b.z);
# 731 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 733 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator-=(uint3 &a, uint3 b)
# 734 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 735 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) -= b.x; (a.y) -= b.y; (a.z) -= b.z;
# 736 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 739 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator*(uint3 a, uint3 b)
# 740 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 741 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x * b.x, a.y * b.y, a.z * b.z);
# 742 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 743 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator*(uint3 a, uint s)
# 744 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 745 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x * s, a.y * s, a.z * s);
# 746 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 747 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator*(uint s, uint3 a)
# 748 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 749 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x * s, a.y * s, a.z * s);
# 750 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 751 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator*=(uint3 &a, uint s)
# 752 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 753 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) *= s; (a.y) *= s; (a.z) *= s;
# 754 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 757 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator/(uint3 a, uint3 b)
# 758 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 759 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x / b.x, a.y / b.y, a.z / b.z);
# 760 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 761 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator/(uint3 a, uint s)
# 762 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 763 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x / s, a.y / s, a.z / s);
# 764 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 765 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator/(uint s, uint3 a)
# 766 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 767 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x / s, a.y / s, a.z / s);
# 768 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 769 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator/=(uint3 &a, uint s)
# 770 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 771 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) /= s; (a.y) /= s; (a.z) /= s;
# 772 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 775 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint clamp(uint f, uint a, uint b)
# 776 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 777 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return max(a, min(f, b));
# 778 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 780 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 clamp(uint3 v, uint a, uint b)
# 781 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 782 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
# 783 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 785 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 clamp(uint3 v, uint3 a, uint3 b)
# 786 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 787 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
# 788 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 39 "defines.h"
extern "C" { typedef unsigned uint; }
# 40 "defines.h"
typedef unsigned char uchar;
# 8 "tables.h"
uint edgeTable[256] = {(0), (265), (515), (778), (1030), (1295), (1541), (1804), (2060), (2309), (2575), (2822), (3082), (3331), (3593), (3840), (400), (153), (915), (666), (1430), (1183), (1941), (1692), (2460), (2197), (2975), (2710), (3482), (3219), (3993), (3728), (560), (825), (51), (314), (1590), (1855), (1077), (1340), (2620), (2869), (2111), (2358), (3642), (3891), (3129), (3376), (928), (681), (419), (170), (1958), (1711), (1445), (1196), (2988), (2725), (2479), (2214), (4010), (3747), (3497), (3232), (1120), (1385), (1635), (1898), (102), (367), (613), (876), (3180), (3429), (3695), (3942), (2154), (2403), (2665), (2912), (1520), (1273), (2035), (1786), (502), (255), (1013), (764), (3580), (3317), (4095), (3830), (2554), (2291), (3065), (2800), (1616), (1881), (1107), (1370), (598), (863), (85), (348), (3676), (3925), (3167), (3414), (2650), (2899), (2137), (2384), (1984), (1737), (1475), (1226), (966), (719), (453), (204), (4044), (3781), (3535), (3270), (3018), (2755), (2505), (2240), (2240), (2505), (2755), (3018), (3270), (3535), (3781), (4044), (204), (453), (719), (966), (1226), (1475), (1737), (1984), (2384), (2137), (2899), (2650), (3414), (3167), (3925), (3676), (348), (85), (863), (598), (1370), (1107), (1881), (1616), (2800), (3065), (2291), (2554), (3830), (4095), (3317), (3580), (764), (1013), (255), (502), (1786), (2035), (1273), (1520), (2912), (2665), (2403), (2154), (3942), (3695), (3429), (3180), (876), (613), (367), (102), (1898), (1635), (1385), (1120), (3232), (3497), (3747), (4010), (2214), (2479), (2725), (2988), (1196), (1445), (1711), (1958), (170), (419), (681), (928), (3376), (3129), (3891), (3642), (2358), (2111), (2869), (2620), (1340), (1077), (1855), (1590), (314), (51), (825), (560), (3728), (3993), (3219), (3482), (2710), (2975), (2197), (2460), (1692), (1941), (1183), (1430), (666), (915), (153), (400), (3840), (3593), (3331), (3082), (2822), (2575), (2309), (2060), (1804), (1541), (1295), (1030), (778), (515), (265), (0)};
# 46 "tables.h"
uint triTable[256][16] = {{(255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (8), (3), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (1), (9), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(1), (8), (3), (9), (8), (1), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(1), (2), (10), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (8), (3), (1), (2), (10), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(9), (2), (10), (0), (2), (9), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(2), (8), (3), (2), (10), (8), (10), (9), (8), (255), (255), (255), (255), (255), (255), (255)}, {(3), (11), (2), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (11), (2), (8), (11), (0), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(1), (9), (0), (2), (3), (11), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(1), (11), (2), (1), (9), (11), (9), (8), (11), (255), (255), (255), (255), (255), (255), (255)}, {(3), (10), (1), (11), (10), (3), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (10), (1), (0), (8), (10), (8), (11), (10), (255), (255), (255), (255), (255), (255), (255)}, {(3), (9), (0), (3), (11), (9), (11), (10), (9), (255), (255), (255), (255), (255), (255), (255)}, {(9), (8), (10), (10), (8), (11), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(4), (7), (8), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(4), (3), (0), (7), (3), (4), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (1), (9), (8), (4), (7), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(4), (1), (9), (4), (7), (1), (7), (3), (1), (255), (255), (255), (255), (255), (255), (255)}, {(1), (2), (10), (8), (4), (7), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(3), (4), (7), (3), (0), (4), (1), (2), (10), (255), (255), (255), (255), (255), (255), (255)}, {(9), (2), (10), (9), (0), (2), (8), (4), (7), (255), (255), (255), (255), (255), (255), (255)}, {(2), (10), (9), (2), (9), (7), (2), (7), (3), (7), (9), (4), (255), (255), (255), (255)}, {(8), (4), (7), (3), (11), (2), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(11), (4), (7), (11), (2), (4), (2), (0), (4), (255), (255), (255), (255), (255), (255), (255)}, {(9), (0), (1), (8), (4), (7), (2), (3), (11), (255), (255), (255), (255), (255), (255), (255)}, {(4), (7), (11), (9), (4), (11), (9), (11), (2), (9), (2), (1), (255), (255), (255), (255)}, {(3), (10), (1), (3), (11), (10), (7), (8), (4), (255), (255), (255), (255), (255), (255), (255)}, {(1), (11), (10), (1), (4), (11), (1), (0), (4), (7), (11), (4), (255), (255), (255), (255)}, {(4), (7), (8), (9), (0), (11), (9), (11), (10), (11), (0), (3), (255), (255), (255), (255)}, {(4), (7), (11), (4), (11), (9), (9), (11), (10), (255), (255), (255), (255), (255), (255), (255)}, {(9), (5), (4), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(9), (5), (4), (0), (8), (3), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (5), (4), (1), (5), (0), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(8), (5), (4), (8), (3), (5), (3), (1), (5), (255), (255), (255), (255), (255), (255), (255)}, {(1), (2), (10), (9), (5), (4), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(3), (0), (8), (1), (2), (10), (4), (9), (5), (255), (255), (255), (255), (255), (255), (255)}, {(5), (2), (10), (5), (4), (2), (4), (0), (2), (255), (255), (255), (255), (255), (255), (255)}, {(2), (10), (5), (3), (2), (5), (3), (5), (4), (3), (4), (8), (255), (255), (255), (255)}, {(9), (5), (4), (2), (3), (11), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (11), (2), (0), (8), (11), (4), (9), (5), (255), (255), (255), (255), (255), (255), (255)}, {(0), (5), (4), (0), (1), (5), (2), (3), (11), (255), (255), (255), (255), (255), (255), (255)}, {(2), (1), (5), (2), (5), (8), (2), (8), (11), (4), (8), (5), (255), (255), (255), (255)}, {(10), (3), (11), (10), (1), (3), (9), (5), (4), (255), (255), (255), (255), (255), (255), (255)}, {(4), (9), (5), (0), (8), (1), (8), (10), (1), (8), (11), (10), (255), (255), (255), (255)}, {(5), (4), (0), (5), (0), (11), (5), (11), (10), (11), (0), (3), (255), (255), (255), (255)}, {(5), (4), (8), (5), (8), (10), (10), (8), (11), (255), (255), (255), (255), (255), (255), (255)}, {(9), (7), (8), (5), (7), (9), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(9), (3), (0), (9), (5), (3), (5), (7), (3), (255), (255), (255), (255), (255), (255), (255)}, {(0), (7), (8), (0), (1), (7), (1), (5), (7), (255), (255), (255), (255), (255), (255), (255)}, {(1), (5), (3), (3), (5), (7), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(9), (7), (8), (9), (5), (7), (10), (1), (2), (255), (255), (255), (255), (255), (255), (255)}, {(10), (1), (2), (9), (5), (0), (5), (3), (0), (5), (7), (3), (255), (255), (255), (255)}, {(8), (0), (2), (8), (2), (5), (8), (5), (7), (10), (5), (2), (255), (255), (255), (255)}, {(2), (10), (5), (2), (5), (3), (3), (5), (7), (255), (255), (255), (255), (255), (255), (255)}, {(7), (9), (5), (7), (8), (9), (3), (11), (2), (255), (255), (255), (255), (255), (255), (255)}, {(9), (5), (7), (9), (7), (2), (9), (2), (0), (2), (7), (11), (255), (255), (255), (255)}, {(2), (3), (11), (0), (1), (8), (1), (7), (8), (1), (5), (7), (255), (255), (255), (255)}, {(11), (2), (1), (11), (1), (7), (7), (1), (5), (255), (255), (255), (255), (255), (255), (255)}, {(9), (5), (8), (8), (5), (7), (10), (1), (3), (10), (3), (11), (255), (255), (255), (255)}, {(5), (7), (0), (5), (0), (9), (7), (11), (0), (1), (0), (10), (11), (10), (0), (255)}, {(11), (10), (0), (11), (0), (3), (10), (5), (0), (8), (0), (7), (5), (7), (0), (255)}, {(11), (10), (5), (7), (11), (5), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(10), (6), (5), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (8), (3), (5), (10), (6), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(9), (0), (1), (5), (10), (6), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(1), (8), (3), (1), (9), (8), (5), (10), (6), (255), (255), (255), (255), (255), (255), (255)}, {(1), (6), (5), (2), (6), (1), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(1), (6), (5), (1), (2), (6), (3), (0), (8), (255), (255), (255), (255), (255), (255), (255)}, {(9), (6), (5), (9), (0), (6), (0), (2), (6), (255), (255), (255), (255), (255), (255), (255)}, {(5), (9), (8), (5), (8), (2), (5), (2), (6), (3), (2), (8), (255), (255), (255), (255)}, {(2), (3), (11), (10), (6), (5), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(11), (0), (8), (11), (2), (0), (10), (6), (5), (255), (255), (255), (255), (255), (255), (255)}, {(0), (1), (9), (2), (3), (11), (5), (10), (6), (255), (255), (255), (255), (255), (255), (255)}, {(5), (10), (6), (1), (9), (2), (9), (11), (2), (9), (8), (11), (255), (255), (255), (255)}, {(6), (3), (11), (6), (5), (3), (5), (1), (3), (255), (255), (255), (255), (255), (255), (255)}, {(0), (8), (11), (0), (11), (5), (0), (5), (1), (5), (11), (6), (255), (255), (255), (255)}, {(3), (11), (6), (0), (3), (6), (0), (6), (5), (0), (5), (9), (255), (255), (255), (255)}, {(6), (5), (9), (6), (9), (11), (11), (9), (8), (255), (255), (255), (255), (255), (255), (255)}, {(5), (10), (6), (4), (7), (8), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(4), (3), (0), (4), (7), (3), (6), (5), (10), (255), (255), (255), (255), (255), (255), (255)}, {(1), (9), (0), (5), (10), (6), (8), (4), (7), (255), (255), (255), (255), (255), (255), (255)}, {(10), (6), (5), (1), (9), (7), (1), (7), (3), (7), (9), (4), (255), (255), (255), (255)}, {(6), (1), (2), (6), (5), (1), (4), (7), (8), (255), (255), (255), (255), (255), (255), (255)}, {(1), (2), (5), (5), (2), (6), (3), (0), (4), (3), (4), (7), (255), (255), (255), (255)}, {(8), (4), (7), (9), (0), (5), (0), (6), (5), (0), (2), (6), (255), (255), (255), (255)}, {(7), (3), (9), (7), (9), (4), (3), (2), (9), (5), (9), (6), (2), (6), (9), (255)}, {(3), (11), (2), (7), (8), (4), (10), (6), (5), (255), (255), (255), (255), (255), (255), (255)}, {(5), (10), (6), (4), (7), (2), (4), (2), (0), (2), (7), (11), (255), (255), (255), (255)}, {(0), (1), (9), (4), (7), (8), (2), (3), (11), (5), (10), (6), (255), (255), (255), (255)}, {(9), (2), (1), (9), (11), (2), (9), (4), (11), (7), (11), (4), (5), (10), (6), (255)}, {(8), (4), (7), (3), (11), (5), (3), (5), (1), (5), (11), (6), (255), (255), (255), (255)}, {(5), (1), (11), (5), (11), (6), (1), (0), (11), (7), (11), (4), (0), (4), (11), (255)}, {(0), (5), (9), (0), (6), (5), (0), (3), (6), (11), (6), (3), (8), (4), (7), (255)}, {(6), (5), (9), (6), (9), (11), (4), (7), (9), (7), (11), (9), (255), (255), (255), (255)}, {(10), (4), (9), (6), (4), (10), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(4), (10), (6), (4), (9), (10), (0), (8), (3), (255), (255), (255), (255), (255), (255), (255)}, {(10), (0), (1), (10), (6), (0), (6), (4), (0), (255), (255), (255), (255), (255), (255), (255)}, {(8), (3), (1), (8), (1), (6), (8), (6), (4), (6), (1), (10), (255), (255), (255), (255)}, {(1), (4), (9), (1), (2), (4), (2), (6), (4), (255), (255), (255), (255), (255), (255), (255)}, {(3), (0), (8), (1), (2), (9), (2), (4), (9), (2), (6), (4), (255), (255), (255), (255)}, {(0), (2), (4), (4), (2), (6), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(8), (3), (2), (8), (2), (4), (4), (2), (6), (255), (255), (255), (255), (255), (255), (255)}, {(10), (4), (9), (10), (6), (4), (11), (2), (3), (255), (255), (255), (255), (255), (255), (255)}, {(0), (8), (2), (2), (8), (11), (4), (9), (10), (4), (10), (6), (255), (255), (255), (255)}, {(3), (11), (2), (0), (1), (6), (0), (6), (4), (6), (1), (10), (255), (255), (255), (255)}, {(6), (4), (1), (6), (1), (10), (4), (8), (1), (2), (1), (11), (8), (11), (1), (255)}, {(9), (6), (4), (9), (3), (6), (9), (1), (3), (11), (6), (3), (255), (255), (255), (255)}, {(8), (11), (1), (8), (1), (0), (11), (6), (1), (9), (1), (4), (6), (4), (1), (255)}, {(3), (11), (6), (3), (6), (0), (0), (6), (4), (255), (255), (255), (255), (255), (255), (255)}, {(6), (4), (8), (11), (6), (8), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(7), (10), (6), (7), (8), (10), (8), (9), (10), (255), (255), (255), (255), (255), (255), (255)}, {(0), (7), (3), (0), (10), (7), (0), (9), (10), (6), (7), (10), (255), (255), (255), (255)}, {(10), (6), (7), (1), (10), (7), (1), (7), (8), (1), (8), (0), (255), (255), (255), (255)}, {(10), (6), (7), (10), (7), (1), (1), (7), (3), (255), (255), (255), (255), (255), (255), (255)}, {(1), (2), (6), (1), (6), (8), (1), (8), (9), (8), (6), (7), (255), (255), (255), (255)}, {(2), (6), (9), (2), (9), (1), (6), (7), (9), (0), (9), (3), (7), (3), (9), (255)}, {(7), (8), (0), (7), (0), (6), (6), (0), (2), (255), (255), (255), (255), (255), (255), (255)}, {(7), (3), (2), (6), (7), (2), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(2), (3), (11), (10), (6), (8), (10), (8), (9), (8), (6), (7), (255), (255), (255), (255)}, {(2), (0), (7), (2), (7), (11), (0), (9), (7), (6), (7), (10), (9), (10), (7), (255)}, {(1), (8), (0), (1), (7), (8), (1), (10), (7), (6), (7), (10), (2), (3), (11), (255)}, {(11), (2), (1), (11), (1), (7), (10), (6), (1), (6), (7), (1), (255), (255), (255), (255)}, {(8), (9), (6), (8), (6), (7), (9), (1), (6), (11), (6), (3), (1), (3), (6), (255)}, {(0), (9), (1), (11), (6), (7), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(7), (8), (0), (7), (0), (6), (3), (11), (0), (11), (6), (0), (255), (255), (255), (255)}, {(7), (11), (6), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(7), (6), (11), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(3), (0), (8), (11), (7), (6), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (1), (9), (11), (7), (6), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(8), (1), (9), (8), (3), (1), (11), (7), (6), (255), (255), (255), (255), (255), (255), (255)}, {(10), (1), (2), (6), (11), (7), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(1), (2), (10), (3), (0), (8), (6), (11), (7), (255), (255), (255), (255), (255), (255), (255)}, {(2), (9), (0), (2), (10), (9), (6), (11), (7), (255), (255), (255), (255), (255), (255), (255)}, {(6), (11), (7), (2), (10), (3), (10), (8), (3), (10), (9), (8), (255), (255), (255), (255)}, {(7), (2), (3), (6), (2), (7), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(7), (0), (8), (7), (6), (0), (6), (2), (0), (255), (255), (255), (255), (255), (255), (255)}, {(2), (7), (6), (2), (3), (7), (0), (1), (9), (255), (255), (255), (255), (255), (255), (255)}, {(1), (6), (2), (1), (8), (6), (1), (9), (8), (8), (7), (6), (255), (255), (255), (255)}, {(10), (7), (6), (10), (1), (7), (1), (3), (7), (255), (255), (255), (255), (255), (255), (255)}, {(10), (7), (6), (1), (7), (10), (1), (8), (7), (1), (0), (8), (255), (255), (255), (255)}, {(0), (3), (7), (0), (7), (10), (0), (10), (9), (6), (10), (7), (255), (255), (255), (255)}, {(7), (6), (10), (7), (10), (8), (8), (10), (9), (255), (255), (255), (255), (255), (255), (255)}, {(6), (8), (4), (11), (8), (6), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(3), (6), (11), (3), (0), (6), (0), (4), (6), (255), (255), (255), (255), (255), (255), (255)}, {(8), (6), (11), (8), (4), (6), (9), (0), (1), (255), (255), (255), (255), (255), (255), (255)}, {(9), (4), (6), (9), (6), (3), (9), (3), (1), (11), (3), (6), (255), (255), (255), (255)}, {(6), (8), (4), (6), (11), (8), (2), (10), (1), (255), (255), (255), (255), (255), (255), (255)}, {(1), (2), (10), (3), (0), (11), (0), (6), (11), (0), (4), (6), (255), (255), (255), (255)}, {(4), (11), (8), (4), (6), (11), (0), (2), (9), (2), (10), (9), (255), (255), (255), (255)}, {(10), (9), (3), (10), (3), (2), (9), (4), (3), (11), (3), (6), (4), (6), (3), (255)}, {(8), (2), (3), (8), (4), (2), (4), (6), (2), (255), (255), (255), (255), (255), (255), (255)}, {(0), (4), (2), (4), (6), (2), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(1), (9), (0), (2), (3), (4), (2), (4), (6), (4), (3), (8), (255), (255), (255), (255)}, {(1), (9), (4), (1), (4), (2), (2), (4), (6), (255), (255), (255), (255), (255), (255), (255)}, {(8), (1), (3), (8), (6), (1), (8), (4), (6), (6), (10), (1), (255), (255), (255), (255)}, {(10), (1), (0), (10), (0), (6), (6), (0), (4), (255), (255), (255), (255), (255), (255), (255)}, {(4), (6), (3), (4), (3), (8), (6), (10), (3), (0), (3), (9), (10), (9), (3), (255)}, {(10), (9), (4), (6), (10), (4), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(4), (9), (5), (7), (6), (11), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (8), (3), (4), (9), (5), (11), (7), (6), (255), (255), (255), (255), (255), (255), (255)}, {(5), (0), (1), (5), (4), (0), (7), (6), (11), (255), (255), (255), (255), (255), (255), (255)}, {(11), (7), (6), (8), (3), (4), (3), (5), (4), (3), (1), (5), (255), (255), (255), (255)}, {(9), (5), (4), (10), (1), (2), (7), (6), (11), (255), (255), (255), (255), (255), (255), (255)}, {(6), (11), (7), (1), (2), (10), (0), (8), (3), (4), (9), (5), (255), (255), (255), (255)}, {(7), (6), (11), (5), (4), (10), (4), (2), (10), (4), (0), (2), (255), (255), (255), (255)}, {(3), (4), (8), (3), (5), (4), (3), (2), (5), (10), (5), (2), (11), (7), (6), (255)}, {(7), (2), (3), (7), (6), (2), (5), (4), (9), (255), (255), (255), (255), (255), (255), (255)}, {(9), (5), (4), (0), (8), (6), (0), (6), (2), (6), (8), (7), (255), (255), (255), (255)}, {(3), (6), (2), (3), (7), (6), (1), (5), (0), (5), (4), (0), (255), (255), (255), (255)}, {(6), (2), (8), (6), (8), (7), (2), (1), (8), (4), (8), (5), (1), (5), (8), (255)}, {(9), (5), (4), (10), (1), (6), (1), (7), (6), (1), (3), (7), (255), (255), (255), (255)}, {(1), (6), (10), (1), (7), (6), (1), (0), (7), (8), (7), (0), (9), (5), (4), (255)}, {(4), (0), (10), (4), (10), (5), (0), (3), (10), (6), (10), (7), (3), (7), (10), (255)}, {(7), (6), (10), (7), (10), (8), (5), (4), (10), (4), (8), (10), (255), (255), (255), (255)}, {(6), (9), (5), (6), (11), (9), (11), (8), (9), (255), (255), (255), (255), (255), (255), (255)}, {(3), (6), (11), (0), (6), (3), (0), (5), (6), (0), (9), (5), (255), (255), (255), (255)}, {(0), (11), (8), (0), (5), (11), (0), (1), (5), (5), (6), (11), (255), (255), (255), (255)}, {(6), (11), (3), (6), (3), (5), (5), (3), (1), (255), (255), (255), (255), (255), (255), (255)}, {(1), (2), (10), (9), (5), (11), (9), (11), (8), (11), (5), (6), (255), (255), (255), (255)}, {(0), (11), (3), (0), (6), (11), (0), (9), (6), (5), (6), (9), (1), (2), (10), (255)}, {(11), (8), (5), (11), (5), (6), (8), (0), (5), (10), (5), (2), (0), (2), (5), (255)}, {(6), (11), (3), (6), (3), (5), (2), (10), (3), (10), (5), (3), (255), (255), (255), (255)}, {(5), (8), (9), (5), (2), (8), (5), (6), (2), (3), (8), (2), (255), (255), (255), (255)}, {(9), (5), (6), (9), (6), (0), (0), (6), (2), (255), (255), (255), (255), (255), (255), (255)}, {(1), (5), (8), (1), (8), (0), (5), (6), (8), (3), (8), (2), (6), (2), (8), (255)}, {(1), (5), (6), (2), (1), (6), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(1), (3), (6), (1), (6), (10), (3), (8), (6), (5), (6), (9), (8), (9), (6), (255)}, {(10), (1), (0), (10), (0), (6), (9), (5), (0), (5), (6), (0), (255), (255), (255), (255)}, {(0), (3), (8), (5), (6), (10), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(10), (5), (6), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(11), (5), (10), (7), (5), (11), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(11), (5), (10), (11), (7), (5), (8), (3), (0), (255), (255), (255), (255), (255), (255), (255)}, {(5), (11), (7), (5), (10), (11), (1), (9), (0), (255), (255), (255), (255), (255), (255), (255)}, {(10), (7), (5), (10), (11), (7), (9), (8), (1), (8), (3), (1), (255), (255), (255), (255)}, {(11), (1), (2), (11), (7), (1), (7), (5), (1), (255), (255), (255), (255), (255), (255), (255)}, {(0), (8), (3), (1), (2), (7), (1), (7), (5), (7), (2), (11), (255), (255), (255), (255)}, {(9), (7), (5), (9), (2), (7), (9), (0), (2), (2), (11), (7), (255), (255), (255), (255)}, {(7), (5), (2), (7), (2), (11), (5), (9), (2), (3), (2), (8), (9), (8), (2), (255)}, {(2), (5), (10), (2), (3), (5), (3), (7), (5), (255), (255), (255), (255), (255), (255), (255)}, {(8), (2), (0), (8), (5), (2), (8), (7), (5), (10), (2), (5), (255), (255), (255), (255)}, {(9), (0), (1), (5), (10), (3), (5), (3), (7), (3), (10), (2), (255), (255), (255), (255)}, {(9), (8), (2), (9), (2), (1), (8), (7), (2), (10), (2), (5), (7), (5), (2), (255)}, {(1), (3), (5), (3), (7), (5), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (8), (7), (0), (7), (1), (1), (7), (5), (255), (255), (255), (255), (255), (255), (255)}, {(9), (0), (3), (9), (3), (5), (5), (3), (7), (255), (255), (255), (255), (255), (255), (255)}, {(9), (8), (7), (5), (9), (7), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(5), (8), (4), (5), (10), (8), (10), (11), (8), (255), (255), (255), (255), (255), (255), (255)}, {(5), (0), (4), (5), (11), (0), (5), (10), (11), (11), (3), (0), (255), (255), (255), (255)}, {(0), (1), (9), (8), (4), (10), (8), (10), (11), (10), (4), (5), (255), (255), (255), (255)}, {(10), (11), (4), (10), (4), (5), (11), (3), (4), (9), (4), (1), (3), (1), (4), (255)}, {(2), (5), (1), (2), (8), (5), (2), (11), (8), (4), (5), (8), (255), (255), (255), (255)}, {(0), (4), (11), (0), (11), (3), (4), (5), (11), (2), (11), (1), (5), (1), (11), (255)}, {(0), (2), (5), (0), (5), (9), (2), (11), (5), (4), (5), (8), (11), (8), (5), (255)}, {(9), (4), (5), (2), (11), (3), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(2), (5), (10), (3), (5), (2), (3), (4), (5), (3), (8), (4), (255), (255), (255), (255)}, {(5), (10), (2), (5), (2), (4), (4), (2), (0), (255), (255), (255), (255), (255), (255), (255)}, {(3), (10), (2), (3), (5), (10), (3), (8), (5), (4), (5), (8), (0), (1), (9), (255)}, {(5), (10), (2), (5), (2), (4), (1), (9), (2), (9), (4), (2), (255), (255), (255), (255)}, {(8), (4), (5), (8), (5), (3), (3), (5), (1), (255), (255), (255), (255), (255), (255), (255)}, {(0), (4), (5), (1), (0), (5), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(8), (4), (5), (8), (5), (3), (9), (0), (5), (0), (3), (5), (255), (255), (255), (255)}, {(9), (4), (5), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(4), (11), (7), (4), (9), (11), (9), (10), (11), (255), (255), (255), (255), (255), (255), (255)}, {(0), (8), (3), (4), (9), (7), (9), (11), (7), (9), (10), (11), (255), (255), (255), (255)}, {(1), (10), (11), (1), (11), (4), (1), (4), (0), (7), (4), (11), (255), (255), (255), (255)}, {(3), (1), (4), (3), (4), (8), (1), (10), (4), (7), (4), (11), (10), (11), (4), (255)}, {(4), (11), (7), (9), (11), (4), (9), (2), (11), (9), (1), (2), (255), (255), (255), (255)}, {(9), (7), (4), (9), (11), (7), (9), (1), (11), (2), (11), (1), (0), (8), (3), (255)}, {(11), (7), (4), (11), (4), (2), (2), (4), (0), (255), (255), (255), (255), (255), (255), (255)}, {(11), (7), (4), (11), (4), (2), (8), (3), (4), (3), (2), (4), (255), (255), (255), (255)}, {(2), (9), (10), (2), (7), (9), (2), (3), (7), (7), (4), (9), (255), (255), (255), (255)}, {(9), (10), (7), (9), (7), (4), (10), (2), (7), (8), (7), (0), (2), (0), (7), (255)}, {(3), (7), (10), (3), (10), (2), (7), (4), (10), (1), (10), (0), (4), (0), (10), (255)}, {(1), (10), (2), (8), (7), (4), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(4), (9), (1), (4), (1), (7), (7), (1), (3), (255), (255), (255), (255), (255), (255), (255)}, {(4), (9), (1), (4), (1), (7), (0), (8), (1), (8), (7), (1), (255), (255), (255), (255)}, {(4), (0), (3), (7), (4), (3), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(4), (8), (7), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(9), (10), (8), (10), (11), (8), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(3), (0), (9), (3), (9), (11), (11), (9), (10), (255), (255), (255), (255), (255), (255), (255)}, {(0), (1), (10), (0), (10), (8), (8), (10), (11), (255), (255), (255), (255), (255), (255), (255)}, {(3), (1), (10), (11), (3), (10), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(1), (2), (11), (1), (11), (9), (9), (11), (8), (255), (255), (255), (255), (255), (255), (255)}, {(3), (0), (9), (3), (9), (11), (1), (2), (9), (2), (11), (9), (255), (255), (255), (255)}, {(0), (2), (11), (8), (0), (11), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(3), (2), (11), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(2), (3), (8), (2), (8), (10), (10), (8), (9), (255), (255), (255), (255), (255), (255), (255)}, {(9), (10), (2), (0), (9), (2), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(2), (3), (8), (2), (8), (10), (0), (1), (8), (1), (10), (8), (255), (255), (255), (255)}, {(1), (10), (2), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(1), (3), (8), (9), (1), (8), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (9), (1), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(0), (3), (8), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}, {(255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255), (255)}};
# 307 "tables.h"
uint numVertsTable[256] = {(0), (3), (3), (6), (3), (6), (6), (9), (3), (6), (6), (9), (6), (9), (9), (6), (3), (6), (6), (9), (6), (9), (9), (12), (6), (9), (9), (12), (9), (12), (12), (9), (3), (6), (6), (9), (6), (9), (9), (12), (6), (9), (9), (12), (9), (12), (12), (9), (6), (9), (9), (6), (9), (12), (12), (9), (9), (12), (12), (9), (12), (15), (15), (6), (3), (6), (6), (9), (6), (9), (9), (12), (6), (9), (9), (12), (9), (12), (12), (9), (6), (9), (9), (12), (9), (12), (12), (15), (9), (12), (12), (15), (12), (15), (15), (12), (6), (9), (9), (12), (9), (12), (6), (9), (9), (12), (12), (15), (12), (15), (9), (6), (9), (12), (12), (9), (12), (15), (9), (6), (12), (15), (15), (12), (15), (6), (12), (3), (3), (6), (6), (9), (6), (9), (9), (12), (6), (9), (9), (12), (9), (12), (12), (9), (6), (9), (9), (12), (9), (12), (12), (15), (9), (6), (12), (9), (12), (9), (15), (6), (6), (9), (9), (12), (9), (12), (12), (15), (9), (12), (12), (15), (12), (15), (15), (12), (9), (12), (12), (9), (12), (15), (15), (12), (12), (9), (15), (6), (15), (12), (6), (3), (6), (9), (9), (12), (9), (12), (12), (15), (9), (12), (12), (15), (6), (9), (9), (6), (9), (12), (12), (15), (12), (15), (15), (6), (12), (9), (15), (12), (9), (6), (12), (3), (9), (12), (12), (15), (12), (15), (9), (12), (12), (15), (15), (6), (9), (12), (6), (3), (6), (9), (9), (6), (9), (12), (6), (3), (9), (6), (12), (3), (6), (3), (3), (0)};
# 49 "marchingCubes_kernel.cu"
static texture< unsigned, 1, cudaReadModeElementType> edgeTex;
# 50 "marchingCubes_kernel.cu"
static texture< unsigned, 1, cudaReadModeElementType> triTex;
# 51 "marchingCubes_kernel.cu"
static texture< unsigned, 1, cudaReadModeElementType> numVertsTex;
# 54 "marchingCubes_kernel.cu"
static texture< unsigned char, 1, cudaReadModeNormalizedFloat> volumeTex;
# 57 "marchingCubes_kernel.cu"
extern "C" void allocateTextures(uint **d_edgeTable, uint **d_triTable, uint **d_numVertsTable)
# 58 "marchingCubes_kernel.cu"
{
# 59 "marchingCubes_kernel.cu"
__cudaSafeCall(cudaMalloc((void **)d_edgeTable, (256) * sizeof(uint)), "marchingCubes_kernel.cu", 59);
# 60 "marchingCubes_kernel.cu"
__cudaSafeCall(cudaMemcpy((void *)(*d_edgeTable), (void *)(edgeTable), (256) * sizeof(uint), cudaMemcpyHostToDevice), "marchingCubes_kernel.cu", 60);
# 61 "marchingCubes_kernel.cu"
auto cudaChannelFormatDesc channelDesc = cudaCreateChannelDesc(32, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 62 "marchingCubes_kernel.cu"
__cudaSafeCall(cudaBindTexture(0, edgeTex, *d_edgeTable, channelDesc), "marchingCubes_kernel.cu", 62);
# 64 "marchingCubes_kernel.cu"
__cudaSafeCall(cudaMalloc((void **)d_triTable, (256 * 16) * sizeof(uint)), "marchingCubes_kernel.cu", 64);
# 65 "marchingCubes_kernel.cu"
__cudaSafeCall(cudaMemcpy((void *)(*d_triTable), (void *)(triTable), (256 * 16) * sizeof(uint), cudaMemcpyHostToDevice), "marchingCubes_kernel.cu", 65);
# 66 "marchingCubes_kernel.cu"
__cudaSafeCall(cudaBindTexture(0, triTex, *d_triTable, channelDesc), "marchingCubes_kernel.cu", 66);
# 68 "marchingCubes_kernel.cu"
__cudaSafeCall(cudaMalloc((void **)d_numVertsTable, (256) * sizeof(uint)), "marchingCubes_kernel.cu", 68);
# 69 "marchingCubes_kernel.cu"
__cudaSafeCall(cudaMemcpy((void *)(*d_numVertsTable), (void *)(numVertsTable), (256) * sizeof(uint), cudaMemcpyHostToDevice), "marchingCubes_kernel.cu", 69);
# 70 "marchingCubes_kernel.cu"
__cudaSafeCall(cudaBindTexture(0, numVertsTex, *d_numVertsTable, channelDesc), "marchingCubes_kernel.cu", 70);
# 71 "marchingCubes_kernel.cu"
}
# 74 "marchingCubes_kernel.cu"
extern "C" void bindVolumeTexture(uchar *d_volume)
# 75 "marchingCubes_kernel.cu"
{
# 77 "marchingCubes_kernel.cu"
__cudaSafeCall(cudaBindTexture(0, volumeTex, d_volume, cudaCreateChannelDesc(8, 0, 0, 0, cudaChannelFormatKindUnsigned)), "marchingCubes_kernel.cu", 77);
# 78 "marchingCubes_kernel.cu"
}

# 1 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.h" 1

extern "C" {


extern void __device_stub__Z13classifyVoxelPjS_Ph5uint3S1_S1_j6float3f(uint *, uint *, uchar *, uint3, uint3, uint3, uint, float3, float);
# 17 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.h"
}
# 81 "marchingCubes_kernel.cu" 2
# 195 "marchingCubes_kernel.cu"
extern "C" void launch_classifyVoxel(dim3 grid, dim3 threads, uint *voxelVerts, uint *voxelOccupied, uchar *volume, uint3
# 196 "marchingCubes_kernel.cu"
gridSize, uint3 gridSizeShift, uint3 gridSizeMask, uint numVoxels, float3
# 197 "marchingCubes_kernel.cu"
voxelSize, float isoValue)
# 198 "marchingCubes_kernel.cu"
{
# 200 "marchingCubes_kernel.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : __device_stub__Z13classifyVoxelPjS_Ph5uint3S1_S1_j6float3f(voxelVerts, voxelOccupied, volume, gridSize, gridSizeShift, gridSizeMask, numVoxels, voxelSize, isoValue);
# 203 "marchingCubes_kernel.cu"
__cutilCheckMsg("classifyVoxel failed", "marchingCubes_kernel.cu", 203);
# 204 "marchingCubes_kernel.cu"
}

# 1 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.h" 1

extern "C" {





extern void __device_stub__Z13compactVoxelsPjS_S_j(uint *, uint *, uint *, uint);
# 17 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.h"
}
# 207 "marchingCubes_kernel.cu" 2
# 220 "marchingCubes_kernel.cu"
extern "C" void launch_compactVoxels(dim3 grid, dim3 threads, uint *compactedVoxelArray, uint *voxelOccupied, uint *voxelOccupiedScan, uint numVoxels)
# 221 "marchingCubes_kernel.cu"
{
# 222 "marchingCubes_kernel.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : __device_stub__Z13compactVoxelsPjS_S_j(compactedVoxelArray, voxelOccupied, voxelOccupiedScan, numVoxels);
# 224 "marchingCubes_kernel.cu"
__cutilCheckMsg("compactVoxels failed", "marchingCubes_kernel.cu", 224);
# 225 "marchingCubes_kernel.cu"
}

# 1 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.h" 1

extern "C" {
# 11 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.h"
extern void __device_stub__Z17generateTrianglesP6float4S0_PjS1_5uint3S2_S2_6float3fjj(float4 *, float4 *, uint *, uint *, uint3, uint3, uint3, float3, float, uint, uint);





}
# 228 "marchingCubes_kernel.cu" 2
# 370 "marchingCubes_kernel.cu"
extern "C" void launch_generateTriangles(dim3 grid, dim3 threads, float4 *
# 371 "marchingCubes_kernel.cu"
pos, float4 *norm, uint *compactedVoxelArray, uint *numVertsScanned, uint3
# 372 "marchingCubes_kernel.cu"
gridSize, uint3 gridSizeShift, uint3 gridSizeMask, float3
# 373 "marchingCubes_kernel.cu"
voxelSize, float isoValue, uint activeVoxels, uint maxVerts)
# 374 "marchingCubes_kernel.cu"
{
# 375 "marchingCubes_kernel.cu"
cudaConfigureCall(grid, 32) ? ((void)0) : __device_stub__Z17generateTrianglesP6float4S0_PjS1_5uint3S2_S2_6float3fjj(pos, norm, compactedVoxelArray, numVertsScanned, gridSize, gridSizeShift, gridSizeMask, voxelSize, isoValue, activeVoxels, maxVerts);
# 381 "marchingCubes_kernel.cu"
__cutilCheckMsg("generateTriangles failed", "marchingCubes_kernel.cu", 381);
# 382 "marchingCubes_kernel.cu"
}

# 1 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.h" 1

extern "C" {
# 14 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.h"
extern void __device_stub__Z18generateTriangles2P6float4S0_PjS1_Ph5uint3S3_S3_6float3fjj(float4 *, float4 *, uint *, uint *, uchar *, uint3, uint3, uint3, float3, float, uint, uint);


}
# 385 "marchingCubes_kernel.cu" 2
# 551 "marchingCubes_kernel.cu"
extern "C" void launch_generateTriangles2(dim3 grid, dim3 threads, float4 *
# 552 "marchingCubes_kernel.cu"
pos, float4 *norm, uint *compactedVoxelArray, uint *numVertsScanned, uchar *volume, uint3
# 553 "marchingCubes_kernel.cu"
gridSize, uint3 gridSizeShift, uint3 gridSizeMask, float3
# 554 "marchingCubes_kernel.cu"
voxelSize, float isoValue, uint activeVoxels, uint maxVerts)
# 555 "marchingCubes_kernel.cu"
{
# 556 "marchingCubes_kernel.cu"
cudaConfigureCall(grid, 32) ? ((void)0) : __device_stub__Z18generateTriangles2P6float4S0_PjS1_Ph5uint3S3_S3_6float3fjj(pos, norm, compactedVoxelArray, numVertsScanned, volume, gridSize, gridSizeShift, gridSizeMask, voxelSize, isoValue, activeVoxels, maxVerts);
# 562 "marchingCubes_kernel.cu"
__cutilCheckMsg("generateTriangles2 failed", "marchingCubes_kernel.cu", 562);
# 563 "marchingCubes_kernel.cu"
}

# 1 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.c" 1

extern "C" {

# 1 "/tmp/tmpxft_0000134d_00000000-3_marchingCubes_kernel.fatbin.c" 1
# 1 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h" 1
# 83 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
extern "C" {
# 97 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* debug;
} __cudaFatDebugEntry;


typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 144 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 157 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
typedef struct __cudaFatCudaBinaryRec {
    unsigned long magic;
    unsigned long version;
    unsigned long gpuInfoVersion;
    char* key;
    char* ident;
    char* usageMode;
    __cudaFatPtxEntry *ptx;
    __cudaFatCubinEntry *cubin;
    __cudaFatDebugEntry *debug;
    void* debugInfo;
    unsigned int flags;
    __cudaFatSymbol *exported;
    __cudaFatSymbol *imported;
    struct __cudaFatCudaBinaryRec *dependends;
} __cudaFatCudaBinary;
# 191 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode
    } __cudaFatCompilationPolicy;
# 214 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 225 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );


}
# 2 "/tmp/tmpxft_0000134d_00000000-3_marchingCubes_kernel.fatbin.c" 2




extern "C" {


static const unsigned long long __deviceText_$sm_13$[] = {
0x6365746968637261ull,0x6d737b2065727574ull,0x6962610a7d33315full,0x206e6f6973726576ull,
0x6f6d0a7d317b2020ull,0x202020656d616e64ull,0x696275637b202020ull,0x6c706d61730a7d6eull,
0x616e090a7b207265ull,0x203d20202020656dull,0x6554656d756c6f76ull,0x6e75786574090a78ull,
0x7d0a33203d207469ull,0x72656c706d61730aull,0x656d616e090a7b20ull,0x756e203d20202020ull,
0x655473747265566dull,0x6e75786574090a78ull,0x7d0a32203d207469ull,0x72656c706d61730aull,
0x656d616e090a7b20ull,0x7274203d20202020ull,0x6574090a78655469ull,0x203d2074696e7578ull,
0x706d61730a7d0a31ull,0x6e090a7b2072656cull,0x3d20202020656d61ull,0x7865546567646520ull,
0x696e75786574090aull,0x0a7d0a30203d2074ull,0x090a7b2065646f63ull,0x5f203d20656d616eull,
0x7373616c6333315aull,0x6c65786f56796669ull,0x753568505f536a50ull,0x535f315333746e69ull,
0x616f6c66366a5f31ull,0x656d6c090a663374ull,0x73090a30203d206dull,0x3639203d206d656dull,
0x3d2020676572090aull,0x726162090a323120ull,0x63090a30203d2020ull,0x090a7b2074736e6full,
0x6d616e6765730909ull,0x736e6f63203d2065ull,0x6765730909090a74ull,0x31203d20206d756eull,
0x7366666f0909090aull,0x0a30203d20207465ull,0x7365747962090909ull,0x0a3233203d202020ull,
0x0a7b206d656d0909ull,0x3030307830090909ull,0x7830203130303030ull,0x3230303030303030ull,
0x3030303030783020ull,0x3030783020343030ull,0x0a20383030303030ull,0x3030307830090909ull,
0x7830203031303030ull,0x3032303030303030ull,0x3030303030783020ull,0x3030783020303430ull,
0x0a20303830303030ull,0x090a7d090a7d0909ull,0x2065646f636e6962ull,0x3061783009090a7bull,
0x3020353065343030ull,0x3837303032343078ull,0x3030306178302030ull,0x3078302039303834ull,
0x2030383730303234ull,0x303034783009090aull,0x7830203530323032ull,0x3038373831303030ull,
0x3430303061783020ull,0x3430783020393063ull,0x0a20303837303032ull,0x3030303278300909ull,
0x3078302035303230ull,0x2030383738303034ull,0x3234303030617830ull,0x3234307830203930ull,
0x090a203038373030ull,0x3032303034783009ull,0x3030783020353032ull,0x3020303837383130ull,
0x3030303030306178ull,0x3030343078302031ull,0x09090a2030383730ull,0x3238303030327830ull,
0x3031317830203831ull,0x7830203030656630ull,0x3130633030303033ull,0x3030303465783020ull,
0x3009090a20303837ull,0x3138666633313278ull,0x6666663078302064ull,0x6478302066666666ull,
0x2031323465303030ull,0x3730303234307830ull,0x783009090a203038ull,0x3130343130303031ull,
0x6330303434783020ull,0x3033783020303837ull,0x3020393065303830ull,0x3837303030346178ull,
0x34783009090a2030ull,0x2063303230343030ull,0x6366303031317830ull,0x3030367830203430ull,
0x7830203131303035ull,0x3038376330303030ull,0x3033783009090a20ull,0x3020643063303130ull,
0x3837303030346578ull,0x3031303378302030ull,0x6378302031313830ull,0x2030383730303134ull,
0x333132783009090aull,0x7830203530366666ull,0x6666666666666630ull,0x6533303064783020ull,
0x3430783020353232ull,0x0a20303837303032ull,0x3430303678300909ull,0x3078302064303030ull,
0x2030383730313030ull,0x3631303030317830ull,0x3034347830203131ull,0x090a203038376330ull,
0x3039303033783009ull,0x3461783020353132ull,0x3020303837303030ull,0x3032393130303278ull,
0x3030303078302039ull,0x09090a2033303030ull,0x3230613030347830ull,0x3030307830203532ull,
0x7830203038373030ull,0x3930323032303033ull,0x3030303461783020ull,0x3009090a20303837ull,
0x3030393130303278ull,0x3030303078302035ull,0x3478302033303030ull,0x2039323231363030ull,
0x3730303030307830ull,0x783009090a203038ull,0x3132303062303036ull,0x3432303030783020ull,
0x3033783020303837ull,0x3020353065303130ull,0x3837303030346178ull,0x36783009090a2030ull,
0x2035323031373030ull,0x3738323030307830ull,0x3130337830203038ull,0x7830203132303130ull,
0x3038373030313463ull,0x3034783009090a20ull,0x3020643138303130ull,0x3837303030303078ull,
0x3031303378302030ull,0x6378302035323231ull,0x2030383730303134ull,0x303036783009090aull,
0x7830203132303061ull,0x3038373032303030ull,0x3030303036783020ull,0x3030783020353161ull,
0x0a20303837633130ull,0x3230303478300909ull,0x3078302039323230ull,0x2030383730303030ull,
0x3031363030367830ull,0x3030307830206430ull,0x090a203038373432ull,0x6536303064783009ull,
0x3430783020643130ull,0x3020303837303032ull,0x3261303031303378ull,0x3031346378302035ull,
0x09090a2030383730ull,0x3030333030367830ull,0x3030307830203932ull,0x7830203038373832ull,
0x3531346666333132ull,0x6666666630783020ull,0x3009090a20666666ull,0x3265383130303278ull,
0x3030303078302064ull,0x3678302033303030ull,0x2035323830303030ull,0x3734323030307830ull,
0x783009090a203038ull,0x3930343130313033ull,0x3030313463783020ull,0x3033783020303837ull,
0x3020643161303730ull,0x3837303030346178ull,0x33783009090a2030ull,0x2039326130623030ull,
0x3730303034617830ull,0x3030327830203038ull,0x7830206432303130ull,0x3038376330303430ull,
0x3036783009090a20ull,0x3020353130303230ull,0x3837383030303078ull,0x3030303278302030ull,
0x3078302031303231ull,0x2030383763303034ull,0x303032783009090aull,0x7830203830343962ull,
0x6330653862303032ull,0x3830303032783020ull,0x3032783020343065ull,0x0a20303034393030ull,
0x3630336678300909ull,0x3078302039303630ull,0x2030383730303030ull,0x3630363033667830ull,
0x3030307830206430ull,0x090a203038373030ull,0x3036303366783009ull,0x3030783020353036ull,
0x3020303837303030ull,0x3036303630336678ull,0x3030303078302031ull,0x09090a2030383730ull,
0x3431393030347830ull,0x3030307830206432ull,0x7830203038373030ull,0x6432363138303036ull,
0x6332303030783020ull,0x3009090a20303837ull,0x3236313031303378ull,0x3031346378302064ull,
0x3678302030383730ull,0x2031313431383030ull,0x3763323030307830ull,0x783009090a203038ull,
0x6466666532303062ull,0x3031323036783020ull,0x3062783020386537ull,0x3020646666653330ull,
0x6637303132303678ull,0x32783009090a2038ull,0x2039303830303030ull,0x3730323034307830ull,
0x3030627830203038ull,0x7830206466666531ull,0x3863373031323036ull,0x3032783009090a20ull,
0x3020313132313030ull,0x3837303130343078ull,0x3030303178302030ull,0x3078302035313866ull,
0x2030383763333036ull,0x303032783009090aull,0x7830203430653832ull,0x3830343932303032ull,
0x3861303032783020ull,0x3032783020633038ull,0x0a20303165383430ull,0x3030306278300909ull,
0x3678302064666665ull,0x2038643730313230ull,0x3030303030317830ull,0x3434327830203531ull,
0x090a203038326630ull,0x3036303366783009ull,0x3030783020353036ull,0x3020303837303030ull,
0x3036303630336678ull,0x3030303078302039ull,0x09090a2030383730ull,0x3630363033667830ull,
0x3030307830206430ull,0x7830203038373030ull,0x3131363036303366ull,0x3030303030783020ull,
0x3009090a20303837ull,0x3161303030313278ull,0x3034343078302035ull,0x3278302030383236ull,
0x2035316130303031ull,0x3239303434307830ull,0x783009090a203038ull,0x6466666531303062ull,
0x3031323036783020ull,0x3132783020386437ull,0x3020353161303030ull,0x3832633034343078ull,
0x62783009090a2030ull,0x2064666665323030ull,0x3730313230367830ull,0x3031327830203863ull,
0x7830203531613030ull,0x3038323131343430ull,0x3062783009090a20ull,0x3020646666653330ull,
0x6437303132303678ull,0x3030313278302038ull,0x3078302035316130ull,0x2030383234313434ull,
0x303062783009090aull,0x7830206466666534ull,0x3863373031323036ull,0x3030303132783020ull,
0x3430783020353161ull,0x0a20303832393134ull,0x3030313278300909ull,0x3078302035316130ull,
0x2030383263313434ull,0x3765363030337830ull,0x3234367830206466ull,0x090a203863376330ull,
0x3030303031783009ull,0x3430783020313061ull,0x3020303837633330ull,0x3034303430336678ull,
0x3030303078302031ull,0x09090a2034383730ull,0x3030303030337830ull,0x3030307830203330ull,
0x7830203038323030ull,0x3530633032303033ull,0x3030313463783020ull,0x3009090a20303837ull,
0x3038633030303278ull,0x3032343078302039ull,0x3378302030383734ull,0x2064303030633730ull,
0x3734313034367830ull,0x783009090a203038ull,0x3130343065303064ull,0x3030633061783020ull,
0x3061783020303837ull,0x3020393036303030ull,0x3837343130633278ull,0x32783009090a2030ull,
0x2031306363303030ull,0x3734303234307830ull,0x3030647830203038ull,0x7830203930303065ull,
0x3138373030633061ull,0x630a7d0a7d090a20ull,0x6e090a7b2065646full,0x5a5f203d20656d61ull,
0x6172656e65673831ull,0x676e616972546574ull,0x6c6636503273656cull,0x505f30533474616full,
0x753568505f31536aull,0x535f335333746e69ull,0x74616f6c66365f33ull,0x6d6c090a6a6a6633ull,
0x090a30203d206d65ull,0x34203d206d656d73ull,0x676572090a343237ull,0x090a3133203d2020ull,
0x31203d2020726162ull,0x2074736e6f63090aull,0x6765730909090a7bull,0x63203d20656d616eull,
0x0909090a74736e6full,0x20206d756e676573ull,0x6f0909090a31203dull,0x3d20207465736666ull,
0x79620909090a3020ull,0x203d202020736574ull,0x6d656d09090a3834ull,0x78300909090a7b20ull,
0x3130303030303030ull,0x3030386537783020ull,0x3030783020303030ull,0x3020323030303030ull,
0x3030303030303078ull,0x78300909090a2034ull,0x3830303030303030ull,0x3030303030783020ull,
0x3030783020303130ull,0x3020303230303030ull,0x3430303030303078ull,0x78300909090a2030ull,
0x3030303030386662ull,0x3030386533783020ull,0x6666783020303030ull,0x3020666666666666ull,
0x6666666666666678ull,0x090a7d09090a2064ull,0x6f636e6962090a7dull,0x3009090a7b206564ull,
0x3065343030306178ull,0x3032343078302035ull,0x6178302030383730ull,0x2039303834303030ull,
0x3730303234307830ull,0x783009090a203038ull,0x3530323032303034ull,0x3831303030783020ull,
0x3061783020303837ull,0x3020393063343030ull,0x3837303032343078ull,0x32783009090a2030ull,
0x2035303230303030ull,0x3738303034307830ull,0x3030617830203038ull,0x7830203930323430ull,
0x3038373030323430ull,0x3034783009090a20ull,0x3020393032303230ull,0x3837383130303078ull,
0x3030306178302030ull,0x3078302031333030ull,0x2030383730303034ull,0x303132783009090aull,
0x7830203530366630ull,0x3038373832363430ull,0x3130303032783020ull,0x3430783020313038ull,
0x0a20303837383030ull,0x3030303378300909ull,0x3678302064663330ull,0x2038633734303034ull,
0x3230303030317830ull,0x3034307830203130ull,0x090a203038326333ull,0x3032303033783009ull,
0x3463783020313030ull,0x3020303837303031ull,0x3030643030303278ull,0x3032343078302031ull,
0x09090a2030383730ull,0x3030653030647830ull,0x6330387830203134ull,0x7830203038373030ull,
0x6430306530303132ull,0x3832363430783020ull,0x3009090a20303837ull,0x3036323030303178ull,
0x3030343478302031ull,0x3378302030383763ull,0x2031303032303030ull,0x3730303034657830ull,
0x783009090a203038ull,0x3533636530303064ull,0x3030323430783020ull,0x3031783020303837ull,
0x3020313063313030ull,0x3837633030343478ull,0x31783009090a2030ull,0x2035303432303030ull,
0x3763303034347830ull,0x3030327830203038ull,0x7830203131613931ull,0x3330303030303030ull,
0x3033783009090a20ull,0x3020393061313330ull,0x3837303030346178ull,0x3430303378302030ull,
0x6178302035313630ull,0x2030383730303034ull,0x303033783009090aull,0x7830203530303231ull,
0x3038373030303465ull,0x6666333132783020ull,0x6630783020313165ull,0x0a20666666666666ull,
0x3430303478300909ull,0x3078302064303230ull,0x2030383730303030ull,0x6165313030647830ull,
0x3234307830203933ull,0x090a203038373030ull,0x3035303036783009ull,0x3030783020643130ull,
0x3020303837633030ull,0x3032306130303478ull,0x3030303078302035ull,0x09090a2030383730ull,
0x6331343030337830ull,0x3034617830206430ull,0x7830203038373030ull,0x3931303062303036ull,
0x3430303030783020ull,0x3009090a20303837ull,0x3265303031303378ull,0x3031346378302031ull,
0x3478302030383730ull,0x2064313230363030ull,0x3730303030307830ull,0x783009090a203038ull,
0x3530633931303032ull,0x3030303030783020ull,0x3033783020333030ull,0x3020393163303031ull,
0x3837303031346378ull,0x36783009090a2030ull,0x2039303030343030ull,0x3730323030307830ull,
0x3030367830203038ull,0x7830206431303037ull,0x3038376331303030ull,0x3033783009090a20ull,
0x3020313138303130ull,0x3837303030346178ull,0x6130303678302030ull,0x3078302035313030ull,
0x2030383738313030ull,0x303031783009090aull,0x7830203530653130ull,0x3038376330303434ull,
0x3030313033783020ull,0x3463783020313265ull,0x0a20303837303031ull,0x3430303478300909ull,
0x3478302038323630ull,0x2038313031313030ull,0x3431333030347830ull,0x3030307830206431ull,
0x090a203038373030ull,0x3036303036783009ull,0x3030783020353230ull,0x3020303837303230ull,
0x3234303530303678ull,0x3230303078302031ull,0x09090a2030383738ull,0x3231303030367830ull,
0x3030307830203931ull,0x7830203038373831ull,0x6431363132303036ull,0x6331303030783020ull,
0x3009090a20303837ull,0x3063666633313278ull,0x6666663078302064ull,0x6478302066666666ull,
0x2064333865303130ull,0x3730303234307830ull,0x783009090a203038ull,0x3132303130313033ull,
0x3030313463783020ull,0x3033783020303837ull,0x3020393163303031ull,0x3837303031346378ull,
0x33783009090a2030ull,0x2064316530303130ull,0x3730303134637830ull,0x3030327830203038ull,
0x7830203932653931ull,0x3330303030303030ull,0x3036783009090a20ull,0x3020313234303430ull,
0x3837303230303078ull,0x3030303678302030ull,0x3078302039303031ull,0x2030383738313030ull,
0x303036783009090aull,0x7830203530343132ull,0x3038376331303030ull,0x3061303033783020ull,
0x3461783020393236ull,0x0a20303837303030ull,0x3330303378300909ull,0x6178302031306531ull,
0x2030383730303034ull,0x3239383030327830ull,0x3030327830206330ull,0x090a203431343838ull,
0x3831303032783009ull,0x3032783020303234ull,0x3020343232383930ull,0x3130383330303278ull,
0x6130303278302038ull,0x09090a2030313638ull,0x3439353030327830ull,0x3030327830203830ull,
0x7830203430303835ull,0x6331303839303032ull,0x3939303032783020ull,0x3009090a20343134ull,
0x3030396130303278ull,0x3830303278302063ull,0x6678302030303038ull,0x2039313630363033ull,
0x3730303030307830ull,0x783009090a203038ull,0x3131363036303366ull,0x3030303030783020ull,
0x3366783020303837ull,0x3020353036303630ull,0x3837303030303078ull,0x66783009090a2030ull,
0x2039303630363033ull,0x3730303030307830ull,0x3030317830203038ull,0x7830203132386630ull,
0x3038376333303630ull,0x3062783009090a20ull,0x3020646635663630ull,0x6637303132303678ull,
0x3430306278302038ull,0x3678302064663566ull,0x2038653730313230ull,0x303062783009090aull,
0x7830206466356631ull,0x3863373031323036ull,0x6632303062783020ull,0x3036783020646635ull,
0x0a20386437303132ull,0x3030303178300909ull,0x3278302031323030ull,0x2030383266303434ull,
0x3630363033667830ull,0x3030307830206431ull,0x090a203038373030ull,0x3036303366783009ull,
0x3030783020643036ull,0x3020303837303030ull,0x3136303630336678ull,0x3030303078302035ull,
0x09090a2030383730ull,0x3630363033667830ull,0x3030307830203130ull,0x7830203038373030ull,
0x3132303130303132ull,0x6130343430783020ull,0x3009090a20303832ull,0x3230313030313278ull,
0x3034343078302031ull,0x6278302030383264ull,0x2064663566373030ull,0x3730313230367830ull,
0x783009090a203865ull,0x3132303130303132ull,0x3031343430783020ull,0x3062783020303832ull,
0x3020646635663530ull,0x6437303132303678ull,0x32783009090a2038ull,0x2031323031303031ull,
0x3236313434307830ull,0x3030627830203038ull,0x7830206466356633ull,0x3863373031323036ull,
0x3132783009090a20ull,0x3020313230313030ull,0x3832393134343078ull,0x3030306278302030ull,
0x3078302064326330ull,0x2030383730313034ull,0x303062783009090aull,0x7830203932346630ull,
0x3038373831323830ull,0x3130303132783020ull,0x3430783020313230ull,0x0a20303832633134ull,
0x3138306278300909ull,0x3678302064663731ull,0x2038633730313530ull,0x3431303030317830ull,
0x3034307830203532ull,0x090a203038376333ull,0x3139383063783009ull,0x3030783020643236ull,
0x3020303836303034ull,0x3232313938306378ull,0x3034303078302039ull,0x09090a2030383630ull,
0x6531303030617830ull,0x3034347830206433ull,0x7830203038373430ull,0x3534656566303165ull,
0x3032363030783020ull,0x3009090a20303837ull,0x3436313030303978ull,0x3030303078302064ull,
0x3378302030383730ull,0x2064323831333030ull,0x3730303134637830ull,0x783009090a203038ull,
0x6433383132303033ull,0x3030313463783020ull,0x3062783020303837ull,0x3020393465653030ull,
0x3837343432303078ull,0x61783009090a2030ull,0x2031356331303030ull,0x3734303034347830ull,
0x3130637830203038ull,0x7830203833343133ull,0x3832363966303032ull,0x3062783009090a20ull,
0x3020393532323030ull,0x3837383430343078ull,0x3431316578302030ull,0x3078302064343066ull,
0x2030383730323630ull,0x303061783009090aull,0x7830206432613130ull,0x3038373430303434ull,
0x3130303030783020ull,0x3063783020353034ull,0x0a20303837303030ull,0x6530306578300909ull,
0x3078302039326332ull,0x2030383734343030ull,0x3632303030627830ull,0x3038307830203135ull,
0x090a203038376334ull,0x6662303165783009ull,0x3030783020353532ull,0x3020303837303236ull,
0x3061333030343078ull,0x3232346578302031ull,0x09090a2030383738ull,0x6331343130657830ull,
0x3030307830203932ull,0x7830203038376334ull,0x3536613230303062ull,0x3435303830783020ull,
0x3009090a20303837ull,0x3063333030343078ull,0x3232346578302031ull,0x6578302030383738ull,
0x2039326331393130ull,0x3734353030307830ull,0x783009090a203038ull,0x3533383030303062ull,
0x3830303430783020ull,0x3062783020303837ull,0x3020643234663030ull,0x3837303132383078ull,
0x30783009090a2030ull,0x2031306533303034ull,0x3738323234657830ull,0x3830627830203038ull,
0x7830206466623131ull,0x3863373031353036ull,0x3031783009090a20ull,0x3020393236313030ull,
0x3837633330363078ull,0x3938306378302030ull,0x3078302035336131ull,0x2030383630303430ull,
0x383063783009090aull,0x7830206432343139ull,0x3038363030343030ull,0x3130303039783020ull,
0x3063783020343361ull,0x0a20633236316430ull,0x3030306278300909ull,0x3078302064353432ull,
0x2030383738343038ull,0x3066303030627830ull,0x3230307830203136ull,0x090a203038376334ull,
0x3262303065783009ull,0x3030783020353365ull,0x3020303837383430ull,0x3630333030306278ull,
0x3430383078302039ull,0x09090a2030383763ull,0x6166303034307830ull,0x3234657830203130ull,
0x7830203038373433ull,0x3533363161313065ull,0x6334303030783020ull,0x3009090a20303837ull,
0x3063663030343078ull,0x3332346578302031ull,0x6578302030383734ull,0x2064323631393130ull,
0x3734353030307830ull,0x783009090a203038ull,0x3933343030303062ull,0x3430303430783020ull,
0x3062783020303837ull,0x3020353334663030ull,0x3837383032383078ull,0x30783009090a2030ull,
0x2031306566303034ull,0x3763323234657830ull,0x3830627830203038ull,0x7830206466643131ull,
0x3863373031353036ull,0x3031783009090a20ull,0x3020643261313030ull,0x3837633330343078ull,
0x3938306378302030ull,0x3078302039336331ull,0x2030383630303430ull,0x383063783009090aull,
0x7830203533363139ull,0x3038363030343030ull,0x3130303039783020ull,0x3063783020383363ull,
0x0a20343361316530ull,0x3030306278300909ull,0x3078302064363232ull,0x2030383738343038ull,
0x3633643030657830ull,0x3030307830203933ull,0x090a203038373834ull,0x3330303062783009ull,
0x3830783020313730ull,0x3020303837303630ull,0x3061623130343078ull,0x3332346578302031ull,
0x09090a2030383738ull,0x6131633130657830ull,0x3030307830203933ull,0x7830203038373036ull,
0x3130636231303430ull,0x3833323465783020ull,0x3009090a20303837ull,0x3361313931306578ull,
0x3530303078302035ull,0x6278302030383734ull,0x2064333230303030ull,0x3738313034307830ull,
0x783009090a203038ull,0x3933346630303062ull,0x3430323830783020ull,0x3430783020303837ull,
0x3020313065623130ull,0x3837343332346578ull,0x62783009090a2030ull,0x2064666631313830ull,
0x3730313530367830ull,0x3030317830203863ull,0x7830203533633130ull,0x3038376333303630ull,
0x3063783009090a20ull,0x3020643365313938ull,0x3836303034303078ull,0x3938306378302030ull,
0x3078302039336131ull,0x2030383630303430ull,0x303039783009090aull,0x7830206333653130ull,
0x3833633166303063ull,0x3230303062783020ull,0x3830783020643332ull,0x0a20303837343430ull,
0x6530306578300909ull,0x3078302035376531ull,0x2030383734343030ull,0x6137323034307830ull,
0x3234657830203130ull,0x090a203038373437ull,0x3230303062783009ull,0x3830783020353736ull,
0x3020303837303630ull,0x3763316431306578ull,0x3630303078302039ull,0x09090a2030383730ull,
0x6337323034307830ull,0x3234657830203130ull,0x7830203038373837ull,0x3933633139313065ull,
0x3435303030783020ull,0x3009090a20303837ull,0x3065373230343078ull,0x3332346578302031ull,
0x6278302030383738ull,0x2039336530303030ull,0x3734313034307830ull,0x783009090a203038ull,
0x6466643131383062ull,0x3031353036783020ull,0x3062783020386337ull,0x3020353634663030ull,
0x3837633132383078ull,0x63783009090a2030ull,0x2035363233393830ull,0x3630303430307830ull,
0x3830637830203038ull,0x7830203933633139ull,0x3038363030343030ull,0x3039783009090a20ull,
0x3020383363313030ull,0x3332336530306378ull,0x3631306578302038ull,0x3078302039356331ull,
0x2030383734343030ull,0x303430783009090aull,0x7830203130613333ull,0x3038373835323465ull,
0x3134313065783020ull,0x3030783020393563ull,0x0a20303837633430ull,0x3330343078300909ull,
0x6578302031306333ull,0x2030383738353234ull,0x3266303030627830ull,0x3230307830203935ull,
0x090a203038373435ull,0x3230303062783009ull,0x3830783020353663ull,0x3020303837383530ull,
0x3363313931306578ull,0x3530303078302039ull,0x09090a2030383738ull,0x6533333034307830ull,
0x3234657830203130ull,0x7830203038373833ull,0x3933613030303062ull,0x6330303430783020ull,
0x3009090a20303837ull,0x6664313138306278ull,0x3135303678302064ull,0x6278302038633730ull,
0x2039373466303030ull,0x3734313238307830ull,0x783009090a203038ull,0x3937633339383063ull,
0x3030343030783020ull,0x3063783020303836ull,0x3020393363313938ull,0x3836303034303078ull,
0x39783009090a2030ull,0x2038336331303030ull,0x6333653030637830ull,0x3130657830203833ull,
0x7830203937633137ull,0x3038373834303030ull,0x3430783009090a20ull,0x3020313061663330ull,
0x3837383732346578ull,0x6131306578302030ull,0x3078302039366331ull,0x2030383763343030ull,
0x303430783009090aull,0x7830203130636633ull,0x3038373836323465ull,0x3139313065783020ull,
0x3030783020393363ull,0x0a20303837383530ull,0x3330343078300909ull,0x6578302031306566ull,
0x2030383738333234ull,0x3630303030627830ull,0x3034307830203933ull,0x090a203038373030ull,
0x3131383062783009ull,0x3036783020646664ull,0x3020386337303135ull,0x3634663030306278ull,
0x3032383078302039ull,0x09090a2030383763ull,0x3433393830637830ull,0x3430307830203936ull,
0x7830203038363030ull,0x3933633139383063ull,0x3030343030783020ull,0x3009090a20303836ull,
0x3363313030303978ull,0x6530306378302038ull,0x6578302038333433ull,0x2039366331623130ull,
0x3738343030307830ull,0x783009090a203038ull,0x3130616234303430ull,0x3836323465783020ull,
0x3065783020303837ull,0x3020393663316331ull,0x3837303630303078ull,0x30783009090a2030ull,
0x2031306362343034ull,0x3738363234657830ull,0x3130657830203038ull,0x7830203936633139ull,
0x3038373835303030ull,0x3062783009090a20ull,0x3020393330303030ull,0x3837633130343078ull,
0x3430343078302030ull,0x6578302031306562ull,0x2030383738363234ull,0x383062783009090aull,
0x7830206466643131ull,0x3863373031353036ull,0x6630303062783020ull,0x3830783020393634ull,
0x0a20303837303032ull,0x3938306378300909ull,0x3078302039363433ull,0x2030383630303430ull,
0x6331393830637830ull,0x3430307830203933ull,0x090a203038363030ull,0x3130303039783009ull,
0x3063783020383363ull,0x3020383334336530ull,0x3663316630306578ull,0x3430303078302039ull,
0x09090a2030383734ull,0x6137353034307830ull,0x3234657830203130ull,0x7830203038373836ull,
0x3936633164313065ull,0x3036303030783020ull,0x3009090a20303837ull,0x3363313931306578ull,
0x3530303078302039ull,0x3078302030383738ull,0x2031306337353034ull,0x3738363234657830ull,
0x783009090a203038ull,0x6431653030303062ull,0x3831303830783020ull,0x3430783020303837ull,
0x3020313065373530ull,0x3837383332346578ull,0x62783009090a2030ull,0x2064666630313830ull,
0x3730313530367830ull,0x3030317830203863ull,0x7830203931323130ull,0x3038376333303430ull,
0x3063783009090a20ull,0x3020393132313938ull,0x3836303034303078ull,0x3938306378302030ull,
0x3078302064316530ull,0x2030383630303430ull,0x303039783009090aull,0x7830206331653030ull,
0x6331633037303063ull,0x3066303065783020ull,0x3030783020393165ull,0x0a20303837343430ull,
0x3630343078300909ull,0x6578302031306133ull,0x2030383738313234ull,0x6530343130657830ull,
0x3030307830203532ull,0x090a203038376334ull,0x3230303062783009ull,0x3830783020393163ull,
0x3020303837343530ull,0x3063333630343078ull,0x3232346578302031ull,0x09090a2030383734ull,
0x6530363030657830ull,0x3030307830206431ull,0x7830203038373435ull,0x3531613030303062ull,
0x3031303830783020ull,0x3009090a20303837ull,0x3065333630343078ull,0x3132346578302031ull,
0x6278302030383763ull,0x2064666230313830ull,0x3730313530367830ull,0x783009090a203863ull,
0x3131343130303031ull,0x6333303630783020ull,0x3063783020303837ull,0x3020313134313938ull,
0x3836303034303078ull,0x63783009090a2030ull,0x2035316130393830ull,0x3630303430307830ull,
0x3030397830203038ull,0x7830203431613030ull,0x3031383035303063ull,0x3065783009090a20ull,
0x3020353138303731ull,0x3837383430303078ull,0x3431306578302030ull,0x3078302064313830ull,
0x2030383763343030ull,0x303430783009090aull,0x7830203130616636ull,0x3038373431323465ull,
0x6636303430783020ull,0x3465783020313063ull,0x0a20303837633132ull,0x3630306578300909ull,
0x3078302031313830ull,0x2030383734353030ull,0x3630303030627830ull,0x3038307830206430ull,
0x090a203038373830ull,0x6636303430783009ull,0x3465783020313065ull,0x3020303837303132ull,
0x6637303138306278ull,0x3135303678302064ull,0x09090a2038633730ull,0x3631303030317830ull,
0x3034307830203930ull,0x7830203038376333ull,0x3930363139383063ull,0x3030343030783020ull,
0x3009090a20303836ull,0x3036303938306378ull,0x3034303078302064ull,0x3978302030383630ull,
0x2063303630303030ull,0x3430333030637830ull,0x783009090a203830ull,0x6430343037313065ull,
0x3834303030783020ull,0x3430783020303837ull,0x3020313061623730ull,0x3837633032346578ull,
0x65783009090a2030ull,0x2064303430633130ull,0x3730363030307830ull,0x3034307830203038ull,
0x7830203130636237ull,0x3038376330323465ull,0x3065783009090a20ull,0x3020643034303630ull,
0x3837343530303078ull,0x3030306278302030ull,0x3078302039303030ull,0x2030383734303038ull,
0x303430783009090aull,0x7830203130656237ull,0x3038376330323465ull,0x3031383062783020ull,
0x3036783020646635ull,0x0a20386337303135ull,0x3030303178300909ull,0x3078302035306131ull,
0x2030383763333036ull,0x6131393830637830ull,0x3430307830203530ull,0x090a203038363030ull,
0x3039383063783009ull,0x3030783020393034ull,0x3020303836303034ull,0x3034303030303978ull,
0x3230306378302038ull,0x09090a2034303230ull,0x3230663030657830ull,0x3030307830203930ull,
0x7830203038373434ull,0x6430323063313065ull,0x3036303030783020ull,0x3009090a20303837ull,
0x3061373830343078ull,0x3032346578302031ull,0x6578302030383738ull,0x2035303230363030ull,
0x3734353030307830ull,0x783009090a203038ull,0x3130633738303430ull,0x6330323465783020ull,
0x3430783020303837ull,0x3020313065373830ull,0x3837343032346578ull,0x38783009090a2030ull,
0x2033306566663136ull,0x3030303030307830ull,0x3030627830203030ull,0x7830206466356630ull,
0x3863373031323036ull,0x3032783009090a20ull,0x3020353030393030ull,0x3030303030303078ull,
0x3030303178302062ull,0x3078302035303031ull,0x2030303563333034ull,0x303031783009090aull,
0x7830203130323030ull,0x3038376333303630ull,0x3034303366783020ull,0x3030783020313034ull,
0x0a20343837303030ull,0x6337303378300909ull,0x3678302064663130ull,0x2038633738303034ull,
0x3030303030337830ull,0x3030307830203330ull,0x090a203038323030ull,0x3232303033783009ull,
0x3463783020393030ull,0x3020303837303031ull,0x3332303430303378ull,0x3031346378302064ull,
0x09090a2030383730ull,0x3866303031327830ull,0x3634307830203933ull,0x7830203038376332ull,
0x3934386630303031ull,0x6333303430783020ull,0x3009090a20303837ull,0x3334643030303278ull,
0x3032343078302035ull,0x3278302030383738ull,0x2031346539313030ull,0x3030303030307830ull,
0x783009090a203330ull,0x3534653932303032ull,0x3030303030783020ull,0x3064783020333030ull,
0x3020313161316530ull,0x3837303063303878ull,0x32783009090a2030ull,0x2063303061323130ull,
0x3461663030327830ull,0x3030327830203830ull,0x7830203530343230ull,0x3038373434303430ull,
0x3366783009090a20ull,0x3020643032303230ull,0x3837303030303078ull,0x3230336678302034ull,
0x3078302039303230ull,0x2034383730303030ull,0x303366783009090aull,0x7830203530323032ull,
0x3438373030303030ull,0x3035303033783020ull,0x3463783020643036ull,0x0a20303837303031ull,
0x3530303378300909ull,0x6378302039303430ull,0x2030383730303134ull,0x3230353030337830ull,
0x3134637830203530ull,0x090a203038373030ull,0x3863303032783009ull,0x3032783020633036ull,
0x3020383038393230ull,0x3038313030303278ull,0x3030343078302035ull,0x09090a2030383734ull,
0x3630333030337830ull,0x3134637830206431ull,0x7830203038373030ull,0x3132363032303033ull,
0x3030313463783020ull,0x3009090a20303837ull,0x3134303330303378ull,0x3031346378302035ull,
0x3378302030383730ull,0x2039313430323030ull,0x3730303134637830ull,0x783009090a203038ull,
0x3930323033303033ull,0x3030313463783020ull,0x3033783020303837ull,0x3020643032303230ull,
0x3837303031346378ull,0x32783009090a2030ull,0x2063316538383030ull,0x3461343030327830ull,
0x3030327830203430ull,0x7830203031613836ull,0x3830343833303032ull,0x3030783009090a20ull,
0x3020353065303030ull,0x3837303030306378ull,0x3130303378302030ull,0x3678302064666431ull,
0x2038633763303034ull,0x303030783009090aull,0x7830203930383030ull,0x3038373030303063ull,
0x3030303030783020ull,0x3063783020643034ull,0x0a20303837303030ull,0x3531306178300909ull,
0x3078302033303063ull,0x2030303030303030ull,0x3063353130317830ull,0x3030307830203330ull,
0x090a203038323030ull,0x3034303033783009ull,0x3463783020643432ull,0x3020303837303031ull,
0x3161333030383178ull,0x3030343478302031ull,0x09090a2030383763ull,0x6333303038317830ull,
0x3034347830203531ull,0x7830203038376330ull,0x3931653330303831ull,0x6330303434783020ull,
0x3009090a20303837ull,0x3130383030303178ull,0x3866333078302064ull,0x3178302033303030ull,
0x2064306333303038ull,0x3763303034347830ull,0x783009090a203038ull,0x3532653330303831ull,
0x6330303434783020ull,0x3831783020303837ull,0x3020313263333030ull,0x3837633030343478ull,
0x31783009090a2030ull,0x2039326533303038ull,0x3763303034347830ull,0x3038317830203038ull,
0x7830203530613330ull,0x3038376330303434ull,0x3831783009090a20ull,0x3020393061333030ull,
0x3837633030343478ull,0x3030346278302030ull,0x3078302064306366ull,0x2030383763303238ull,
0x306362783009090aull,0x7830203532656630ull,0x3038373432323830ull,0x6630306362783020ull,
0x3830783020313263ull,0x0a20303837303232ull,0x3030346278300909ull,0x3078302031356166ull,
0x2030383738303238ull,0x6566303034627830ull,0x3238307830203930ull,0x090a203038373832ull,
0x6630306362783009ull,0x3830783020643261ull,0x3020303837343032ull,0x3038653331313278ull,
0x3431306378302034ull,0x09090a2034353231ull,0x3031323030637830ull,0x3030637830203832ull,
0x7830203835363062ull,0x3131323065303064ull,0x3030613061783020ull,0x3009090a20303837ull,
0x3034306230306578ull,0x3530383078302039ull,0x6578302030383734ull,0x2031313630393030ull,
0x3738323038307830ull,0x783009090a203038ull,0x6430303134313065ull,0x3835303830783020ull,
0x3031783020303837ull,0x3020643238663030ull,0x3837633330363078ull,0x32783009090a2030ull,
0x2034316365333131ull,0x3838303030317830ull,0x3030317830203032ull,0x7830203432343832ull,
0x3832363830303031ull,0x3064783009090a20ull,0x3020313261306530ull,0x3837303061306178ull,
0x3030343178302030ull,0x3478302031326133ull,0x2030383763303034ull,0x303431783009090aull,
0x7830203532633330ull,0x3038376330303434ull,0x3330303431783020ull,0x3434783020393265ull,
0x0a20303837633030ull,0x3030303178300909ull,0x3078302064323038ull,0x2033303030386633ull,
0x3238303130327830ull,0x3030307830203931ull,0x090a203330303030ull,0x3065303064783009ull,
0x3061783020313263ull,0x3020303837303061ull,0x3238663030303178ull,0x3330363078302064ull,
0x09090a2030383763ull,0x6138303130327830ull,0x3030307830203931ull,0x7830203330303030ull,
0x3032383830303031ull,0x3832303031783020ull,0x3009090a20343234ull,0x3236303030303178ull,
0x3330343078302039ull,0x6478302030383763ull,0x2031326330653030ull,0x3730306130617830ull,
0x783009090a203038ull,0x3132613330306331ull,0x6330303434783020ull,0x6331783020303837ull,
0x3020353263333030ull,0x3837633030343478ull,0x31783009090a2030ull,0x2039326533303063ull,
0x3763303034347830ull,0x3030317830203038ull,0x7830206432303830ull,0x3330303038663330ull,
0x3032783009090a20ull,0x3020353032383032ull,0x3030303030303078ull,0x6530306478302033ull,
0x6178302031323230ull,0x2030383730306130ull,0x303031783009090aull,0x7830206431386630ull,
0x3038376333303630ull,0x3830323032783020ull,0x3030783020353061ull,0x0a20333030303030ull,
0x3030303178300909ull,0x3178302034313438ull,0x2038313638303030ull,0x3230653030647830ull,
0x6130617830203131ull,0x090a203038373030ull,0x3030303066783009ull,0x3065783020313030ull,
0x3020323030303030ull,0x3434613330303278ull,0x3030303078302039ull,0x09090a2033303030ull,
0x3532303030337830ull,0x3034367830206466ull,0x7830203863373430ull,0x3330303331313031ull,
0x3030303030783020ull,0x3009090a20303832ull,0x3030303030306678ull,0x3030306578302031ull,
0x7d090a2031303030ull,0x2065646f630a7d0aull,0x20656d616e090a7bull,0x656737315a5f203dull,
0x725465746172656eull,0x5073656c676e6169ull,0x533474616f6c6636ull,0x355f31536a505f30ull,
0x5f325333746e6975ull,0x616f6c66365f3253ull,0x6c090a6a6a663374ull,0x0a30203d206d656dull,
0x203d206d656d7309ull,0x6572090a34323339ull,0x0a3336203d202067ull,0x203d202072616209ull,
0x74736e6f63090a31ull,0x65730909090a7b20ull,0x203d20656d616e67ull,0x09090a74736e6f63ull,
0x206d756e67657309ull,0x0909090a31203d20ull,0x202074657366666full,0x620909090a30203dull,
0x3d20202073657479ull,0x656d09090a383420ull,0x300909090a7b206dull,0x3030303038666278ull,
0x6334653378302030ull,0x3078302064636363ull,0x2031303030303030ull,0x3030303865377830ull,
0x300909090a203030ull,0x3030303030303078ull,0x3030303078302032ull,0x3078302034303030ull,
0x2038303030303030ull,0x3030303030307830ull,0x300909090a203031ull,0x3230303030303078ull,
0x3030303078302030ull,0x3378302030343030ull,0x2030303030303865ull,0x6666666666667830ull,
0x0a7d09090a206666ull,0x636e6962090a7d09ull,0x09090a7b2065646full,0x6534303030617830ull,
0x3234307830203530ull,0x7830203038373030ull,0x3930383430303061ull,0x3030323430783020ull,
0x3009090a20303837ull,0x3032303230303478ull,0x3130303078302035ull,0x6178302030383738ull,
0x2039306334303030ull,0x3730303234307830ull,0x783009090a203038ull,0x3530323030303032ull,
0x3830303430783020ull,0x3061783020303837ull,0x3020393032343030ull,0x3837303032343078ull,
0x34783009090a2030ull,0x2039303230323030ull,0x3738313030307830ull,0x3030617830203038ull,
0x7830206437303030ull,0x3038373030303430ull,0x3132783009090a20ull,0x3020353032663030ull,
0x3837633236343078ull,0x3030303278302030ull,0x3078302031306533ull,0x2030383738303034ull,
0x303033783009090aull,0x7830206466333030ull,0x3863373430303436ull,0x3030303031783020ull,
0x3430783020313032ull,0x0a20303832633330ull,0x3230303378300909ull,0x6378302031303030ull,
0x2030383730303134ull,0x3064303030327830ull,0x3234307830203130ull,0x090a203038373030ull,
0x3065303064783009ull,0x3038783020313830ull,0x3020303837303063ull,0x3030323030303178ull,
0x3030343478302031ull,0x09090a2030383763ull,0x3465303230647830ull,0x3234307830203530ull,
0x7830203038373030ull,0x3930303430303033ull,0x3030303465783020ull,0x3009090a20303837ull,
0x3032303030306178ull,0x3030343478302031ull,0x6478302030383734ull,0x2035303665323030ull,
0x3730303234307830ull,0x783009090a203038ull,0x3538616530303165ull,0x3030363030783020ull,
0x3061783020303837ull,0x3020313032303030ull,0x3837343030343478ull,0x63783009090a2030ull,
0x2035303234303030ull,0x3030343034307830ull,0x3230627830203330ull,0x7830206430323466ull,
0x3732313338613330ull,0x3062783009090a20ull,0x3020643861653030ull,0x3837343832303078ull,
0x3030316578302030ull,0x3078302035396365ull,0x2030383730303630ull,0x303063783009090aull,
0x7830203130323031ull,0x3038373030303030ull,0x3030303063783020ull,0x3430783020393032ull,
0x0a20333030306130ull,0x3030306378300909ull,0x3078302064303630ull,0x2033303030343034ull,
0x3634303030637830ull,0x3034307830203132ull,0x090a203330303034ull,0x3466323062783009ull,
0x3330783020393161ull,0x3020373231333861ull,0x3032303030306378ull,0x3230306378302030ull,
0x09090a2038303230ull,0x3630333030637830ull,0x3030307830203131ull,0x7830203038373030ull,
0x3531363030303063ull,0x3061303430783020ull,0x3009090a20333030ull,0x3130313830306378ull,
0x3030303078302064ull,0x6378302030383730ull,0x2039323031303030ull,0x3030613034307830ull,
0x783009090a203330ull,0x3931633030303063ull,0x3034303430783020ull,0x3063783020333030ull,
0x3020303136303430ull,0x3136303530306378ull,0x63783009090a2034ull,0x2034323031373030ull,
0x6330363030637830ull,0x3030637830206331ull,0x7830203932303161ull,0x3038373030303030ull,
0x3065783009090a20ull,0x3020393032303030ull,0x3837383030383078ull,0x3430306578302030ull,
0x3078302031333630ull,0x2030383734313038ull,0x303063783009090aull,0x7830203130633037ull,
0x3038373030303030ull,0x3139303065783020ull,0x3830783020643330ull,0x0a20303837383230ull,
0x6632306278300909ull,0x3078302031313634ull,0x2037323133386133ull,0x6330303030637830ull,
0x3034307830206430ull,0x090a203330303061ull,0x3030303065783009ull,0x3030783020353063ull,
0x3020303837383030ull,0x3163303030306578ull,0x3330303078302035ull,0x09090a2030383763ull,
0x3830303030637830ull,0x3034307830206431ull,0x7830203330303034ull,0x3130323230303031ull,
0x6330303434783020ull,0x3009090a20303837ull,0x3063303330306578ull,0x3030343078302035ull,
0x6578302030383734ull,0x2064306330333030ull,0x3734313034307830ull,0x783009090a203038ull,
0x3531653037303063ull,0x3030303030783020ull,0x3063783020303837ull,0x3020313265303030ull,
0x3030306130343078ull,0x33783009090a2033ull,0x2031303034303030ull,0x3730303034657830ull,
0x3030637830203038ull,0x7830203131613430ull,0x3330303034303430ull,0x3063783009090a20ull,
0x3020383165303530ull,0x3265303830306378ull,0x3030306478302030ull,0x3078302031303865ull,
0x2030383730303234ull,0x303062783009090aull,0x7830203139636530ull,0x3038373439323030ull,
0x3034303063783020ull,0x3030783020353138ull,0x0a20303837303030ull,0x3630306578300909ull,
0x3078302031346530ull,0x2030383730323038ull,0x3030303030617830ull,0x3034347830203130ull,
0x090a203038373430ull,0x3430303063783009ull,0x3430783020643238ull,0x3020333030303430ull,
0x3138303530306378ull,0x3030303078302035ull,0x09090a2030383730ull,0x3830303030637830ull,
0x3034307830203931ull,0x7830203330303061ull,0x3533383466323062ull,0x3338613330783020ull,
0x3009090a20373231ull,0x3236316230306378ull,0x3030303078302035ull,0x6578302030383730ull,
0x2064313830353030ull,0x3738303030307830ull,0x783009090a203038ull,0x3132383035303065ull,
0x3033303030783020ull,0x3065783020303837ull,0x3020393338303530ull,0x3837633330303078ull,
0x65783009090a2030ull,0x2035343830353030ull,0x3730343030307830ull,0x3030657830203038ull,
0x7830203932383036ull,0x3038376331303430ull,0x3065783009090a20ull,0x3020353138303630ull,
0x3837303230343078ull,0x3630306578302030ull,0x3078302035353830ull,0x2030383738333034ull,
0x303065783009090aull,0x7830203132383036ull,0x3038373434303430ull,0x3130303063783020ull,
0x3430783020393361ull,0x0a20333030303430ull,0x3930306378300909ull,0x3078302031313631ull,
0x2030383730303030ull,0x6565303031657830ull,0x3630307830203938ull,0x090a203038373030ull,
0x3130303063783009ull,0x3430783020313036ull,0x3020333030306130ull,0x3163316530306378ull,
0x3030303078302064ull,0x09090a2030383730ull,0x3631343030657830ull,0x3030307830203534ull,
0x7830203038376333ull,0x3931363134303065ull,0x3033303030783020ull,0x3009090a20303837ull,
0x3336313430306578ull,0x3430303078302031ull,0x6578302030383730ull,0x2035323631343030ull,
0x3738303030307830ull,0x783009090a203038ull,0x3533343466323062ull,0x3338613330783020ull,
0x3063783020373231ull,0x3020313163313730ull,0x3837303030303078ull,0x65783009090a2030ull,
0x2031363631303030ull,0x3734343034307830ull,0x3030657830203038ull,0x7830203935363130ull,
0x3038373432303430ull,0x3065783009090a20ull,0x3020353236313030ull,0x3837383130343078ull,
0x3030306578302030ull,0x3078302031333631ull,0x2030383730333034ull,0x303063783009090aull,
0x7830206432613130ull,0x3330303034303430ull,0x3134303065783020ull,0x3030783020393163ull,
0x0a20303837633330ull,0x3430306578300909ull,0x3078302039306331ull,0x2030383738303030ull,
0x6331303030637830ull,0x3034307830203130ull,0x090a203330303061ull,0x3430303063783009ull,
0x3430783020643134ull,0x3020333030303430ull,0x3136316230306378ull,0x3030303078302031ull,
0x09090a2030383730ull,0x6565303030627830ull,0x3230307830203939ull,0x7830203038373838ull,
0x3533633130303065ull,0x3831303430783020ull,0x3009090a20303837ull,0x3363313030306578ull,
0x3030343078302039ull,0x6378302030383738ull,0x2030313631343030ull,0x6530373030637830ull,
0x783009090a203030ull,0x3161633430303063ull,0x3034303430783020ull,0x3063783020333030ull,
0x3020393036313030ull,0x3030306130343078ull,0x65783009090a2033ull,0x2039313631343030ull,
0x3738323030307830ull,0x3030657830203038ull,0x7830206433363134ull,0x3038373435303030ull,
0x3065783009090a20ull,0x3020313436313430ull,0x3837303630303078ull,0x3430306578302030ull,
0x3078302039343631ull,0x2030383738353030ull,0x303065783009090aull,0x7830203931363132ull,
0x3038373831303430ull,0x3132303065783020ull,0x3430783020313136ull,0x0a20303837633330ull,
0x3230306578300909ull,0x3078302035343631ull,0x2030383730343034ull,0x3631323030657830ull,
0x3034307830206435ull,0x090a203038373834ull,0x3466323062783009ull,0x3330783020313463ull,
0x3020373231333861ull,0x3030353832306378ull,0x3030306378302038ull,0x09090a2063326530ull,
0x6530303030637830ull,0x3034307830206433ull,0x7830203330303061ull,0x6439303230303063ull,
0x3034303430783020ull,0x3009090a20333030ull,0x3630353230306378ull,0x3030303078302064ull,
0x6578302030383730ull,0x2031306530623030ull,0x3738323030307830ull,0x783009090a203038ull,
0x3961303530303063ull,0x3061303430783020ull,0x3063783020333030ull,0x3020313765343732ull,
0x3837303030303078ull,0x65783009090a2030ull,0x2035623035623130ull,0x3738323030307830ull,
0x3030657830203038ull,0x7830203561653066ull,0x3038373030303430ull,0x3065783009090a20ull,
0x3020313065306230ull,0x3837343130303078ull,0x6230306578302030ull,0x3078302039306530ull,
0x2030383734303030ull,0x303065783009090aull,0x7830203134653062ull,0x3038373435303030ull,
0x3062303065783020ull,0x3030783020643465ull,0x0a20303837633030ull,0x6230306578300909ull,
0x3078302031356530ull,0x2030383730363030ull,0x6530623030657830ull,0x3030307830203536ull,
0x090a203038373835ull,0x3062303065783009ull,0x3030783020316265ull,0x3020303837343230ull,
0x3665306630306578ull,0x3030343078302039ull,0x09090a2030383730ull,0x6530663030657830ull,
0x3034307830203937ull,0x7830203038373830ull,0x3934653066303065ull,0x3034303430783020ull,
0x3009090a20303837ull,0x3465306230306578ull,0x3230303078302031ull,0x6578302030383730ull,
0x2064346530663030ull,0x3763343034307830ull,0x783009090a203038ull,0x3930653066303065ull,
0x3035303430783020ull,0x3065783020303837ull,0x3020353765306230ull,0x3837303330303078ull,
0x65783009090a2030ull,0x2064616530623030ull,0x3734333030307830ull,0x3030657830203038ull,
0x7830203130653066ull,0x3038373436303430ull,0x3065783009090a20ull,0x3020353665306630ull,
0x3837306230343078ull,0x6230306578302030ull,0x3078302031626530ull,0x2030383738333030ull,
0x303065783009090aull,0x7830203135653066ull,0x3038373034303430ull,0x3066303065783020ull,
0x3430783020643265ull,0x0a20303837343730ull,0x6630306578300909ull,0x3078302031346530ull,
0x2030383763613034ull,0x6530663030657830ull,0x3034307830206433ull,0x090a203038373062ull,
0x3463313063783009ull,0x3030783020646165ull,0x3020303837303030ull,0x3130356132306578ull,
0x6230343078302064ull,0x09090a2030383734ull,0x3035623130657830ull,0x3030307830203531ull,
0x7830203038373431ull,0x3137303562313065ull,0x3430303030783020ull,0x3009090a20303837ull,
0x6230356231306578ull,0x3530303078302031ull,0x6578302030383734ull,0x2064303035623130ull,
0x3763303030307830ull,0x783009090a203038ull,0x3962303562313065ull,0x3036303030783020ull,
0x3065783020303837ull,0x3020353030356231ull,0x3837343230303078ull,0x65783009090a2030ull,
0x2035623035623130ull,0x3730323030307830ull,0x3130657830203038ull,0x7830203133303562ull,
0x3038373033303030ull,0x3065783009090a20ull,0x3020353330356231ull,0x3837343330303078ull,
0x6231306578302030ull,0x3078302031323035ull,0x2030383738333030ull,0x313065783009090aull,
0x7830203532303562ull,0x3038373835303030ull,0x3561323065783020ull,0x3430783020643630ull,
0x0a20303837343130ull,0x6132306578300909ull,0x3078302035373035ull,0x2030383730373034ull,
0x3035613230657830ull,0x3034307830203933ull,0x090a203038373062ull,0x3561323065783009ull,
0x3430783020313730ull,0x3020303837633030ull,0x3030356132306578ull,0x6230343078302064ull,
0x09090a2030383738ull,0x3035613230657830ull,0x3034307830203532ull,0x7830203038373432ull,
0x3530303561323065ull,0x3430303430783020ull,0x3009090a20303837ull,0x3130356132306578ull,
0x6230343078302035ull,0x6578302030383734ull,0x2031333035613230ull,0x3730333034307830ull,
0x783009090a203038ull,0x3533303561323065ull,0x3433303430783020ull,0x3065783020303837ull,
0x3020313230356132ull,0x3837303230343078ull,0x63783009090a2030ull,0x2031626534303030ull,
0x3030613034307830ull,0x3230657830203330ull,0x7830203161653462ull,0x3038373832303030ull,
0x3065783009090a20ull,0x3020353565346232ull,0x3837343530303078ull,0x6232306578302030ull,
0x3078302031366534ull,0x2030383730363030ull,0x323065783009090aull,0x7830203932653462ull,
0x3038373835303030ull,0x3463323065783020ull,0x3430783020646165ull,0x0a20303837306130ull,
0x6332306578300909ull,0x3078302039616534ull,0x2030383734353034ull,0x6534633230657830ull,
0x3034307830203161ull,0x090a203038373036ull,0x3463323065783009ull,0x3430783020643965ull,
0x3020303837383230ull,0x3230383030303178ull,0x3066333078302039ull,0x09090a2033303030ull,
0x3235643030627830ull,0x3134307830203535ull,0x7830206663636333ull,0x3935343364303062ull,
0x6333313430783020ull,0x3009090a20666363ull,0x3663336430306278ull,0x3331343078302031ull,
0x6278302066636363ull,0x2039366330643030ull,0x6363333134307830ull,0x783009090a206663ull,
0x3931613231383065ull,0x3832343030783020ull,0x3065783020303837ull,0x3020393563323138ull,
0x3837383234303078ull,0x65783009090a2030ull,0x2035353033313830ull,0x3738323430307830ull,
0x3830657830203038ull,0x7830203136343331ull,0x3038373832343030ull,0x3062783009090a20ull,
0x3020393434326430ull,0x6363633331343078ull,0x6430306278302066ull,0x3078302031353832ull,
0x2066636363333134ull,0x303062783009090aull,0x7830206434363264ull,0x6663636333313430ull,
0x3064303062783020ull,0x3430783020393638ull,0x0a20666363633331ull,0x3138306578300909ull,
0x3078302031313432ull,0x2030383738323430ull,0x3832313830657830ull,0x3430307830203934ull,
0x090a203038373832ull,0x3231383065783009ull,0x3030783020313536ull,0x3020303837383234ull,
0x3434333138306578ull,0x3234303078302064ull,0x09090a2030383738ull,0x3430643030627830ull,
0x3134307830203930ull,0x7830206663636333ull,0x6432363164303062ull,0x6333313430783020ull,
0x3009090a20666363ull,0x3430326430306278ull,0x3331343078302031ull,0x6278302066636363ull,
0x2039363232643030ull,0x6363333134307830ull,0x783009090a206663ull,0x3930343031383065ull,
0x3832343030783020ull,0x3065783020303837ull,0x3020353436313138ull,0x3837383234303078ull,
0x65783009090a2030ull,0x2031343032313830ull,0x3738323430307830ull,0x3830657830203038ull,
0x7830206432343331ull,0x3038373832343030ull,0x3062783009090a20ull,0x3020313030306430ull,
0x6363633331343078ull,0x6430306278302066ull,0x3078302035363233ull,0x2066636363333134ull,
0x303062783009090aull,0x7830206433653164ull,0x6663636333313430ull,0x3264303062783020ull,
0x3430783020643565ull,0x0a20666363633331ull,0x3138306578300909ull,0x3078302031303030ull,
0x2030383738323430ull,0x3233313830657830ull,0x3430307830203936ull,0x090a203038373832ull,
0x3131383065783009ull,0x3030783020643365ull,0x3020303837383234ull,0x3565323138306578ull,
0x3234303078302064ull,0x09090a2030383738ull,0x6530643030627830ull,0x3134307830206431ull,
0x7830206663636333ull,0x3536363364303062ull,0x6333313430783020ull,0x3009090a20666363ull,
0x3761336430306278ull,0x3331343078302035ull,0x6278302066636363ull,0x2039373635643030ull,
0x6363333134307830ull,0x783009090a206663ull,0x6431653031383065ull,0x3832343030783020ull,
0x3065783020303837ull,0x3020643632333138ull,0x3837383234303078ull,0x65783009090a2030ull,
0x2035366133313830ull,0x3738323430307830ull,0x3830657830203038ull,0x7830203937633331ull,
0x3038373832343030ull,0x3062783009090a20ull,0x3020393363316430ull,0x6363633331343078ull,
0x6430306278302066ull,0x3078302035376130ull,0x2066636363333134ull,0x303062783009090aull,
0x7830203137383364ull,0x6663636333313430ull,0x3564303062783020ull,0x3430783020356134ull,
0x0a20666363633331ull,0x3138306578300909ull,0x3078302035316331ull,0x2030383738323430ull,
0x6133313830657830ull,0x3430307830203933ull,0x090a203038373832ull,0x3331383065783009ull,
0x3030783020353738ull,0x3020303837383234ull,0x3732353138306578ull,0x3234303078302031ull,
0x09090a2030383738ull,0x3630643030627830ull,0x3134307830206430ull,0x7830206663636333ull,
0x3133383164303062ull,0x6333313430783020ull,0x3009090a20666363ull,0x6161316430306278ull,
0x3331343078302035ull,0x6278302066636363ull,0x2031613035643030ull,0x6363333134307830ull,
0x783009090a206663ull,0x6430363031383065ull,0x3832343030783020ull,0x3065783020303837ull,
0x3020353338313138ull,0x3837383234303078ull,0x65783009090a2030ull,0x2031333235313830ull,
0x3738323430307830ull,0x3830657830203038ull,0x7830206461303531ull,0x3038373832343030ull,
0x3062783009090a20ull,0x3020356132316430ull,0x6363633331343078ull,0x6430306278302066ull,
0x3078302035323230ull,0x2066636363333134ull,0x303062783009090aull,0x7830203161303164ull,
0x6663636333313430ull,0x3464303062783020ull,0x3430783020643965ull,0x0a20666363633331ull,
0x3138306578300909ull,0x3078302035303235ull,0x2030383738323430ull,0x3231313830657830ull,
0x3430307830203132ull,0x090a203038373832ull,0x3531383065783009ull,0x3030783020353230ull,
0x3020303837383234ull,0x3265346430306578ull,0x3465333078302039ull,0x09090a2066636363ull,
0x3866303030317830ull,0x3036307830203966ull,0x7830203038376333ull,0x6466316636303062ull,
0x3031323036783020ull,0x3009090a20386337ull,0x3963303030306278ull,0x3630343078302064ull,
0x6278302030383730ull,0x2064663166373030ull,0x3730313230367830ull,0x783009090a203865ull,
0x3937653030303062ull,0x3837303430783020ull,0x3062783020303837ull,0x3020313630663030ull,
0x3837383132383078ull,0x62783009090a2030ull,0x2038356338363130ull,0x6338353130627830ull,
0x3030627830203435ull,0x7830206466316634ull,0x3866373031323036ull,0x3062783009090a20ull,
0x3020303538383431ull,0x6138383331306278ull,0x3030306278302030ull,0x3078302035613430ull,
0x2030383763323034ull,0x303062783009090aull,0x7830206466316632ull,0x3864373031323036ull,
0x3030303031783020ull,0x3432783020396634ull,0x0a20303832633034ull,0x6131306278300909ull,
0x6278302038363038ull,0x2063353038373130ull,0x3166303030627830ull,0x3230367830206466ull,
0x090a203863373031ull,0x3730303132783009ull,0x3430783020396663ull,0x3020303832333134ull,
0x3665386231306278ull,0x3931306278302063ull,0x09090a2038616538ull,0x3166353030627830ull,
0x3230367830206466ull,0x7830203866373031ull,0x3966633730303132ull,0x3531343430783020ull,
0x3009090a20303832ull,0x3661386431306278ull,0x6331306278302034ull,0x6278302034376138ull,
0x2064663166333030ull,0x3730313230367830ull,0x783009090a203864ull,0x3966633730303132ull,
0x3831343430783020ull,0x3062783020303832ull,0x3020303736386232ull,0x3230623030303178ull,
0x62783009090a2063ull,0x2064346330303030ull,0x3730313034307830ull,0x3031327830203038ull,
0x7830203966633730ull,0x3038326531343430ull,0x3062783009090a20ull,0x3020383438383231ull,
0x3434383131306278ull,0x3030306278302034ull,0x3078302064613430ull,0x2030383730343034ull,
0x303132783009090aull,0x7830203966633730ull,0x3038323332343430ull,0x3866303062783020ull,
0x3062783020306230ull,0x0a20386261386530ull,0x3030306278300909ull,0x3078302035623630ull,
0x2030383734333034ull,0x6337303031327830ull,0x3434307830203966ull,0x090a203038323532ull,
0x3233383062783009ull,0x3036783020646637ull,0x3020386337303135ull,0x6236303030306278ull,
0x3330343078302064ull,0x09090a2030383730ull,0x3632613830637830ull,0x3430307830206434ull,
0x7830203038363030ull,0x3136363161383063ull,0x3030343030783020ull,0x3009090a20303836ull,
0x3336323030303978ull,0x3030303078302039ull,0x3378302030383730ull,0x2031336533333030ull,
0x3730303134637830ull,0x783009090a203038ull,0x3533653332303033ull,0x3030313463783020ull,
0x3063783020303837ull,0x3020383330336530ull,0x3338396430303278ull,0x62783009090a2030ull,
0x2039633634303030ull,0x3734383038307830ull,0x3030307830203038ull,0x7830203530383130ull,
0x3038373030303063ull,0x3065783009090a20ull,0x3020313334366530ull,0x3837343830303078ull,
0x3030306278302030ull,0x3078302064346134ull,0x2030383734393038ull,0x303430783009090aull,
0x7830203130363339ull,0x3038373033323465ull,0x3133313065783020ull,0x3030783020313363ull,
0x0a20303837343930ull,0x3030306278300909ull,0x3078302064633434ull,0x2030383738383038ull,
0x3833393034307830ull,0x3234657830203130ull,0x090a203038373033ull,0x3133333065783009ull,
0x3030783020313363ull,0x3020303837383830ull,0x3334323030306278ull,0x3530383078302035ull,
0x09090a2030383738ull,0x6133393034307830ull,0x3234657830203130ull,0x7830203038373033ull,
0x3133633164303065ull,0x3835303030783020ull,0x3009090a20303837ull,0x3338323030306278ull,
0x3530383078302035ull,0x3078302030383734ull,0x2031303633303034ull,0x3730333234657830ull,
0x783009090a203038ull,0x3133633164303065ull,0x3435303030783020ull,0x3062783020303837ull,
0x3020353330353030ull,0x3837633930383078ull,0x30783009090a2030ull,0x2031303833303034ull,
0x3730333234657830ull,0x3030657830203038ull,0x7830203133633164ull,0x3038376339303030ull,
0x3062783009090a20ull,0x3020393338303030ull,0x3837383030343078ull,0x3030306278302030ull,
0x3078302035333066ull,0x2030383730313238ull,0x303430783009090aull,0x7830203130613330ull,
0x3038373033323465ull,0x3133383062783020ull,0x3036783020646664ull,0x0a20386337303135ull,
0x3030303178300909ull,0x3078302031336131ull,0x2030383763333036ull,0x6331613830637830ull,
0x3430307830203933ull,0x090a203038363030ull,0x3161383063783009ull,0x3030783020353338ull,
0x3020303836303034ull,0x3363313030303978ull,0x6530306378302038ull,0x09090a2034336131ull,
0x3634303030627830ull,0x3038307830203136ull,0x7830203038376338ull,0x3933303364303065ull,
0x6338303030783020ull,0x3009090a20303837ull,0x6438343030306278ull,0x3930383078302031ull,
0x3078302030383734ull,0x2031303666393034ull,0x3738333234657830ull,0x783009090a203038ull,
0x3933613134333065ull,0x3439303030783020ull,0x3430783020303837ull,0x3020313038663930ull,
0x3837383332346578ull,0x65783009090a2030ull,0x2039336131333330ull,0x3738383030307830ull,
0x3030627830203038ull,0x7830206433323230ull,0x3038373834303830ull,0x3430783009090a20ull,
0x3020313061663930ull,0x3837383332346578ull,0x6630306578302030ull,0x3078302039336131ull,
0x2030383738343030ull,0x303062783009090aull,0x7830206433363530ull,0x3038373035303830ull,
0x6630303430783020ull,0x3465783020313036ull,0x0a20303837383332ull,0x6630306578300909ull,
0x3078302039336131ull,0x2030383730353030ull,0x3235303030627830ull,0x3038307830206433ull,
0x090a203038373061ull,0x6630303430783009ull,0x3465783020313038ull,0x3020303837383332ull,
0x3361316630306578ull,0x6130303078302035ull,0x09090a2030383730ull,0x3430303030627830ull,
0x3034307830206433ull,0x7830203038373030ull,0x3933306630303062ull,0x3830323830783020ull,
0x3009090a20303837ull,0x3061663030343078ull,0x3332346578302031ull,0x6278302030383734ull,
0x2064666631333830ull,0x3730313530367830ull,0x783009090a203863ull,0x3533633130303031ull,
0x6333303430783020ull,0x3063783020303837ull,0x3020643365316138ull,0x3836303034303078ull,
0x63783009090a2030ull,0x2039336131613830ull,0x3630303430307830ull,0x3030397830203038ull,
0x7830206333653130ull,0x3833633166303063ull,0x3062783009090a20ull,0x3020356432343030ull,
0x3837633830383078ull,0x6530306578302030ull,0x3078302064336136ull,0x2030383763383030ull,
0x303062783009090aull,0x7830203163383430ull,0x3038373039303830ull,0x6261303430783020ull,
0x3465783020313036ull,0x0a20303837633332ull,0x3033306578300909ull,0x3078302064336331ull,
0x2030383730393030ull,0x3862613034307830ull,0x3234657830203130ull,0x090a203038376333ull,
0x3133333065783009ull,0x3030783020643363ull,0x3020303837383830ull,0x3434333030306278ull,
0x3430383078302031ull,0x09090a2030383734ull,0x6162613034307830ull,0x3234657830203130ull,
0x7830203038376333ull,0x6433633130313065ull,0x3434303030783020ull,0x3009090a20303837ull,
0x3438353030306278ull,0x6130383078302031ull,0x3078302030383763ull,0x2031303662313034ull,
0x3763333234657830ull,0x783009090a203038ull,0x6433633130313065ull,0x6361303030783020ull,
0x3062783020303837ull,0x3020313465323030ull,0x3837346130383078ull,0x30783009090a2030ull,
0x2031303862313034ull,0x3763333234657830ull,0x3130657830203038ull,0x7830203933633130ull,
0x3038373461303030ull,0x3062783009090a20ull,0x3020313430303030ull,0x3837383130343078ull,
0x3030306278302030ull,0x3078302064333066ull,0x2030383730303238ull,0x303430783009090aull,
0x7830203130616231ull,0x3038373833323465ull,0x3233383062783020ull,0x3036783020646631ull,
0x0a20386337303135ull,0x3030303178300909ull,0x3078302039336531ull,0x2030383763333036ull,
0x3032613830637830ull,0x3430307830203134ull,0x090a203038363030ull,0x3161383063783009ull,
0x3030783020643363ull,0x3020303836303034ull,0x3430323030303978ull,0x3031306378302030ull,
0x09090a2063336531ull,0x3234303030627830ull,0x3038307830203134ull,0x7830203038373438ull,
0x3964303266303065ull,0x3438303030783020ull,0x3009090a20303837ull,0x6361343030306278ull,
0x3930383078302035ull,0x3078302030383730ull,0x2031303637623034ull,0x3738643234657830ull,
0x783009090a203038ull,0x3964653131333065ull,0x3039303030783020ull,0x3430783020303837ull,
0x3020313038376230ull,0x3837386432346578ull,0x65783009090a2030ull,0x2064636531333330ull,
0x3738383030307830ull,0x3030627830203038ull,0x7830203964633230ull,0x3038373836303830ull,
0x3430783009090a20ull,0x3020313061376230ull,0x3837636332346578ull,0x3633306578302030ull,
0x3078302064636531ull,0x2030383738363030ull,0x303062783009090aull,0x7830203964613230ull,
0x3038373062303830ull,0x3732303430783020ull,0x3465783020313036ull,0x0a20303837636332ull,
0x3633306578300909ull,0x3078302064636531ull,0x2030383730623030ull,0x6534303030627830ull,
0x3038307830203964ull,0x090a203038376335ull,0x3732303430783009ull,0x3465783020313038ull,
0x3020303837636332ull,0x6365313633306578ull,0x3530303078302064ull,0x09090a2030383763ull,
0x6530303030627830ull,0x3034307830206433ull,0x7830203038373431ull,0x3130613732303430ull,
0x6363323465783020ull,0x3009090a20303837ull,0x6666313338306278ull,0x3135303678302064ull,
0x6278302038633730ull,0x2064633066303030ull,0x3763313238307830ull,0x783009090a203038ull,
0x6463363661383063ull,0x3030343030783020ull,0x3063783020303836ull,0x3020643365316138ull,
0x3836303034303078ull,0x39783009090a2030ull,0x2063336531303030ull,0x3636663030637830ull,
0x3330657830206333ull,0x7830203963653132ull,0x3038373438303030ull,0x3430783009090a20ull,
0x3020313036336330ull,0x3837386332346578ull,0x3331306578302030ull,0x3078302064636531ull,
0x2030383734393030ull,0x303062783009090aull,0x7830203963633430ull,0x3038373839303830ull,
0x3363303430783020ull,0x3465783020313038ull,0x0a20303837636332ull,0x3233306578300909ull,
0x3078302064636531ull,0x2030383738393030ull,0x6335303030627830ull,0x3038307830203964ull,
0x090a203038376336ull,0x3363303430783009ull,0x3465783020313061ull,0x3020303837636332ull,
0x6365313633306578ull,0x3630303078302064ull,0x09090a2030383763ull,0x3233303030627830ull,
0x3038307830203964ull,0x7830203038373861ull,0x3130363333303430ull,0x6363323465783020ull,
0x3009090a20303837ull,0x6365313633306578ull,0x6130303078302064ull,0x6278302030383738ull,
0x2039646133303030ull,0x3738373038307830ull,0x783009090a203038ull,0x3130383333303430ull,
0x6363323465783020ull,0x3065783020303837ull,0x3020646365313633ull,0x3837383730303078ull,
0x62783009090a2030ull,0x2064336130303030ull,0x3763303034307830ull,0x3034307830203038ull,
0x7830203130613333ull,0x3038376363323465ull,0x3062783009090a20ull,0x3020646666313338ull,
0x6337303135303678ull,0x3030306278302038ull,0x3078302064633066ull,0x2030383734313238ull,
0x383063783009090aull,0x7830206463363661ull,0x3038363030343030ull,0x3161383063783020ull,
0x3030783020643365ull,0x0a20303836303034ull,0x3030303978300909ull,0x6378302063336531ull,
0x2063333636663030ull,0x6531383130657830ull,0x3030307830206463ull,0x090a203038376338ull,
0x6663303430783009ull,0x3465783020313036ull,0x3020303837636332ull,0x6365313433306578ull,
0x3930303078302064ull,0x09090a2030383734ull,0x3866633034307830ull,0x3234657830203130ull,
0x7830203038376363ull,0x6463653132333065ull,0x3839303030783020ull,0x3009090a20303837ull,
0x6461353030306278ull,0x6230383078302031ull,0x3078302030383738ull,0x2031306166633034ull,
0x3763633234657830ull,0x783009090a203038ull,0x6463653134333065ull,0x3862303030783020ull,
0x3062783020303837ull,0x3020316465353030ull,0x3837343630383078ull,0x30783009090a2030ull,
0x2031303666333034ull,0x3763633234657830ull,0x3330657830203038ull,0x7830206463653134ull,
0x3038373436303030ull,0x3062783009090a20ull,0x3020316438333030ull,0x3837343730383078ull,
0x3330343078302030ull,0x6578302031303866ull,0x2030383763633234ull,0x333065783009090aull,
0x7830206463653134ull,0x3038373437303030ull,0x3030303062783020ull,0x3430783020643336ull,
0x0a20303837343030ull,0x3330343078300909ull,0x6578302031306166ull,0x2030383763633234ull,
0x6631333830627830ull,0x3530367830206466ull,0x090a203863373031ull,0x6630303062783009ull,
0x3830783020646330ull,0x3020303837633032ull,0x6336366138306378ull,0x3034303078302064ull,
0x09090a2030383630ull,0x6531613830637830ull,0x3430307830206433ull,0x7830203038363030ull,
0x6333653130303039ull,0x3666303063783020ull,0x3009090a20636336ull,0x3336363533306578ull,
0x3830303078302064ull,0x3078302030383763ull,0x2031303662643034ull,0x3763333234657830ull,
0x783009090a203038ull,0x3164363630333065ull,0x3039303030783020ull,0x3062783020303837ull,
0x3020643330313030ull,0x3837343030383078ull,0x30783009090a2030ull,0x2031303862643034ull,
0x3730643234657830ull,0x3330657830203038ull,0x7830203132363632ull,0x3038373839303030ull,
0x3062783009090a20ull,0x3020306465316436ull,0x3232383930306278ull,0x6430343078302034ull,
0x6578302031306162ull,0x2030383730323234ull,0x333065783009090aull,0x7830203132363634ull,
0x3038373462303030ull,0x3166363062783020ull,0x3062783020306432ull,0x0a20383232386130ull,
0x3430343078300909ull,0x6578302031303662ull,0x2030383730323234ull,0x3636343330657830ull,
0x3030307830203132ull,0x090a203038376362ull,0x3130303062783009ull,0x3830783020316434ull,
0x3020303837303730ull,0x3038623430343078ull,0x3232346578302031ull,0x09090a2030383730ull,
0x3636343330657830ull,0x3030307830206463ull,0x7830203038373037ull,0x3132323030303062ull,
0x6331303430783020ull,0x3009090a20303837ull,0x3061623430343078ull,0x6332346578302031ull,
0x6278302030383763ull,0x2064663131333830ull,0x3730313530367830ull,0x783009090a203863ull,
0x6463306630303062ull,0x3430323830783020ull,0x3063783020303837ull,0x3020646336366138ull,
0x3836303034303078ull,0x63783009090a2030ull,0x2031323031613830ull,0x3630303430307830ull,
0x3030397830203038ull,0x7830203032303130ull,0x3032363638303063ull,0x3065783009090a20ull,
0x3020646330313031ull,0x3837343830303078ull,0x6530343078302030ull,0x6578302031303637ull,
0x2030383763633234ull,0x333065783009090aull,0x7830203563303131ull,0x3038373039303030ull,
0x3765303430783020ull,0x3465783020313038ull,0x0a20303837346332ull,0x3233306578300909ull,
0x3078302035633031ull,0x2030383738393030ull,0x3633303030627830ull,0x3038307830203963ull,
0x090a203038376333ull,0x3765303430783009ull,0x3465783020313061ull,0x3020303837346332ull,
0x6330313233306578ull,0x3330303078302035ull,0x09090a2030383763ull,0x3435303030627830ull,
0x3038307830203963ull,0x7830203038373432ull,0x3130363735303430ull,0x3463323465783020ull,
0x3009090a20303837ull,0x6330313233306578ull,0x3230303078302035ull,0x6278302030383734ull,
0x2039636333303030ull,0x3738323038307830ull,0x783009090a203038ull,0x3130383735303430ull,
0x3463323465783020ull,0x3065783020303837ull,0x3020313230313233ull,0x3837383230303078ull,
0x62783009090a2030ull,0x2064316530303030ull,0x3738313038307830ull,0x3034307830203038ull,
0x7830203130613735ull,0x3038373032323465ull,0x3062783009090a20ull,0x3020646666303338ull,
0x6337303135303678ull,0x3030303178302038ull,0x3078302039313631ull,0x2030383763333034ull,
0x383063783009090aull,0x7830203931363161ull,0x3038363030343030ull,0x3061383063783020ull,
0x3030783020643165ull,0x0a20303836303034ull,0x3030303978300909ull,0x6378302063316530ull,
0x2063316330373030ull,0x6530303130657830ull,0x3030307830203931ull,0x090a203038373438ull,
0x3366303430783009ull,0x3465783020313036ull,0x3020303837383132ull,0x3265303331306578ull,
0x3930303078302031ull,0x09090a2030383734ull,0x6334303030627830ull,0x3038307830203931ull,
0x7830203038373838ull,0x3130383366303430ull,0x3032323465783020ull,0x3009090a20303837ull,
0x3236333030306278ull,0x3530383078302064ull,0x6578302030383738ull,0x2031326530363030ull,
0x3738383030307830ull,0x783009090a203038ull,0x6436343530303062ull,0x3435303830783020ull,
0x3065783020303837ull,0x3020643265306230ull,0x3837383530303078ull,0x30783009090a2030ull,
0x2031306133663034ull,0x3730323234657830ull,0x3130657830203038ull,0x7830203132653062ull,
0x3038373435303030ull,0x3062783009090a20ull,0x3020353563333030ull,0x3837633930383078ull,
0x3630343078302030ull,0x6578302031303633ull,0x2030383763323234ull,0x313065783009090aull,
0x7830206431653035ull,0x3038376339303030ull,0x3336303430783020ull,0x3465783020313038ull,
0x0a20303837303232ull,0x3030306278300909ull,0x3078302035316130ull,0x2030383730313038ull,
0x6133363034307830ull,0x3234657830203130ull,0x090a203038376331ull,0x3033383062783009ull,
0x3036783020646662ull,0x3020386337303135ull,0x3138313030303178ull,0x3330363078302031ull,
0x09090a2030383763ull,0x3831613830637830ull,0x3430307830203131ull,0x7830203038363030ull,
0x3531613061383063ull,0x3030343030783020ull,0x3009090a20303836ull,0x3161303030303978ull,
0x3530306378302034ull,0x6578302030313830ull,0x2035313830383130ull,0x3763383030307830ull,
0x783009090a203038ull,0x6431383033313065ull,0x3439303030783020ull,0x3430783020303837ull,
0x3020313036666630ull,0x3837343132346578ull,0x30783009090a2030ull,0x2031303866663034ull,
0x3763313234657830ull,0x3030627830203038ull,0x7830206431633530ull,0x3038373834303830ull,
0x3065783009090a20ull,0x3020353138303630ull,0x3837383830303078ull,0x3030306278302030ull,
0x3078302031323233ull,0x2030383730353038ull,0x303065783009090aull,0x7830206431383037ull,
0x3038373834303030ull,0x6666303430783020ull,0x3465783020313061ull,0x0a20303837343132ull,
0x3830306578300909ull,0x3078302035313830ull,0x2030383730353030ull,0x6133303030627830ull,
0x3038307830203132ull,0x090a203038373061ull,0x6636303430783009ull,0x3465783020313036ull,
0x3020303837633132ull,0x3138303830306578ull,0x6130303078302031ull,0x09090a2030383730ull,
0x3866363034307830ull,0x3234657830203130ull,0x7830203038373431ull,0x6430363030303062ull,
0x3830303830783020ull,0x3009090a20303837ull,0x3061663630343078ull,0x3132346578302031ull,
0x6278302030383730ull,0x2064663730333830ull,0x3730313530367830ull,0x783009090a203863ull,
0x3930613130303031ull,0x6333303430783020ull,0x3063783020303837ull,0x3020393061316138ull,
0x3836303034303078ull,0x63783009090a2030ull,0x2064303630613830ull,0x3630303430307830ull,
0x3030397830203038ull,0x7830206330363030ull,0x3830343033303063ull,0x3065783009090a20ull,
0x3020643034303831ull,0x3837633830303078ull,0x3031343078302030ull,0x6578302031303662ull,
0x2030383763303234ull,0x333065783009090aull,0x7830206430343030ull,0x3038373039303030ull,
0x6230313430783020ull,0x3465783020313038ull,0x0a20303837633032ull,0x3030306278300909ull,
0x3078302031316135ull,0x2030383734343038ull,0x3430363030657830ull,0x3030307830206430ull,
0x090a203038373838ull,0x3530303062783009ull,0x3830783020353165ull,0x3020303837636130ull,
0x3134303430306578ull,0x3430303078302031ull,0x09090a2030383734ull,0x6162303134307830ull,
0x3234657830203130ull,0x7830203038376330ull,0x6430343035303065ull,0x6361303030783020ull,
0x3009090a20303837ull,0x3138333030306278ull,0x6130383078302035ull,0x3078302030383734ull,
0x2031303662373034ull,0x3730313234657830ull,0x783009090a203038ull,0x3131343035303065ull,
0x3461303030783020ull,0x3430783020303837ull,0x3020313038623730ull,0x3837633032346578ull,
0x62783009090a2030ull,0x2039303230303030ull,0x3730303038307830ull,0x3034307830203038ull,
0x7830203130616237ull,0x3038373031323465ull,0x3062783009090a20ull,0x3020646635303338ull,
0x6337303135303678ull,0x3030303178302038ull,0x3078302031306331ull,0x2030383763333036ull,
0x383063783009090aull,0x7830203130633161ull,0x3038363030343030ull,0x3061383063783020ull,
0x3030783020393034ull,0x0a20303836303034ull,0x3030303978300909ull,0x6378302038303430ull,
0x2030303030323030ull,0x3030303130657830ull,0x3030307830203930ull,0x090a203038373438ull,
0x3030333065783009ull,0x3030783020643030ull,0x3020303837303930ull,0x3036373131343078ull,
0x3032346578302031ull,0x09090a2030383738ull,0x3030363030657830ull,0x3030307830203930ull,
0x7830203038373838ull,0x3131653130303062ull,0x3836303830783020ull,0x3009090a20303837ull,
0x3038373131343078ull,0x3032346578302031ull,0x6278302030383763ull,0x2035313231303030ull,
0x3730623038307830ull,0x783009090a203038ull,0x6430303034303065ull,0x3836303030783020ull,
0x3430783020303837ull,0x3020313061373131ull,0x3837383032346578ull,0x65783009090a2030ull,
0x2039303030353030ull,0x3730623030307830ull,0x3030627830203038ull,0x7830203131343130ull,
0x3038376335303830ull,0x3430783009090a20ull,0x3020313036373830ull,0x3837633032346578ull,
0x3430306578302030ull,0x3078302031303030ull,0x2030383763353030ull,0x303430783009090aull,
0x7830203130383738ull,0x3038373830323465ull,0x3738303430783020ull,0x3465783020313061ull,
0x0a20303837303032ull,0x6631363878300909ull,0x3078302033306566ull,0x2030303030303030ull,
0x3166313030627830ull,0x3230367830206466ull,0x090a203863373031ull,0x6630303032783009ull,
0x3030783020353063ull,0x3020623030303030ull,0x3063373030303178ull,0x3330343078302035ull,
0x09090a2030303563ull,0x3230303030317830ull,0x3036307830203130ull,0x7830203038376333ull,
0x3130343034303366ull,0x3030303030783020ull,0x3009090a20343837ull,0x6631306337303378ull,
0x3030343678302064ull,0x3378302038633738ull,0x2033303030303030ull,0x3230303030307830ull,
0x783009090a203038ull,0x6430303432303033ull,0x3030313463783020ull,0x3033783020303837ull,
0x3020393032303430ull,0x3837303031346378ull,0x31783009090a2030ull,0x2039663866303030ull,
0x3763333034307830ull,0x3030327830203038ull,0x7830203530346430ull,0x3038376330323430ull,
0x3064783009090a20ull,0x3020313132306530ull,0x3837303063303878ull,0x3332306178302030ull,
0x3078302033303066ull,0x2030303030303030ull,0x303032783009090aull,0x7830206430633730ull,
0x3038373830303430ull,0x3032303366783020ull,0x3030783020643032ull,0x0a20343837303030ull,
0x3030303278300909ull,0x3078302031316337ull,0x2030383730313034ull,0x3566343030337830ull,
0x3234367830206466ull,0x090a203863376330ull,0x6633323031783009ull,0x3030783020333030ull,
0x3020303832303030ull,0x3036303530303378ull,0x3031346378302064ull,0x09090a2030383730ull,
0x3630303030327830ull,0x3034307830206430ull,0x7830203038376337ull,0x6430363063343034ull,
0x3030303030783020ull,0x3009090a20333030ull,0x3036303030303078ull,0x3030306378302035ull,
0x3378302030383730ull,0x2064303830343030ull,0x3730303134637830ull,0x783009090a203038ull,
0x3930386434323464ull,0x3030303032783020ull,0x3031783020303837ull,0x3020643130383030ull,
0x3030303866333078ull,0x32783009090a2033ull,0x2030323865333031ull,0x3065303039317830ull,
0x3039317830203031ull,0x7830203431326530ull,0x3831346530303931ull,0x3064783009090a20ull,
0x3020313130316530ull,0x3837303061306178ull,0x3030303178302030ull,0x3078302064313866ull,
0x2030383763333034ull,0x303032783009090aull,0x7830206430636330ull,0x3038376330323430ull,
0x3330303431783020ull,0x3434783020313136ull,0x0a20303837633030ull,0x3030343178300909ull,
0x3478302035313833ull,0x2030383763303034ull,0x6133303034317830ull,0x3034347830203931ull,
0x090a203038376330ull,0x3065303064783009ull,0x3061783020313136ull,0x3020303837303061ull,
0x3030303030306678ull,0x3030306578302031ull,0x09090a2032303030ull,0x6366313030327830ull,
0x3030307830203966ull,0x7830203330303030ull,0x6466643730303033ull,0x3431303436783020ull,
0x3009090a20386337ull,0x3030383232303178ull,0x3030303078302033ull,0x6678302030383230ull,
0x2031303030303030ull,0x3030303030657830ull,0x7d0a7d090a203130ull,0x0a7b2065646f630aull,
0x203d20656d616e09ull,0x706d6f6333315a5full,0x6c65786f56746361ull,0x6a5f535f536a5073ull,
0x3d206d656d6c090aull,0x6d656d73090a3020ull,0x72090a3434203d20ull,0x0a33203d20206765ull,
0x203d202072616209ull,0x6f636e6962090a30ull,0x3009090a7b206564ull,0x3065343030306178ull,
0x3032343078302035ull,0x6178302030383730ull,0x2039303834303030ull,0x3730303234307830ull,
0x783009090a203038ull,0x3530323032303034ull,0x3831303030783020ull,0x3061783020303837ull,
0x3020393063343030ull,0x3837303032343078ull,0x32783009090a2030ull,0x2035303230303030ull,
0x3738303034307830ull,0x3030617830203038ull,0x7830203930323430ull,0x3038373030323430ull,
0x3034783009090a20ull,0x3020353032303230ull,0x3837383130303078ull,0x3030306178302030ull,
0x3078302031303030ull,0x2030383730303034ull,0x303032783009090aull,0x7830203530323030ull,
0x3038373030303430ull,0x3032303033783020ull,0x3463783020313032ull,0x0a20303837303031ull,
0x3030303278300909ull,0x3078302039306363ull,0x2030383730303234ull,0x3430653030647830ull,
0x6330387830203930ull,0x090a203038373030ull,0x3063373033783009ull,0x3436783020646635ull,
0x3020386337383030ull,0x3030303030303378ull,0x3030303078302033ull,0x09090a2030383230ull,
0x3564313030337830ull,0x3234367830206466ull,0x7830203863376330ull,0x3330303030303033ull,
0x3030303030783020ull,0x3009090a20303832ull,0x3030643030303278ull,0x3032343078302031ull,
0x6478302030383730ull,0x2031303030653030ull,0x3730306330387830ull,0x783009090a203038ull,
0x3130303032303033ull,0x3030313463783020ull,0x3032783020303837ull,0x3020313038633030ull,
0x3837303032343078ull,0x64783009090a2030ull,0x2035303030653030ull,0x3730306330617830ull,
0x7d0a7d090a203138ull,0x000000000000000aull
};


}



extern "C" {


static const unsigned long long __deviceText_$compute_13$[] = {
0x6f69737265762e09ull,0x2e090a332e31206eull,0x7320746567726174ull,0x2f2f090a33315f6dull,
0x656c69706d6f6320ull,0x2f20687469772064ull,0x6964672f656d6f68ull,0x6d65742f736f6d61ull,
0x6f2f616475632f70ull,0x696c2f34366e6570ull,0x2f090a65622f2f62ull,0x6e65706f766e202full,
0x746c697562206363ull,0x38303032206e6f20ull,0x0a0a33302d32312dull,0x752e206765722e09ull,
0x313c617225203233ull,0x65722e090a3b3e37ull,0x25203436752e2067ull,0x3b3e37313c616472ull,
0x2e206765722e090aull,0x3c61662520323366ull,0x722e090a3b3e3731ull,0x203436662e206765ull,
0x3e37313c61646625ull,0x206765722e090a3bull,0x767225203233752eull,0x722e090a3b3e353cull,
0x203436752e206765ull,0x3b3e353c76647225ull,0x2e206765722e090aull,0x3c76662520323366ull,
0x65722e090a3b3e35ull,0x25203436662e2067ull,0x0a3b3e353c766466ull,0x2d2d2d2f2f090a0aull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x6d6f43202f2f090aull,
0x2f20676e696c6970ull,0x78706d742f706d74ull,0x31303030305f7466ull,0x303030305f643433ull,
0x6d5f372d30303030ull,0x43676e6968637261ull,0x72656b5f73656275ull,0x337070632e6c656eull,
0x706d742f2820692eull,0x522e23494263632full,0x090a29677a5a567aull,0x2d2d2d2d2d2d2f2full,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x090a0a2d2d2d2d2dull,0x2d2d2d2d2d2d2f2full,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2f090a2d2d2d2d2dull,0x6e6f6974704f202full,
0x2d2d2f2f090a3a73ull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x5420202f2f090a2dull,0x74703a7465677261ull,0x733a415349202c78ull,0x6e45202c33315f6dull,
0x74696c3a6e616964ull,0x696f50202c656c74ull,0x7a6953207265746eull,0x2f2f090a34363a65ull,
0x4f2809334f2d2020ull,0x74617a696d697470ull,0x6576656c206e6f69ull,0x20202f2f090a296cull,
0x626544280930672dull,0x6c6576656c206775ull,0x2d20202f2f090a29ull,0x6f7065522809326dull,
0x7369766461207472ull,0x090a29736569726full,0x2d2d2d2d2d2d2f2full,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x090a0a2d2d2d2d2dull,0x093109656c69662eull,0x6e616d6d6f633c22ull,
0x223e656e696c2d64ull,0x09656c69662e090aull,0x2f706d742f220932ull,0x305f746678706d74ull,
0x5f64343331303030ull,0x3030303030303030ull,0x686372616d5f362dull,0x7365627543676e69ull,
0x2e6c656e72656b5full,0x2e32656661647563ull,0x662e090a22757067ull,0x2f22093309656c69ull,
0x2f62696c2f727375ull,0x5f3638782f636367ull,0x78756e696c2d3436ull,0x332e342f756e672dull,
0x756c636e692f332eull,0x65646474732f6564ull,0x662e090a22682e66ull,0x2f22093409656c69ull,
0x6964672f656d6f68ull,0x6d65742f736f6d61ull,0x622f616475632f70ull,0x692f2e2e2f2f6e69ull,
0x632f6564756c636eull,0x63697665642f7472ull,0x6d69746e75725f65ull,0x662e090a22682e65ull,
0x2f22093509656c69ull,0x6964672f656d6f68ull,0x6d65742f736f6d61ull,0x622f616475632f70ull,
0x692f2e2e2f2f6e69ull,0x682f6564756c636eull,0x696665645f74736full,0x090a22682e73656eull,
0x093609656c69662eull,0x672f656d6f682f22ull,0x742f736f6d616964ull,0x616475632f706d65ull,
0x2e2e2f2f6e69622full,0x6564756c636e692full,0x6e69746c6975622full,0x682e73657079745full,
0x656c69662e090a22ull,0x6d6f682f22093709ull,0x6f6d616964672f65ull,0x632f706d65742f73ull,
0x2f6e69622f616475ull,0x6c636e692f2e2e2full,0x697665642f656475ull,0x73657079745f6563ull,
0x69662e090a22682eull,0x682f22093809656cull,0x616964672f656d6full,0x706d65742f736f6dull,
0x69622f616475632full,0x6e692f2e2e2f2f6eull,0x72642f6564756c63ull,0x7079745f72657669ull,
0x2e090a22682e7365ull,0x22093909656c6966ull,0x64672f656d6f682full,0x65742f736f6d6169ull,
0x2f616475632f706dull,0x2f2e2e2f2f6e6962ull,0x2f6564756c636e69ull,0x5f65727574786574ull,
0x22682e7365707974ull,0x09656c69662e090aull,0x6d6f682f22093031ull,0x6f6d616964672f65ull,
0x632f706d65742f73ull,0x2f6e69622f616475ull,0x6c636e692f2e2e2full,0x746365762f656475ull,
0x73657079745f726full,0x69662e090a22682eull,0x2f2209313109656cull,0x6964672f656d6f68ull,
0x6d65742f736f6d61ull,0x622f616475632f70ull,0x692f2e2e2f2f6e69ull,0x642f6564756c636eull,
0x616c5f6563697665ull,0x7261705f68636e75ull,0x2e73726574656d61ull,0x6c69662e090a2268ull,
0x682f220932310965ull,0x616964672f656d6full,0x706d65742f736f6dull,0x69622f616475632full,
0x6e692f2e2e2f2f6eull,0x72632f6564756c63ull,0x6761726f74732f74ull,0x2e7373616c635f65ull,
0x6c69662e090a2268ull,0x752f220933310965ull,0x756c636e692f7273ull,0x2f737469622f6564ull,
0x22682e7365707974ull,0x09656c69662e090aull,0x7273752f22093431ull,0x6564756c636e692full,
0x22682e656d69742full,0x09656c69662e090aull,0x6966656422093531ull,0x090a22682e73656eull,
0x363109656c69662eull,0x69686372616d2209ull,0x5f7365627543676eull,0x632e6c656e72656bull,
0x6c69662e090a2275ull,0x682f220937310965ull,0x616964672f656d6full,0x706d65742f736f6dull,
0x69622f616475632full,0x6e692f2e2e2f2f6eull,0x6f632f6564756c63ull,0x6e75665f6e6f6d6dull,
0x682e736e6f697463ull,0x656c69662e090a22ull,0x6f682f2209383109ull,0x6d616964672f656dull,
0x2f706d65742f736full,0x6e69622f61647563ull,0x636e692f2e2e2f2full,0x7472632f6564756cull,
0x616d5f636e75662full,0x090a22682e6f7263ull,0x393109656c69662eull,0x2f656d6f682f2209ull,
0x2f736f6d61696467ull,0x6475632f706d6574ull,0x2e2f2f6e69622f61ull,0x64756c636e692f2eull,
0x665f6874616d2f65ull,0x736e6f6974636e75ull,0x69662e090a22682eull,0x2f2209303209656cull,
0x6964672f656d6f68ull,0x6d65742f736f6d61ull,0x622f616475632f70ull,0x692f2e2e2f2f6e69ull,
0x642f6564756c636eull,0x75665f6563697665ull,0x2e736e6f6974636eull,0x6c69662e090a2268ull,
0x682f220931320965ull,0x616964672f656d6full,0x706d65742f736f6dull,0x69622f616475632full,
0x6e692f2e2e2f2f6eull,0x616d2f6564756c63ull,0x74736e6f635f6874ull,0x0a22682e73746e61ull,
0x3209656c69662e09ull,0x656d6f682f220932ull,0x736f6d616964672full,0x75632f706d65742full,
0x2f2f6e69622f6164ull,0x756c636e692f2e2eull,0x31315f6d732f6564ull,0x5f63696d6f74615full,
0x6e6f6974636e7566ull,0x662e090a22682e73ull,0x2209333209656c69ull,0x64672f656d6f682full,
0x65742f736f6d6169ull,0x2f616475632f706dull,0x2f2e2e2f2f6e6962ull,0x2f6564756c636e69ull,
0x74615f32315f6d73ull,0x6e75665f63696d6full,0x682e736e6f697463ull,0x656c69662e090a22ull,
0x6f682f2209343209ull,0x6d616964672f656dull,0x2f706d65742f736full,0x6e69622f61647563ull,
0x636e692f2e2e2f2full,0x5f6d732f6564756cull,0x6c62756f645f3331ull,0x6974636e75665f65ull,
0x090a22682e736e6full,0x353209656c69662eull,0x2f656d6f682f2209ull,0x2f736f6d61696467ull,
0x6475632f706d6574ull,0x2e2f2f6e69622f61ull,0x64756c636e692f2eull,0x7275747865742f65ull,
0x5f68637465665f65ull,0x6e6f6974636e7566ull,0x662e090a22682e73ull,0x2209363209656c69ull,
0x64672f656d6f682full,0x65742f736f6d6169ull,0x2f616475632f706dull,0x2f2e2e2f2f6e6962ull,
0x2f6564756c636e69ull,0x6e75665f6874616dull,0x645f736e6f697463ull,0x2e337874705f6c62ull,
0x65742e090a0a2268ull,0x65203436752e2078ull,0x0a3b786554656764ull,0x752e207865742e09ull,
0x6554697274203436ull,0x7865742e090a3b78ull,0x756e203436752e20ull,0x655473747265566dull,
0x7865742e090a3b78ull,0x6f76203436752e20ull,0x3b786554656d756cull,0x72746e652e090a0aull,
0x6c6333315a5f2079ull,0x6f56796669737361ull,0x505f536a506c6578ull,0x5333746e69753568ull,
0x66366a5f31535f31ull,0x090a663374616f6cull,0x206765722e090a7bull,0x3c7225203233752eull,
0x2e090a3b3e393331ull,0x3436752e20676572ull,0x3b3e383c64722520ull,0x2e206765722e090aull,
0x313c662520323366ull,0x65722e090a3b3e31ull,0x20646572702e2067ull,0x0a3b3e31313c7025ull,
0x206d617261702e09ull,0x635f5f203436752eull,0x5f6d726170616475ull,0x73616c6333315a5full,
0x65786f5679666973ull,0x3568505f536a506cull,0x5f315333746e6975ull,0x6f6c66366a5f3153ull,
0x786f765f66337461ull,0x3b73747265566c65ull,0x6d617261702e090aull,0x5f5f203436752e20ull,
0x6d72617061647563ull,0x616c6333315a5f5full,0x786f567966697373ull,0x68505f536a506c65ull,
0x315333746e697535ull,0x6c66366a5f31535full,0x6f765f663374616full,0x707563634f6c6578ull,
0x702e090a3b646569ull,0x36752e206d617261ull,0x616475635f5f2034ull,0x315a5f5f6d726170ull,
0x66697373616c6333ull,0x6a506c65786f5679ull,0x6e69753568505f53ull,0x5f31535f31533374ull,
0x3374616f6c66366aull,0x656d756c6f765f66ull,0x617261702e090a3bull,0x6e67696c612e206dull,
0x5f2038622e203420ull,0x726170616475635full,0x6c6333315a5f5f6dull,0x6f56796669737361ull,
0x505f536a506c6578ull,0x5333746e69753568ull,0x66366a5f31535f31ull,0x675f663374616f6cull,
0x5b657a6953646972ull,0x702e090a3b5d3231ull,0x6c612e206d617261ull,0x622e2034206e6769ull,
0x616475635f5f2038ull,0x315a5f5f6d726170ull,0x66697373616c6333ull,0x6a506c65786f5679ull,
0x6e69753568505f53ull,0x5f31535f31533374ull,0x3374616f6c66366aull,0x6953646972675f66ull,
0x5b7466696853657aull,0x702e090a3b5d3231ull,0x6c612e206d617261ull,0x622e2034206e6769ull,
0x616475635f5f2038ull,0x315a5f5f6d726170ull,0x66697373616c6333ull,0x6a506c65786f5679ull,
0x6e69753568505f53ull,0x5f31535f31533374ull,0x3374616f6c66366aull,0x6953646972675f66ull,
0x315b6b73614d657aull,0x61702e090a3b5d32ull,0x3233752e206d6172ull,0x70616475635f5f20ull,
0x33315a5f5f6d7261ull,0x7966697373616c63ull,0x536a506c65786f56ull,0x746e69753568505full,
0x6a5f31535f315333ull,0x663374616f6c6636ull,0x65786f566d756e5full,0x61702e090a3b736cull,
0x696c612e206d6172ull,0x38622e2034206e67ull,0x70616475635f5f20ull,0x33315a5f5f6d7261ull,
0x7966697373616c63ull,0x536a506c65786f56ull,0x746e69753568505full,0x6a5f31535f315333ull,
0x663374616f6c6636ull,0x69536c65786f765full,0x0a3b5d32315b657aull,0x206d617261702e09ull,
0x635f5f203233662eull,0x5f6d726170616475ull,0x73616c6333315a5full,0x65786f5679666973ull,
0x3568505f536a506cull,0x5f315333746e6975ull,0x6f6c66366a5f3153ull,0x6f73695f66337461ull,
0x090a3b65756c6156ull,0x09363109636f6c2eull,0x4c240a3009393331ull,0x33315a5f5f314242ull,
0x7966697373616c63ull,0x536a506c65786f56ull,0x746e69753568505full,0x6a5f31535f315333ull,
0x663374616f6c6636ull,0x09636f6c2e090a3aull,0x3009373131093631ull,0x7261702e646c090aull,
0x09203233752e6d61ull,0x5f5f5b202c317225ull,0x6d72617061647563ull,0x616c6333315a5f5full,
0x786f567966697373ull,0x68505f536a506c65ull,0x315333746e697535ull,0x6c66366a5f31535full,
0x72675f663374616full,0x342b657a69536469ull,0x6469202f2f093b5dull,0x635f5f203033393aull,
0x5f6d726170616475ull,0x73616c6333315a5full,0x65786f5679666973ull,0x3568505f536a506cull,
0x5f315333746e6975ull,0x6f6c66366a5f3153ull,0x6972675f66337461ull,0x78302b657a695364ull,
0x752e627573090a34ull,0x2c32722509203233ull,0x3b31202c31722520ull,0x2020202020202020ull,
0x63090a202f2f0920ull,0x752e3233732e7476ull,0x2c33722509203631ull,0x2e64696174632520ull,
0x2f2f092020203b79ull,0x732e747663090a20ull,0x09203631752e3233ull,0x636e25202c347225ull,
0x203b782e64696174ull,0x6d090a202f2f0920ull,0x2e6f6c2e34326c75ull,0x3572250920323373ull,
0x25202c337225202cull,0x2f2f0920203b3472ull,0x61702e646c090a20ull,0x203233752e6d6172ull,
0x5f5b202c36722509ull,0x726170616475635full,0x6c6333315a5f5f6dull,0x6f56796669737361ull,
0x505f536a506c6578ull,0x5333746e69753568ull,0x66366a5f31535f31ull,0x675f663374616f6cull,
0x2b657a6953646972ull,0x69202f2f093b5d38ull,0x5f5f203333393a64ull,0x6d72617061647563ull,
0x616c6333315a5f5full,0x786f567966697373ull,0x68505f536a506c65ull,0x315333746e697535ull,
0x6c66366a5f31535full,0x72675f663374616full,0x302b657a69536469ull,0x2e627573090a3878ull,
0x3772250920323375ull,0x31202c367225202cull,0x202020202020203bull,0x090a202f2f092020ull,
0x6d617261702e646cull,0x722509203233752eull,0x75635f5f5b202c38ull,0x5f5f6d7261706164ull,
0x7373616c6333315aull,0x6c65786f56796669ull,0x753568505f536a50ull,0x535f315333746e69ull,
0x616f6c66366a5f31ull,0x646972675f663374ull,0x3b5d302b657a6953ull,0x393a6469202f2f09ull,
0x6475635f5f203932ull,0x5a5f5f6d72617061ull,0x697373616c633331ull,0x506c65786f567966ull,
0x69753568505f536aull,0x31535f315333746eull,0x74616f6c66366a5full,0x53646972675f6633ull,
0x0a3078302b657a69ull,0x3233752e62757309ull,0x25202c3972250920ull,0x20203b31202c3872ull,
0x0920202020202020ull,0x747663090a202f2full,0x3631752e3233752eull,0x202c303172250920ull,
0x782e646961746325ull,0x0a202f2f0920203bull,0x3233752e64646109ull,0x202c313172250920ull,
0x317225202c357225ull,0x0920202020203b30ull,0x747663090a202f2full,0x3631752e3233732eull,
0x202c323172250920ull,0x3b782e6469746e25ull,0x0a202f2f09202020ull,0x6c2e34326c756d09ull,
0x2509203233732e6full,0x317225202c333172ull,0x3b32317225202c31ull,0x7663090a202f2f09ull,
0x31752e3233752e74ull,0x2c34317225092036ull,0x3b782e6469742520ull,0x202f2f0920202020ull,
0x33752e646461090aull,0x2c35317225092032ull,0x25202c3331722520ull,0x202020203b343172ull,
0x646c090a202f2f09ull,0x752e6d617261702eull,0x3631722509203233ull,0x6475635f5f5b202cull,
0x5a5f5f6d72617061ull,0x697373616c633331ull,0x506c65786f567966ull,0x69753568505f536aull,
0x31535f315333746eull,0x74616f6c66366a5full,0x53646972675f6633ull,0x7466696853657a69ull,
0x202f2f093b5d342bull,0x5f203733393a6469ull,0x726170616475635full,0x6c6333315a5f5f6dull,
0x6f56796669737361ull,0x505f536a506c6578ull,0x5333746e69753568ull,0x66366a5f31535f31ull,
0x675f663374616f6cull,0x53657a6953646972ull,0x3478302b74666968ull,0x33752e726873090aull,
0x2c37317225092032ull,0x25202c3531722520ull,0x202020203b363172ull,0x646c090a202f2f09ull,
0x752e6d617261702eull,0x3831722509203233ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,
0x697373616c633331ull,0x506c65786f567966ull,0x69753568505f536aull,0x31535f315333746eull,
0x74616f6c66366a5full,0x53646972675f6633ull,0x7466696853657a69ull,0x202f2f093b5d382bull,
0x5f203833393a6469ull,0x726170616475635full,0x6c6333315a5f5f6dull,0x6f56796669737361ull,
0x505f536a506c6578ull,0x5333746e69753568ull,0x66366a5f31535f31ull,0x675f663374616f6cull,
0x53657a6953646972ull,0x3878302b74666968ull,0x33752e726873090aull,0x2c39317225092032ull,
0x25202c3531722520ull,0x202020203b383172ull,0x646c090a202f2f09ull,0x752e6d617261702eull,
0x3032722509203233ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x697373616c633331ull,
0x506c65786f567966ull,0x69753568505f536aull,0x31535f315333746eull,0x74616f6c66366a5full,
0x53646972675f6633ull,0x2b6b73614d657a69ull,0x69202f2f093b5d30ull,0x5f5f203933393a64ull,
0x6d72617061647563ull,0x616c6333315a5f5full,0x786f567966697373ull,0x68505f536a506c65ull,
0x315333746e697535ull,0x6c66366a5f31535full,0x72675f663374616full,0x614d657a69536469ull,
0x090a3078302b6b73ull,0x203233622e646e61ull,0x25202c3132722509ull,0x317225202c303272ull,
0x2f09202020203b35ull,0x702e646c090a202full,0x3233752e6d617261ull,0x202c323272250920ull,
0x70616475635f5f5bull,0x33315a5f5f6d7261ull,0x7966697373616c63ull,0x536a506c65786f56ull,
0x746e69753568505full,0x6a5f31535f315333ull,0x663374616f6c6636ull,0x7a6953646972675full,
0x5d342b6b73614d65ull,0x3a6469202f2f093bull,0x75635f5f20303439ull,0x5f5f6d7261706164ull,
0x7373616c6333315aull,0x6c65786f56796669ull,0x753568505f536a50ull,0x535f315333746e69ull,
0x616f6c66366a5f31ull,0x646972675f663374ull,0x6b73614d657a6953ull,0x6e61090a3478302bull,
0x2509203233622e64ull,0x327225202c333272ull,0x3b37317225202c32ull,0x202f2f0920202020ull,
0x7261702e646c090aull,0x09203233752e6d61ull,0x5f5b202c34327225ull,0x726170616475635full,
0x6c6333315a5f5f6dull,0x6f56796669737361ull,0x505f536a506c6578ull,0x5333746e69753568ull,
0x66366a5f31535f31ull,0x675f663374616f6cull,0x4d657a6953646972ull,0x093b5d382b6b7361ull,
0x34393a6469202f2full,0x616475635f5f2031ull,0x315a5f5f6d726170ull,0x66697373616c6333ull,
0x6a506c65786f5679ull,0x6e69753568505f53ull,0x5f31535f31533374ull,0x3374616f6c66366aull,
0x6953646972675f66ull,0x302b6b73614d657aull,0x2e646e61090a3878ull,0x3272250920323362ull,
0x2c34327225202c35ull,0x20203b3931722520ull,0x090a202f2f092020ull,0x203233752e6e696dull,
0x25202c3632722509ull,0x31327225202c3972ull,0x2f0920202020203bull,0x2e6e696d090a202full,
0x3272250920323375ull,0x202c327225202c37ull,0x2020203b33327225ull,0x090a202f2f092020ull,
0x203233752e6e696dull,0x25202c3832722509ull,0x35327225202c3772ull,0x2f0920202020203bull,
0x2e6c756d090a202full,0x09203233752e6f6cull,0x7225202c39327225ull,0x3b387225202c3732ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3033722509203233ull,0x202c38327225202cull,
0x2f0920203b387225ull,0x2e6c756d090a202full,0x09203233752e6f6cull,0x7225202c31337225ull,
0x3b317225202c3033ull,0x090a202f2f092020ull,0x203233752e646461ull,0x25202c3233722509ull,
0x337225202c393272ull,0x2f09202020203b31ull,0x2e646461090a202full,0x3372250920323375ull,
0x2c36327225202c33ull,0x20203b3233722520ull,0x090a202f2f092020ull,0x203233732e766f6dull,
0x25202c3433722509ull,0x202020203b333372ull,0x2f09202020202020ull,0x2e766f6d090a202full,
0x3372250920323373ull,0x2020203b30202c35ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x203233732e766f6dull,0x30202c3633722509ull,0x202020202020203bull,0x2f09202020202020ull,
0x2e766f6d090a202full,0x3372250920323373ull,0x2020203b30202c37ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x762e64312e786574ull,0x33732e3233752e34ull,0x2c383372257b2032ull,
0x3472252c39337225ull,0x2c7d313472252c30ull,0x54656d756c6f765bull,0x343372257b2c7865ull,
0x72252c353372252cull,0x7d373372252c3633ull,0x636f6c2e090a3b5dull,0x0939313109363109ull,
0x732e766f6d090a30ull,0x3234722509203233ull,0x203b38337225202cull,0x2020202020202020ull,
0x2e090a202f2f0920ull,0x3109363109636f6cull,0x6f6d090a30093934ull,0x2509203233622e76ull,
0x32347225202c3166ull,0x202020202020203bull,0x202f2f0920202020ull,0x3109636f6c2e090aull,
0x0a30093731310936ull,0x3233752e64646109ull,0x202c333472250920ull,0x3b31202c31327225ull,
0x0920202020202020ull,0x6e696d090a202f2full,0x722509203233752eull,0x2c397225202c3434ull,
0x20203b3334722520ull,0x0a202f2f09202020ull,0x3233732e64646109ull,0x202c353472250920ull,
0x7225202c34347225ull,0x09202020203b3233ull,0x766f6d090a202f2full,0x722509203233732eull,
0x20203b30202c3634ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x3233732e766f6d09ull,
0x202c373472250920ull,0x2020202020203b30ull,0x0920202020202020ull,0x766f6d090a202f2full,
0x722509203233732eull,0x20203b30202c3834ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x2e64312e78657409ull,0x732e3233752e3476ull,0x393472257b203233ull,0x72252c303572252cull,
0x7d323572252c3135ull,0x656d756c6f765b2cull,0x3472257b2c786554ull,0x252c363472252c35ull,
0x383472252c373472ull,0x6f6c2e090a3b5d7dull,0x3931310936310963ull,0x2e766f6d090a3009ull,
0x3472250920323373ull,0x3b39347225202c32ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x09363109636f6c2eull,0x6d090a3009303531ull,0x09203233622e766full,0x347225202c326625ull,
0x2020202020203b32ull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x3009373131093631ull,
0x33752e646461090aull,0x2c33357225092032ull,0x31202c3332722520ull,0x202020202020203bull,
0x696d090a202f2f09ull,0x2509203233752e6eull,0x327225202c343572ull,0x203b33357225202cull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203233752eull,0x34357225202c3535ull,
0x20203b387225202cull,0x6461090a202f2f09ull,0x2509203233752e64ull,0x357225202c363572ull,
0x3b31337225202c35ull,0x202f2f0920202020ull,0x33732e646461090aull,0x2c37357225092032ull,
0x25202c3434722520ull,0x202020203b363572ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,
0x203b30202c383572ull,0x2020202020202020ull,0x202f2f0920202020ull,0x33732e766f6d090aull,
0x2c39357225092032ull,0x20202020203b3020ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,
0x2509203233732e76ull,0x203b30202c303672ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x64312e786574090aull,0x2e3233752e34762eull,0x3672257b20323373ull,0x252c323672252c31ull,
0x343672252c333672ull,0x6d756c6f765b2c7dull,0x72257b2c78655465ull,0x2c383572252c3735ull,
0x3672252c39357225ull,0x6c2e090a3b5d7d30ull,0x313109363109636full,0x766f6d090a300939ull,
0x722509203233732eull,0x31367225202c3234ull,0x202020202020203bull,0x0a202f2f09202020ull,
0x363109636f6c2e09ull,0x090a300931353109ull,0x203233622e766f6dull,0x7225202c33662509ull,
0x20202020203b3234ull,0x2f09202020202020ull,0x636f6c2e090a202full,0x0936313109363109ull,
0x732e646461090a30ull,0x3536722509203233ull,0x202c36327225202cull,0x2020203b36357225ull,
0x6d090a202f2f0920ull,0x09203233732e766full,0x3b30202c36367225ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x732e766f6d090a20ull,0x3736722509203233ull,0x202020203b30202cull,
0x2020202020202020ull,0x6d090a202f2f0920ull,0x09203233732e766full,0x3b30202c38367225ull,
0x2020202020202020ull,0x2f2f092020202020ull,0x312e786574090a20ull,0x3233752e34762e64ull,
0x72257b203233732eull,0x2c303772252c3936ull,0x3772252c31377225ull,0x756c6f765b2c7d32ull,
0x257b2c786554656dull,0x363672252c353672ull,0x72252c373672252cull,0x2e090a3b5d7d3836ull,
0x3109363109636f6cull,0x6f6d090a30093931ull,0x2509203233732e76ull,0x367225202c323472ull,
0x2020202020203b39ull,0x202f2f0920202020ull,0x3109636f6c2e090aull,0x0a30093235310936ull,
0x3233622e766f6d09ull,0x25202c3466250920ull,0x202020203b323472ull,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x3731310936310963ull,0x2e646461090a3009ull,0x3772250920323375ull,
0x2c35327225202c33ull,0x20202020203b3120ull,0x090a202f2f092020ull,0x203233752e6e696dull,
0x25202c3437722509ull,0x33377225202c3772ull,0x2f0920202020203bull,0x2e6c756d090a202full,
0x09203233752e6f6cull,0x7225202c35377225ull,0x3b387225202c3437ull,0x090a202f2f092020ull,
0x752e6f6c2e6c756dull,0x3637722509203233ull,0x202c35377225202cull,0x2f0920203b317225ull,
0x2e646461090a202full,0x3772250920323375ull,0x2c39327225202c37ull,0x20203b3637722520ull,
0x090a202f2f092020ull,0x203233732e646461ull,0x25202c3837722509ull,0x377225202c363272ull,
0x2f09202020203b37ull,0x2e766f6d090a202full,0x3772250920323373ull,0x2020203b30202c39ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x203233732e766f6dull,0x30202c3038722509ull,
0x202020202020203bull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3872250920323373ull,
0x2020203b30202c31ull,0x2020202020202020ull,0x090a202f2f092020ull,0x762e64312e786574ull,
0x33732e3233752e34ull,0x2c323872257b2032ull,0x3872252c33387225ull,0x2c7d353872252c34ull,
0x54656d756c6f765bull,0x383772257b2c7865ull,0x72252c393772252cull,0x7d313872252c3038ull,
0x636f6c2e090a3b5dull,0x0939313109363109ull,0x732e766f6d090a30ull,0x3234722509203233ull,
0x203b32387225202cull,0x2020202020202020ull,0x2e090a202f2f0920ull,0x3109363109636f6cull,
0x6f6d090a30093335ull,0x2509203233622e76ull,0x32347225202c3566ull,0x202020202020203bull,
0x202f2f0920202020ull,0x3109636f6c2e090aull,0x0a30093631310936ull,0x3233732e64646109ull,
0x202c363872250920ull,0x7225202c34347225ull,0x09202020203b3737ull,0x766f6d090a202f2full,
0x722509203233732eull,0x20203b30202c3738ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x3233732e766f6d09ull,0x202c383872250920ull,0x2020202020203b30ull,0x0920202020202020ull,
0x766f6d090a202f2full,0x722509203233732eull,0x20203b30202c3938ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x2e64312e78657409ull,0x732e3233752e3476ull,0x303972257b203233ull,
0x72252c313972252cull,0x7d333972252c3239ull,0x656d756c6f765b2cull,0x3872257b2c786554ull,
0x252c373872252c36ull,0x393872252c383872ull,0x6f6c2e090a3b5d7dull,0x3931310936310963ull,
0x2e766f6d090a3009ull,0x3472250920323373ull,0x3b30397225202c32ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x09363109636f6c2eull,0x6d090a3009343531ull,0x09203233622e766full,
0x347225202c366625ull,0x2020202020203b32ull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,
0x3009373131093631ull,0x33752e646461090aull,0x2c34397225092032ull,0x25202c3535722520ull,
0x202020203b363772ull,0x6461090a202f2f09ull,0x2509203233732e64ull,0x347225202c353972ull,
0x3b34397225202c34ull,0x202f2f0920202020ull,0x33732e766f6d090aull,0x2c36397225092032ull,
0x20202020203b3020ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,
0x203b30202c373972ull,0x2020202020202020ull,0x202f2f0920202020ull,0x33732e766f6d090aull,
0x2c38397225092032ull,0x20202020203b3020ull,0x2020202020202020ull,0x6574090a202f2f09ull,
0x2e34762e64312e78ull,0x203233732e323375ull,0x72252c393972257bull,0x303172252c303031ull,
0x7d32303172252c31ull,0x656d756c6f765b2cull,0x3972257b2c786554ull,0x252c363972252c35ull,
0x383972252c373972ull,0x6f6c2e090a3b5d7dull,0x3931310936310963ull,0x2e766f6d090a3009ull,
0x3472250920323373ull,0x3b39397225202c32ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x09363109636f6c2eull,0x6d090a3009353531ull,0x09203233622e766full,0x347225202c376625ull,
0x2020202020203b32ull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x3009363131093631ull,
0x33732e646461090aull,0x3330317225092032ull,0x202c36327225202cull,0x2020203b34397225ull,
0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x3b30202c34303172ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x33732e766f6d090aull,0x3530317225092032ull,0x202020203b30202cull,
0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x3b30202c36303172ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x64312e786574090aull,0x2e3233752e34762eull,
0x3172257b20323373ull,0x38303172252c3730ull,0x252c39303172252cull,0x765b2c7d30313172ull,
0x786554656d756c6full,0x2c33303172257b2cull,0x72252c3430317225ull,0x303172252c353031ull,
0x6c2e090a3b5d7d36ull,0x313109363109636full,0x766f6d090a300939ull,0x722509203233732eull,
0x30317225202c3234ull,0x2020202020203b37ull,0x0a202f2f09202020ull,0x363109636f6c2e09ull,
0x090a300931383109ull,0x6d617261702e646cull,0x662509203233662eull,0x75635f5f5b202c38ull,
0x5f5f6d7261706164ull,0x7373616c6333315aull,0x6c65786f56796669ull,0x753568505f536a50ull,
0x535f315333746e69ull,0x616f6c66366a5f31ull,0x566f73695f663374ull,0x2f093b5d65756c61ull,
0x3732393a6469202full,0x70616475635f5f20ull,0x33315a5f5f6d7261ull,0x7966697373616c63ull,
0x536a506c65786f56ull,0x746e69753568505full,0x6a5f31535f315333ull,0x663374616f6c6636ull,
0x756c61566f73695full,0x73090a3078302b65ull,0x662e746c2e707465ull,0x2c31702509203233ull,
0x6625202c36662520ull,0x2f2f092020203b38ull,0x2e70746573090a20ull,0x09203233662e746cull,
0x356625202c327025ull,0x20203b386625202cull,0x73090a202f2f0920ull,0x662e746c2e707465ull,
0x2c33702509203233ull,0x6625202c34662520ull,0x2f2f092020203b38ull,0x2e70746573090a20ull,
0x09203233662e746cull,0x336625202c347025ull,0x20203b386625202cull,0x73090a202f2f0920ull,
0x662e746c2e707465ull,0x2c35702509203233ull,0x6625202c32662520ull,0x2f2f092020203b38ull,
0x2e70746573090a20ull,0x09203233662e746cull,0x316625202c367025ull,0x20203b386625202cull,
0x73090a202f2f0920ull,0x203233732e706c65ull,0x202c313131722509ull,0x7025202c30202c31ull,
0x2f2f092020203b36ull,0x752e646461090a20ull,0x3131722509203233ull,0x3131317225202c32ull,
0x202020203b32202cull,0x73090a202f2f0920ull,0x203233752e706c65ull,0x202c333131722509ull,
0x25202c3231317225ull,0x7025202c31313172ull,0x090a202f2f093b35ull,0x203233752e646461ull,
0x202c343131722509ull,0x34202c3331317225ull,0x2f0920202020203bull,0x706c6573090a202full,
0x722509203233752eull,0x317225202c353131ull,0x31317225202c3431ull,0x093b347025202c33ull,
0x646461090a202f2full,0x722509203233752eull,0x317225202c363131ull,0x20203b38202c3531ull,
0x0a202f2f09202020ull,0x33752e706c657309ull,0x3731317225092032ull,0x2c3631317225202cull,
0x202c353131722520ull,0x202f2f093b337025ull,0x33752e646461090aull,0x3831317225092032ull,
0x2c3731317225202cull,0x202020203b363120ull,0x6573090a202f2f09ull,0x09203233752e706cull,
0x25202c3931317225ull,0x7225202c38313172ull,0x327025202c373131ull,0x61090a202f2f093bull,
0x09203233752e6464ull,0x25202c3032317225ull,0x3233202c39313172ull,0x2f2f09202020203bull,
0x2e706c6573090a20ull,0x3172250920323375ull,0x32317225202c3132ull,0x3931317225202c30ull,
0x2f093b317025202cull,0x2e646461090a202full,0x3172250920323375ull,0x32317225202c3232ull,
0x20203b3436202c31ull,0x090a202f2f092020ull,0x2e746c2e70746573ull,0x3770250920323366ull,
0x25202c376625202cull,0x2f092020203b3866ull,0x706c6573090a202full,0x722509203233752eull,
0x317225202c333231ull,0x32317225202c3232ull,0x093b377025202c31ull,0x646461090a202f2full,
0x722509203233752eull,0x317225202c343231ull,0x3b383231202c3332ull,0x0a202f2f09202020ull,
0x3233622e766f6d09ull,0x25202c3966250920ull,0x202020203b323472ull,0x0920202020202020ull,
0x746573090a202f2full,0x3233662e74672e70ull,0x25202c3870250920ull,0x3b396625202c3866ull,
0x0a202f2f09202020ull,0x33732e706c657309ull,0x3532317225092032ull,0x2c3432317225202cull,
0x202c333231722520ull,0x202f2f093b387025ull,0x33732e766f6d090aull,0x3632317225092032ull,
0x202020203b30202cull,0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,
0x3b30202c37323172ull,0x2020202020202020ull,0x202f2f0920202020ull,0x33732e766f6d090aull,
0x3832317225092032ull,0x202020203b30202cull,0x2020202020202020ull,0x6574090a202f2f09ull,
0x2e34762e64312e78ull,0x203233732e323375ull,0x252c39323172257bull,0x3172252c30333172ull,
0x32333172252c3133ull,0x65566d756e5b2c7dull,0x7b2c786554737472ull,0x72252c3532317225ull,
0x323172252c363231ull,0x7d38323172252c37ull,0x636f6c2e090a3b5dull,0x0936383109363109ull,
0x732e766f6d090a30ull,0x3331722509203233ull,0x3932317225202c33ull,0x202020202020203bull,
0x6c090a202f2f0920ull,0x2e6d617261702e64ull,0x3172250920323375ull,0x635f5f5b202c3433ull,
0x5f6d726170616475ull,0x73616c6333315a5full,0x65786f5679666973ull,0x3568505f536a506cull,
0x5f315333746e6975ull,0x6f6c66366a5f3153ull,0x6d756e5f66337461ull,0x3b5d736c65786f56ull,
0x393a6469202f2f09ull,0x6475635f5f203334ull,0x5a5f5f6d72617061ull,0x697373616c633331ull,
0x506c65786f567966ull,0x69753568505f536aull,0x31535f315333746eull,0x74616f6c66366a5full,
0x6f566d756e5f6633ull,0x3078302b736c6578ull,0x6c2e70746573090aull,0x2509203233752e65ull,
0x33317225202c3970ull,0x3b35317225202c34ull,0x2540090a202f2f09ull,0x0920617262203970ull,
0x35325f305f744c24ull,0x202020202020203bull,0x202f2f0920202020ull,0x3109636f6c2e090aull,
0x0a30093938310936ull,0x3436752e74766309ull,0x722509203233752eull,0x35317225202c3164ull,
0x092020202020203bull,0x6c756d090a202f2full,0x203436752e6f6c2eull,0x25202c3264722509ull,
0x203b34202c316472ull,0x0a202f2f09202020ull,0x617261702e646c09ull,0x2509203436752e6dull,
0x5f5f5b202c336472ull,0x6d72617061647563ull,0x616c6333315a5f5full,0x786f567966697373ull,
0x68505f536a506c65ull,0x315333746e697535ull,0x6c66366a5f31535full,0x6f765f663374616full,
0x73747265566c6578ull,0x6469202f2f093b5dull,0x635f5f203434393aull,0x5f6d726170616475ull,
0x73616c6333315a5full,0x65786f5679666973ull,0x3568505f536a506cull,0x5f315333746e6975ull,
0x6f6c66366a5f3153ull,0x786f765f66337461ull,0x2b73747265566c65ull,0x646461090a307830ull,
0x722509203436752eull,0x33647225202c3464ull,0x203b32647225202cull,0x0a202f2f09202020ull,
0x626f6c672e747309ull,0x09203233752e6c61ull,0x5d302b346472255bull,0x3b3333317225202cull,
0x393a6469202f2f09ull,0x636f6c2e090a3534ull,0x0930393109363109ull,0x752e766f6d090a30ull,
0x3331722509203233ull,0x2020203b30202c35ull,0x2020202020202020ull,0x73090a202f2f0920ull,
0x33752e656e2e7465ull,0x2509203233752e32ull,0x7225202c36333172ull,0x317225202c333331ull,
0x0a202f2f093b3533ull,0x3233732e67656e09ull,0x2c37333172250920ull,0x203b363331722520ull,
0x0920202020202020ull,0x2e646c090a202f2full,0x36752e6d61726170ull,0x2c35647225092034ull,
0x616475635f5f5b20ull,0x315a5f5f6d726170ull,0x66697373616c6333ull,0x6a506c65786f5679ull,
0x6e69753568505f53ull,0x5f31535f31533374ull,0x3374616f6c66366aull,0x4f6c65786f765f66ull,
0x5d64656970756363ull,0x3a6469202f2f093bull,0x75635f5f20363439ull,0x5f5f6d7261706164ull,
0x7373616c6333315aull,0x6c65786f56796669ull,0x753568505f536a50ull,0x535f315333746e69ull,
0x616f6c66366a5f31ull,0x65786f765f663374ull,0x6569707563634f6cull,0x61090a3078302b64ull,
0x09203436752e6464ull,0x7225202c36647225ull,0x32647225202c3564ull,0x2f2f09202020203bull,
0x6c672e7473090a20ull,0x3233752e6c61626full,0x2b366472255b0920ull,0x33317225202c5d30ull,
0x6469202f2f093b37ull,0x744c240a3734393aull,0x090a3a35325f305full,0x09363109636f6c2eull,
0x65090a3009323931ull,0x202020203b746978ull,0x2020202020202020ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x6e6557444c240a20ull,0x6c6333315a5f5f64ull,0x6f56796669737361ull,
0x505f536a506c6578ull,0x5333746e69753568ull,0x66366a5f31535f31ull,0x0a3a663374616f6cull,
0x5a5f202f2f207d09ull,0x697373616c633331ull,0x506c65786f567966ull,0x69753568505f536aull,
0x31535f315333746eull,0x74616f6c66366a5full,0x6e652e090a0a6633ull,0x33315a5f20797274ull,
0x56746361706d6f63ull,0x536a50736c65786full,0x0a7b090a6a5f535full,0x752e206765722e09ull,
0x35313c7225203233ull,0x6765722e090a3b3eull,0x7225203436752e20ull,0x090a3b3e32313c64ull,
0x72702e206765722eull,0x3e343c7025206465ull,0x617261702e090a3bull,0x5f203436752e206dull,
0x726170616475635full,0x6f6333315a5f5f6dull,0x786f56746361706dull,0x535f536a50736c65ull,
0x61706d6f635f6a5full,0x65786f5664657463ull,0x0a3b79617272416cull,0x206d617261702e09ull,
0x635f5f203436752eull,0x5f6d726170616475ull,0x706d6f6333315a5full,0x6c65786f56746361ull,
0x6a5f535f536a5073ull,0x634f6c65786f765full,0x0a3b646569707563ull,0x206d617261702e09ull,
0x635f5f203436752eull,0x5f6d726170616475ull,0x706d6f6333315a5full,0x6c65786f56746361ull,
0x6a5f535f536a5073ull,0x634f6c65786f765full,0x6353646569707563ull,0x61702e090a3b6e61ull,
0x3233752e206d6172ull,0x70616475635f5f20ull,0x33315a5f5f6d7261ull,0x56746361706d6f63ull,
0x536a50736c65786full,0x6d756e5f6a5f535full,0x0a3b736c65786f56ull,0x363109636f6c2e09ull,
0x240a300939303209ull,0x315a5f5f3142424cull,0x746361706d6f6333ull,0x6a50736c65786f56ull,
0x090a3a6a5f535f53ull,0x2e3233732e747663ull,0x3172250920363175ull,0x646961746325202cull,
0x2f092020203b792eull,0x2e747663090a202full,0x203631752e323373ull,0x6e25202c32722509ull,
0x3b782e6469617463ull,0x090a202f2f092020ull,0x6f6c2e34326c756dull,0x722509203233732eull,
0x202c317225202c33ull,0x2f0920203b327225ull,0x2e747663090a202full,0x203631752e323375ull,
0x6325202c34722509ull,0x203b782e64696174ull,0x090a202f2f092020ull,0x203233752e646461ull,
0x7225202c35722509ull,0x203b347225202c33ull,0x2f09202020202020ull,0x2e747663090a202full,
0x203631752e323373ull,0x6e25202c36722509ull,0x20203b782e646974ull,0x090a202f2f092020ull,
0x6f6c2e34326c756dull,0x722509203233732eull,0x202c357225202c37ull,0x2f0920203b367225ull,
0x2e747663090a202full,0x203631752e323375ull,0x7425202c38722509ull,0x2020203b782e6469ull,
0x090a202f2f092020ull,0x203233752e646461ull,0x7225202c39722509ull,0x203b387225202c37ull,
0x2f09202020202020ull,0x2e747663090a202full,0x203233752e343675ull,0x25202c3164722509ull,
0x20202020203b3972ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3264722509203436ull,
0x202c31647225202cull,0x2f09202020203b34ull,0x702e646c090a202full,0x3436752e6d617261ull,
0x202c336472250920ull,0x70616475635f5f5bull,0x33315a5f5f6d7261ull,0x56746361706d6f63ull,
0x536a50736c65786full,0x786f765f6a5f535full,0x69707563634f6c65ull,0x202f2f093b5d6465ull,
0x5f5f2037323a6469ull,0x6d72617061647563ull,0x6d6f6333315a5f5full,0x65786f5674636170ull,
0x5f535f536a50736cull,0x4f6c65786f765f6aull,0x2b64656970756363ull,0x646461090a307830ull,
0x722509203436752eull,0x33647225202c3464ull,0x203b32647225202cull,0x0a202f2f09202020ull,
0x626f6c672e646c09ull,0x09203233752e6c61ull,0x255b202c30317225ull,0x093b5d302b346472ull,
0x38323a6469202f2full,0x33752e766f6d090aull,0x2c31317225092032ull,0x20202020203b3020ull,
0x2020202020202020ull,0x6573090a202f2f09ull,0x33752e71652e7074ull,0x202c317025092032ull,
0x7225202c30317225ull,0x202f2f09203b3131ull,0x622031702540090aull,0x5f744c2409206172ull,
0x202020203b375f31ull,0x2020202020202020ull,0x646c090a202f2f09ull,0x752e6d617261702eull,
0x3231722509203233ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x6361706d6f633331ull,
0x50736c65786f5674ull,0x6e5f6a5f535f536aull,0x736c65786f566d75ull,0x6469202f2f093b5dull,
0x75635f5f2039323aull,0x5f5f6d7261706164ull,0x61706d6f6333315aull,0x736c65786f567463ull,
0x5f6a5f535f536a50ull,0x6c65786f566d756eull,0x73090a3078302b73ull,0x752e656c2e707465ull,
0x2c32702509203233ull,0x25202c3231722520ull,0x2f2f0920203b3972ull,0x2032702540090a20ull,
0x744c240920617262ull,0x2020203b375f315full,0x2020202020202020ull,0x2e090a202f2f0920ull,
0x3209363109636f6cull,0x646c090a30093531ull,0x752e6d617261702eull,0x3564722509203436ull,
0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x6361706d6f633331ull,0x50736c65786f5674ull,
0x635f6a5f535f536aull,0x6465746361706d6full,0x7272416c65786f56ull,0x202f2f093b5d7961ull,
0x5f5f2030333a6469ull,0x6d72617061647563ull,0x6d6f6333315a5f5full,0x65786f5674636170ull,
0x5f535f536a50736cull,0x6361706d6f635f6aull,0x6c65786f56646574ull,0x78302b7961727241ull,
0x61702e646c090a30ull,0x203436752e6d6172ull,0x5b202c3664722509ull,0x6170616475635f5full,
0x6333315a5f5f6d72ull,0x6f56746361706d6full,0x5f536a50736c6578ull,0x65786f765f6a5f53ull,
0x6569707563634f6cull,0x093b5d6e61635364ull,0x31333a6469202f2full,0x70616475635f5f20ull,
0x33315a5f5f6d7261ull,0x56746361706d6f63ull,0x536a50736c65786full,0x786f765f6a5f535full,
0x69707563634f6c65ull,0x302b6e6163536465ull,0x2e646461090a3078ull,0x6472250920343675ull,
0x2c36647225202c37ull,0x20203b3264722520ull,0x090a202f2f092020ull,0x61626f6c672e646cull,
0x2509203233752e6cull,0x72255b202c333172ull,0x2f093b5d302b3764ull,0x0a32333a6469202full,
0x3436752e74766309ull,0x722509203233752eull,0x33317225202c3864ull,0x092020202020203bull,
0x6c756d090a202f2full,0x203436752e6f6c2eull,0x25202c3964722509ull,0x203b34202c386472ull,
0x0a202f2f09202020ull,0x3436752e64646109ull,0x2c30316472250920ull,0x25202c3564722520ull,
0x092020203b396472ull,0x2e7473090a202f2full,0x752e6c61626f6c67ull,0x6472255b09203233ull,
0x25202c5d302b3031ull,0x69202f2f093b3972ull,0x744c240a33333a64ull,0x4c240a3a375f315full,
0x2e090a3a355f315full,0x3209363109636f6cull,0x7865090a30093731ull,0x20202020203b7469ull,
0x2020202020202020ull,0x2020202020202020ull,0x202f2f0920202020ull,0x646e6557444c240aull,
0x6d6f6333315a5f5full,0x65786f5674636170ull,0x5f535f536a50736cull,0x2f2f207d090a3a6aull,
0x6d6f6333315a5f20ull,0x65786f5674636170ull,0x5f535f536a50736cull,0x746e652e090a0a6aull,
0x6737315a5f207972ull,0x5465746172656e65ull,0x73656c676e616972ull,0x3474616f6c663650ull,
0x5f31536a505f3053ull,0x325333746e697535ull,0x6f6c66365f32535full,0x090a6a6a66337461ull,
0x206765722e090a7bull,0x3c7225203233752eull,0x722e090a3b3e3836ull,0x203436752e206765ull,
0x3b3e36323c647225ull,0x2e206765722e090aull,0x353c662520323366ull,0x722e090a3b3e3638ull,
0x646572702e206765ull,0x3b3e36323c702520ull,0x6d617261702e090aull,0x5f5f203436752e20ull,
0x6d72617061647563ull,0x6e656737315a5f5full,0x6972546574617265ull,0x365073656c676e61ull,
0x30533474616f6c66ull,0x75355f31536a505full,0x535f325333746e69ull,0x74616f6c66365f32ull,
0x736f705f6a6a6633ull,0x617261702e090a3bull,0x5f203436752e206dull,0x726170616475635full,
0x656737315a5f5f6dull,0x725465746172656eull,0x5073656c676e6169ull,0x533474616f6c6636ull,
0x355f31536a505f30ull,0x5f325333746e6975ull,0x616f6c66365f3253ull,0x6f6e5f6a6a663374ull,
0x61702e090a3b6d72ull,0x3436752e206d6172ull,0x70616475635f5f20ull,0x37315a5f5f6d7261ull,
0x65746172656e6567ull,0x656c676e61697254ull,0x74616f6c66365073ull,0x31536a505f305334ull,
0x5333746e6975355full,0x6c66365f32535f32ull,0x5f6a6a663374616full,0x65746361706d6f63ull,
0x72416c65786f5664ull,0x702e090a3b796172ull,0x36752e206d617261ull,0x616475635f5f2034ull,
0x315a5f5f6d726170ull,0x746172656e656737ull,0x6c676e6169725465ull,0x616f6c6636507365ull,
0x536a505f30533474ull,0x33746e6975355f31ull,0x66365f32535f3253ull,0x6a6a663374616f6cull,
0x747265566d756e5full,0x64656e6e61635373ull,0x617261702e090a3bull,0x6e67696c612e206dull,
0x5f2038622e203420ull,0x726170616475635full,0x656737315a5f5f6dull,0x725465746172656eull,
0x5073656c676e6169ull,0x533474616f6c6636ull,0x355f31536a505f30ull,0x5f325333746e6975ull,
0x616f6c66365f3253ull,0x72675f6a6a663374ull,0x315b657a69536469ull,0x61702e090a3b5d32ull,
0x696c612e206d6172ull,0x38622e2034206e67ull,0x70616475635f5f20ull,0x37315a5f5f6d7261ull,
0x65746172656e6567ull,0x656c676e61697254ull,0x74616f6c66365073ull,0x31536a505f305334ull,
0x5333746e6975355full,0x6c66365f32535f32ull,0x5f6a6a663374616full,0x657a695364697267ull,
0x32315b7466696853ull,0x7261702e090a3b5dull,0x67696c612e206d61ull,0x2038622e2034206eull,
0x6170616475635f5full,0x6737315a5f5f6d72ull,0x5465746172656e65ull,0x73656c676e616972ull,
0x3474616f6c663650ull,0x5f31536a505f3053ull,0x325333746e697535ull,0x6f6c66365f32535full,
0x675f6a6a66337461ull,0x4d657a6953646972ull,0x3b5d32315b6b7361ull,0x6d617261702e090aull,
0x206e67696c612e20ull,0x5f5f2038622e2034ull,0x6d72617061647563ull,0x6e656737315a5f5full,
0x6972546574617265ull,0x365073656c676e61ull,0x30533474616f6c66ull,0x75355f31536a505full,
0x535f325333746e69ull,0x74616f6c66365f32ull,0x786f765f6a6a6633ull,0x315b657a69536c65ull,
0x61702e090a3b5d32ull,0x3233662e206d6172ull,0x70616475635f5f20ull,0x37315a5f5f6d7261ull,
0x65746172656e6567ull,0x656c676e61697254ull,0x74616f6c66365073ull,0x31536a505f305334ull,
0x5333746e6975355full,0x6c66365f32535f32ull,0x5f6a6a663374616full,0x65756c61566f7369ull,
0x617261702e090a3bull,0x5f203233752e206dull,0x726170616475635full,0x656737315a5f5f6dull,
0x725465746172656eull,0x5073656c676e6169ull,0x533474616f6c6636ull,0x355f31536a505f30ull,
0x5f325333746e6975ull,0x616f6c66365f3253ull,0x63615f6a6a663374ull,0x65786f5665766974ull,
0x61702e090a3b736cull,0x3233752e206d6172ull,0x70616475635f5f20ull,0x37315a5f5f6d7261ull,
0x65746172656e6567ull,0x656c676e61697254ull,0x74616f6c66365073ull,0x31536a505f305334ull,
0x5333746e6975355full,0x6c66365f32535f32ull,0x5f6a6a663374616full,0x737472655678616dull,
0x726168732e090a3bull,0x67696c612e206465ull,0x2038622e2034206eull,0x6e5f616475635f5full,
0x327473696c6d726full,0x5d383036345b3430ull,0x726168732e090a3bull,0x67696c612e206465ull,
0x2038622e2034206eull,0x765f616475635f5full,0x347473696c747265ull,0x383036345b323138ull,
0x636f6c2e090a3b5dull,0x0932353209363109ull,0x5f3142424c240a30ull,0x656e656737315a5full,
0x6169725465746172ull,0x66365073656c676eull,0x5f30533474616f6cull,0x6975355f31536a50ull,
0x32535f325333746eull,0x3374616f6c66365full,0x6c2e090a3a6a6a66ull,0x363209363109636full,
0x747663090a300933ull,0x3631752e3233732eull,0x25202c3172250920ull,0x3b792e6469617463ull,
0x0a202f2f09202020ull,0x3233732e74766309ull,0x722509203631752eull,0x6174636e25202c32ull,
0x0920203b782e6469ull,0x6c756d090a202f2full,0x33732e6f6c2e3432ull,0x202c337225092032ull,
0x327225202c317225ull,0x0a202f2f0920203bull,0x617261702e646c09ull,0x2509203233752e6dull,
0x635f5f5b202c3472ull,0x5f6d726170616475ull,0x656e656737315a5full,0x6169725465746172ull,
0x66365073656c676eull,0x5f30533474616f6cull,0x6975355f31536a50ull,0x32535f325333746eull,
0x3374616f6c66365full,0x697463615f6a6a66ull,0x736c65786f566576ull,0x6469202f2f093b5dull,
0x5f5f20383439333aull,0x6d72617061647563ull,0x6e656737315a5f5full,0x6972546574617265ull,
0x365073656c676e61ull,0x30533474616f6c66ull,0x75355f31536a505full,0x535f325333746e69ull,
0x74616f6c66365f32ull,0x7463615f6a6a6633ull,0x6c65786f56657669ull,0x73090a3078302b73ull,
0x09203233752e6275ull,0x347225202c357225ull,0x202020203b31202cull,0x2f2f092020202020ull,
0x752e747663090a20ull,0x09203631752e3233ull,0x746325202c367225ull,0x20203b782e646961ull,
0x61090a202f2f0920ull,0x09203233752e6464ull,0x337225202c377225ull,0x20203b367225202cull,
0x2f2f092020202020ull,0x732e747663090a20ull,0x09203631752e3233ull,0x746e25202c387225ull,
0x2020203b782e6469ull,0x6d090a202f2f0920ull,0x2e6f6c2e34326c75ull,0x3972250920323373ull,
0x25202c377225202cull,0x2f2f0920203b3872ull,0x752e747663090a20ull,0x09203631752e3233ull,
0x7425202c30317225ull,0x2020203b782e6469ull,0x61090a202f2f0920ull,0x09203233752e6464ull,
0x7225202c31317225ull,0x3b30317225202c39ull,0x2f2f092020202020ull,0x61702e646c090a20ull,
0x203436752e6d6172ull,0x5b202c3164722509ull,0x6170616475635f5full,0x6737315a5f5f6d72ull,
0x5465746172656e65ull,0x73656c676e616972ull,0x3474616f6c663650ull,0x5f31536a505f3053ull,
0x325333746e697535ull,0x6f6c66365f32535full,0x635f6a6a66337461ull,0x6465746361706d6full,
0x7272416c65786f56ull,0x202f2f093b5d7961ull,0x20313539333a6469ull,0x6170616475635f5full,
0x6737315a5f5f6d72ull,0x5465746172656e65ull,0x73656c676e616972ull,0x3474616f6c663650ull,
0x5f31536a505f3053ull,0x325333746e697535ull,0x6f6c66365f32535full,0x635f6a6a66337461ull,
0x6465746361706d6full,0x7272416c65786f56ull,0x090a3078302b7961ull,0x2e746c2e70746573ull,
0x3170250920323375ull,0x25202c357225202cull,0x2f0920203b313172ull,0x706c6573090a202full,
0x722509203233752eull,0x2c357225202c3231ull,0x25202c3131722520ull,0x0a202f2f093b3170ull,
0x3436752e74766309ull,0x722509203233752eull,0x32317225202c3264ull,0x092020202020203bull,
0x6c756d090a202f2full,0x203436752e6f6c2eull,0x25202c3364722509ull,0x203b34202c326472ull,
0x0a202f2f09202020ull,0x3436752e64646109ull,0x202c346472250920ull,0x7225202c31647225ull,
0x09202020203b3364ull,0x2e646c090a202f2full,0x752e6c61626f6c67ull,0x3331722509203233ull,
0x2b346472255b202cull,0x69202f2f093b5d30ull,0x090a323539333a64ull,0x09363109636f6c2eull,
0x6c090a3009323031ull,0x2e6d617261702e64ull,0x3172250920323375ull,0x75635f5f5b202c34ull,
0x5f5f6d7261706164ull,0x72656e656737315aull,0x6e61697254657461ull,0x6c66365073656c67ull,
0x505f30533474616full,0x6e6975355f31536aull,0x5f32535f32533374ull,0x663374616f6c6636ull,
0x53646972675f6a6aull,0x7466696853657a69ull,0x202f2f093b5d382bull,0x20333539333a6469ull,
0x6170616475635f5full,0x6737315a5f5f6d72ull,0x5465746172656e65ull,0x73656c676e616972ull,
0x3474616f6c663650ull,0x5f31536a505f3053ull,0x325333746e697535ull,0x6f6c66365f32535full,
0x675f6a6a66337461ull,0x53657a6953646972ull,0x3878302b74666968ull,0x33752e726873090aull,
0x2c35317225092032ull,0x25202c3331722520ull,0x202020203b343172ull,0x646c090a202f2f09ull,
0x752e6d617261702eull,0x3631722509203233ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,
0x6172656e65673731ull,0x676e616972546574ull,0x6f6c66365073656cull,0x6a505f3053347461ull,
0x746e6975355f3153ull,0x365f32535f325333ull,0x6a663374616f6c66ull,0x6953646972675f6aull,
0x2b7466696853657aull,0x69202f2f093b5d34ull,0x5f20343539333a64ull,0x726170616475635full,
0x656737315a5f5f6dull,0x725465746172656eull,0x5073656c676e6169ull,0x533474616f6c6636ull,
0x355f31536a505f30ull,0x5f325333746e6975ull,0x616f6c66365f3253ull,0x72675f6a6a663374ull,
0x6853657a69536469ull,0x0a3478302b746669ull,0x3233752e72687309ull,0x202c373172250920ull,
0x7225202c33317225ull,0x09202020203b3631ull,0x2e646c090a202f2full,0x33752e6d61726170ull,
0x2c38317225092032ull,0x616475635f5f5b20ull,0x315a5f5f6d726170ull,0x746172656e656737ull,
0x6c676e6169725465ull,0x616f6c6636507365ull,0x536a505f30533474ull,0x33746e6975355f31ull,
0x66365f32535f3253ull,0x6a6a663374616f6cull,0x7a6953646972675full,0x5d302b6b73614d65ull,
0x3a6469202f2f093bull,0x635f5f2035353933ull,0x5f6d726170616475ull,0x656e656737315a5full,
0x6169725465746172ull,0x66365073656c676eull,0x5f30533474616f6cull,0x6975355f31536a50ull,
0x32535f325333746eull,0x3374616f6c66365full,0x646972675f6a6a66ull,0x6b73614d657a6953ull,
0x6e61090a3078302bull,0x2509203233622e64ull,0x317225202c393172ull,0x3b33317225202c38ull,
0x202f2f0920202020ull,0x7261702e646c090aull,0x09203233752e6d61ull,0x5f5b202c30327225ull,
0x726170616475635full,0x656737315a5f5f6dull,0x725465746172656eull,0x5073656c676e6169ull,
0x533474616f6c6636ull,0x355f31536a505f30ull,0x5f325333746e6975ull,0x616f6c66365f3253ull,
0x72675f6a6a663374ull,0x614d657a69536469ull,0x2f093b5d382b6b73ull,0x3539333a6469202full,
0x616475635f5f2036ull,0x315a5f5f6d726170ull,0x746172656e656737ull,0x6c676e6169725465ull,
0x616f6c6636507365ull,0x536a505f30533474ull,0x33746e6975355f31ull,0x66365f32535f3253ull,
0x6a6a663374616f6cull,0x7a6953646972675full,0x78302b6b73614d65ull,0x622e646e61090a38ull,
0x3132722509203233ull,0x202c30327225202cull,0x2020203b35317225ull,0x6c090a202f2f0920ull,
0x2e6d617261702e64ull,0x3272250920323375ull,0x75635f5f5b202c32ull,0x5f5f6d7261706164ull,
0x72656e656737315aull,0x6e61697254657461ull,0x6c66365073656c67ull,0x505f30533474616full,
0x6e6975355f31536aull,0x5f32535f32533374ull,0x663374616f6c6636ull,0x53646972675f6a6aull,
0x2b6b73614d657a69ull,0x69202f2f093b5d34ull,0x5f20373539333a64ull,0x726170616475635full,
0x656737315a5f5f6dull,0x725465746172656eull,0x5073656c676e6169ull,0x533474616f6c6636ull,
0x355f31536a505f30ull,0x5f325333746e6975ull,0x616f6c66365f3253ull,0x72675f6a6a663374ull,
0x614d657a69536469ull,0x090a3478302b6b73ull,0x203233622e646e61ull,0x25202c3332722509ull,
0x317225202c323272ull,0x2f09202020203b37ull,0x2e747663090a202full,0x752e3233662e6e72ull,
0x2c31662509203233ull,0x20203b3931722520ull,0x090a202f2f092020ull,0x662e6e722e747663ull,
0x09203233752e3233ull,0x327225202c326625ull,0x2f09202020203b31ull,0x2e747663090a202full,
0x752e3233662e6e72ull,0x2c33662509203233ull,0x20203b3332722520ull,0x090a202f2f092020ull,
0x6d617261702e646cull,0x662509203233662eull,0x75635f5f5b202c34ull,0x5f5f6d7261706164ull,
0x72656e656737315aull,0x6e61697254657461ull,0x6c66365073656c67ull,0x505f30533474616full,
0x6e6975355f31536aull,0x5f32535f32533374ull,0x663374616f6c6636ull,0x6c65786f765f6a6aull,
0x3b5d302b657a6953ull,0x333a6469202f2f09ull,0x75635f5f20343439ull,0x5f5f6d7261706164ull,
0x72656e656737315aull,0x6e61697254657461ull,0x6c66365073656c67ull,0x505f30533474616full,
0x6e6975355f31536aull,0x5f32535f32533374ull,0x663374616f6c6636ull,0x6c65786f765f6a6aull,
0x3078302b657a6953ull,0x33662e6c756d090aull,0x202c356625092032ull,0x346625202c316625ull,
0x202020202020203bull,0x646c090a202f2f09ull,0x662e6d617261702eull,0x2c36662509203233ull,
0x616475635f5f5b20ull,0x315a5f5f6d726170ull,0x746172656e656737ull,0x6c676e6169725465ull,
0x616f6c6636507365ull,0x536a505f30533474ull,0x33746e6975355f31ull,0x66365f32535f3253ull,
0x6a6a663374616f6cull,0x69536c65786f765full,0x2f093b5d382b657aull,0x3439333a6469202full,
0x616475635f5f2033ull,0x315a5f5f6d726170ull,0x746172656e656737ull,0x6c676e6169725465ull,
0x616f6c6636507365ull,0x536a505f30533474ull,0x33746e6975355f31ull,0x66365f32535f3253ull,
0x6a6a663374616f6cull,0x69536c65786f765full,0x090a3878302b657aull,0x203233662e6c756dull,
0x6625202c37662509ull,0x203b366625202c32ull,0x2f09202020202020ull,0x702e646c090a202full,
0x3233662e6d617261ull,0x5b202c3866250920ull,0x6170616475635f5full,0x6737315a5f5f6d72ull,
0x5465746172656e65ull,0x73656c676e616972ull,0x3474616f6c663650ull,0x5f31536a505f3053ull,
0x325333746e697535ull,0x6f6c66365f32535full,0x765f6a6a66337461ull,0x657a69536c65786full,
0x202f2f093b5d342bull,0x20323439333a6469ull,0x6170616475635f5full,0x6737315a5f5f6d72ull,
0x5465746172656e65ull,0x73656c676e616972ull,0x3474616f6c663650ull,0x5f31536a505f3053ull,
0x325333746e697535ull,0x6f6c66365f32535full,0x765f6a6a66337461ull,0x657a69536c65786full,
0x756d090a3478302bull,0x2509203233662e6cull,0x2c336625202c3966ull,0x2020203b38662520ull,
0x202f2f0920202020ull,0x33662e766f6d090aull,0x2c30316625092032ull,0x3030386662663020ull,
0x202020203b303030ull,0x090a312d202f2f09ull,0x203233662e646461ull,0x25202c3131662509ull,
0x30316625202c3566ull,0x2f0920202020203bull,0x2e766f6d090a202full,0x3166250920323366ull,
0x3866626630202c32ull,0x20203b3030303030ull,0x312d202f2f092020ull,0x33662e646461090aull,
0x2c33316625092032ull,0x6625202c37662520ull,0x20202020203b3231ull,0x6f6d090a202f2f09ull,
0x2509203233662e76ull,0x626630202c343166ull,0x3b30303030303866ull,0x202f2f0920202020ull,
0x2e646461090a312dull,0x3166250920323366ull,0x202c396625202c35ull,0x2020203b34316625ull,
0x090a202f2f092020ull,0x203233662e766f6dull,0x30202c3631662509ull,0x3030303034303466ull,
0x2f09202020203b30ull,0x6c756d090a33202full,0x662509203233662eull,0x31316625202c3731ull,
0x203b36316625202cull,0x0a202f2f09202020ull,0x3233662e766f6d09ull,0x202c383166250920ull,
0x3030303430346630ull,0x09202020203b3030ull,0x756d090a33202f2full,0x2509203233662e6cull,
0x316625202c393166ull,0x3b38316625202c33ull,0x202f2f0920202020ull,0x33662e766f6d090aull,
0x2c30326625092032ull,0x3030343034663020ull,0x202020203b303030ull,0x6d090a33202f2f09ull,
0x09203233662e6c75ull,0x6625202c31326625ull,0x30326625202c3531ull,0x2f2f09202020203bull,
0x662e6c756d090a20ull,0x3232662509203233ull,0x202c37316625202cull,0x2020203b37316625ull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x6630202c33326625ull,0x3030303030613034ull,
0x2f2f09202020203bull,0x2e6c756d090a3520ull,0x3266250920323366ull,0x2c37316625202c34ull,
0x20203b3332662520ull,0x090a202f2f092020ull,0x203233662e6c756dull,0x25202c3532662509ull,
0x316625202c393166ull,0x2f09202020203b39ull,0x2e766f6d090a202full,0x3266250920323366ull,
0x6130346630202c36ull,0x20203b3030303030ull,0x0a35202f2f092020ull,0x3233662e6c756d09ull,
0x202c373266250920ull,0x6625202c39316625ull,0x09202020203b3632ull,0x6c756d090a202f2full,
0x662509203233662eull,0x31326625202c3832ull,0x203b31326625202cull,0x0a202f2f09202020ull,
0x3233662e766f6d09ull,0x202c393266250920ull,0x3030306130346630ull,0x09202020203b3030ull,
0x756d090a35202f2full,0x2509203233662e6cull,0x326625202c303366ull,0x3b39326625202c31ull,
0x202f2f0920202020ull,0x33662e6c756d090aull,0x2c31336625092032ull,0x25202c3731662520ull,
0x202020203b323266ull,0x756d090a202f2f09ull,0x2509203233662e6cull,0x316625202c323366ull,
0x3b34326625202c37ull,0x202f2f0920202020ull,0x33662e6c756d090aull,0x2c33336625092032ull,
0x25202c3931662520ull,0x202020203b353266ull,0x756d090a202f2f09ull,0x2509203233662e6cull,
0x316625202c343366ull,0x3b37326625202c39ull,0x202f2f0920202020ull,0x33662e6c756d090aull,
0x2c35336625092032ull,0x25202c3132662520ull,0x202020203b383266ull,0x756d090a202f2f09ull,
0x2509203233662e6cull,0x326625202c363366ull,0x3b30336625202c31ull,0x202f2f0920202020ull,
0x33662e6c756d090aull,0x2c37336625092032ull,0x25202c3731662520ull,0x202020203b313366ull,
0x756d090a202f2f09ull,0x2509203233662e6cull,0x316625202c383366ull,0x3b33336625202c39ull,
0x202f2f0920202020ull,0x33662e6c756d090aull,0x2c39336625092032ull,0x25202c3132662520ull,
0x202020203b353366ull,0x7573090a202f2f09ull,0x2509203233662e62ull,0x336625202c303466ull,
0x3b32336625202c37ull,0x202f2f0920202020ull,0x33662e646461090aull,0x2c31346625092032ull,
0x25202c3933662520ull,0x202020203b303466ull,0x7573090a202f2f09ull,0x2509203233662e62ull,
0x346625202c323466ull,0x3b36336625202c31ull,0x202f2f0920202020ull,0x33662e646461090aull,
0x2c33346625092032ull,0x25202c3833662520ull,0x202020203b323466ull,0x7573090a202f2f09ull,
0x2509203233662e62ull,0x346625202c343466ull,0x3b34336625202c33ull,0x202f2f0920202020ull,
0x33662e766f6d090aull,0x2c35346625092032ull,0x6363333134663020ull,0x202020203b646363ull,
0x382e3131202f2f09ull,0x33662e646461090aull,0x2c36346625092032ull,0x25202c3434662520ull,
0x202020203b353466ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x336630202c373466ull,
0x3b64636363633465ull,0x202f2f0920202020ull,0x6c756d090a322e30ull,0x662509203233662eull,
0x36346625202c3834ull,0x203b37346625202cull,0x0a202f2f09202020ull,0x3233662e766f6d09ull,
0x202c393466250920ull,0x3030303066336630ull,0x09202020203b3030ull,0x090a352e30202f2full,
0x203233662e646461ull,0x25202c3035662509ull,0x346625202c383466ull,0x2f09202020203b39ull,
0x636f6c2e090a202full,0x0934303109363109ull,0x662e766f6d090a30ull,0x3135662509203233ull,
0x333861336630202cull,0x2020203b66363231ull,0x302e30202f2f0920ull,0x2e646461090a3130ull,
0x3566250920323366ull,0x2c31316625202c32ull,0x20203b3135662520ull,0x090a202f2f092020ull,
0x203233662e766f6dull,0x30202c3335662509ull,0x3030303034303466ull,0x2f09202020203b30ull,
0x6c756d090a33202full,0x662509203233662eull,0x32356625202c3435ull,0x203b33356625202cull,
0x0a202f2f09202020ull,0x3233662e6c756d09ull,0x202c353566250920ull,0x6625202c34356625ull,
0x09202020203b3435ull,0x766f6d090a202f2full,0x662509203233662eull,0x30346630202c3635ull,
0x203b303030303061ull,0x35202f2f09202020ull,0x33662e6c756d090aull,0x2c37356625092032ull,
0x25202c3435662520ull,0x202020203b363566ull,0x756d090a202f2f09ull,0x2509203233662e6cull,
0x356625202c383566ull,0x3b35356625202c34ull,0x202f2f0920202020ull,0x33662e6c756d090aull,
0x2c39356625092032ull,0x25202c3435662520ull,0x202020203b373566ull,0x756d090a202f2f09ull,
0x2509203233662e6cull,0x356625202c303666ull,0x3b38356625202c34ull,0x202f2f0920202020ull,
0x33662e627573090aull,0x2c31366625092032ull,0x25202c3036662520ull,0x202020203b393566ull,
0x6461090a202f2f09ull,0x2509203233662e64ull,0x336625202c323666ull,0x3b31366625202c39ull,
0x202f2f0920202020ull,0x33662e627573090aull,0x2c33366625092032ull,0x25202c3236662520ull,
0x202020203b363366ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x336630202c343666ull,
0x3b30303030303066ull,0x202f2f0920202020ull,0x646461090a352e30ull,0x662509203233662eull,
0x38336625202c3536ull,0x203b33366625202cull,0x0a202f2f09202020ull,0x3233662e62757309ull,
0x202c363666250920ull,0x6625202c35366625ull,0x09202020203b3433ull,0x766f6d090a202f2full,
0x662509203233662eull,0x31346630202c3736ull,0x203b646363636333ull,0x31202f2f09202020ull,
0x646461090a382e31ull,0x662509203233662eull,0x36366625202c3836ull,0x203b37366625202cull,
0x0a202f2f09202020ull,0x3233662e766f6d09ull,0x202c393666250920ull,0x6363633465336630ull,
0x09202020203b6463ull,0x090a322e30202f2full,0x203233662e64616dull,0x25202c3037662509ull,
0x366625202c383666ull,0x3b34366625202c39ull,0x6c2e090a202f2f09ull,0x303109363109636full,
0x766f6d090a300935ull,0x662509203233662eull,0x61336630202c3137ull,0x203b663632313338ull,
0x30202f2f09202020ull,0x6461090a3130302eull,0x2509203233662e64ull,0x316625202c323766ull,
0x3b31376625202c35ull,0x202f2f0920202020ull,0x33662e766f6d090aull,0x2c33376625092032ull,
0x3030343034663020ull,0x202020203b303030ull,0x6d090a33202f2f09ull,0x09203233662e6c75ull,
0x6625202c34376625ull,0x33376625202c3237ull,0x2f2f09202020203bull,0x662e6c756d090a20ull,
0x3537662509203233ull,0x202c34376625202cull,0x2020203b34376625ull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x6630202c36376625ull,0x3030303030613034ull,0x2f2f09202020203bull,
0x2e6c756d090a3520ull,0x3766250920323366ull,0x2c34376625202c37ull,0x20203b3637662520ull,
0x090a202f2f092020ull,0x203233662e6c756dull,0x25202c3837662509ull,0x376625202c343766ull,
0x2f09202020203b35ull,0x2e6c756d090a202full,0x3766250920323366ull,0x2c34376625202c39ull,
0x20203b3737662520ull,0x090a202f2f092020ull,0x203233662e6c756dull,0x25202c3038662509ull,
0x376625202c343766ull,0x2f09202020203b38ull,0x2e646461090a202full,0x3866250920323366ull,
0x2c30346625202c31ull,0x20203b3038662520ull,0x090a202f2f092020ull,0x203233662e627573ull,
0x25202c3238662509ull,0x376625202c313866ull,0x2f09202020203b39ull,0x2e766f6d090a202full,
0x3866250920323366ull,0x3066336630202c33ull,0x20203b3030303030ull,0x2e30202f2f092020ull,
0x662e646461090a35ull,0x3438662509203233ull,0x202c38336625202cull,0x2020203b32386625ull,
0x73090a202f2f0920ull,0x09203233662e6275ull,0x6625202c35386625ull,0x34336625202c3438ull,
0x2f2f09202020203bull,0x662e766f6d090a20ull,0x3638662509203233ull,0x633331346630202cull,
0x2020203b64636363ull,0x2e3131202f2f0920ull,0x662e646461090a38ull,0x3738662509203233ull,
0x202c35386625202cull,0x2020203b36386625ull,0x6d090a202f2f0920ull,0x09203233662e766full,
0x6630202c38386625ull,0x6463636363346533ull,0x2f2f09202020203bull,0x616d090a322e3020ull,
0x2509203233662e64ull,0x386625202c393866ull,0x2c38386625202c37ull,0x2f093b3338662520ull,
0x636f6c2e090a202full,0x0936303109363109ull,0x662e766f6d090a30ull,0x3039662509203233ull,
0x333861336630202cull,0x2020203b66363231ull,0x302e30202f2f0920ull,0x2e646461090a3130ull,
0x3966250920323366ull,0x2c33316625202c31ull,0x20203b3039662520ull,0x090a202f2f092020ull,
0x203233662e766f6dull,0x30202c3239662509ull,0x3030303034303466ull,0x2f09202020203b30ull,
0x6c756d090a33202full,0x662509203233662eull,0x31396625202c3339ull,0x203b32396625202cull,
0x0a202f2f09202020ull,0x3233662e6c756d09ull,0x202c343966250920ull,0x6625202c33396625ull,
0x09202020203b3339ull,0x766f6d090a202f2full,0x662509203233662eull,0x30346630202c3539ull,
0x203b303030303061ull,0x35202f2f09202020ull,0x33662e6c756d090aull,0x2c36396625092032ull,
0x25202c3339662520ull,0x202020203b353966ull,0x756d090a202f2f09ull,0x2509203233662e6cull,
0x396625202c373966ull,0x3b34396625202c33ull,0x202f2f0920202020ull,0x33662e6c756d090aull,
0x2c38396625092032ull,0x25202c3339662520ull,0x202020203b363966ull,0x756d090a202f2f09ull,
0x2509203233662e6cull,0x396625202c393966ull,0x3b37396625202c33ull,0x202f2f0920202020ull,
0x33662e766f6d090aull,0x3030316625092032ull,0x303066336630202cull,0x2020203b30303030ull,
0x0a352e30202f2f09ull,0x3233662e64646109ull,0x2c31303166250920ull,0x25202c3939662520ull,
0x092020203b323466ull,0x627573090a202f2full,0x662509203233662eull,0x316625202c323031ull,
0x38396625202c3130ull,0x0a202f2f0920203bull,0x3233662e766f6d09ull,0x2c33303166250920ull,
0x6363333134663020ull,0x092020203b646363ull,0x0a382e3131202f2full,0x3233662e64646109ull,
0x2c34303166250920ull,0x202c323031662520ull,0x09203b3330316625ull,0x766f6d090a202f2full,
0x662509203233662eull,0x336630202c353031ull,0x3b64636363633465ull,0x30202f2f09202020ull,
0x2e64616d090a322eull,0x3166250920323366ull,0x30316625202c3630ull,0x3530316625202c34ull,
0x3b3030316625202cull,0x6c2e090a202f2f09ull,0x383209363109636full,0x627573090a300939ull,
0x662509203233662eull,0x376625202c373031ull,0x3b30356625202c30ull,0x0a202f2f09202020ull,
0x3233662e62757309ull,0x2c38303166250920ull,0x25202c3938662520ull,0x092020203b303566ull,
0x627573090a202f2full,0x662509203233662eull,0x316625202c393031ull,0x30356625202c3630ull,
0x0a202f2f0920203bull,0x363109636f6c2e09ull,0x090a300932303109ull,0x203233662e646461ull,
0x202c303131662509ull,0x6625202c31316625ull,0x2f09202020203b34ull,0x2e766f6d090a202full,
0x3166250920323366ull,0x30346630202c3131ull,0x203b303030303034ull,0x0a33202f2f092020ull,
0x3233662e6c756d09ull,0x2c32313166250920ull,0x202c303131662520ull,0x09203b3131316625ull,
0x6c756d090a202f2full,0x662509203233662eull,0x316625202c333131ull,0x31316625202c3231ull,
0x0a202f2f09203b32ull,0x3233662e766f6d09ull,0x2c34313166250920ull,0x3030613034663020ull,
0x092020203b303030ull,0x756d090a35202f2full,0x2509203233662e6cull,0x6625202c35313166ull,
0x316625202c323131ull,0x202f2f09203b3431ull,0x33662e6c756d090aull,0x3631316625092032ull,
0x2c3231316625202cull,0x203b333131662520ull,0x756d090a202f2f09ull,0x2509203233662e6cull,
0x6625202c37313166ull,0x316625202c323131ull,0x202f2f09203b3531ull,0x33662e6c756d090aull,
0x3831316625092032ull,0x2c3231316625202cull,0x203b363131662520ull,0x7573090a202f2f09ull,
0x2509203233662e62ull,0x6625202c39313166ull,0x316625202c383131ull,0x202f2f09203b3731ull,
0x33662e646461090aull,0x3032316625092032ull,0x202c39336625202cull,0x20203b3931316625ull,
0x7573090a202f2f09ull,0x2509203233662e62ull,0x6625202c31323166ull,0x336625202c303231ull,
0x202f2f0920203b36ull,0x33662e646461090aull,0x3232316625092032ull,0x202c38336625202cull,
0x20203b3132316625ull,0x7573090a202f2f09ull,0x2509203233662e62ull,0x6625202c33323166ull,
0x336625202c323231ull,0x202f2f0920203b34ull,0x33662e766f6d090aull,0x3432316625092032ull,
0x633331346630202cull,0x2020203b64636363ull,0x382e3131202f2f09ull,0x33662e646461090aull,
0x3532316625092032ull,0x2c3332316625202cull,0x203b343231662520ull,0x6f6d090a202f2f09ull,
0x2509203233662e76ull,0x6630202c36323166ull,0x6463636363346533ull,0x202f2f092020203bull,
0x6c756d090a322e30ull,0x662509203233662eull,0x316625202c373231ull,0x32316625202c3532ull,
0x0a202f2f09203b36ull,0x3233662e766f6d09ull,0x2c38323166250920ull,0x3030306633663020ull,
0x092020203b303030ull,0x090a352e30202f2full,0x203233662e646461ull,0x202c393231662509ull,
0x25202c3732316625ull,0x2f09203b38323166ull,0x636f6c2e090a202full,0x0934303109363109ull,
0x662e766f6d090a30ull,0x3331662509203233ull,0x3861336630202c30ull,0x20203b6636323133ull,
0x302e30202f2f0920ull,0x2e646461090a3130ull,0x3166250920323366ull,0x31316625202c3133ull,
0x3033316625202c30ull,0x090a202f2f09203bull,0x203233662e766f6dull,0x202c323331662509ull,
0x3030303430346630ull,0x2f092020203b3030ull,0x6c756d090a33202full,0x662509203233662eull,
0x316625202c333331ull,0x33316625202c3133ull,0x0a202f2f09203b32ull,0x3233662e6c756d09ull,
0x2c34333166250920ull,0x202c333331662520ull,0x09203b3333316625ull,0x766f6d090a202f2full,
0x662509203233662eull,0x346630202c353331ull,0x3b30303030306130ull,0x35202f2f09202020ull,
0x33662e6c756d090aull,0x3633316625092032ull,0x2c3333316625202cull,0x203b353331662520ull,
0x756d090a202f2f09ull,0x2509203233662e6cull,0x6625202c37333166ull,0x316625202c333331ull,
0x202f2f09203b3433ull,0x33662e6c756d090aull,0x3833316625092032ull,0x2c3333316625202cull,
0x203b363331662520ull,0x756d090a202f2f09ull,0x2509203233662e6cull,0x6625202c39333166ull,
0x316625202c333331ull,0x202f2f09203b3733ull,0x33662e627573090aull,0x3034316625092032ull,
0x2c3933316625202cull,0x203b383331662520ull,0x6461090a202f2f09ull,0x2509203233662e64ull,
0x6625202c31343166ull,0x34316625202c3933ull,0x202f2f0920203b30ull,0x33662e627573090aull,
0x3234316625092032ull,0x2c3134316625202cull,0x20203b3633662520ull,0x6f6d090a202f2f09ull,
0x2509203233662e76ull,0x6630202c33343166ull,0x3030303030306633ull,0x202f2f092020203bull,
0x646461090a352e30ull,0x662509203233662eull,0x336625202c343431ull,0x3234316625202c38ull,
0x0a202f2f0920203bull,0x3233662e62757309ull,0x2c35343166250920ull,0x202c343431662520ull,
0x0920203b34336625ull,0x766f6d090a202f2full,0x662509203233662eull,0x346630202c363431ull,
0x3b64636363633331ull,0x31202f2f09202020ull,0x646461090a382e31ull,0x662509203233662eull,
0x316625202c373431ull,0x34316625202c3534ull,0x0a202f2f09203b36ull,0x3233662e766f6d09ull,
0x2c38343166250920ull,0x6363346533663020ull,0x092020203b646363ull,0x090a322e30202f2full,
0x203233662e64616dull,0x25202c3037662509ull,0x6625202c37343166ull,0x316625202c383431ull,
0x0a202f2f093b3334ull,0x363109636f6c2e09ull,0x090a300935303109ull,0x203233662e646461ull,
0x202c393431662509ull,0x6625202c30386625ull,0x2f0920203b393131ull,0x2e627573090a202full,
0x3166250920323366ull,0x34316625202c3035ull,0x3b39376625202c39ull,0x090a202f2f092020ull,
0x203233662e766f6dull,0x202c313531662509ull,0x3030303066336630ull,0x2f092020203b3030ull,
0x61090a352e30202full,0x09203233662e6464ull,0x25202c3235316625ull,0x316625202c383366ull,
0x2f2f0920203b3035ull,0x662e627573090a20ull,0x3531662509203233ull,0x3235316625202c33ull,
0x203b34336625202cull,0x6d090a202f2f0920ull,0x09203233662e766full,0x30202c3435316625ull,
0x6363636333313466ull,0x2f2f092020203b64ull,0x61090a382e313120ull,0x09203233662e6464ull,
0x25202c3535316625ull,0x6625202c33353166ull,0x2f2f09203b343531ull,0x662e766f6d090a20ull,
0x3531662509203233ull,0x3465336630202c36ull,0x20203b6463636363ull,0x322e30202f2f0920ull,
0x33662e64616d090aull,0x2c39386625092032ull,0x202c353531662520ull,0x25202c3635316625ull,
0x2f2f093b31353166ull,0x09636f6c2e090a20ull,0x3009363031093631ull,0x33662e766f6d090aull,
0x3735316625092032ull,0x303066336630202cull,0x2020203b30303030ull,0x0a352e30202f2f09ull,
0x3233662e64646109ull,0x2c38353166250920ull,0x25202c3939662520ull,0x0920203b31323166ull,
0x627573090a202f2full,0x662509203233662eull,0x316625202c393531ull,0x38396625202c3835ull,
0x0a202f2f0920203bull,0x3233662e766f6d09ull,0x2c30363166250920ull,0x6363333134663020ull,
0x092020203b646363ull,0x0a382e3131202f2full,0x3233662e64646109ull,0x2c31363166250920ull,
0x202c393531662520ull,0x09203b3036316625ull,0x766f6d090a202f2full,0x662509203233662eull,
0x336630202c323631ull,0x3b64636363633465ull,0x30202f2f09202020ull,0x2e64616d090a322eull,
0x3166250920323366ull,0x36316625202c3630ull,0x3236316625202c31ull,0x3b3735316625202cull,
0x6c2e090a202f2f09ull,0x393209363109636full,0x627573090a300930ull,0x662509203233662eull,
0x376625202c333631ull,0x3932316625202c30ull,0x0a202f2f0920203bull,0x3233662e62757309ull,
0x2c34363166250920ull,0x25202c3938662520ull,0x0920203b39323166ull,0x627573090a202f2full,
0x662509203233662eull,0x316625202c353631ull,0x32316625202c3630ull,0x0a202f2f09203b39ull,
0x363109636f6c2e09ull,0x090a300932303109ull,0x203233662e646461ull,0x202c363631662509ull,
0x6625202c35316625ull,0x2f09202020203b38ull,0x2e766f6d090a202full,0x3166250920323366ull,
0x30346630202c3736ull,0x203b303030303034ull,0x0a33202f2f092020ull,0x3233662e6c756d09ull,
0x2c38363166250920ull,0x202c363631662520ull,0x09203b3736316625ull,0x6c756d090a202f2full,
0x662509203233662eull,0x316625202c393631ull,0x36316625202c3836ull,0x0a202f2f09203b38ull,
0x3233662e766f6d09ull,0x2c30373166250920ull,0x3030613034663020ull,0x092020203b303030ull,
0x756d090a35202f2full,0x2509203233662e6cull,0x6625202c31373166ull,0x316625202c383631ull,
0x202f2f09203b3037ull,0x33662e6c756d090aull,0x3237316625092032ull,0x2c3836316625202cull,
0x203b393631662520ull,0x756d090a202f2f09ull,0x2509203233662e6cull,0x6625202c33373166ull,
0x316625202c383631ull,0x202f2f09203b3137ull,0x33662e6c756d090aull,0x3437316625092032ull,
0x2c3836316625202cull,0x203b323731662520ull,0x6461090a202f2f09ull,0x2509203233662e64ull,
0x6625202c35373166ull,0x316625202c343731ull,0x202f2f09203b3931ull,0x33662e627573090aull,
0x3637316625092032ull,0x2c3537316625202cull,0x203b333731662520ull,0x6461090a202f2f09ull,
0x2509203233662e64ull,0x6625202c37373166ull,0x37316625202c3833ull,0x202f2f0920203b36ull,
0x33662e627573090aull,0x3837316625092032ull,0x2c3737316625202cull,0x20203b3433662520ull,
0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x6630202c39373166ull,0x6463636363333134ull,
0x202f2f092020203bull,0x6461090a382e3131ull,0x2509203233662e64ull,0x6625202c30383166ull,
0x316625202c383731ull,0x202f2f09203b3937ull,0x33662e766f6d090aull,0x3138316625092032ull,
0x633465336630202cull,0x2020203b64636363ull,0x0a322e30202f2f09ull,0x3233662e6c756d09ull,
0x2c32383166250920ull,0x202c303831662520ull,0x09203b3138316625ull,0x766f6d090a202f2full,
0x662509203233662eull,0x336630202c333831ull,0x3b30303030303066ull,0x30202f2f09202020ull,
0x2e646461090a352eull,0x3166250920323366ull,0x38316625202c3438ull,0x3338316625202c32ull,
0x090a202f2f09203bull,0x09363109636f6c2eull,0x61090a3009343031ull,0x09203233662e6464ull,
0x25202c3538316625ull,0x6625202c34373166ull,0x2f2f09203b303431ull,0x662e627573090a20ull,
0x3831662509203233ull,0x3538316625202c36ull,0x3b3337316625202cull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x30202c3738316625ull,0x3030303030663366ull,0x2f2f092020203b30ull,
0x6461090a352e3020ull,0x2509203233662e64ull,0x6625202c38383166ull,0x38316625202c3833ull,
0x202f2f0920203b36ull,0x33662e627573090aull,0x3938316625092032ull,0x2c3838316625202cull,
0x20203b3433662520ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x6630202c30393166ull,
0x6463636363333134ull,0x202f2f092020203bull,0x6461090a382e3131ull,0x2509203233662e64ull,
0x6625202c31393166ull,0x316625202c393831ull,0x202f2f09203b3039ull,0x33662e766f6d090aull,
0x3239316625092032ull,0x633465336630202cull,0x2020203b64636363ull,0x0a322e30202f2f09ull,
0x3233662e64616d09ull,0x202c303766250920ull,0x25202c3139316625ull,0x6625202c32393166ull,
0x202f2f093b373831ull,0x3109636f6c2e090aull,0x0a30093530310936ull,0x3233662e766f6d09ull,
0x2c33393166250920ull,0x3133386133663020ull,0x092020203b663632ull,0x3130302e30202f2full,
0x33662e646461090aull,0x3439316625092032ull,0x2c3636316625202cull,0x203b333931662520ull,
0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x6630202c35393166ull,0x3030303030343034ull,
0x202f2f092020203bull,0x662e6c756d090a33ull,0x3931662509203233ull,0x3439316625202c36ull,
0x3b3539316625202cull,0x6d090a202f2f0920ull,0x09203233662e6c75ull,0x25202c3739316625ull,
0x6625202c36393166ull,0x2f2f09203b363931ull,0x662e766f6d090a20ull,0x3931662509203233ull,
0x6130346630202c38ull,0x20203b3030303030ull,0x090a35202f2f0920ull,0x203233662e6c756dull,
0x202c393931662509ull,0x25202c3639316625ull,0x2f09203b38393166ull,0x2e6c756d090a202full,
0x3266250920323366ull,0x39316625202c3030ull,0x3739316625202c36ull,0x090a202f2f09203bull,
0x203233662e6c756dull,0x202c313032662509ull,0x25202c3639316625ull,0x2f09203b39393166ull,
0x2e6c756d090a202full,0x3266250920323366ull,0x39316625202c3230ull,0x3030326625202c36ull,
0x090a202f2f09203bull,0x203233662e646461ull,0x202c333032662509ull,0x25202c3931316625ull,
0x2f09203b32303266ull,0x2e627573090a202full,0x3266250920323366ull,0x30326625202c3430ull,
0x3130326625202c33ull,0x090a202f2f09203bull,0x203233662e766f6dull,0x202c353032662509ull,
0x3030303066336630ull,0x2f092020203b3030ull,0x61090a352e30202full,0x09203233662e6464ull,
0x25202c3630326625ull,0x326625202c383366ull,0x2f2f0920203b3430ull,0x662e627573090a20ull,
0x3032662509203233ull,0x3630326625202c37ull,0x203b34336625202cull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x30202c3830326625ull,0x6363636333313466ull,0x2f2f092020203b64ull,
0x61090a382e313120ull,0x09203233662e6464ull,0x25202c3930326625ull,0x6625202c37303266ull,
0x2f2f09203b383032ull,0x662e766f6d090a20ull,0x3132662509203233ull,0x3465336630202c30ull,
0x20203b6463636363ull,0x322e30202f2f0920ull,0x33662e64616d090aull,0x2c39386625092032ull,
0x202c393032662520ull,0x25202c3031326625ull,0x2f2f093b35303266ull,0x09636f6c2e090a20ull,
0x3009363031093631ull,0x33662e766f6d090aull,0x3131326625092032ull,0x303066336630202cull,
0x2020203b30303030ull,0x0a352e30202f2f09ull,0x3233662e64646109ull,0x2c32313266250920ull,
0x25202c3939662520ull,0x0920203b36373166ull,0x627573090a202f2full,0x662509203233662eull,
0x326625202c333132ull,0x38396625202c3231ull,0x0a202f2f0920203bull,0x3233662e766f6d09ull,
0x2c34313266250920ull,0x6363333134663020ull,0x092020203b646363ull,0x0a382e3131202f2full,
0x3233662e64646109ull,0x2c35313266250920ull,0x202c333132662520ull,0x09203b3431326625ull,
0x766f6d090a202f2full,0x662509203233662eull,0x336630202c363132ull,0x3b64636363633465ull,
0x30202f2f09202020ull,0x2e64616d090a322eull,0x3166250920323366ull,0x31326625202c3630ull,
0x3631326625202c35ull,0x3b3131326625202cull,0x6c2e090a202f2f09ull,0x393209363109636full,
0x627573090a300931ull,0x662509203233662eull,0x376625202c373132ull,0x3438316625202c30ull,
0x0a202f2f0920203bull,0x3233662e62757309ull,0x2c38313266250920ull,0x25202c3938662520ull,
0x0920203b34383166ull,0x627573090a202f2full,0x662509203233662eull,0x316625202c393132ull,
0x38316625202c3630ull,0x0a202f2f09203b34ull,0x363109636f6c2e09ull,0x090a300932303109ull,
0x203233662e646461ull,0x202c303232662509ull,0x6625202c30346625ull,0x2f0920203b343731ull,
0x2e627573090a202full,0x3266250920323366ull,0x32326625202c3132ull,0x3337316625202c30ull,
0x090a202f2f09203bull,0x203233662e646461ull,0x202c323232662509ull,0x6625202c38336625ull,
0x2f0920203b313232ull,0x2e627573090a202full,0x3266250920323366ull,0x32326625202c3332ull,
0x3b34336625202c32ull,0x090a202f2f092020ull,0x203233662e766f6dull,0x202c343232662509ull,
0x6363633331346630ull,0x2f092020203b6463ull,0x090a382e3131202full,0x203233662e646461ull,
0x202c353232662509ull,0x25202c3332326625ull,0x2f09203b34323266ull,0x2e766f6d090a202full,
0x3266250920323366ull,0x65336630202c3632ull,0x203b646363636334ull,0x2e30202f2f092020ull,
0x662e6c756d090a32ull,0x3232662509203233ull,0x3532326625202c37ull,0x3b3632326625202cull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x30202c3832326625ull,0x3030303030663366ull,
0x2f2f092020203b30ull,0x6461090a352e3020ull,0x2509203233662e64ull,0x6625202c39323266ull,
0x326625202c373232ull,0x202f2f09203b3832ull,0x3109636f6c2e090aull,0x0a30093430310936ull,
0x3233662e64646109ull,0x2c30333266250920ull,0x202c343731662520ull,0x0920203b31366625ull,
0x627573090a202f2full,0x662509203233662eull,0x326625202c313332ull,0x37316625202c3033ull,
0x0a202f2f09203b33ull,0x3233662e766f6d09ull,0x2c32333266250920ull,0x3030306633663020ull,
0x092020203b303030ull,0x090a352e30202f2full,0x203233662e646461ull,0x202c333332662509ull,
0x6625202c38336625ull,0x2f0920203b313332ull,0x2e627573090a202full,0x3266250920323366ull,
0x33326625202c3433ull,0x3b34336625202c33ull,0x090a202f2f092020ull,0x203233662e766f6dull,
0x202c353332662509ull,0x6363633331346630ull,0x2f092020203b6463ull,0x090a382e3131202full,
0x203233662e646461ull,0x202c363332662509ull,0x25202c3433326625ull,0x2f09203b35333266ull,
0x2e766f6d090a202full,0x3266250920323366ull,0x65336630202c3733ull,0x203b646363636334ull,
0x2e30202f2f092020ull,0x662e64616d090a32ull,0x3037662509203233ull,0x2c3633326625202cull,
0x202c373332662520ull,0x2f093b3233326625ull,0x636f6c2e090a202full,0x0935303109363109ull,
0x662e646461090a30ull,0x3332662509203233ull,0x2c30346625202c38ull,0x203b323032662520ull,
0x73090a202f2f0920ull,0x09203233662e6275ull,0x25202c3933326625ull,0x6625202c38333266ull,
0x2f2f09203b313032ull,0x662e766f6d090a20ull,0x3432662509203233ull,0x3066336630202c30ull,
0x20203b3030303030ull,0x352e30202f2f0920ull,0x33662e646461090aull,0x3134326625092032ull,
0x202c38336625202cull,0x20203b3933326625ull,0x7573090a202f2f09ull,0x2509203233662e62ull,
0x6625202c32343266ull,0x336625202c313432ull,0x202f2f0920203b34ull,0x33662e766f6d090aull,
0x3334326625092032ull,0x633331346630202cull,0x2020203b64636363ull,0x382e3131202f2f09ull,
0x33662e646461090aull,0x3434326625092032ull,0x2c3234326625202cull,0x203b333432662520ull,
0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x6630202c35343266ull,0x6463636363346533ull,
0x202f2f092020203bull,0x64616d090a322e30ull,0x662509203233662eull,0x34326625202c3938ull,
0x3534326625202c34ull,0x3b3034326625202cull,0x6c2e090a202f2f09ull,0x303109363109636full,
0x766f6d090a300936ull,0x662509203233662eull,0x336630202c363432ull,0x3b30303030303066ull,
0x30202f2f09202020ull,0x2e646461090a352eull,0x3266250920323366ull,0x39396625202c3734ull,
0x3b3132326625202cull,0x090a202f2f092020ull,0x203233662e627573ull,0x202c383432662509ull,
0x25202c3734326625ull,0x2f0920203b383966ull,0x2e766f6d090a202full,0x3266250920323366ull,
0x31346630202c3934ull,0x203b646363636333ull,0x3131202f2f092020ull,0x2e646461090a382eull,
0x3266250920323366ull,0x34326625202c3035ull,0x3934326625202c38ull,0x090a202f2f09203bull,
0x203233662e766f6dull,0x202c313532662509ull,0x6363633465336630ull,0x2f092020203b6463ull,
0x6d090a322e30202full,0x09203233662e6461ull,0x25202c3630316625ull,0x6625202c30353266ull,
0x326625202c313532ull,0x0a202f2f093b3634ull,0x363109636f6c2e09ull,0x090a300932393209ull,
0x203233662e627573ull,0x202c323532662509ull,0x6625202c30376625ull,0x2f0920203b393232ull,
0x2e627573090a202full,0x3266250920323366ull,0x39386625202c3335ull,0x3b3932326625202cull,
0x090a202f2f092020ull,0x203233662e627573ull,0x202c343532662509ull,0x25202c3630316625ull,
0x2f09203b39323266ull,0x636f6c2e090a202full,0x0932303109363109ull,0x662e646461090a30ull,
0x3532662509203233ull,0x2c33316625202c35ull,0x2020203b36662520ull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x30202c3635326625ull,0x3030303034303466ull,0x2f2f092020203b30ull,
0x2e6c756d090a3320ull,0x3266250920323366ull,0x35326625202c3735ull,0x3635326625202c35ull,
0x090a202f2f09203bull,0x203233662e6c756dull,0x202c383532662509ull,0x25202c3735326625ull,
0x2f09203b37353266ull,0x2e766f6d090a202full,0x3266250920323366ull,0x30346630202c3935ull,
0x203b303030303061ull,0x0a35202f2f092020ull,0x3233662e6c756d09ull,0x2c30363266250920ull,
0x202c373532662520ull,0x09203b3935326625ull,0x6c756d090a202f2full,0x662509203233662eull,
0x326625202c313632ull,0x35326625202c3735ull,0x0a202f2f09203b38ull,0x3233662e6c756d09ull,
0x2c32363266250920ull,0x202c373532662520ull,0x09203b3036326625ull,0x6c756d090a202f2full,
0x662509203233662eull,0x326625202c333632ull,0x36326625202c3735ull,0x0a202f2f09203b31ull,
0x3233662e64646109ull,0x2c34363266250920ull,0x202c333632662520ull,0x0920203b32346625ull,
0x627573090a202f2full,0x662509203233662eull,0x326625202c353632ull,0x36326625202c3436ull,
0x0a202f2f09203b32ull,0x3233662e766f6d09ull,0x2c36363266250920ull,0x6363333134663020ull,
0x092020203b646363ull,0x0a382e3131202f2full,0x3233662e64646109ull,0x2c37363266250920ull,
0x202c353632662520ull,0x09203b3636326625ull,0x766f6d090a202f2full,0x662509203233662eull,
0x336630202c383632ull,0x3b64636363633465ull,0x30202f2f09202020ull,0x2e6c756d090a322eull,
0x3266250920323366ull,0x36326625202c3936ull,0x3836326625202c37ull,0x090a202f2f09203bull,
0x203233662e766f6dull,0x202c303732662509ull,0x3030303066336630ull,0x2f092020203b3030ull,
0x61090a352e30202full,0x09203233662e6464ull,0x25202c3137326625ull,0x6625202c39363266ull,
0x2f2f09203b303732ull,0x09636f6c2e090a20ull,0x3009343031093631ull,0x33662e766f6d090aull,
0x3237326625092032ull,0x303066336630202cull,0x2020203b30303030ull,0x0a352e30202f2f09ull,
0x3233662e64646109ull,0x2c33373266250920ull,0x202c333632662520ull,0x0920203b33366625ull,
0x627573090a202f2full,0x662509203233662eull,0x326625202c343732ull,0x36326625202c3337ull,
0x0a202f2f09203b32ull,0x3233662e766f6d09ull,0x2c35373266250920ull,0x6363333134663020ull,
0x092020203b646363ull,0x0a382e3131202f2full,0x3233662e64646109ull,0x2c36373266250920ull,
0x202c343732662520ull,0x09203b3537326625ull,0x766f6d090a202f2full,0x662509203233662eull,
0x336630202c373732ull,0x3b64636363633465ull,0x30202f2f09202020ull,0x2e64616d090a322eull,
0x3766250920323366ull,0x3637326625202c30ull,0x2c3737326625202cull,0x093b323732662520ull,
0x6f6c2e090a202f2full,0x3530310936310963ull,0x2e766f6d090a3009ull,0x3266250920323366ull,
0x66336630202c3837ull,0x203b303030303030ull,0x2e30202f2f092020ull,0x662e646461090a35ull,
0x3732662509203233ull,0x3336326625202c39ull,0x203b32386625202cull,0x73090a202f2f0920ull,
0x09203233662e6275ull,0x25202c3038326625ull,0x6625202c39373266ull,0x2f2f09203b323632ull,
0x662e766f6d090a20ull,0x3832662509203233ull,0x3331346630202c31ull,0x20203b6463636363ull,
0x2e3131202f2f0920ull,0x662e646461090a38ull,0x3832662509203233ull,0x3038326625202c32ull,
0x3b3138326625202cull,0x6d090a202f2f0920ull,0x09203233662e766full,0x30202c3338326625ull,
0x6363636334653366ull,0x2f2f092020203b64ull,0x616d090a322e3020ull,0x2509203233662e64ull,
0x326625202c393866ull,0x38326625202c3238ull,0x3837326625202c33ull,0x2e090a202f2f093bull,
0x3109363109636f6cull,0x6f6d090a30093630ull,0x2509203233662e76ull,0x6630202c34383266ull,
0x6636323133386133ull,0x202f2f092020203bull,0x61090a3130302e30ull,0x09203233662e6464ull,
0x25202c3538326625ull,0x6625202c35353266ull,0x2f2f09203b343832ull,0x662e766f6d090a20ull,
0x3832662509203233ull,0x3430346630202c36ull,0x20203b3030303030ull,0x090a33202f2f0920ull,
0x203233662e6c756dull,0x202c373832662509ull,0x25202c3538326625ull,0x2f09203b36383266ull,
0x2e6c756d090a202full,0x3266250920323366ull,0x38326625202c3838ull,0x3738326625202c37ull,
0x090a202f2f09203bull,0x203233662e766f6dull,0x202c393832662509ull,0x3030306130346630ull,
0x2f092020203b3030ull,0x6c756d090a35202full,0x662509203233662eull,0x326625202c303932ull,
0x38326625202c3738ull,0x0a202f2f09203b39ull,0x3233662e6c756d09ull,0x2c31393266250920ull,
0x202c373832662520ull,0x09203b3838326625ull,0x6c756d090a202f2full,0x662509203233662eull,
0x326625202c323932ull,0x39326625202c3738ull,0x0a202f2f09203b30ull,0x3233662e6c756d09ull,
0x2c33393266250920ull,0x202c373832662520ull,0x09203b3139326625ull,0x766f6d090a202f2full,
0x662509203233662eull,0x336630202c343932ull,0x3b30303030303066ull,0x30202f2f09202020ull,
0x2e646461090a352eull,0x3266250920323366ull,0x39326625202c3539ull,0x3b32346625202c33ull,
0x090a202f2f092020ull,0x203233662e627573ull,0x202c363932662509ull,0x25202c3539326625ull,
0x2f09203b32393266ull,0x2e766f6d090a202full,0x3266250920323366ull,0x31346630202c3739ull,
0x203b646363636333ull,0x3131202f2f092020ull,0x2e646461090a382eull,0x3266250920323366ull,
0x39326625202c3839ull,0x3739326625202c36ull,0x090a202f2f09203bull,0x203233662e766f6dull,
0x202c393932662509ull,0x6363633465336630ull,0x2f092020203b6463ull,0x6d090a322e30202full,
0x09203233662e6461ull,0x25202c3630316625ull,0x6625202c38393266ull,0x326625202c393932ull,
0x0a202f2f093b3439ull,0x363109636f6c2e09ull,0x090a300933393209ull,0x203233662e627573ull,
0x202c303033662509ull,0x6625202c30376625ull,0x2f0920203b313732ull,0x2e627573090a202full,
0x3366250920323366ull,0x39386625202c3130ull,0x3b3137326625202cull,0x090a202f2f092020ull,
0x203233662e627573ull,0x202c323033662509ull,0x25202c3630316625ull,0x2f09203b31373266ull,
0x636f6c2e090a202full,0x0932303109363109ull,0x662e646461090a30ull,0x3033662509203233ull,
0x3336326625202c33ull,0x3b3132316625202cull,0x73090a202f2f0920ull,0x09203233662e6275ull,
0x25202c3430336625ull,0x6625202c33303366ull,0x2f2f09203b323632ull,0x662e766f6d090a20ull,
0x3033662509203233ull,0x3331346630202c35ull,0x20203b6463636363ull,0x2e3131202f2f0920ull,
0x662e646461090a38ull,0x3033662509203233ull,0x3430336625202c36ull,0x3b3530336625202cull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x30202c3730336625ull,0x6363636334653366ull,
0x2f2f092020203b64ull,0x756d090a322e3020ull,0x2509203233662e6cull,0x6625202c38303366ull,
0x336625202c363033ull,0x202f2f09203b3730ull,0x33662e766f6d090aull,0x3930336625092032ull,
0x303066336630202cull,0x2020203b30303030ull,0x0a352e30202f2f09ull,0x3233662e64646109ull,
0x2c30313366250920ull,0x202c383033662520ull,0x09203b3930336625ull,0x6f6c2e090a202f2full,
0x3430310936310963ull,0x2e766f6d090a3009ull,0x3366250920323366ull,0x66336630202c3131ull,
0x203b303030303030ull,0x2e30202f2f092020ull,0x662e646461090a35ull,0x3133662509203233ull,
0x3336326625202c32ull,0x3b3234316625202cull,0x73090a202f2f0920ull,0x09203233662e6275ull,
0x25202c3331336625ull,0x6625202c32313366ull,0x2f2f09203b323632ull,0x662e766f6d090a20ull,
0x3133662509203233ull,0x3331346630202c34ull,0x20203b6463636363ull,0x2e3131202f2f0920ull,
0x662e646461090a38ull,0x3133662509203233ull,0x3331336625202c35ull,0x3b3431336625202cull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x30202c3631336625ull,0x6363636334653366ull,
0x2f2f092020203b64ull,0x616d090a322e3020ull,0x2509203233662e64ull,0x336625202c303766ull,
0x31336625202c3531ull,0x3131336625202c36ull,0x2e090a202f2f093bull,0x3109363109636f6cull,
0x6f6d090a30093530ull,0x2509203233662e76ull,0x6630202c37313366ull,0x3030303030306633ull,
0x202f2f092020203bull,0x646461090a352e30ull,0x662509203233662eull,0x326625202c383133ull,
0x35316625202c3336ull,0x0a202f2f09203b30ull,0x3233662e62757309ull,0x2c39313366250920ull,
0x202c383133662520ull,0x09203b3236326625ull,0x766f6d090a202f2full,0x662509203233662eull,
0x346630202c303233ull,0x3b64636363633331ull,0x31202f2f09202020ull,0x646461090a382e31ull,
0x662509203233662eull,0x336625202c313233ull,0x32336625202c3931ull,0x0a202f2f09203b30ull,
0x3233662e766f6d09ull,0x2c32323366250920ull,0x6363346533663020ull,0x092020203b646363ull,
0x090a322e30202f2full,0x203233662e64616dull,0x25202c3938662509ull,0x6625202c31323366ull,
0x336625202c323233ull,0x0a202f2f093b3731ull,0x363109636f6c2e09ull,0x090a300936303109ull,
0x203233662e766f6dull,0x202c333233662509ull,0x3030303066336630ull,0x2f092020203b3030ull,
0x61090a352e30202full,0x09203233662e6464ull,0x25202c3432336625ull,0x6625202c33393266ull,
0x2f2f09203b313231ull,0x662e627573090a20ull,0x3233662509203233ull,0x3432336625202c35ull,
0x3b3239326625202cull,0x6d090a202f2f0920ull,0x09203233662e766full,0x30202c3632336625ull,
0x6363636333313466ull,0x2f2f092020203b64ull,0x61090a382e313120ull,0x09203233662e6464ull,
0x25202c3732336625ull,0x6625202c35323366ull,0x2f2f09203b363233ull,0x662e766f6d090a20ull,
0x3233662509203233ull,0x3465336630202c38ull,0x20203b6463636363ull,0x322e30202f2f0920ull,
0x33662e64616d090aull,0x3630316625092032ull,0x2c3732336625202cull,0x202c383233662520ull,
0x2f093b3332336625ull,0x636f6c2e090a202full,0x0934393209363109ull,0x662e627573090a30ull,
0x3233662509203233ull,0x2c30376625202c39ull,0x203b303133662520ull,0x73090a202f2f0920ull,
0x09203233662e6275ull,0x25202c3033336625ull,0x336625202c393866ull,0x2f2f0920203b3031ull,
0x662e627573090a20ull,0x3333662509203233ull,0x3630316625202c31ull,0x3b3031336625202cull,
0x2e090a202f2f0920ull,0x3109363109636f6cull,0x6461090a30093230ull,0x2509203233662e64ull,
0x6625202c32333366ull,0x316625202c333632ull,0x202f2f09203b3637ull,0x33662e627573090aull,
0x3333336625092032ull,0x2c3233336625202cull,0x203b323632662520ull,0x6f6d090a202f2f09ull,
0x2509203233662e76ull,0x6630202c34333366ull,0x6463636363333134ull,0x202f2f092020203bull,
0x6461090a382e3131ull,0x2509203233662e64ull,0x6625202c35333366ull,0x336625202c333333ull,
0x202f2f09203b3433ull,0x33662e766f6d090aull,0x3633336625092032ull,0x633465336630202cull,
0x2020203b64636363ull,0x0a322e30202f2f09ull,0x3233662e6c756d09ull,0x2c37333366250920ull,
0x202c353333662520ull,0x09203b3633336625ull,0x766f6d090a202f2full,0x662509203233662eull,
0x336630202c383333ull,0x3b30303030303066ull,0x30202f2f09202020ull,0x2e646461090a352eull,
0x3366250920323366ull,0x33336625202c3933ull,0x3833336625202c37ull,0x090a202f2f09203bull,
0x09363109636f6c2eull,0x6d090a3009343031ull,0x09203233662e766full,0x30202c3034336625ull,
0x3030303030663366ull,0x2f2f092020203b30ull,0x6461090a352e3020ull,0x2509203233662e64ull,
0x6625202c31343366ull,0x316625202c333632ull,0x202f2f09203b3638ull,0x33662e627573090aull,
0x3234336625092032ull,0x2c3134336625202cull,0x203b323632662520ull,0x6f6d090a202f2f09ull,
0x2509203233662e76ull,0x6630202c33343366ull,0x6463636363333134ull,0x202f2f092020203bull,
0x6461090a382e3131ull,0x2509203233662e64ull,0x6625202c34343366ull,0x336625202c323433ull,
0x202f2f09203b3334ull,0x33662e766f6d090aull,0x3534336625092032ull,0x633465336630202cull,
0x2020203b64636363ull,0x0a322e30202f2f09ull,0x3233662e64616d09ull,0x202c303766250920ull,
0x25202c3434336625ull,0x6625202c35343366ull,0x202f2f093b303433ull,0x3109636f6c2e090aull,
0x0a30093530310936ull,0x3233662e766f6d09ull,0x2c36343366250920ull,0x3030306633663020ull,
0x092020203b303030ull,0x090a352e30202f2full,0x203233662e646461ull,0x202c373433662509ull,
0x25202c3336326625ull,0x2f09203b34303266ull,0x2e627573090a202full,0x3366250920323366ull,
0x34336625202c3834ull,0x3236326625202c37ull,0x090a202f2f09203bull,0x203233662e766f6dull,
0x202c393433662509ull,0x6363633331346630ull,0x2f092020203b6463ull,0x090a382e3131202full,
0x203233662e646461ull,0x202c303533662509ull,0x25202c3834336625ull,0x2f09203b39343366ull,
0x2e766f6d090a202full,0x3366250920323366ull,0x65336630202c3135ull,0x203b646363636334ull,
0x2e30202f2f092020ull,0x662e64616d090a32ull,0x3938662509203233ull,0x2c3035336625202cull,
0x202c313533662520ull,0x2f093b3634336625ull,0x636f6c2e090a202full,0x0936303109363109ull,
0x662e766f6d090a30ull,0x3533662509203233ull,0x3066336630202c32ull,0x20203b3030303030ull,
0x352e30202f2f0920ull,0x33662e646461090aull,0x3335336625092032ull,0x2c3339326625202cull,
0x203b363731662520ull,0x7573090a202f2f09ull,0x2509203233662e62ull,0x6625202c34353366ull,
0x326625202c333533ull,0x202f2f09203b3239ull,0x33662e766f6d090aull,0x3535336625092032ull,
0x633331346630202cull,0x2020203b64636363ull,0x382e3131202f2f09ull,0x33662e646461090aull,
0x3635336625092032ull,0x2c3435336625202cull,0x203b353533662520ull,0x6f6d090a202f2f09ull,
0x2509203233662e76ull,0x6630202c37353366ull,0x6463636363346533ull,0x202f2f092020203bull,
0x64616d090a322e30ull,0x662509203233662eull,0x336625202c363031ull,0x35336625202c3635ull,
0x3235336625202c37ull,0x2e090a202f2f093bull,0x3209363109636f6cull,0x7573090a30093539ull,
0x2509203233662e62ull,0x6625202c38353366ull,0x33336625202c3037ull,0x202f2f0920203b39ull,
0x33662e627573090aull,0x3935336625092032ull,0x202c39386625202cull,0x20203b3933336625ull,
0x7573090a202f2f09ull,0x2509203233662e62ull,0x6625202c30363366ull,0x336625202c363031ull,
0x202f2f09203b3933ull,0x3109636f6c2e090aull,0x0a30093230310936ull,0x3233662e64646109ull,
0x2c31363366250920ull,0x202c333632662520ull,0x09203b3132326625ull,0x627573090a202f2full,
0x662509203233662eull,0x336625202c323633ull,0x36326625202c3136ull,0x0a202f2f09203b32ull,
0x3233662e766f6d09ull,0x2c33363366250920ull,0x6363333134663020ull,0x092020203b646363ull,
0x0a382e3131202f2full,0x3233662e64646109ull,0x2c34363366250920ull,0x202c323633662520ull,
0x09203b3336336625ull,0x766f6d090a202f2full,0x662509203233662eull,0x336630202c353633ull,
0x3b64636363633465ull,0x30202f2f09202020ull,0x2e6c756d090a322eull,0x3366250920323366ull,
0x36336625202c3636ull,0x3536336625202c34ull,0x090a202f2f09203bull,0x203233662e766f6dull,
0x202c373633662509ull,0x3030303066336630ull,0x2f092020203b3030ull,0x61090a352e30202full,
0x09203233662e6464ull,0x25202c3836336625ull,0x6625202c36363366ull,0x2f2f09203b373633ull,
0x09636f6c2e090a20ull,0x3009343031093631ull,0x33662e766f6d090aull,0x3936336625092032ull,
0x303066336630202cull,0x2020203b30303030ull,0x0a352e30202f2f09ull,0x3233662e64646109ull,
0x2c30373366250920ull,0x202c333632662520ull,0x09203b3133326625ull,0x627573090a202f2full,
0x662509203233662eull,0x336625202c313733ull,0x36326625202c3037ull,0x0a202f2f09203b32ull,
0x3233662e766f6d09ull,0x2c32373366250920ull,0x6363333134663020ull,0x092020203b646363ull,
0x0a382e3131202f2full,0x3233662e64646109ull,0x2c33373366250920ull,0x202c313733662520ull,
0x09203b3237336625ull,0x766f6d090a202f2full,0x662509203233662eull,0x336630202c343733ull,
0x3b64636363633465ull,0x30202f2f09202020ull,0x2e64616d090a322eull,0x3766250920323366ull,
0x3337336625202c30ull,0x2c3437336625202cull,0x093b393633662520ull,0x6f6c2e090a202f2full,
0x3530310936310963ull,0x2e766f6d090a3009ull,0x3366250920323366ull,0x66336630202c3537ull,
0x203b303030303030ull,0x2e30202f2f092020ull,0x662e646461090a35ull,0x3733662509203233ull,
0x3336326625202c36ull,0x3b3933326625202cull,0x73090a202f2f0920ull,0x09203233662e6275ull,
0x25202c3737336625ull,0x6625202c36373366ull,0x2f2f09203b323632ull,0x662e766f6d090a20ull,
0x3733662509203233ull,0x3331346630202c38ull,0x20203b6463636363ull,0x2e3131202f2f0920ull,
0x662e646461090a38ull,0x3733662509203233ull,0x3737336625202c39ull,0x3b3837336625202cull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x30202c3038336625ull,0x6363636334653366ull,
0x2f2f092020203b64ull,0x616d090a322e3020ull,0x2509203233662e64ull,0x336625202c393866ull,
0x38336625202c3937ull,0x3537336625202c30ull,0x2e090a202f2f093bull,0x3109363109636f6cull,
0x6f6d090a30093630ull,0x2509203233662e76ull,0x6630202c31383366ull,0x3030303030306633ull,
0x202f2f092020203bull,0x646461090a352e30ull,0x662509203233662eull,0x326625202c323833ull,
0x32326625202c3339ull,0x0a202f2f09203b31ull,0x3233662e62757309ull,0x2c33383366250920ull,
0x202c323833662520ull,0x09203b3239326625ull,0x766f6d090a202f2full,0x662509203233662eull,
0x346630202c343833ull,0x3b64636363633331ull,0x31202f2f09202020ull,0x646461090a382e31ull,
0x662509203233662eull,0x336625202c353833ull,0x38336625202c3338ull,0x0a202f2f09203b34ull,
0x3233662e766f6d09ull,0x2c36383366250920ull,0x6363346533663020ull,0x092020203b646363ull,
0x090a322e30202f2full,0x203233662e64616dull,0x202c363031662509ull,0x25202c3538336625ull,
0x6625202c36383366ull,0x202f2f093b313833ull,0x3109636f6c2e090aull,0x0a30093630330936ull,
0x617261702e646c09ull,0x2509203233662e6dull,0x5f5b202c37383366ull,0x726170616475635full,
0x656737315a5f5f6dull,0x725465746172656eull,0x5073656c676e6169ull,0x533474616f6c6636ull,
0x355f31536a505f30ull,0x5f325333746e6975ull,0x616f6c66365f3253ull,0x73695f6a6a663374ull,
0x3b5d65756c61566full,0x333a6469202f2f09ull,0x75635f5f20313439ull,0x5f5f6d7261706164ull,
0x72656e656737315aull,0x6e61697254657461ull,0x6c66365073656c67ull,0x505f30533474616full,
0x6e6975355f31536aull,0x5f32535f32533374ull,0x663374616f6c6636ull,0x61566f73695f6a6aull,
0x0a3078302b65756cull,0x746c2e7074657309ull,0x702509203233662eull,0x3031336625202c32ull,
0x3b3738336625202cull,0x6573090a202f2f09ull,0x33662e746c2e7074ull,0x202c337025092032ull,
0x25202c3137326625ull,0x2f2f093b37383366ull,0x2e70746573090a20ull,0x09203233662e746cull,
0x326625202c347025ull,0x38336625202c3932ull,0x090a202f2f093b37ull,0x2e746c2e70746573ull,
0x3570250920323366ull,0x2c3438316625202cull,0x093b373833662520ull,0x746573090a202f2full,
0x3233662e746c2e70ull,0x25202c3670250920ull,0x6625202c39323166ull,0x202f2f093b373833ull,
0x6c2e70746573090aull,0x2509203233662e74ull,0x30356625202c3770ull,0x3b3738336625202cull,
0x6573090a202f2f09ull,0x09203233732e706cull,0x2c31202c34327225ull,0x3b377025202c3020ull,
0x202f2f0920202020ull,0x33752e646461090aull,0x2c35327225092032ull,0x32202c3432722520ull,
0x202020202020203bull,0x6573090a202f2f09ull,0x09203233752e706cull,0x7225202c36327225ull,
0x34327225202c3532ull,0x2f093b367025202cull,0x2e646461090a202full,0x3272250920323375ull,
0x2c36327225202c37ull,0x20202020203b3420ull,0x090a202f2f092020ull,0x3233752e706c6573ull,
0x202c383272250920ull,0x7225202c37327225ull,0x3b357025202c3632ull,0x6461090a202f2f09ull,
0x2509203233752e64ull,0x327225202c393272ull,0x2020203b38202c38ull,0x202f2f0920202020ull,
0x752e706c6573090aull,0x3033722509203233ull,0x202c39327225202cull,0x7025202c38327225ull,
0x090a202f2f093b34ull,0x203233752e646461ull,0x25202c3133722509ull,0x3b3631202c303372ull,
0x2f09202020202020ull,0x706c6573090a202full,0x722509203233752eull,0x31337225202c3233ull,
0x202c30337225202cull,0x202f2f093b337025ull,0x33752e646461090aull,0x2c33337225092032ull,
0x33202c3233722520ull,0x2020202020203b32ull,0x6573090a202f2f09ull,0x09203233752e706cull,
0x7225202c34337225ull,0x32337225202c3333ull,0x2f093b327025202cull,0x2e646461090a202full,
0x3372250920323375ull,0x2c34337225202c35ull,0x202020203b343620ull,0x090a202f2f092020ull,
0x2e746c2e70746573ull,0x3870250920323366ull,0x2c3933336625202cull,0x093b373833662520ull,
0x6c6573090a202f2full,0x2509203233752e70ull,0x337225202c363372ull,0x2c34337225202c35ull,
0x2f2f093b38702520ull,0x09636f6c2e090a20ull,0x0938323331093032ull,0x662e627573090a30ull,
0x3833662509203233ull,0x3738336625202c38ull,0x203b30356625202cull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x25202c3938336625ull,0x2020203b38383366ull,0x2f2f092020202020ull,
0x662e627573090a20ull,0x3933662509203233ull,0x3932316625202c30ull,0x203b30356625202cull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x25202c3139336625ull,0x2020203b30393366ull,
0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x0930353231093032ull,0x662e736261090a30ull,
0x3933662509203233ull,0x3039336625202c32ull,0x202020202020203bull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x30202c3339336625ull,0x3030303038653766ull,0x2f2f092020203b30ull,
0x36303730352e3820ull,0x6573090a37332b65ull,0x33662e74672e7074ull,0x202c397025092032ull,
0x25202c3239336625ull,0x2f2f093b33393366ull,0x3970252140090a20ull,0x4c24092061726220ull,
0x203b38365f325f74ull,0x2020202020202020ull,0x2e090a202f2f0920ull,0x3109303209636f6cull,
0x6d090a3009313532ull,0x09203233662e766full,0x30202c3439336625ull,0x3030303038653366ull,
0x2f2f092020203b30ull,0x6d090a35322e3020ull,0x09203233662e6c75ull,0x25202c3938336625ull,
0x6625202c38383366ull,0x2f2f09203b343933ull,0x09636f6c2e090a20ull,0x0932353231093032ull,
0x662e766f6d090a30ull,0x3933662509203233ull,0x3865336630202c35ull,0x20203b3030303030ull,
0x322e30202f2f0920ull,0x662e6c756d090a35ull,0x3933662509203233ull,0x3039336625202c31ull,
0x3b3539336625202cull,0x4c240a202f2f0920ull,0x0a3a38365f325f74ull,0x363109636f6c2e09ull,
0x090a300939333209ull,0x203436752e766f6dull,0x5f202c3564722509ull,0x6f6e5f616475635full,
0x30327473696c6d72ull,0x090a202f2f093b34ull,0x203436752e766f6dull,0x5f202c3664722509ull,
0x65765f616475635full,0x38347473696c7472ull,0x0a202f2f093b3231ull,0x363109636f6c2e09ull,
0x090a300930343209ull,0x203233662e766964ull,0x202c363933662509ull,0x25202c3938336625ull,
0x2f09203b31393366ull,0x2e747663090a202full,0x203233752e343675ull,0x25202c3764722509ull,
0x202020203b303172ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3864722509203436ull,
0x202c37647225202cull,0x2f092020203b3231ull,0x2e646461090a202full,0x6472250920343675ull,
0x2c38647225202c39ull,0x20203b3664722520ull,0x090a202f2f092020ull,0x203233662e627573ull,
0x202c373933662509ull,0x25202c3031316625ull,0x2f0920203b313166ull,0x2e64616d090a202full,
0x3366250920323366ull,0x39336625202c3839ull,0x3739336625202c36ull,0x093b31316625202cull,
0x2e7473090a202f2full,0x662e646572616873ull,0x6472255b09203233ull,0x6625202c5d302b39ull,
0x202f2f093b383933ull,0x20383539333a6469ull,0x765f616475635f5full,0x347473696c747265ull,
0x0a3078302b323138ull,0x3233662e62757309ull,0x2c39393366250920ull,0x25202c3531662520ull,
0x092020203b353166ull,0x64616d090a202f2full,0x662509203233662eull,0x336625202c303034ull,
0x39336625202c3639ull,0x3b35316625202c39ull,0x7473090a202f2f09ull,0x2e6465726168732eull,
0x72255b0920323366ull,0x25202c5d342b3964ull,0x2f2f093b30303466ull,0x393539333a646920ull,
0x5f616475635f5f20ull,0x7473696c74726576ull,0x3078302b32313834ull,0x33662e627573090aull,
0x3130346625092032ull,0x202c33316625202cull,0x2020203b33316625ull,0x616d090a202f2f09ull,
0x2509203233662e64ull,0x6625202c32303466ull,0x346625202c363933ull,0x33316625202c3130ull,
0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,0x202c5d382b396472ull,
0x2f093b3230346625ull,0x3639333a6469202full,0x616475635f5f2030ull,0x73696c747265765full,
0x78302b3231383474ull,0x09636f6c2e090a30ull,0x3009313432093631ull,0x36752e646461090aull,
0x3031647225092034ull,0x202c38647225202cull,0x2020203b35647225ull,0x7573090a202f2f09ull,
0x2509203233662e62ull,0x6625202c33303466ull,0x316625202c333631ull,0x202f2f09203b3730ull,
0x33662e64616d090aull,0x3430346625092032ull,0x2c3639336625202cull,0x202c333034662520ull,
0x2f093b3730316625ull,0x732e7473090a202full,0x33662e6465726168ull,0x316472255b092032ull,
0x6625202c5d302b30ull,0x202f2f093b343034ull,0x20313639333a6469ull,0x6e5f616475635f5full,
0x327473696c6d726full,0x090a3078302b3430ull,0x09363109636f6c2eull,0x73090a3009323432ull,
0x09203233662e6275ull,0x25202c3530346625ull,0x6625202c34363166ull,0x2f2f09203b383031ull,
0x662e64616d090a20ull,0x3034662509203233ull,0x3639336625202c36ull,0x2c3530346625202cull,
0x093b383031662520ull,0x2e7473090a202f2full,0x662e646572616873ull,0x6472255b09203233ull,
0x25202c5d342b3031ull,0x2f2f093b36303466ull,0x323639333a646920ull,0x5f616475635f5f20ull,
0x7473696c6d726f6eull,0x0a3078302b343032ull,0x363109636f6c2e09ull,0x090a300933343209ull,
0x203233662e627573ull,0x202c373034662509ull,0x25202c3536316625ull,0x2f09203b39303166ull,
0x2e64616d090a202full,0x3466250920323366ull,0x39336625202c3830ull,0x3730346625202c36ull,
0x3b3930316625202cull,0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,
0x202c5d382b303164ull,0x2f093b3830346625ull,0x3639333a6469202full,0x616475635f5f2033ull,
0x73696c6d726f6e5full,0x3078302b34303274ull,0x3209636f6c2e090aull,0x3009383233310930ull,
0x33662e627573090aull,0x3930346625092032ull,0x2c3738336625202cull,0x203b393231662520ull,
0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x6625202c39383366ull,0x202020203b393034ull,
0x202f2f0920202020ull,0x33662e627573090aull,0x3031346625092032ull,0x2c3438316625202cull,
0x203b393231662520ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x6625202c31393366ull,
0x202020203b303134ull,0x202f2f0920202020ull,0x3209636f6c2e090aull,0x3009303532310930ull,
0x33662e736261090aull,0x3131346625092032ull,0x3b3031346625202cull,0x2020202020202020ull,
0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x6630202c32313466ull,0x3030303030386537ull,
0x202f2f092020203bull,0x6536303730352e38ull,0x746573090a37332bull,0x3233662e74672e70ull,
0x202c303170250920ull,0x25202c3131346625ull,0x2f2f093b32313466ull,0x3170252140090a20ull,
0x2409206172622030ull,0x3b30375f325f744cull,0x2020202020202020ull,0x2e090a202f2f0920ull,
0x3109303209636f6cull,0x6d090a3009313532ull,0x09203233662e766full,0x30202c3331346625ull,
0x3030303038653366ull,0x2f2f092020203b30ull,0x6d090a35322e3020ull,0x09203233662e6c75ull,
0x25202c3938336625ull,0x6625202c39303466ull,0x2f2f09203b333134ull,0x09636f6c2e090a20ull,
0x0932353231093032ull,0x662e766f6d090a30ull,0x3134662509203233ull,0x3865336630202c34ull,
0x20203b3030303030ull,0x322e30202f2f0920ull,0x662e6c756d090a35ull,0x3933662509203233ull,
0x3031346625202c31ull,0x3b3431346625202cull,0x4c240a202f2f0920ull,0x0a3a30375f325f74ull,
0x363109636f6c2e09ull,0x090a300930343209ull,0x203233662e766964ull,0x202c363933662509ull,
0x25202c3938336625ull,0x2f09203b31393366ull,0x2e627573090a202full,0x3466250920323366ull,
0x31316625202c3531ull,0x3031316625202c30ull,0x090a202f2f09203bull,0x203233662e64616dull,
0x202c363134662509ull,0x25202c3639336625ull,0x6625202c35313466ull,0x202f2f093b303131ull,
0x6168732e7473090aull,0x203233662e646572ull,0x332b396472255b09ull,0x346625202c5d3438ull,
0x69202f2f093b3631ull,0x5f20343639333a64ull,0x65765f616475635full,0x38347473696c7472ull,
0x090a3078302b3231ull,0x203233662e627573ull,0x202c373134662509ull,0x25202c3636316625ull,
0x2f0920203b353166ull,0x2e64616d090a202full,0x3466250920323366ull,0x39336625202c3831ull,
0x3731346625202c36ull,0x093b35316625202cull,0x2e7473090a202f2full,0x662e646572616873ull,
0x6472255b09203233ull,0x202c5d3838332b39ull,0x2f093b3831346625ull,0x3639333a6469202full,
0x616475635f5f2035ull,0x73696c747265765full,0x78302b3231383474ull,0x662e64616d090a30ull,
0x3134662509203233ull,0x3639336625202c39ull,0x2c3130346625202cull,0x2f093b3331662520ull,
0x732e7473090a202full,0x33662e6465726168ull,0x396472255b092032ull,0x25202c5d3239332bull,
0x2f2f093b39313466ull,0x363639333a646920ull,0x5f616475635f5f20ull,0x7473696c74726576ull,
0x3078302b32313834ull,0x3109636f6c2e090aull,0x0a30093134320936ull,0x3233662e62757309ull,
0x2c30323466250920ull,0x202c373132662520ull,0x09203b3336316625ull,0x64616d090a202f2full,
0x662509203233662eull,0x336625202c313234ull,0x32346625202c3639ull,0x3336316625202c30ull,
0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,0x3438332b30316472ull,
0x3132346625202c5dull,0x3a6469202f2f093bull,0x635f5f2037363933ull,0x6d726f6e5f616475ull,
0x2b3430327473696cull,0x6f6c2e090a307830ull,0x3234320936310963ull,0x2e627573090a3009ull,
0x3466250920323366ull,0x31326625202c3232ull,0x3436316625202c38ull,0x090a202f2f09203bull,
0x203233662e64616dull,0x202c333234662509ull,0x25202c3639336625ull,0x6625202c32323466ull,
0x202f2f093b343631ull,0x6168732e7473090aull,0x203233662e646572ull,0x2b30316472255b09ull,
0x6625202c5d383833ull,0x202f2f093b333234ull,0x20383639333a6469ull,0x6e5f616475635f5full,
0x327473696c6d726full,0x090a3078302b3430ull,0x09363109636f6c2eull,0x73090a3009333432ull,
0x09203233662e6275ull,0x25202c3432346625ull,0x6625202c39313266ull,0x2f2f09203b353631ull,
0x662e64616d090a20ull,0x3234662509203233ull,0x3639336625202c35ull,0x2c3432346625202cull,
0x093b353631662520ull,0x2e7473090a202f2full,0x662e646572616873ull,0x6472255b09203233ull,
0x2c5d3239332b3031ull,0x093b353234662520ull,0x39333a6469202f2full,0x6475635f5f203936ull,
0x696c6d726f6e5f61ull,0x78302b3430327473ull,0x09636f6c2e090a30ull,0x0938323331093032ull,
0x662e627573090a30ull,0x3234662509203233ull,0x3738336625202c36ull,0x3b3438316625202cull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x25202c3938336625ull,0x2020203b36323466ull,
0x2f2f092020202020ull,0x662e627573090a20ull,0x3234662509203233ull,0x3932326625202c37ull,
0x3b3438316625202cull,0x6d090a202f2f0920ull,0x09203233662e766full,0x25202c3139336625ull,
0x2020203b37323466ull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x0930353231093032ull,
0x662e736261090a30ull,0x3234662509203233ull,0x3732346625202c38ull,0x202020202020203bull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x30202c3932346625ull,0x3030303038653766ull,
0x2f2f092020203b30ull,0x36303730352e3820ull,0x6573090a37332b65ull,0x33662e74672e7074ull,
0x2c31317025092032ull,0x202c383234662520ull,0x2f093b3932346625ull,0x70252140090a202full,
0x0920617262203131ull,0x32375f325f744c24ull,0x202020202020203bull,0x090a202f2f092020ull,
0x09303209636f6c2eull,0x090a300931353231ull,0x203233662e766f6dull,0x202c303334662509ull,
0x3030303865336630ull,0x2f092020203b3030ull,0x090a35322e30202full,0x203233662e6c756dull,
0x202c393833662509ull,0x25202c3632346625ull,0x2f09203b30333466ull,0x636f6c2e090a202full,
0x3235323109303209ull,0x2e766f6d090a3009ull,0x3466250920323366ull,0x65336630202c3133ull,
0x203b303030303038ull,0x2e30202f2f092020ull,0x2e6c756d090a3532ull,0x3366250920323366ull,
0x32346625202c3139ull,0x3133346625202c37ull,0x240a202f2f09203bull,0x3a32375f325f744cull,
0x3109636f6c2e090aull,0x0a30093034320936ull,0x3233662e76696409ull,0x2c36393366250920ull,
0x202c393833662520ull,0x09203b3139336625ull,0x627573090a202f2full,0x662509203233662eull,
0x316625202c323334ull,0x3031316625202c31ull,0x0a202f2f0920203bull,0x3233662e64616d09ull,
0x2c33333466250920ull,0x202c363933662520ull,0x25202c3233346625ull,0x2f2f093b30313166ull,
0x68732e7473090a20ull,0x3233662e64657261ull,0x2b396472255b0920ull,0x6625202c5d383637ull,
0x202f2f093b333334ull,0x20303739333a6469ull,0x765f616475635f5full,0x347473696c747265ull,
0x0a3078302b323138ull,0x3233662e62757309ull,0x2c34333466250920ull,0x202c363631662520ull,
0x09203b3636316625ull,0x64616d090a202f2full,0x662509203233662eull,0x336625202c353334ull,
0x33346625202c3639ull,0x3636316625202c34ull,0x73090a202f2f093bull,0x6465726168732e74ull,
0x255b09203233662eull,0x5d3237372b396472ull,0x3b3533346625202cull,0x333a6469202f2f09ull,
0x75635f5f20313739ull,0x6c747265765f6164ull,0x2b32313834747369ull,0x64616d090a307830ull,
0x662509203233662eull,0x336625202c363334ull,0x30346625202c3639ull,0x3b33316625202c31ull,
0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,0x2c5d3637372b3964ull,
0x093b363334662520ull,0x39333a6469202f2full,0x6475635f5f203237ull,0x696c747265765f61ull,
0x302b323138347473ull,0x636f6c2e090a3078ull,0x0931343209363109ull,0x662e627573090a30ull,
0x3334662509203233ull,0x3235326625202c37ull,0x3b3731326625202cull,0x6d090a202f2f0920ull,
0x09203233662e6461ull,0x25202c3833346625ull,0x6625202c36393366ull,0x326625202c373334ull,
0x0a202f2f093b3731ull,0x726168732e747309ull,0x09203233662e6465ull,0x372b30316472255bull,
0x346625202c5d3836ull,0x69202f2f093b3833ull,0x5f20333739333a64ull,0x6f6e5f616475635full,
0x30327473696c6d72ull,0x2e090a3078302b34ull,0x3209363109636f6cull,0x7573090a30093234ull,
0x2509203233662e62ull,0x6625202c39333466ull,0x326625202c333532ull,0x202f2f09203b3831ull,
0x33662e64616d090aull,0x3034346625092032ull,0x2c3639336625202cull,0x202c393334662520ull,
0x2f093b3831326625ull,0x732e7473090a202full,0x33662e6465726168ull,0x316472255b092032ull,
0x202c5d3237372b30ull,0x2f093b3034346625ull,0x3739333a6469202full,0x616475635f5f2034ull,
0x73696c6d726f6e5full,0x3078302b34303274ull,0x3109636f6c2e090aull,0x0a30093334320936ull,
0x3233662e62757309ull,0x2c31343466250920ull,0x202c343532662520ull,0x09203b3931326625ull,
0x64616d090a202f2full,0x662509203233662eull,0x336625202c323434ull,0x34346625202c3639ull,
0x3931326625202c31ull,0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,
0x3637372b30316472ull,0x3234346625202c5dull,0x3a6469202f2f093bull,0x635f5f2035373933ull,
0x6d726f6e5f616475ull,0x2b3430327473696cull,0x6f6c2e090a307830ull,0x3233310930320963ull,
0x627573090a300938ull,0x662509203233662eull,0x336625202c333434ull,0x32326625202c3738ull,
0x0a202f2f09203b39ull,0x3233662e766f6d09ull,0x2c39383366250920ull,0x203b333434662520ull,
0x0920202020202020ull,0x627573090a202f2full,0x662509203233662eull,0x356625202c343434ull,
0x3932326625202c30ull,0x0a202f2f0920203bull,0x3233662e766f6d09ull,0x2c31393366250920ull,
0x203b343434662520ull,0x0920202020202020ull,0x6f6c2e090a202f2full,0x3532310930320963ull,
0x736261090a300930ull,0x662509203233662eull,0x346625202c353434ull,0x20202020203b3434ull,
0x0a202f2f09202020ull,0x3233662e766f6d09ull,0x2c36343466250920ull,0x3030386537663020ull,
0x092020203b303030ull,0x3730352e38202f2full,0x090a37332b653630ull,0x2e74672e70746573ull,
0x3170250920323366ull,0x3534346625202c32ull,0x3b3634346625202cull,0x2140090a202f2f09ull,
0x6172622032317025ull,0x5f325f744c240920ull,0x20202020203b3437ull,0x202f2f0920202020ull,
0x3209636f6c2e090aull,0x3009313532310930ull,0x33662e766f6d090aull,0x3734346625092032ull,
0x303865336630202cull,0x2020203b30303030ull,0x35322e30202f2f09ull,0x33662e6c756d090aull,
0x3938336625092032ull,0x2c3334346625202cull,0x203b373434662520ull,0x6c2e090a202f2f09ull,
0x323109303209636full,0x6f6d090a30093235ull,0x2509203233662e76ull,0x6630202c38343466ull,
0x3030303030386533ull,0x202f2f092020203bull,0x756d090a35322e30ull,0x2509203233662e6cull,
0x6625202c31393366ull,0x346625202c343434ull,0x202f2f09203b3834ull,0x375f325f744c240aull,
0x636f6c2e090a3a34ull,0x0930343209363109ull,0x662e766964090a30ull,0x3933662509203233ull,
0x3938336625202c36ull,0x3b3139336625202cull,0x73090a202f2f0920ull,0x09203233662e6275ull,
0x25202c3934346625ull,0x316625202c313166ull,0x2f2f092020203b31ull,0x662e64616d090a20ull,
0x3534662509203233ull,0x3639336625202c30ull,0x2c3934346625202cull,0x2f093b3131662520ull,
0x732e7473090a202full,0x33662e6465726168ull,0x396472255b092032ull,0x202c5d323531312bull,
0x2f093b3035346625ull,0x3739333a6469202full,0x616475635f5f2036ull,0x73696c747265765full,
0x78302b3231383474ull,0x662e627573090a30ull,0x3534662509203233ull,0x2c35316625202c31ull,
0x203b363631662520ull,0x6d090a202f2f0920ull,0x09203233662e6461ull,0x25202c3235346625ull,
0x6625202c36393366ull,0x316625202c313534ull,0x0a202f2f093b3636ull,0x726168732e747309ull,
0x09203233662e6465ull,0x31312b396472255bull,0x346625202c5d3635ull,0x69202f2f093b3235ull,
0x5f20373739333a64ull,0x65765f616475635full,0x38347473696c7472ull,0x090a3078302b3231ull,
0x203233662e64616dull,0x202c333534662509ull,0x25202c3639336625ull,0x6625202c31303466ull,
0x0a202f2f093b3331ull,0x726168732e747309ull,0x09203233662e6465ull,0x31312b396472255bull,
0x346625202c5d3036ull,0x69202f2f093b3335ull,0x5f20383739333a64ull,0x65765f616475635full,
0x38347473696c7472ull,0x090a3078302b3231ull,0x09363109636f6c2eull,0x73090a3009313432ull,
0x09203233662e6275ull,0x25202c3435346625ull,0x6625202c37303166ull,0x2f2f09203b323532ull,
0x662e64616d090a20ull,0x3534662509203233ull,0x3639336625202c35ull,0x2c3435346625202cull,
0x093b323532662520ull,0x2e7473090a202f2full,0x662e646572616873ull,0x6472255b09203233ull,
0x5d323531312b3031ull,0x3b3535346625202cull,0x333a6469202f2f09ull,0x75635f5f20393739ull,
0x6c6d726f6e5f6164ull,0x302b343032747369ull,0x636f6c2e090a3078ull,0x0932343209363109ull,
0x662e627573090a30ull,0x3534662509203233ull,0x3830316625202c36ull,0x3b3335326625202cull,
0x6d090a202f2f0920ull,0x09203233662e6461ull,0x25202c3735346625ull,0x6625202c36393366ull,
0x326625202c363534ull,0x0a202f2f093b3335ull,0x726168732e747309ull,0x09203233662e6465ull,
0x312b30316472255bull,0x6625202c5d363531ull,0x202f2f093b373534ull,0x20303839333a6469ull,
0x6e5f616475635f5full,0x327473696c6d726full,0x090a3078302b3430ull,0x09363109636f6c2eull,
0x73090a3009333432ull,0x09203233662e6275ull,0x25202c3835346625ull,0x6625202c39303166ull,
0x2f2f09203b343532ull,0x662e64616d090a20ull,0x3534662509203233ull,0x3639336625202c39ull,
0x2c3835346625202cull,0x093b343532662520ull,0x2e7473090a202f2full,0x662e646572616873ull,
0x6472255b09203233ull,0x5d303631312b3031ull,0x3b3935346625202cull,0x333a6469202f2f09ull,
0x75635f5f20313839ull,0x6c6d726f6e5f6164ull,0x302b343032747369ull,0x636f6c2e090a3078ull,
0x3832333109303209ull,0x2e627573090a3009ull,0x3366250920323366ull,0x38336625202c3938ull,
0x3137326625202c37ull,0x090a202f2f09203bull,0x203233662e627573ull,0x202c303634662509ull,
0x25202c3031336625ull,0x2f09203b31373266ull,0x2e766f6d090a202full,0x3366250920323366ull,
0x36346625202c3139ull,0x2020202020203b30ull,0x090a202f2f092020ull,0x09303209636f6c2eull,
0x090a300930353231ull,0x203233662e736261ull,0x202c313634662509ull,0x20203b3036346625ull,
0x2f09202020202020ull,0x2e766f6d090a202full,0x3466250920323366ull,0x65376630202c3236ull,
0x203b303030303038ull,0x2e38202f2f092020ull,0x332b653630373035ull,0x2e70746573090a37ull,
0x09203233662e7467ull,0x6625202c33317025ull,0x346625202c313634ull,0x0a202f2f093b3236ull,
0x2033317025214009ull,0x744c240920617262ull,0x20203b36375f325full,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x3532310930320963ull,0x766f6d090a300931ull,0x662509203233662eull,
0x336630202c333634ull,0x3b30303030303865ull,0x30202f2f09202020ull,0x6c756d090a35322eull,
0x662509203233662eull,0x336625202c393833ull,0x36346625202c3938ull,0x0a202f2f09203b33ull,
0x303209636f6c2e09ull,0x0a30093235323109ull,0x3233662e766f6d09ull,0x2c34363466250920ull,
0x3030386533663020ull,0x092020203b303030ull,0x0a35322e30202f2full,0x3233662e6c756d09ull,
0x2c31393366250920ull,0x202c303634662520ull,0x09203b3436346625ull,0x5f744c240a202f2full,
0x2e090a3a36375f32ull,0x3209363109636f6cull,0x6964090a30093034ull,0x2509203233662e76ull,
0x6625202c36393366ull,0x336625202c393833ull,0x202f2f09203b3139ull,0x33662e64616d090aull,
0x3536346625092032ull,0x2c3639336625202cull,0x202c373933662520ull,0x2f2f093b31316625ull,
0x68732e7473090a20ull,0x3233662e64657261ull,0x2b396472255b0920ull,0x25202c5d36333531ull,
0x2f2f093b35363466ull,0x323839333a646920ull,0x5f616475635f5f20ull,0x7473696c74726576ull,
0x3078302b32313834ull,0x33662e64616d090aull,0x3636346625092032ull,0x2c3639336625202cull,
0x202c393933662520ull,0x2f2f093b35316625ull,0x68732e7473090a20ull,0x3233662e64657261ull,
0x2b396472255b0920ull,0x25202c5d30343531ull,0x2f2f093b36363466ull,0x333839333a646920ull,
0x5f616475635f5f20ull,0x7473696c74726576ull,0x3078302b32313834ull,0x33662e627573090aull,
0x3736346625092032ull,0x2c3535326625202cull,0x203b353532662520ull,0x616d090a202f2f09ull,
0x2509203233662e64ull,0x6625202c38363466ull,0x346625202c363933ull,0x35326625202c3736ull,
0x090a202f2f093b35ull,0x65726168732e7473ull,0x5b09203233662e64ull,0x3435312b39647225ull,
0x36346625202c5d34ull,0x6469202f2f093b38ull,0x5f5f20343839333aull,0x7265765f61647563ull,
0x3138347473696c74ull,0x2e090a3078302b32ull,0x3209363109636f6cull,0x7573090a30093134ull,
0x2509203233662e62ull,0x6625202c39363466ull,0x336625202c393233ull,0x202f2f09203b3030ull,
0x33662e64616d090aull,0x3037346625092032ull,0x2c3639336625202cull,0x202c393634662520ull,
0x2f093b3030336625ull,0x732e7473090a202full,0x33662e6465726168ull,0x316472255b092032ull,
0x2c5d363335312b30ull,0x093b303734662520ull,0x39333a6469202f2full,0x6475635f5f203538ull,
0x696c6d726f6e5f61ull,0x78302b3430327473ull,0x09636f6c2e090a30ull,0x3009323432093631ull,
0x33662e627573090aull,0x3137346625092032ull,0x2c3033336625202cull,0x203b313033662520ull,
0x616d090a202f2f09ull,0x2509203233662e64ull,0x6625202c32373466ull,0x346625202c363933ull,
0x30336625202c3137ull,0x090a202f2f093b31ull,0x65726168732e7473ull,0x5b09203233662e64ull,
0x35312b3031647225ull,0x346625202c5d3034ull,0x69202f2f093b3237ull,0x5f20363839333a64ull,
0x6f6e5f616475635full,0x30327473696c6d72ull,0x2e090a3078302b34ull,0x3209363109636f6cull,
0x7573090a30093334ull,0x2509203233662e62ull,0x6625202c33373466ull,0x336625202c313333ull,
0x202f2f09203b3230ull,0x33662e64616d090aull,0x3437346625092032ull,0x2c3639336625202cull,
0x202c333734662520ull,0x2f093b3230336625ull,0x732e7473090a202full,0x33662e6465726168ull,
0x316472255b092032ull,0x2c5d343435312b30ull,0x093b343734662520ull,0x39333a6469202f2full,
0x6475635f5f203738ull,0x696c6d726f6e5f61ull,0x78302b3430327473ull,0x09636f6c2e090a30ull,
0x0938323331093032ull,0x662e627573090a30ull,0x3833662509203233ull,0x3738336625202c39ull,
0x3b3031336625202cull,0x73090a202f2f0920ull,0x09203233662e6275ull,0x25202c3537346625ull,
0x6625202c39333366ull,0x2f2f09203b303133ull,0x662e766f6d090a20ull,0x3933662509203233ull,
0x3537346625202c31ull,0x202020202020203bull,0x2e090a202f2f0920ull,0x3109303209636f6cull,
0x61090a3009303532ull,0x09203233662e7362ull,0x25202c3637346625ull,0x2020203b35373466ull,
0x2f2f092020202020ull,0x662e766f6d090a20ull,0x3734662509203233ull,0x3865376630202c37ull,
0x20203b3030303030ull,0x352e38202f2f0920ull,0x37332b6536303730ull,0x672e70746573090aull,
0x2509203233662e74ull,0x346625202c343170ull,0x37346625202c3637ull,0x090a202f2f093b37ull,
0x6220343170252140ull,0x5f744c2409206172ull,0x2020203b38375f32ull,0x2f09202020202020ull,
0x636f6c2e090a202full,0x3135323109303209ull,0x2e766f6d090a3009ull,0x3466250920323366ull,
0x65336630202c3837ull,0x203b303030303038ull,0x2e30202f2f092020ull,0x2e6c756d090a3532ull,
0x3366250920323366ull,0x38336625202c3938ull,0x3837346625202c39ull,0x090a202f2f09203bull,
0x09303209636f6c2eull,0x090a300932353231ull,0x203233662e766f6dull,0x202c393734662509ull,
0x3030303865336630ull,0x2f092020203b3030ull,0x090a35322e30202full,0x203233662e6c756dull,
0x202c313933662509ull,0x25202c3537346625ull,0x2f09203b39373466ull,0x325f744c240a202full,
0x6c2e090a3a38375full,0x343209363109636full,0x766964090a300930ull,0x662509203233662eull,
0x336625202c363933ull,0x39336625202c3938ull,0x0a202f2f09203b31ull,0x3233662e64616d09ull,
0x2c30383466250920ull,0x202c363933662520ull,0x25202c3531346625ull,0x2f2f093b30313166ull,
0x68732e7473090a20ull,0x3233662e64657261ull,0x2b396472255b0920ull,0x25202c5d30323931ull,
0x2f2f093b30383466ull,0x383839333a646920ull,0x5f616475635f5f20ull,0x7473696c74726576ull,
0x3078302b32313834ull,0x33662e64616d090aull,0x3138346625092032ull,0x2c3639336625202cull,
0x202c373134662520ull,0x2f2f093b35316625ull,0x68732e7473090a20ull,0x3233662e64657261ull,
0x2b396472255b0920ull,0x25202c5d34323931ull,0x2f2f093b31383466ull,0x393839333a646920ull,
0x5f616475635f5f20ull,0x7473696c74726576ull,0x3078302b32313834ull,0x33662e64616d090aull,
0x3238346625092032ull,0x2c3639336625202cull,0x202c373634662520ull,0x2f093b3535326625ull,
0x732e7473090a202full,0x33662e6465726168ull,0x396472255b092032ull,0x202c5d383239312bull,
0x2f093b3238346625ull,0x3939333a6469202full,0x616475635f5f2030ull,0x73696c747265765full,
0x78302b3231383474ull,0x09636f6c2e090a30ull,0x3009313432093631ull,0x33662e627573090aull,
0x3338346625092032ull,0x2c3835336625202cull,0x203b393233662520ull,0x616d090a202f2f09ull,
0x2509203233662e64ull,0x6625202c34383466ull,0x346625202c363933ull,0x32336625202c3338ull,
0x090a202f2f093b39ull,0x65726168732e7473ull,0x5b09203233662e64ull,0x39312b3031647225ull,
0x346625202c5d3032ull,0x69202f2f093b3438ull,0x5f20313939333a64ull,0x6f6e5f616475635full,
0x30327473696c6d72ull,0x2e090a3078302b34ull,0x3209363109636f6cull,0x7573090a30093234ull,
0x2509203233662e62ull,0x6625202c35383466ull,0x336625202c393533ull,0x202f2f09203b3033ull,
0x33662e64616d090aull,0x3638346625092032ull,0x2c3639336625202cull,0x202c353834662520ull,
0x2f093b3033336625ull,0x732e7473090a202full,0x33662e6465726168ull,0x316472255b092032ull,
0x2c5d343239312b30ull,0x093b363834662520ull,0x39333a6469202f2full,0x6475635f5f203239ull,
0x696c6d726f6e5f61ull,0x78302b3430327473ull,0x09636f6c2e090a30ull,0x3009333432093631ull,
0x33662e627573090aull,0x3738346625092032ull,0x2c3036336625202cull,0x203b313333662520ull,
0x616d090a202f2f09ull,0x2509203233662e64ull,0x6625202c38383466ull,0x346625202c363933ull,
0x33336625202c3738ull,0x090a202f2f093b31ull,0x65726168732e7473ull,0x5b09203233662e64ull,
0x39312b3031647225ull,0x346625202c5d3832ull,0x69202f2f093b3838ull,0x5f20333939333a64ull,
0x6f6e5f616475635full,0x30327473696c6d72ull,0x2e090a3078302b34ull,0x3109303209636f6cull,
0x73090a3009383233ull,0x09203233662e6275ull,0x25202c3938336625ull,0x6625202c37383366ull,
0x2f2f09203b393333ull,0x662e627573090a20ull,0x3834662509203233ull,0x3836336625202c39ull,
0x3b3933336625202cull,0x6d090a202f2f0920ull,0x09203233662e766full,0x25202c3139336625ull,
0x2020203b39383466ull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x0930353231093032ull,
0x662e736261090a30ull,0x3934662509203233ull,0x3938346625202c30ull,0x202020202020203bull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x30202c3139346625ull,0x3030303038653766ull,
0x2f2f092020203b30ull,0x36303730352e3820ull,0x6573090a37332b65ull,0x33662e74672e7074ull,
0x2c35317025092032ull,0x202c303934662520ull,0x2f093b3139346625ull,0x70252140090a202full,
0x0920617262203531ull,0x30385f325f744c24ull,0x202020202020203bull,0x090a202f2f092020ull,
0x09303209636f6c2eull,0x090a300931353231ull,0x203233662e766f6dull,0x202c323934662509ull,
0x3030303865336630ull,0x2f092020203b3030ull,0x090a35322e30202full,0x203233662e6c756dull,
0x202c393833662509ull,0x25202c3938336625ull,0x2f09203b32393466ull,0x636f6c2e090a202full,
0x3235323109303209ull,0x2e766f6d090a3009ull,0x3466250920323366ull,0x65336630202c3339ull,
0x203b303030303038ull,0x2e30202f2f092020ull,0x2e6c756d090a3532ull,0x3366250920323366ull,
0x38346625202c3139ull,0x3339346625202c39ull,0x240a202f2f09203bull,0x3a30385f325f744cull,
0x3109636f6c2e090aull,0x0a30093034320936ull,0x3233662e76696409ull,0x2c36393366250920ull,
0x202c393833662520ull,0x09203b3139336625ull,0x64616d090a202f2full,0x662509203233662eull,
0x336625202c343934ull,0x33346625202c3639ull,0x3031316625202c32ull,0x73090a202f2f093bull,
0x6465726168732e74ull,0x255b09203233662eull,0x343033322b396472ull,0x3439346625202c5dull,
0x3a6469202f2f093bull,0x635f5f2034393933ull,0x747265765f616475ull,0x323138347473696cull,
0x616d090a3078302bull,0x2509203233662e64ull,0x6625202c35393466ull,0x346625202c363933ull,
0x36316625202c3433ull,0x090a202f2f093b36ull,0x65726168732e7473ull,0x5b09203233662e64ull,
0x3033322b39647225ull,0x39346625202c5d38ull,0x6469202f2f093b35ull,0x5f5f20353939333aull,
0x7265765f61647563ull,0x3138347473696c74ull,0x6d090a3078302b32ull,0x09203233662e6461ull,
0x25202c3639346625ull,0x6625202c36393366ull,0x326625202c373634ull,0x0a202f2f093b3535ull,
0x726168732e747309ull,0x09203233662e6465ull,0x33322b396472255bull,0x346625202c5d3231ull,
0x69202f2f093b3639ull,0x5f20363939333a64ull,0x65765f616475635full,0x38347473696c7472ull,
0x090a3078302b3231ull,0x09363109636f6c2eull,0x73090a3009313432ull,0x09203233662e6275ull,
0x25202c3739346625ull,0x336625202c303766ull,0x2f2f0920203b3836ull,0x662e627573090a20ull,
0x3934662509203233ull,0x3739346625202c38ull,0x3b3835336625202cull,0x6d090a202f2f0920ull,
0x09203233662e6461ull,0x25202c3939346625ull,0x6625202c36393366ull,0x336625202c383934ull,
0x0a202f2f093b3835ull,0x726168732e747309ull,0x09203233662e6465ull,0x322b30316472255bull,
0x6625202c5d343033ull,0x202f2f093b393934ull,0x20373939333a6469ull,0x6e5f616475635f5full,
0x327473696c6d726full,0x090a3078302b3430ull,0x09363109636f6c2eull,0x73090a3009323432ull,
0x09203233662e6275ull,0x25202c3030356625ull,0x336625202c393866ull,0x2f2f0920203b3836ull,
0x662e627573090a20ull,0x3035662509203233ull,0x3030356625202c31ull,0x3b3935336625202cull,
0x6d090a202f2f0920ull,0x09203233662e6461ull,0x25202c3230356625ull,0x6625202c36393366ull,
0x336625202c313035ull,0x0a202f2f093b3935ull,0x726168732e747309ull,0x09203233662e6465ull,
0x322b30316472255bull,0x6625202c5d383033ull,0x202f2f093b323035ull,0x20383939333a6469ull,
0x6e5f616475635f5full,0x327473696c6d726full,0x090a3078302b3430ull,0x09363109636f6c2eull,
0x73090a3009333432ull,0x09203233662e6275ull,0x25202c3330356625ull,0x6625202c36303166ull,
0x2f2f09203b383633ull,0x662e627573090a20ull,0x3035662509203233ull,0x3330356625202c34ull,
0x3b3036336625202cull,0x6d090a202f2f0920ull,0x09203233662e6461ull,0x25202c3530356625ull,
0x6625202c36393366ull,0x336625202c343035ull,0x0a202f2f093b3036ull,0x726168732e747309ull,
0x09203233662e6465ull,0x322b30316472255bull,0x6625202c5d323133ull,0x202f2f093b353035ull,
0x20393939333a6469ull,0x6e5f616475635f5full,0x327473696c6d726full,0x090a3078302b3430ull,
0x09303209636f6c2eull,0x090a300938323331ull,0x203233662e627573ull,0x202c393833662509ull,
0x25202c3738336625ull,0x2f09203b38363366ull,0x2e627573090a202full,0x3566250920323366ull,
0x37326625202c3630ull,0x3836336625202c31ull,0x090a202f2f09203bull,0x203233662e766f6dull,
0x202c313933662509ull,0x20203b3630356625ull,0x2f09202020202020ull,0x636f6c2e090a202full,
0x3035323109303209ull,0x2e736261090a3009ull,0x3566250920323366ull,0x30356625202c3730ull,
0x2020202020203b36ull,0x090a202f2f092020ull,0x203233662e766f6dull,0x202c383035662509ull,
0x3030303865376630ull,0x2f092020203b3030ull,0x303730352e38202full,0x73090a37332b6536ull,
0x662e74672e707465ull,0x3631702509203233ull,0x2c3730356625202cull,0x093b383035662520ull,
0x252140090a202f2full,0x2061726220363170ull,0x385f325f744c2409ull,0x2020202020203b32ull,
0x0a202f2f09202020ull,0x303209636f6c2e09ull,0x0a30093135323109ull,0x3233662e766f6d09ull,
0x2c39303566250920ull,0x3030386533663020ull,0x092020203b303030ull,0x0a35322e30202f2full,
0x3233662e6c756d09ull,0x2c39383366250920ull,0x202c393833662520ull,0x09203b3930356625ull,
0x6f6c2e090a202f2full,0x3532310930320963ull,0x766f6d090a300932ull,0x662509203233662eull,
0x336630202c303135ull,0x3b30303030303865ull,0x30202f2f09202020ull,0x6c756d090a35322eull,
0x662509203233662eull,0x356625202c313933ull,0x31356625202c3630ull,0x0a202f2f09203b30ull,
0x32385f325f744c24ull,0x09636f6c2e090a3aull,0x3009303432093631ull,0x33662e766964090aull,
0x3639336625092032ull,0x2c3938336625202cull,0x203b313933662520ull,0x616d090a202f2f09ull,
0x2509203233662e64ull,0x6625202c31313566ull,0x346625202c363933ull,0x31316625202c3934ull,
0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,0x383836322b396472ull,
0x3131356625202c5dull,0x3a6469202f2f093bull,0x635f5f2030303034ull,0x747265765f616475ull,
0x323138347473696cull,0x616d090a3078302bull,0x2509203233662e64ull,0x6625202c32313566ull,
0x346625202c363933ull,0x36316625202c3135ull,0x090a202f2f093b36ull,0x65726168732e7473ull,
0x5b09203233662e64ull,0x3936322b39647225ull,0x31356625202c5d32ull,0x6469202f2f093b32ull,
0x5f5f20313030343aull,0x7265765f61647563ull,0x3138347473696c74ull,0x6d090a3078302b32ull,
0x09203233662e6461ull,0x25202c3331356625ull,0x6625202c36393366ull,0x326625202c373634ull,
0x0a202f2f093b3535ull,0x726168732e747309ull,0x09203233662e6465ull,0x36322b396472255bull,
0x356625202c5d3639ull,0x69202f2f093b3331ull,0x5f20323030343a64ull,0x65765f616475635full,
0x38347473696c7472ull,0x090a3078302b3231ull,0x09363109636f6c2eull,0x73090a3009313432ull,
0x09203233662e6275ull,0x25202c3431356625ull,0x6625202c30303366ull,0x2f2f09203b373934ull,
0x662e64616d090a20ull,0x3135662509203233ull,0x3639336625202c35ull,0x2c3431356625202cull,
0x093b373934662520ull,0x2e7473090a202f2full,0x662e646572616873ull,0x6472255b09203233ull,
0x5d383836322b3031ull,0x3b3531356625202cull,0x343a6469202f2f09ull,0x75635f5f20333030ull,
0x6c6d726f6e5f6164ull,0x302b343032747369ull,0x636f6c2e090a3078ull,0x0932343209363109ull,
0x662e627573090a30ull,0x3135662509203233ull,0x3130336625202c36ull,0x3b3030356625202cull,
0x6d090a202f2f0920ull,0x09203233662e6461ull,0x25202c3731356625ull,0x6625202c36393366ull,
0x356625202c363135ull,0x0a202f2f093b3030ull,0x726168732e747309ull,0x09203233662e6465ull,
0x322b30316472255bull,0x6625202c5d323936ull,0x202f2f093b373135ull,0x20343030343a6469ull,
0x6e5f616475635f5full,0x327473696c6d726full,0x090a3078302b3430ull,0x09363109636f6c2eull,
0x73090a3009333432ull,0x09203233662e6275ull,0x25202c3831356625ull,0x6625202c32303366ull,
0x2f2f09203b333035ull,0x662e64616d090a20ull,0x3135662509203233ull,0x3639336625202c39ull,
0x2c3831356625202cull,0x093b333035662520ull,0x2e7473090a202f2full,0x662e646572616873ull,
0x6472255b09203233ull,0x5d363936322b3031ull,0x3b3931356625202cull,0x343a6469202f2f09ull,
0x75635f5f20353030ull,0x6c6d726f6e5f6164ull,0x302b343032747369ull,0x636f6c2e090a3078ull,
0x3832333109303209ull,0x2e766f6d090a3009ull,0x3366250920323366ull,0x38336625202c3938ull,
0x2020202020203b38ull,0x090a202f2f092020ull,0x203233662e627573ull,0x202c303235662509ull,
0x25202c3137326625ull,0x2f0920203b303566ull,0x2e766f6d090a202full,0x3366250920323366ull,
0x32356625202c3139ull,0x2020202020203b30ull,0x090a202f2f092020ull,0x09303209636f6c2eull,
0x090a300930353231ull,0x203233662e736261ull,0x202c313235662509ull,0x20203b3032356625ull,
0x2f09202020202020ull,0x2e766f6d090a202full,0x3566250920323366ull,0x65376630202c3232ull,
0x203b303030303038ull,0x2e38202f2f092020ull,0x332b653630373035ull,0x2e70746573090a37ull,
0x09203233662e7467ull,0x6625202c37317025ull,0x356625202c313235ull,0x0a202f2f093b3232ull,
0x2037317025214009ull,0x744c240920617262ull,0x20203b34385f325full,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x3532310930320963ull,0x766f6d090a300931ull,0x662509203233662eull,
0x336630202c333235ull,0x3b30303030303865ull,0x30202f2f09202020ull,0x6c756d090a35322eull,
0x662509203233662eull,0x336625202c393833ull,0x32356625202c3838ull,0x0a202f2f09203b33ull,
0x303209636f6c2e09ull,0x0a30093235323109ull,0x3233662e766f6d09ull,0x2c34323566250920ull,
0x3030386533663020ull,0x092020203b303030ull,0x0a35322e30202f2full,0x3233662e6c756d09ull,
0x2c31393366250920ull,0x202c303235662520ull,0x09203b3432356625ull,0x5f744c240a202f2full,
0x2e090a3a34385f32ull,0x3209363109636f6cull,0x6964090a30093034ull,0x2509203233662e76ull,
0x6625202c36393366ull,0x336625202c393833ull,0x202f2f09203b3139ull,0x33662e64616d090aull,
0x3532356625092032ull,0x2c3639336625202cull,0x202c393434662520ull,0x2f2f093b31316625ull,
0x68732e7473090a20ull,0x3233662e64657261ull,0x2b396472255b0920ull,0x25202c5d32373033ull,
0x2f2f093b35323566ull,0x363030343a646920ull,0x5f616475635f5f20ull,0x7473696c74726576ull,
0x3078302b32313834ull,0x33662e64616d090aull,0x3632356625092032ull,0x2c3639336625202cull,
0x202c393933662520ull,0x2f2f093b35316625ull,0x68732e7473090a20ull,0x3233662e64657261ull,
0x2b396472255b0920ull,0x25202c5d36373033ull,0x2f2f093b36323566ull,0x373030343a646920ull,
0x5f616475635f5f20ull,0x7473696c74726576ull,0x3078302b32313834ull,0x33662e627573090aull,
0x3732356625092032ull,0x2c3535326625202cull,0x20203b3331662520ull,0x616d090a202f2f09ull,
0x2509203233662e64ull,0x6625202c38323566ull,0x356625202c363933ull,0x33316625202c3732ull,
0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,0x303830332b396472ull,
0x3832356625202c5dull,0x3a6469202f2f093bull,0x635f5f2038303034ull,0x747265765f616475ull,
0x323138347473696cull,0x6c2e090a3078302bull,0x343209363109636full,0x627573090a300931ull,
0x662509203233662eull,0x336625202c393235ull,0x30316625202c3030ull,0x0a202f2f09203b37ull,
0x3233662e64616d09ull,0x2c30333566250920ull,0x202c363933662520ull,0x25202c3932356625ull,
0x2f2f093b37303166ull,0x68732e7473090a20ull,0x3233662e64657261ull,0x30316472255b0920ull,
0x202c5d323730332bull,0x2f093b3033356625ull,0x3030343a6469202full,0x616475635f5f2039ull,
0x73696c6d726f6e5full,0x3078302b34303274ull,0x3109636f6c2e090aull,0x0a30093234320936ull,
0x3233662e62757309ull,0x2c31333566250920ull,0x202c313033662520ull,0x09203b3830316625ull,
0x64616d090a202f2full,0x662509203233662eull,0x336625202c323335ull,0x33356625202c3639ull,
0x3830316625202c31ull,0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,
0x3730332b30316472ull,0x33356625202c5d36ull,0x6469202f2f093b32ull,0x5f5f20303130343aull,
0x726f6e5f61647563ull,0x3430327473696c6dull,0x6c2e090a3078302bull,0x343209363109636full,
0x627573090a300933ull,0x662509203233662eull,0x336625202c333335ull,0x30316625202c3230ull,
0x0a202f2f09203b39ull,0x3233662e64616d09ull,0x2c34333566250920ull,0x202c363933662520ull,
0x25202c3333356625ull,0x2f2f093b39303166ull,0x68732e7473090a20ull,0x3233662e64657261ull,
0x30316472255b0920ull,0x202c5d303830332bull,0x2f093b3433356625ull,0x3130343a6469202full,
0x616475635f5f2031ull,0x73696c6d726f6e5full,0x3078302b34303274ull,0x3209636f6c2e090aull,
0x3009383233310930ull,0x33662e766f6d090aull,0x3938336625092032ull,0x3b3930346625202cull,
0x2020202020202020ull,0x7573090a202f2f09ull,0x2509203233662e62ull,0x6625202c35333566ull,
0x316625202c303133ull,0x202f2f09203b3932ull,0x33662e766f6d090aull,0x3139336625092032ull,
0x3b3533356625202cull,0x2020202020202020ull,0x6c2e090a202f2f09ull,0x323109303209636full,
0x6261090a30093035ull,0x2509203233662e73ull,0x6625202c36333566ull,0x202020203b353335ull,
0x202f2f0920202020ull,0x33662e766f6d090aull,0x3733356625092032ull,0x303865376630202cull,
0x2020203b30303030ull,0x30352e38202f2f09ull,0x0a37332b65363037ull,0x74672e7074657309ull,
0x702509203233662eull,0x33356625202c3831ull,0x3733356625202c36ull,0x40090a202f2f093bull,
0x7262203831702521ull,0x325f744c24092061ull,0x202020203b36385full,0x2f2f092020202020ull,
0x09636f6c2e090a20ull,0x0931353231093032ull,0x662e766f6d090a30ull,0x3335662509203233ull,
0x3865336630202c38ull,0x20203b3030303030ull,0x322e30202f2f0920ull,0x662e6c756d090a35ull,
0x3833662509203233ull,0x3930346625202c39ull,0x3b3833356625202cull,0x2e090a202f2f0920ull,
0x3109303209636f6cull,0x6d090a3009323532ull,0x09203233662e766full,0x30202c3933356625ull,
0x3030303038653366ull,0x2f2f092020203b30ull,0x6d090a35322e3020ull,0x09203233662e6c75ull,
0x25202c3139336625ull,0x6625202c35333566ull,0x2f2f09203b393335ull,0x5f325f744c240a20ull,
0x6f6c2e090a3a3638ull,0x3034320936310963ull,0x2e766964090a3009ull,0x3366250920323366ull,
0x38336625202c3639ull,0x3139336625202c39ull,0x090a202f2f09203bull,0x203233662e64616dull,
0x202c303435662509ull,0x25202c3639336625ull,0x6625202c35313466ull,0x202f2f093b303131ull,
0x6168732e7473090aull,0x203233662e646572ull,0x332b396472255b09ull,0x6625202c5d363534ull,
0x202f2f093b303435ull,0x20323130343a6469ull,0x765f616475635f5full,0x347473696c747265ull,
0x0a3078302b323138ull,0x3233662e64616d09ull,0x2c31343566250920ull,0x202c363933662520ull,
0x25202c3939336625ull,0x202f2f093b353166ull,0x6168732e7473090aull,0x203233662e646572ull,
0x332b396472255b09ull,0x6625202c5d303634ull,0x202f2f093b313435ull,0x20333130343a6469ull,
0x765f616475635f5full,0x347473696c747265ull,0x0a3078302b323138ull,0x3233662e64616d09ull,
0x2c32343566250920ull,0x202c363933662520ull,0x25202c3732356625ull,0x202f2f093b333166ull,
0x6168732e7473090aull,0x203233662e646572ull,0x332b396472255b09ull,0x6625202c5d343634ull,
0x202f2f093b323435ull,0x20343130343a6469ull,0x765f616475635f5full,0x347473696c747265ull,
0x0a3078302b323138ull,0x363109636f6c2e09ull,0x090a300931343209ull,0x203233662e627573ull,
0x202c333435662509ull,0x25202c3932336625ull,0x2f09203b33363166ull,0x2e64616d090a202full,
0x3566250920323366ull,0x39336625202c3434ull,0x3334356625202c36ull,0x3b3336316625202cull,
0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,0x363534332b303164ull,
0x3434356625202c5dull,0x3a6469202f2f093bull,0x635f5f2035313034ull,0x6d726f6e5f616475ull,
0x2b3430327473696cull,0x6f6c2e090a307830ull,0x3234320936310963ull,0x2e627573090a3009ull,
0x3566250920323366ull,0x33336625202c3534ull,0x3436316625202c30ull,0x090a202f2f09203bull,
0x203233662e64616dull,0x202c363435662509ull,0x25202c3639336625ull,0x6625202c35343566ull,
0x202f2f093b343631ull,0x6168732e7473090aull,0x203233662e646572ull,0x2b30316472255b09ull,
0x25202c5d30363433ull,0x2f2f093b36343566ull,0x363130343a646920ull,0x5f616475635f5f20ull,
0x7473696c6d726f6eull,0x0a3078302b343032ull,0x363109636f6c2e09ull,0x090a300933343209ull,
0x203233662e627573ull,0x202c373435662509ull,0x25202c3133336625ull,0x2f09203b35363166ull,
0x2e64616d090a202full,0x3566250920323366ull,0x39336625202c3834ull,0x3734356625202c36ull,
0x3b3536316625202cull,0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,
0x343634332b303164ull,0x3834356625202c5dull,0x3a6469202f2f093bull,0x635f5f2037313034ull,
0x6d726f6e5f616475ull,0x2b3430327473696cull,0x6f6c2e090a307830ull,0x3233310930320963ull,
0x766f6d090a300938ull,0x662509203233662eull,0x346625202c393833ull,0x20202020203b3632ull,
0x0a202f2f09202020ull,0x3233662e62757309ull,0x2c39343566250920ull,0x202c393333662520ull,
0x09203b3438316625ull,0x766f6d090a202f2full,0x662509203233662eull,0x356625202c313933ull,
0x20202020203b3934ull,0x0a202f2f09202020ull,0x303209636f6c2e09ull,0x0a30093035323109ull,
0x3233662e73626109ull,0x2c30353566250920ull,0x203b393435662520ull,0x0920202020202020ull,
0x766f6d090a202f2full,0x662509203233662eull,0x376630202c313535ull,0x3b30303030303865ull,
0x38202f2f09202020ull,0x2b6536303730352eull,0x70746573090a3733ull,0x203233662e74672eull,
0x25202c3931702509ull,0x6625202c30353566ull,0x202f2f093b313535ull,0x393170252140090aull,
0x4c24092061726220ull,0x203b38385f325f74ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,
0x323109303209636full,0x6f6d090a30093135ull,0x2509203233662e76ull,0x6630202c32353566ull,
0x3030303030386533ull,0x202f2f092020203bull,0x756d090a35322e30ull,0x2509203233662e6cull,
0x6625202c39383366ull,0x356625202c363234ull,0x202f2f09203b3235ull,0x3209636f6c2e090aull,
0x3009323532310930ull,0x33662e766f6d090aull,0x3335356625092032ull,0x303865336630202cull,
0x2020203b30303030ull,0x35322e30202f2f09ull,0x33662e6c756d090aull,0x3139336625092032ull,
0x2c3934356625202cull,0x203b333535662520ull,0x744c240a202f2f09ull,0x090a3a38385f325full,
0x09363109636f6c2eull,0x64090a3009303432ull,0x09203233662e7669ull,0x25202c3639336625ull,
0x6625202c39383366ull,0x2f2f09203b313933ull,0x662e64616d090a20ull,0x3535662509203233ull,
0x3639336625202c34ull,0x2c3531346625202cull,0x093b303131662520ull,0x2e7473090a202f2full,
0x662e646572616873ull,0x6472255b09203233ull,0x2c5d303438332b39ull,0x093b343535662520ull,
0x30343a6469202f2full,0x6475635f5f203831ull,0x696c747265765f61ull,0x302b323138347473ull,
0x2e64616d090a3078ull,0x3566250920323366ull,0x39336625202c3535ull,0x3433346625202c36ull,
0x3b3636316625202cull,0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,
0x5d343438332b3964ull,0x3b3535356625202cull,0x343a6469202f2f09ull,0x75635f5f20393130ull,
0x6c747265765f6164ull,0x2b32313834747369ull,0x64616d090a307830ull,0x662509203233662eull,
0x336625202c363535ull,0x32356625202c3639ull,0x3b33316625202c37ull,0x7473090a202f2f09ull,
0x2e6465726168732eull,0x72255b0920323366ull,0x5d383438332b3964ull,0x3b3635356625202cull,
0x343a6469202f2f09ull,0x75635f5f20303230ull,0x6c747265765f6164ull,0x2b32313834747369ull,
0x6f6c2e090a307830ull,0x3134320936310963ull,0x2e627573090a3009ull,0x3566250920323366ull,
0x35336625202c3735ull,0x3731326625202c38ull,0x090a202f2f09203bull,0x203233662e64616dull,
0x202c383535662509ull,0x25202c3639336625ull,0x6625202c37353566ull,0x202f2f093b373132ull,
0x6168732e7473090aull,0x203233662e646572ull,0x2b30316472255b09ull,0x25202c5d30343833ull,
0x2f2f093b38353566ull,0x313230343a646920ull,0x5f616475635f5f20ull,0x7473696c6d726f6eull,
0x0a3078302b343032ull,0x363109636f6c2e09ull,0x090a300932343209ull,0x203233662e627573ull,
0x202c393535662509ull,0x25202c3935336625ull,0x2f09203b38313266ull,0x2e64616d090a202full,
0x3566250920323366ull,0x39336625202c3036ull,0x3935356625202c36ull,0x3b3831326625202cull,
0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,0x343438332b303164ull,
0x3036356625202c5dull,0x3a6469202f2f093bull,0x635f5f2032323034ull,0x6d726f6e5f616475ull,
0x2b3430327473696cull,0x6f6c2e090a307830ull,0x3334320936310963ull,0x2e627573090a3009ull,
0x3566250920323366ull,0x36336625202c3136ull,0x3931326625202c30ull,0x090a202f2f09203bull,
0x203233662e64616dull,0x202c323635662509ull,0x25202c3639336625ull,0x6625202c31363566ull,
0x202f2f093b393132ull,0x6168732e7473090aull,0x203233662e646572ull,0x2b30316472255b09ull,
0x25202c5d38343833ull,0x2f2f093b32363566ull,0x333230343a646920ull,0x5f616475635f5f20ull,
0x7473696c6d726f6eull,0x0a3078302b343032ull,0x303209636f6c2e09ull,0x0a30093832333109ull,
0x3233662e766f6d09ull,0x2c39383366250920ull,0x203b333434662520ull,0x0920202020202020ull,
0x627573090a202f2full,0x662509203233662eull,0x336625202c333635ull,0x32326625202c3836ull,
0x0a202f2f09203b39ull,0x3233662e766f6d09ull,0x2c31393366250920ull,0x203b333635662520ull,
0x0920202020202020ull,0x6f6c2e090a202f2full,0x3532310930320963ull,0x736261090a300930ull,
0x662509203233662eull,0x356625202c343635ull,0x20202020203b3336ull,0x0a202f2f09202020ull,
0x3233662e766f6d09ull,0x2c35363566250920ull,0x3030386537663020ull,0x092020203b303030ull,
0x3730352e38202f2full,0x090a37332b653630ull,0x2e74672e70746573ull,0x3270250920323366ull,
0x3436356625202c30ull,0x3b3536356625202cull,0x2140090a202f2f09ull,0x6172622030327025ull,
0x5f325f744c240920ull,0x20202020203b3039ull,0x202f2f0920202020ull,0x3209636f6c2e090aull,
0x3009313532310930ull,0x33662e766f6d090aull,0x3636356625092032ull,0x303865336630202cull,
0x2020203b30303030ull,0x35322e30202f2f09ull,0x33662e6c756d090aull,0x3938336625092032ull,
0x2c3334346625202cull,0x203b363635662520ull,0x6c2e090a202f2f09ull,0x323109303209636full,
0x6f6d090a30093235ull,0x2509203233662e76ull,0x6630202c37363566ull,0x3030303030386533ull,
0x202f2f092020203bull,0x756d090a35322e30ull,0x2509203233662e6cull,0x6625202c31393366ull,
0x356625202c333635ull,0x202f2f09203b3736ull,0x395f325f744c240aull,0x636f6c2e090a3a30ull,
0x0930343209363109ull,0x662e766964090a30ull,0x3933662509203233ull,0x3938336625202c36ull,
0x3b3139336625202cull,0x6d090a202f2f0920ull,0x09203233662e6461ull,0x25202c3836356625ull,
0x6625202c36393366ull,0x316625202c393434ull,0x090a202f2f093b31ull,0x65726168732e7473ull,
0x5b09203233662e64ull,0x3232342b39647225ull,0x36356625202c5d34ull,0x6469202f2f093b38ull,
0x5f5f20343230343aull,0x7265765f61647563ull,0x3138347473696c74ull,0x6d090a3078302b32ull,
0x09203233662e6461ull,0x25202c3936356625ull,0x6625202c36393366ull,0x316625202c343334ull,
0x0a202f2f093b3636ull,0x726168732e747309ull,0x09203233662e6465ull,0x32342b396472255bull,
0x356625202c5d3832ull,0x69202f2f093b3936ull,0x5f20353230343a64ull,0x65765f616475635full,
0x38347473696c7472ull,0x090a3078302b3231ull,0x203233662e64616dull,0x202c303735662509ull,
0x25202c3639336625ull,0x6625202c37323566ull,0x0a202f2f093b3331ull,0x726168732e747309ull,
0x09203233662e6465ull,0x32342b396472255bull,0x356625202c5d3233ull,0x69202f2f093b3037ull,
0x5f20363230343a64ull,0x65765f616475635full,0x38347473696c7472ull,0x090a3078302b3231ull,
0x09363109636f6c2eull,0x73090a3009313432ull,0x09203233662e6275ull,0x25202c3137356625ull,
0x6625202c37393466ull,0x2f2f09203b323532ull,0x662e64616d090a20ull,0x3735662509203233ull,
0x3639336625202c32ull,0x2c3137356625202cull,0x093b323532662520ull,0x2e7473090a202f2full,
0x662e646572616873ull,0x6472255b09203233ull,0x5d343232342b3031ull,0x3b3237356625202cull,
0x343a6469202f2f09ull,0x75635f5f20373230ull,0x6c6d726f6e5f6164ull,0x302b343032747369ull,
0x636f6c2e090a3078ull,0x0932343209363109ull,0x662e627573090a30ull,0x3735662509203233ull,
0x3030356625202c33ull,0x3b3335326625202cull,0x6d090a202f2f0920ull,0x09203233662e6461ull,
0x25202c3437356625ull,0x6625202c36393366ull,0x326625202c333735ull,0x0a202f2f093b3335ull,
0x726168732e747309ull,0x09203233662e6465ull,0x342b30316472255bull,0x6625202c5d383232ull,
0x202f2f093b343735ull,0x20383230343a6469ull,0x6e5f616475635f5full,0x327473696c6d726full,
0x090a3078302b3430ull,0x09363109636f6c2eull,0x73090a3009333432ull,0x09203233662e6275ull,
0x25202c3537356625ull,0x6625202c33303566ull,0x2f2f09203b343532ull,0x662e64616d090a20ull,
0x3735662509203233ull,0x3639336625202c36ull,0x2c3537356625202cull,0x093b343532662520ull,
0x2e7473090a202f2full,0x662e646572616873ull,0x6472255b09203233ull,0x5d323332342b3031ull,
0x3b3637356625202cull,0x343a6469202f2f09ull,0x75635f5f20393230ull,0x6c6d726f6e5f6164ull,
0x302b343032747369ull,0x636f6c2e090a3078ull,0x0939323309363109ull,0x732e726162090a30ull,
0x203b300920636e79ull,0x2020202020202020ull,0x2020202020202020ull,0x61090a202f2f0920ull,
0x09203233752e6464ull,0x7225202c37337225ull,0x3b383231202c3633ull,0x2f2f092020202020ull,
0x2e70746573090a20ull,0x09203233662e746cull,0x6625202c31327025ull,0x336625202c383633ull,
0x0a202f2f093b3738ull,0x33752e706c657309ull,0x2c38337225092032ull,0x25202c3733722520ull,
0x327025202c363372ull,0x090a202f2f093b31ull,0x203233732e766f6dull,0x25202c3933722509ull,
0x202020203b383372ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3472250920323373ull,
0x2020203b30202c30ull,0x2020202020202020ull,0x090a202f2f092020ull,0x203233732e766f6dull,
0x30202c3134722509ull,0x202020202020203bull,0x2f09202020202020ull,0x2e766f6d090a202full,
0x3472250920323373ull,0x2020203b30202c32ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x762e64312e786574ull,0x33732e3233752e34ull,0x2c333472257b2032ull,0x3472252c34347225ull,
0x2c7d363472252c35ull,0x747265566d756e5bull,0x72257b2c78655473ull,0x2c303472252c3933ull,
0x3472252c31347225ull,0x6c2e090a3b5d7d32ull,0x353309363109636full,0x766f6d090a300932ull,
0x722509203233732eull,0x33347225202c3734ull,0x202020202020203bull,0x0a202f2f09202020ull,
0x3233752e766f6d09ull,0x202c383472250920ull,0x2020202020203b30ull,0x0920202020202020ull,
0x746573090a202f2full,0x3233752e71652e70ull,0x202c323270250920ull,0x7225202c37347225ull,
0x0a202f2f093b3834ull,0x6220323270254009ull,0x5f744c2409206172ull,0x2020203b32395f32ull,
0x0920202020202020ull,0x766f6d090a202f2full,0x722509203233732eull,0x37347225202c3934ull,
0x202020202020203bull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,0x3572250920323375ull,
0x2c38337225202c30ull,0x092020203b363120ull,0x2e646c090a202f2full,0x36752e6d61726170ull,
0x3131647225092034ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x6172656e65673731ull,
0x676e616972546574ull,0x6f6c66365073656cull,0x6a505f3053347461ull,0x746e6975355f3153ull,
0x365f32535f325333ull,0x6a663374616f6c66ull,0x7265566d756e5f6aull,0x656e6e6163537374ull,
0x69202f2f093b5d64ull,0x5f20313330343a64ull,0x726170616475635full,0x656737315a5f5f6dull,
0x725465746172656eull,0x5073656c676e6169ull,0x533474616f6c6636ull,0x355f31536a505f30ull,
0x5f325333746e6975ull,0x616f6c66365f3253ull,0x756e5f6a6a663374ull,0x635373747265566dull,
0x78302b64656e6e61ull,0x752e747663090a30ull,0x09203233752e3436ull,0x25202c3231647225ull,
0x202020203b333172ull,0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3331647225092034ull,
0x2c3231647225202cull,0x2f2f0920203b3420ull,0x752e646461090a20ull,0x3164722509203436ull,
0x3131647225202c34ull,0x3b3331647225202cull,0x6c090a202f2f0920ull,0x2e6d617261702e64ull,
0x3572250920323375ull,0x75635f5f5b202c31ull,0x5f5f6d7261706164ull,0x72656e656737315aull,
0x6e61697254657461ull,0x6c66365073656c67ull,0x505f30533474616full,0x6e6975355f31536aull,
0x5f32535f32533374ull,0x663374616f6c6636ull,0x655678616d5f6a6aull,0x2f2f093b5d737472ull,
0x383339333a646920ull,0x70616475635f5f20ull,0x37315a5f5f6d7261ull,0x65746172656e6567ull,
0x656c676e61697254ull,0x74616f6c66365073ull,0x31536a505f305334ull,0x5333746e6975355full,
0x6c66365f32535f32ull,0x5f6a6a663374616full,0x737472655678616dull,0x6f6d090a3078302bull,
0x2509203233732e76ull,0x203b30202c323572ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x33732e766f6d090aull,0x2c33357225092032ull,0x20203b3934722520ull,0x2020202020202020ull,
0x744c240a202f2f09ull,0x200a3a34395f325full,0x3e706f6f6c3c2f2full,0x6f6220706f6f4c20ull,
0x20656e696c207964ull,0x73656e202c323533ull,0x70656420676e6974ull,0x65202c31203a6874ull,
0x646574616d697473ull,0x6974617265746920ull,0x6b6e75203a736e6full,0x6461090a6e776f6eull,
0x2509203233732e64ull,0x357225202c343572ull,0x3b30357225202c32ull,0x202f2f0920202020ull,
0x33732e766f6d090aull,0x2c35357225092032ull,0x20202020203b3020ull,0x2020202020202020ull,
0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x203b30202c363572ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x33732e766f6d090aull,0x2c37357225092032ull,0x20202020203b3020ull,
0x2020202020202020ull,0x6574090a202f2f09ull,0x2e34762e64312e78ull,0x203233732e323375ull,
0x72252c383572257bull,0x2c303672252c3935ull,0x745b2c7d31367225ull,0x257b2c7865546972ull,
0x353572252c343572ull,0x72252c363572252cull,0x2e090a3b5d7d3735ull,0x3309363109636f6cull,
0x6f6d090a30093435ull,0x2509203233732e76ull,0x357225202c323672ull,0x2020202020203b38ull,
0x202f2f0920202020ull,0x3109636f6c2e090aull,0x0a30093635330936ull,0x626f6c672e646c09ull,
0x09203233752e6c61ull,0x255b202c33367225ull,0x3b5d302b34316472ull,0x343a6469202f2f09ull,
0x646461090a323330ull,0x722509203233752eull,0x32357225202c3436ull,0x203b33367225202cull,
0x0a202f2f09202020ull,0x65672e7074657309ull,0x702509203233752eull,0x34367225202c3332ull,
0x093b31357225202cull,0x702540090a202f2full,0x0920617262203332ull,0x35395f325f744c24ull,
0x202020202020203bull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c32353320ull,0x6c6562616c206461ull,
0x325f744c24206465ull,0x6f6c2e090a34395full,0x3935330936310963ull,0x2e6c756d090a3009ull,
0x09203233752e6f6cull,0x7225202c35367225ull,0x203b3233202c3236ull,0x090a202f2f092020ull,
0x203233752e646461ull,0x25202c3636722509ull,0x317225202c353672ull,0x2f09202020203b30ull,
0x2e747663090a202full,0x203233752e343675ull,0x202c353164722509ull,0x2020203b36367225ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3164722509203436ull,0x3531647225202c36ull,
0x2f09203b3231202cull,0x2e646461090a202full,0x6472250920343675ull,0x31647225202c3731ull,
0x3b36647225202c36ull,0x090a202f2f092020ull,0x65726168732e646cull,0x2509203233662e64ull,
0x255b202c37373566ull,0x3b5d342b37316472ull,0x343a6469202f2f09ull,0x75635f5f20333330ull,
0x6c747265765f6164ull,0x2b32313834747369ull,0x2e646c090a307830ull,0x662e646572616873ull,
0x3735662509203233ull,0x316472255b202c38ull,0x2f2f093b5d382b37ull,0x343330343a646920ull,
0x5f616475635f5f20ull,0x7473696c74726576ull,0x3078302b32313834ull,0x36752e747663090aull,
0x2509203233752e34ull,0x7225202c38316472ull,0x20202020203b3436ull,0x756d090a202f2f09ull,
0x3436752e6f6c2e6cull,0x2c39316472250920ull,0x202c383164722520ull,0x202f2f09203b3631ull,
0x7261702e646c090aull,0x09203436752e6d61ull,0x5b202c3032647225ull,0x6170616475635f5full,
0x6737315a5f5f6d72ull,0x5465746172656e65ull,0x73656c676e616972ull,0x3474616f6c663650ull,
0x5f31536a505f3053ull,0x325333746e697535ull,0x6f6c66365f32535full,0x705f6a6a66337461ull,
0x202f2f093b5d736full,0x20353330343a6469ull,0x6170616475635f5full,0x6737315a5f5f6d72ull,
0x5465746172656e65ull,0x73656c676e616972ull,0x3474616f6c663650ull,0x5f31536a505f3053ull,
0x325333746e697535ull,0x6f6c66365f32535full,0x705f6a6a66337461ull,0x090a3078302b736full,
0x203436752e646461ull,0x202c313264722509ull,0x25202c3032647225ull,0x2f09203b39316472ull,
0x732e646c090a202full,0x33662e6465726168ull,0x3937356625092032ull,0x37316472255b202cull,
0x202f2f093b5d302bull,0x20363330343a6469ull,0x765f616475635f5full,0x347473696c747265ull,
0x0a3078302b323138ull,0x3233662e766f6d09ull,0x2c30383566250920ull,0x3030386633663020ull,
0x092020203b303030ull,0x7473090a31202f2full,0x2e6c61626f6c672eull,0x09203233662e3476ull,
0x302b31326472255bull,0x373566257b202c5dull,0x2c37373566252c39ull,0x66252c3837356625ull,
0x2f2f093b7d303835ull,0x09636f6c2e090a20ull,0x3009303633093631ull,0x36752e646461090aull,
0x3232647225092034ull,0x2c3631647225202cull,0x20203b3564722520ull,0x646c090a202f2f09ull,
0x2e6465726168732eull,0x3566250920323366ull,0x6472255b202c3138ull,0x2f093b5d342b3232ull,
0x3430343a6469202full,0x616475635f5f2031ull,0x73696c6d726f6e5full,0x3078302b34303274ull,
0x6168732e646c090aull,0x203233662e646572ull,0x202c323835662509ull,0x382b32326472255bull,
0x6469202f2f093b5dull,0x5f5f20323430343aull,0x726f6e5f61647563ull,0x3430327473696c6dull,
0x646c090a3078302bull,0x752e6d617261702eull,0x3264722509203436ull,0x75635f5f5b202c33ull,
0x5f5f6d7261706164ull,0x72656e656737315aull,0x6e61697254657461ull,0x6c66365073656c67ull,
0x505f30533474616full,0x6e6975355f31536aull,0x5f32535f32533374ull,0x663374616f6c6636ull,
0x5d6d726f6e5f6a6aull,0x3a6469202f2f093bull,0x635f5f2033343034ull,0x5f6d726170616475ull,
0x656e656737315a5full,0x6169725465746172ull,0x66365073656c676eull,0x5f30533474616f6cull,
0x6975355f31536a50ull,0x32535f325333746eull,0x3374616f6c66365full,0x6d726f6e5f6a6a66ull,
0x6461090a3078302bull,0x2509203436752e64ull,0x7225202c34326472ull,0x647225202c333264ull,
0x202f2f09203b3931ull,0x6168732e646c090aull,0x203233662e646572ull,0x202c333835662509ull,
0x302b32326472255bull,0x6469202f2f093b5dull,0x5f5f20343430343aull,0x726f6e5f61647563ull,
0x3430327473696c6dull,0x6f6d090a3078302bull,0x2509203233662e76ull,0x6630202c34383566ull,
0x3030303030303030ull,0x202f2f092020203bull,0x6c672e7473090a30ull,0x2e34762e6c61626full,
0x72255b0920323366ull,0x202c5d302b343264ull,0x252c33383566257bull,0x3566252c31383566ull,
0x34383566252c3238ull,0x240a202f2f093b7dull,0x3a35395f325f744cull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3235332065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x6461090a34395f32ull,0x2509203233732e64ull,
0x357225202c323572ull,0x2020203b31202c32ull,0x202f2f0920202020ull,0x6e2e70746573090aull,
0x2509203233752e65ull,0x357225202c343270ull,0x3b37347225202c32ull,0x2540090a202f2f09ull,
0x2061726220343270ull,0x395f325f744c2409ull,0x2020202020203b34ull,0x202f2f0920202020ull,
0x395f325f744c240aull,0x636f6c2e090a3a32ull,0x0937363309363109ull,0x3b74697865090a30ull,
0x2020202020202020ull,0x2020202020202020ull,0x2020202020202020ull,0x4c240a202f2f0920ull,
0x5a5f5f646e655744ull,0x6172656e65673731ull,0x676e616972546574ull,0x6f6c66365073656cull,
0x6a505f3053347461ull,0x746e6975355f3153ull,0x365f32535f325333ull,0x6a663374616f6c66ull,
0x2f2f207d090a3a6aull,0x6e656737315a5f20ull,0x6972546574617265ull,0x365073656c676e61ull,
0x30533474616f6c66ull,0x75355f31536a505full,0x535f325333746e69ull,0x74616f6c66365f32ull,
0x2e090a0a6a6a6633ull,0x5a5f207972746e65ull,0x6172656e65673831ull,0x676e616972546574ull,
0x6c6636503273656cull,0x505f30533474616full,0x753568505f31536aull,0x535f335333746e69ull,
0x74616f6c66365f33ull,0x0a7b090a6a6a6633ull,0x752e206765722e09ull,0x38313c7225203233ull,
0x65722e090a3b3e39ull,0x25203436752e2067ull,0x0a3b3e39323c6472ull,0x662e206765722e09ull,
0x37313c6625203233ull,0x65722e090a3b3e39ull,0x20646572702e2067ull,0x0a3b3e37323c7025ull,
0x206d617261702e09ull,0x635f5f203436752eull,0x5f6d726170616475ull,0x656e656738315a5full,
0x6169725465746172ull,0x36503273656c676eull,0x30533474616f6c66ull,0x68505f31536a505full,
0x335333746e697535ull,0x6f6c66365f33535full,0x705f6a6a66337461ull,0x61702e090a3b736full,
0x3436752e206d6172ull,0x70616475635f5f20ull,0x38315a5f5f6d7261ull,0x65746172656e6567ull,
0x656c676e61697254ull,0x616f6c6636503273ull,0x536a505f30533474ull,0x6e69753568505f31ull,
0x5f33535f33533374ull,0x663374616f6c6636ull,0x3b6d726f6e5f6a6aull,0x6d617261702e090aull,
0x5f5f203436752e20ull,0x6d72617061647563ull,0x6e656738315a5f5full,0x6972546574617265ull,
0x503273656c676e61ull,0x533474616f6c6636ull,0x505f31536a505f30ull,0x5333746e69753568ull,
0x6c66365f33535f33ull,0x5f6a6a663374616full,0x65746361706d6f63ull,0x72416c65786f5664ull,
0x702e090a3b796172ull,0x36752e206d617261ull,0x616475635f5f2034ull,0x315a5f5f6d726170ull,
0x746172656e656738ull,0x6c676e6169725465ull,0x6f6c663650327365ull,0x6a505f3053347461ull,
0x69753568505f3153ull,0x33535f335333746eull,0x3374616f6c66365full,0x566d756e5f6a6a66ull,
0x6e61635373747265ull,0x702e090a3b64656eull,0x36752e206d617261ull,0x616475635f5f2034ull,
0x315a5f5f6d726170ull,0x746172656e656738ull,0x6c676e6169725465ull,0x6f6c663650327365ull,
0x6a505f3053347461ull,0x69753568505f3153ull,0x33535f335333746eull,0x3374616f6c66365full,
0x756c6f765f6a6a66ull,0x61702e090a3b656dull,0x696c612e206d6172ull,0x38622e2034206e67ull,
0x70616475635f5f20ull,0x38315a5f5f6d7261ull,0x65746172656e6567ull,0x656c676e61697254ull,
0x616f6c6636503273ull,0x536a505f30533474ull,0x6e69753568505f31ull,0x5f33535f33533374ull,
0x663374616f6c6636ull,0x53646972675f6a6aull,0x3b5d32315b657a69ull,0x6d617261702e090aull,
0x206e67696c612e20ull,0x5f5f2038622e2034ull,0x6d72617061647563ull,0x6e656738315a5f5full,
0x6972546574617265ull,0x503273656c676e61ull,0x533474616f6c6636ull,0x505f31536a505f30ull,
0x5333746e69753568ull,0x6c66365f33535f33ull,0x5f6a6a663374616full,0x657a695364697267ull,
0x32315b7466696853ull,0x7261702e090a3b5dull,0x67696c612e206d61ull,0x2038622e2034206eull,
0x6170616475635f5full,0x6738315a5f5f6d72ull,0x5465746172656e65ull,0x73656c676e616972ull,
0x74616f6c66365032ull,0x31536a505f305334ull,0x746e69753568505full,0x365f33535f335333ull,
0x6a663374616f6c66ull,0x6953646972675f6aull,0x315b6b73614d657aull,0x61702e090a3b5d32ull,
0x696c612e206d6172ull,0x38622e2034206e67ull,0x70616475635f5f20ull,0x38315a5f5f6d7261ull,
0x65746172656e6567ull,0x656c676e61697254ull,0x616f6c6636503273ull,0x536a505f30533474ull,
0x6e69753568505f31ull,0x5f33535f33533374ull,0x663374616f6c6636ull,0x6c65786f765f6a6aull,
0x5d32315b657a6953ull,0x617261702e090a3bull,0x5f203233662e206dull,0x726170616475635full,
0x656738315a5f5f6dull,0x725465746172656eull,0x3273656c676e6169ull,0x3474616f6c663650ull,
0x5f31536a505f3053ull,0x33746e6975356850ull,0x66365f33535f3353ull,0x6a6a663374616f6cull,
0x756c61566f73695full,0x7261702e090a3b65ull,0x203233752e206d61ull,0x6170616475635f5full,
0x6738315a5f5f6d72ull,0x5465746172656e65ull,0x73656c676e616972ull,0x74616f6c66365032ull,
0x31536a505f305334ull,0x746e69753568505full,0x365f33535f335333ull,0x6a663374616f6c66ull,
0x6576697463615f6aull,0x0a3b736c65786f56ull,0x206d617261702e09ull,0x635f5f203233752eull,
0x5f6d726170616475ull,0x656e656738315a5full,0x6169725465746172ull,0x36503273656c676eull,
0x30533474616f6c66ull,0x68505f31536a505full,0x335333746e697535ull,0x6f6c66365f33535full,
0x6d5f6a6a66337461ull,0x3b73747265567861ull,0x65726168732e090aull,0x6e67696c612e2064ull,
0x5f2038622e203420ull,0x65765f616475635full,0x35397473696c7472ull,0x5d383036345b3432ull,
0x09636f6c2e090a3bull,0x3009393933093631ull,0x5f5f3142424c240aull,0x72656e656738315aull,
0x6e61697254657461ull,0x6636503273656c67ull,0x5f30533474616f6cull,0x3568505f31536a50ull,
0x5f335333746e6975ull,0x616f6c66365f3353ull,0x090a3a6a6a663374ull,0x09363109636f6c2eull,
0x63090a3009393034ull,0x752e3233732e7476ull,0x2c31722509203631ull,0x2e64696174632520ull,
0x2f2f092020203b79ull,0x732e747663090a20ull,0x09203631752e3233ull,0x636e25202c327225ull,
0x203b782e64696174ull,0x6d090a202f2f0920ull,0x2e6f6c2e34326c75ull,0x3372250920323373ull,
0x25202c317225202cull,0x2f2f0920203b3272ull,0x61702e646c090a20ull,0x203233752e6d6172ull,
0x5f5b202c34722509ull,0x726170616475635full,0x656738315a5f5f6dull,0x725465746172656eull,
0x3273656c676e6169ull,0x3474616f6c663650ull,0x5f31536a505f3053ull,0x33746e6975356850ull,
0x66365f33535f3353ull,0x6a6a663374616f6cull,0x566576697463615full,0x093b5d736c65786full,
0x34333a6469202f2full,0x6475635f5f203037ull,0x5a5f5f6d72617061ull,0x6172656e65673831ull,
0x676e616972546574ull,0x6c6636503273656cull,0x505f30533474616full,0x753568505f31536aull,
0x535f335333746e69ull,0x74616f6c66365f33ull,0x7463615f6a6a6633ull,0x6c65786f56657669ull,
0x73090a3078302b73ull,0x09203233752e6275ull,0x347225202c357225ull,0x202020203b31202cull,
0x2f2f092020202020ull,0x752e747663090a20ull,0x09203631752e3233ull,0x746325202c367225ull,
0x20203b782e646961ull,0x61090a202f2f0920ull,0x09203233752e6464ull,0x337225202c377225ull,
0x20203b367225202cull,0x2f2f092020202020ull,0x732e747663090a20ull,0x09203631752e3233ull,
0x746e25202c387225ull,0x2020203b782e6469ull,0x6d090a202f2f0920ull,0x2e6f6c2e34326c75ull,
0x3972250920323373ull,0x25202c377225202cull,0x2f2f0920203b3872ull,0x752e747663090a20ull,
0x09203631752e3233ull,0x7425202c30317225ull,0x2020203b782e6469ull,0x61090a202f2f0920ull,
0x09203233752e6464ull,0x7225202c31317225ull,0x3b30317225202c39ull,0x2f2f092020202020ull,
0x61702e646c090a20ull,0x203436752e6d6172ull,0x5b202c3164722509ull,0x6170616475635f5full,
0x6738315a5f5f6d72ull,0x5465746172656e65ull,0x73656c676e616972ull,0x74616f6c66365032ull,
0x31536a505f305334ull,0x746e69753568505full,0x365f33535f335333ull,0x6a663374616f6c66ull,
0x6361706d6f635f6aull,0x6c65786f56646574ull,0x093b5d7961727241ull,0x34333a6469202f2full,
0x6475635f5f203337ull,0x5a5f5f6d72617061ull,0x6172656e65673831ull,0x676e616972546574ull,
0x6c6636503273656cull,0x505f30533474616full,0x753568505f31536aull,0x535f335333746e69ull,
0x74616f6c66365f33ull,0x6d6f635f6a6a6633ull,0x6f56646574636170ull,0x79617272416c6578ull,
0x6573090a3078302bull,0x33752e746c2e7074ull,0x202c317025092032ull,0x317225202c357225ull,
0x202f2f0920203b31ull,0x752e706c6573090aull,0x3231722509203233ull,0x25202c357225202cull,
0x317025202c313172ull,0x63090a202f2f093bull,0x752e3436752e7476ull,0x3264722509203233ull,
0x203b32317225202cull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,
0x647225202c336472ull,0x2020203b34202c32ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x7225202c34647225ull,0x33647225202c3164ull,0x2f2f09202020203bull,0x6c672e646c090a20ull,
0x3233752e6c61626full,0x202c333172250920ull,0x5d302b346472255bull,0x3a6469202f2f093bull,
0x6c2e090a34373433ull,0x313109363109636full,0x2e646c090a300936ull,0x33752e6d61726170ull,
0x2c34317225092032ull,0x616475635f5f5b20ull,0x315a5f5f6d726170ull,0x746172656e656738ull,
0x6c676e6169725465ull,0x6f6c663650327365ull,0x6a505f3053347461ull,0x69753568505f3153ull,
0x33535f335333746eull,0x3374616f6c66365full,0x646972675f6a6a66ull,0x3b5d342b657a6953ull,
0x333a6469202f2f09ull,0x75635f5f20363634ull,0x5f5f6d7261706164ull,0x72656e656738315aull,
0x6e61697254657461ull,0x6636503273656c67ull,0x5f30533474616f6cull,0x3568505f31536a50ull,
0x5f335333746e6975ull,0x616f6c66365f3353ull,0x72675f6a6a663374ull,0x302b657a69536469ull,
0x2e627573090a3478ull,0x3172250920323375ull,0x2c34317225202c35ull,0x20202020203b3120ull,
0x090a202f2f092020ull,0x6d617261702e646cull,0x722509203233752eull,0x635f5f5b202c3631ull,
0x5f6d726170616475ull,0x656e656738315a5full,0x6169725465746172ull,0x36503273656c676eull,
0x30533474616f6c66ull,0x68505f31536a505full,0x335333746e697535ull,0x6f6c66365f33535full,
0x675f6a6a66337461ull,0x53657a6953646972ull,0x3b5d342b74666968ull,0x333a6469202f2f09ull,
0x75635f5f20353734ull,0x5f5f6d7261706164ull,0x72656e656738315aull,0x6e61697254657461ull,
0x6636503273656c67ull,0x5f30533474616f6cull,0x3568505f31536a50ull,0x5f335333746e6975ull,
0x616f6c66365f3353ull,0x72675f6a6a663374ull,0x6853657a69536469ull,0x0a3478302b746669ull,
0x3233752e72687309ull,0x202c373172250920ull,0x7225202c33317225ull,0x09202020203b3631ull,
0x2e646c090a202f2full,0x33752e6d61726170ull,0x2c38317225092032ull,0x616475635f5f5b20ull,
0x315a5f5f6d726170ull,0x746172656e656738ull,0x6c676e6169725465ull,0x6f6c663650327365ull,
0x6a505f3053347461ull,0x69753568505f3153ull,0x33535f335333746eull,0x3374616f6c66365full,
0x646972675f6a6a66ull,0x3b5d382b657a6953ull,0x333a6469202f2f09ull,0x75635f5f20363734ull,
0x5f5f6d7261706164ull,0x72656e656738315aull,0x6e61697254657461ull,0x6636503273656c67ull,
0x5f30533474616f6cull,0x3568505f31536a50ull,0x5f335333746e6975ull,0x616f6c66365f3353ull,
0x72675f6a6a663374ull,0x302b657a69536469ull,0x2e627573090a3878ull,0x3172250920323375ull,
0x2c38317225202c39ull,0x20202020203b3120ull,0x090a202f2f092020ull,0x6d617261702e646cull,
0x722509203233752eull,0x635f5f5b202c3032ull,0x5f6d726170616475ull,0x656e656738315a5full,
0x6169725465746172ull,0x36503273656c676eull,0x30533474616f6c66ull,0x68505f31536a505full,
0x335333746e697535ull,0x6f6c66365f33535full,0x675f6a6a66337461ull,0x53657a6953646972ull,
0x3b5d382b74666968ull,0x333a6469202f2f09ull,0x75635f5f20373734ull,0x5f5f6d7261706164ull,
0x72656e656738315aull,0x6e61697254657461ull,0x6636503273656c67ull,0x5f30533474616f6cull,
0x3568505f31536a50ull,0x5f335333746e6975ull,0x616f6c66365f3353ull,0x72675f6a6a663374ull,
0x6853657a69536469ull,0x0a3878302b746669ull,0x3233752e72687309ull,0x202c313272250920ull,
0x7225202c33317225ull,0x09202020203b3032ull,0x2e646c090a202f2full,0x33752e6d61726170ull,
0x2c32327225092032ull,0x616475635f5f5b20ull,0x315a5f5f6d726170ull,0x746172656e656738ull,
0x6c676e6169725465ull,0x6f6c663650327365ull,0x6a505f3053347461ull,0x69753568505f3153ull,
0x33535f335333746eull,0x3374616f6c66365full,0x646972675f6a6a66ull,0x3b5d302b657a6953ull,
0x333a6469202f2f09ull,0x75635f5f20353634ull,0x5f5f6d7261706164ull,0x72656e656738315aull,
0x6e61697254657461ull,0x6636503273656c67ull,0x5f30533474616f6cull,0x3568505f31536a50ull,
0x5f335333746e6975ull,0x616f6c66365f3353ull,0x72675f6a6a663374ull,0x302b657a69536469ull,
0x2e627573090a3078ull,0x3272250920323375ull,0x2c32327225202c33ull,0x20202020203b3120ull,
0x090a202f2f092020ull,0x6d617261702e646cull,0x722509203233752eull,0x635f5f5b202c3432ull,
0x5f6d726170616475ull,0x656e656738315a5full,0x6169725465746172ull,0x36503273656c676eull,
0x30533474616f6c66ull,0x68505f31536a505full,0x335333746e697535ull,0x6f6c66365f33535full,
0x675f6a6a66337461ull,0x4d657a6953646972ull,0x093b5d302b6b7361ull,0x34333a6469202f2full,
0x6475635f5f203837ull,0x5a5f5f6d72617061ull,0x6172656e65673831ull,0x676e616972546574ull,
0x6c6636503273656cull,0x505f30533474616full,0x753568505f31536aull,0x535f335333746e69ull,
0x74616f6c66365f33ull,0x6972675f6a6a6633ull,0x73614d657a695364ull,0x61090a3078302b6bull,
0x09203233622e646eull,0x7225202c35327225ull,0x33317225202c3432ull,0x2f2f09202020203bull,
0x61702e646c090a20ull,0x203233752e6d6172ull,0x5b202c3632722509ull,0x6170616475635f5full,
0x6738315a5f5f6d72ull,0x5465746172656e65ull,0x73656c676e616972ull,0x74616f6c66365032ull,
0x31536a505f305334ull,0x746e69753568505full,0x365f33535f335333ull,0x6a663374616f6c66ull,
0x6953646972675f6aull,0x342b6b73614d657aull,0x6469202f2f093b5dull,0x5f5f20393734333aull,
0x6d72617061647563ull,0x6e656738315a5f5full,0x6972546574617265ull,0x503273656c676e61ull,
0x533474616f6c6636ull,0x505f31536a505f30ull,0x5333746e69753568ull,0x6c66365f33535f33ull,
0x5f6a6a663374616full,0x657a695364697267ull,0x3478302b6b73614dull,0x33622e646e61090aull,
0x2c37327225092032ull,0x25202c3632722520ull,0x202020203b373172ull,0x646c090a202f2f09ull,
0x752e6d617261702eull,0x3832722509203233ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,
0x6172656e65673831ull,0x676e616972546574ull,0x6c6636503273656cull,0x505f30533474616full,
0x753568505f31536aull,0x535f335333746e69ull,0x74616f6c66365f33ull,0x6972675f6a6a6633ull,
0x73614d657a695364ull,0x2f2f093b5d382b6bull,0x303834333a646920ull,0x70616475635f5f20ull,
0x38315a5f5f6d7261ull,0x65746172656e6567ull,0x656c676e61697254ull,0x616f6c6636503273ull,
0x536a505f30533474ull,0x6e69753568505f31ull,0x5f33535f33533374ull,0x663374616f6c6636ull,
0x53646972675f6a6aull,0x2b6b73614d657a69ull,0x646e61090a387830ull,0x722509203233622eull,
0x38327225202c3932ull,0x203b31327225202cull,0x0a202f2f09202020ull,0x3233752e6e696d09ull,
0x202c303372250920ull,0x7225202c33327225ull,0x09202020203b3532ull,0x6e696d090a202f2full,
0x722509203233752eull,0x35317225202c3133ull,0x203b37327225202cull,0x0a202f2f09202020ull,
0x3233752e6e696d09ull,0x202c323372250920ull,0x7225202c39317225ull,0x09202020203b3932ull,
0x6c756d090a202f2full,0x203233752e6f6c2eull,0x25202c3333722509ull,0x327225202c313372ull,
0x0a202f2f09203b32ull,0x2e6f6c2e6c756d09ull,0x3372250920323375ull,0x2c32337225202c34ull,
0x09203b3232722520ull,0x6c756d090a202f2full,0x203233752e6f6c2eull,0x25202c3533722509ull,
0x317225202c343372ull,0x0a202f2f09203b34ull,0x3233752e64646109ull,0x202c363372250920ull,
0x7225202c33337225ull,0x09202020203b3533ull,0x646461090a202f2full,0x722509203233732eull,
0x30337225202c3733ull,0x203b36337225202cull,0x0a202f2f09202020ull,0x3233732e766f6d09ull,
0x202c383372250920ull,0x2020202020203b30ull,0x0920202020202020ull,0x766f6d090a202f2full,
0x722509203233732eull,0x20203b30202c3933ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x3233732e766f6d09ull,0x202c303472250920ull,0x2020202020203b30ull,0x0920202020202020ull,
0x786574090a202f2full,0x752e34762e64312eull,0x7b203233732e3233ull,0x3472252c31347225ull,
0x252c333472252c32ull,0x6f765b2c7d343472ull,0x2c786554656d756cull,0x72252c373372257bull,
0x2c393372252c3833ull,0x0a3b5d7d30347225ull,0x363109636f6c2e09ull,0x090a300939313109ull,
0x203233732e766f6dull,0x25202c3534722509ull,0x202020203b313472ull,0x2f09202020202020ull,
0x636f6c2e090a202full,0x0935333409363109ull,0x622e766f6d090a30ull,0x2c31662509203233ull,
0x20203b3534722520ull,0x2020202020202020ull,0x2e090a202f2f0920ull,0x3109363109636f6cull,
0x6461090a30093631ull,0x2509203233752e64ull,0x327225202c363472ull,0x2020203b31202c35ull,
0x202f2f0920202020ull,0x33752e6e696d090aull,0x2c37347225092032ull,0x25202c3332722520ull,
0x202020203b363472ull,0x6461090a202f2f09ull,0x2509203233732e64ull,0x347225202c383472ull,
0x3b36337225202c37ull,0x202f2f0920202020ull,0x33732e766f6d090aull,0x2c39347225092032ull,
0x20202020203b3020ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,
0x203b30202c303572ull,0x2020202020202020ull,0x202f2f0920202020ull,0x33732e766f6d090aull,
0x2c31357225092032ull,0x20202020203b3020ull,0x2020202020202020ull,0x6574090a202f2f09ull,
0x2e34762e64312e78ull,0x203233732e323375ull,0x72252c323572257bull,0x2c343572252c3335ull,
0x765b2c7d35357225ull,0x786554656d756c6full,0x252c383472257b2cull,0x303572252c393472ull,
0x3b5d7d313572252cull,0x3109636f6c2e090aull,0x0a30093931310936ull,0x3233732e766f6d09ull,
0x202c353472250920ull,0x2020203b32357225ull,0x0920202020202020ull,0x6f6c2e090a202f2full,
0x3633340936310963ull,0x2e766f6d090a3009ull,0x3266250920323362ull,0x203b35347225202cull,
0x2020202020202020ull,0x090a202f2f092020ull,0x09363109636f6c2eull,0x61090a3009363131ull,
0x09203233752e6464ull,0x7225202c36357225ull,0x20203b31202c3732ull,0x2f2f092020202020ull,
0x752e6e696d090a20ull,0x3735722509203233ull,0x202c35317225202cull,0x2020203b36357225ull,
0x6d090a202f2f0920ull,0x33752e6f6c2e6c75ull,0x2c38357225092032ull,0x25202c3735722520ull,
0x2f2f09203b323272ull,0x752e646461090a20ull,0x3935722509203233ull,0x202c38357225202cull,
0x2020203b35337225ull,0x61090a202f2f0920ull,0x09203233732e6464ull,0x7225202c30367225ull,
0x39357225202c3734ull,0x2f2f09202020203bull,0x732e766f6d090a20ull,0x3136722509203233ull,
0x202020203b30202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,0x09203233732e766full,
0x3b30202c32367225ull,0x2020202020202020ull,0x2f2f092020202020ull,0x732e766f6d090a20ull,
0x3336722509203233ull,0x202020203b30202cull,0x2020202020202020ull,0x74090a202f2f0920ull,
0x34762e64312e7865ull,0x3233732e3233752eull,0x252c343672257b20ull,0x363672252c353672ull,
0x5b2c7d373672252cull,0x6554656d756c6f76ull,0x2c303672257b2c78ull,0x3672252c31367225ull,
0x5d7d333672252c32ull,0x09636f6c2e090a3bull,0x3009393131093631ull,0x33732e766f6d090aull,
0x2c35347225092032ull,0x20203b3436722520ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,
0x333409363109636full,0x766f6d090a300937ull,0x662509203233622eull,0x3b35347225202c33ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x363109636f6c2e09ull,0x090a300936313109ull,
0x203233732e646461ull,0x25202c3836722509ull,0x357225202c303372ull,0x2f09202020203b39ull,
0x2e766f6d090a202full,0x3672250920323373ull,0x2020203b30202c39ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x203233732e766f6dull,0x30202c3037722509ull,0x202020202020203bull,
0x2f09202020202020ull,0x2e766f6d090a202full,0x3772250920323373ull,0x2020203b30202c31ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x762e64312e786574ull,0x33732e3233752e34ull,
0x2c323772257b2032ull,0x3772252c33377225ull,0x2c7d353772252c34ull,0x54656d756c6f765bull,
0x383672257b2c7865ull,0x72252c393672252cull,0x7d313772252c3037ull,0x636f6c2e090a3b5dull,
0x0939313109363109ull,0x732e766f6d090a30ull,0x3534722509203233ull,0x203b32377225202cull,
0x2020202020202020ull,0x2e090a202f2f0920ull,0x3409363109636f6cull,0x6f6d090a30093833ull,
0x2509203233622e76ull,0x35347225202c3466ull,0x202020202020203bull,0x202f2f0920202020ull,
0x3109636f6c2e090aull,0x0a30093631310936ull,0x3233752e64646109ull,0x202c363772250920ull,
0x3b31202c39327225ull,0x0920202020202020ull,0x6e696d090a202f2full,0x722509203233752eull,
0x39317225202c3737ull,0x203b36377225202cull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,
0x3772250920323375ull,0x2c37377225202c38ull,0x09203b3232722520ull,0x6c756d090a202f2full,
0x203233752e6f6c2eull,0x25202c3937722509ull,0x317225202c383772ull,0x0a202f2f09203b34ull,
0x3233752e64646109ull,0x202c303872250920ull,0x7225202c33337225ull,0x09202020203b3937ull,
0x646461090a202f2full,0x722509203233732eull,0x30337225202c3138ull,0x203b30387225202cull,
0x0a202f2f09202020ull,0x3233732e766f6d09ull,0x202c323872250920ull,0x2020202020203b30ull,
0x0920202020202020ull,0x766f6d090a202f2full,0x722509203233732eull,0x20203b30202c3338ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x3233732e766f6d09ull,0x202c343872250920ull,
0x2020202020203b30ull,0x0920202020202020ull,0x786574090a202f2full,0x752e34762e64312eull,
0x7b203233732e3233ull,0x3872252c35387225ull,0x252c373872252c36ull,0x6f765b2c7d383872ull,
0x2c786554656d756cull,0x72252c313872257bull,0x2c333872252c3238ull,0x0a3b5d7d34387225ull,
0x363109636f6c2e09ull,0x090a300939313109ull,0x203233732e766f6dull,0x25202c3534722509ull,
0x202020203b353872ull,0x2f09202020202020ull,0x636f6c2e090a202full,0x0939333409363109ull,
0x622e766f6d090a30ull,0x2c35662509203233ull,0x20203b3534722520ull,0x2020202020202020ull,
0x2e090a202f2f0920ull,0x3109363109636f6cull,0x6461090a30093631ull,0x2509203233732e64ull,
0x347225202c393872ull,0x3b30387225202c37ull,0x202f2f0920202020ull,0x33732e766f6d090aull,
0x2c30397225092032ull,0x20202020203b3020ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,
0x2509203233732e76ull,0x203b30202c313972ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x33732e766f6d090aull,0x2c32397225092032ull,0x20202020203b3020ull,0x2020202020202020ull,
0x6574090a202f2f09ull,0x2e34762e64312e78ull,0x203233732e323375ull,0x72252c333972257bull,
0x2c353972252c3439ull,0x765b2c7d36397225ull,0x786554656d756c6full,0x252c393872257b2cull,
0x313972252c303972ull,0x3b5d7d323972252cull,0x3109636f6c2e090aull,0x0a30093931310936ull,
0x3233732e766f6d09ull,0x202c353472250920ull,0x2020203b33397225ull,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x3034340936310963ull,0x2e766f6d090a3009ull,0x3666250920323362ull,
0x203b35347225202cull,0x2020202020202020ull,0x090a202f2f092020ull,0x09363109636f6c2eull,
0x61090a3009363131ull,0x09203233752e6464ull,0x7225202c37397225ull,0x39377225202c3835ull,
0x2f2f09202020203bull,0x732e646461090a20ull,0x3839722509203233ull,0x202c37347225202cull,
0x2020203b37397225ull,0x6d090a202f2f0920ull,0x09203233732e766full,0x3b30202c39397225ull,
0x2020202020202020ull,0x2f2f092020202020ull,0x732e766f6d090a20ull,0x3031722509203233ull,
0x2020203b30202c30ull,0x2020202020202020ull,0x6d090a202f2f0920ull,0x09203233732e766full,
0x30202c3130317225ull,0x202020202020203bull,0x2f2f092020202020ull,0x312e786574090a20ull,
0x3233752e34762e64ull,0x72257b203233732eull,0x303172252c323031ull,0x2c34303172252c33ull,
0x5b2c7d3530317225ull,0x6554656d756c6f76ull,0x2c383972257b2c78ull,0x3172252c39397225ull,
0x31303172252c3030ull,0x6f6c2e090a3b5d7dull,0x3931310936310963ull,0x2e766f6d090a3009ull,
0x3472250920323373ull,0x3230317225202c35ull,0x202020202020203bull,0x090a202f2f092020ull,
0x09363109636f6c2eull,0x6d090a3009313434ull,0x09203233622e766full,0x347225202c376625ull,
0x2020202020203b35ull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x3009363131093631ull,
0x33732e646461090aull,0x3630317225092032ull,0x202c30337225202cull,0x2020203b37397225ull,
0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x3b30202c37303172ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x33732e766f6d090aull,0x3830317225092032ull,0x202020203b30202cull,
0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x3b30202c39303172ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x64312e786574090aull,0x2e3233752e34762eull,
0x3172257b20323373ull,0x31313172252c3031ull,0x252c32313172252cull,0x765b2c7d33313172ull,
0x786554656d756c6full,0x2c36303172257b2cull,0x72252c3730317225ull,0x303172252c383031ull,
0x6c2e090a3b5d7d39ull,0x313109363109636full,0x766f6d090a300939ull,0x722509203233732eull,
0x31317225202c3534ull,0x2020202020203b30ull,0x0a202f2f09202020ull,0x363109636f6c2e09ull,
0x090a300933363409ull,0x6d617261702e646cull,0x662509203233662eull,0x75635f5f5b202c38ull,
0x5f5f6d7261706164ull,0x72656e656738315aull,0x6e61697254657461ull,0x6636503273656c67ull,
0x5f30533474616f6cull,0x3568505f31536a50ull,0x5f335333746e6975ull,0x616f6c66365f3353ull,
0x73695f6a6a663374ull,0x3b5d65756c61566full,0x333a6469202f2f09ull,0x75635f5f20333634ull,
0x5f5f6d7261706164ull,0x72656e656738315aull,0x6e61697254657461ull,0x6636503273656c67ull,
0x5f30533474616f6cull,0x3568505f31536a50ull,0x5f335333746e6975ull,0x616f6c66365f3353ull,
0x73695f6a6a663374ull,0x302b65756c61566full,0x70746573090a3078ull,0x203233662e746c2eull,
0x6625202c32702509ull,0x203b386625202c36ull,0x090a202f2f092020ull,0x2e746c2e70746573ull,
0x3370250920323366ull,0x25202c356625202cull,0x2f092020203b3866ull,0x70746573090a202full,
0x203233662e746c2eull,0x6625202c34702509ull,0x203b386625202c34ull,0x090a202f2f092020ull,
0x2e746c2e70746573ull,0x3570250920323366ull,0x25202c336625202cull,0x2f092020203b3866ull,
0x70746573090a202full,0x203233662e746c2eull,0x6625202c36702509ull,0x203b386625202c32ull,
0x090a202f2f092020ull,0x2e746c2e70746573ull,0x3770250920323366ull,0x25202c316625202cull,
0x2f092020203b3866ull,0x706c6573090a202full,0x722509203233732eull,0x202c31202c343131ull,
0x203b377025202c30ull,0x090a202f2f092020ull,0x203233752e646461ull,0x202c353131722509ull,
0x32202c3431317225ull,0x2f0920202020203bull,0x706c6573090a202full,0x722509203233752eull,
0x317225202c363131ull,0x31317225202c3531ull,0x093b367025202c34ull,0x646461090a202f2full,
0x722509203233752eull,0x317225202c373131ull,0x20203b34202c3631ull,0x0a202f2f09202020ull,
0x33752e706c657309ull,0x3831317225092032ull,0x2c3731317225202cull,0x202c363131722520ull,
0x202f2f093b357025ull,0x33752e646461090aull,0x3931317225092032ull,0x2c3831317225202cull,
0x20202020203b3820ull,0x6573090a202f2f09ull,0x09203233752e706cull,0x25202c3032317225ull,
0x7225202c39313172ull,0x347025202c383131ull,0x61090a202f2f093bull,0x09203233752e6464ull,
0x25202c3132317225ull,0x3631202c30323172ull,0x2f2f09202020203bull,0x2e706c6573090a20ull,
0x3172250920323375ull,0x32317225202c3232ull,0x3032317225202c31ull,0x2f093b337025202cull,
0x2e646461090a202full,0x3172250920323375ull,0x32317225202c3332ull,0x20203b3233202c32ull,
0x090a202f2f092020ull,0x3233752e706c6573ull,0x2c34323172250920ull,0x202c333231722520ull,
0x25202c3232317225ull,0x0a202f2f093b3270ull,0x3233752e64646109ull,0x2c35323172250920ull,
0x202c343231722520ull,0x09202020203b3436ull,0x746573090a202f2full,0x3233662e746c2e70ull,
0x25202c3870250920ull,0x3b386625202c3766ull,0x0a202f2f09202020ull,0x33752e706c657309ull,
0x3632317225092032ull,0x2c3532317225202cull,0x202c343231722520ull,0x202f2f093b387025ull,
0x3209636f6c2e090aull,0x3009383233310930ull,0x33662e627573090aull,0x202c396625092032ull,
0x316625202c386625ull,0x202020202020203bull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,
0x396625202c303166ull,0x202020202020203bull,0x202f2f0920202020ull,0x33662e627573090aull,
0x2c31316625092032ull,0x6625202c32662520ull,0x2020202020203b31ull,0x6f6d090a202f2f09ull,
0x2509203233662e76ull,0x316625202c323166ull,0x2020202020203b31ull,0x202f2f0920202020ull,
0x3209636f6c2e090aull,0x3009303532310930ull,0x33662e736261090aull,0x2c33316625092032ull,
0x20203b3131662520ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,
0x376630202c343166ull,0x3b30303030303865ull,0x202f2f0920202020ull,0x6536303730352e38ull,
0x746573090a37332bull,0x3233662e74672e70ull,0x25202c3970250920ull,0x316625202c333166ull,
0x0a202f2f09203b34ull,0x6220397025214009ull,0x5f744c2409206172ull,0x2020203b38365f33ull,
0x0920202020202020ull,0x6f6c2e090a202f2full,0x3532310930320963ull,0x766f6d090a300931ull,
0x662509203233662eull,0x65336630202c3531ull,0x203b303030303038ull,0x30202f2f09202020ull,
0x6c756d090a35322eull,0x662509203233662eull,0x2c396625202c3031ull,0x20203b3531662520ull,
0x0a202f2f09202020ull,0x303209636f6c2e09ull,0x0a30093235323109ull,0x3233662e766f6d09ull,
0x202c363166250920ull,0x3030303865336630ull,0x09202020203b3030ull,0x0a35322e30202f2full,
0x3233662e6c756d09ull,0x202c323166250920ull,0x6625202c31316625ull,0x09202020203b3631ull,
0x5f744c240a202f2full,0x2e090a3a38365f33ull,0x3409363109636f6cull,0x6f6d090a30093337ull,
0x2509203436752e76ull,0x635f5f202c356472ull,0x747265765f616475ull,0x343235397473696cull,
0x64090a202f2f093bull,0x09203233662e7669ull,0x6625202c37316625ull,0x32316625202c3031ull,
0x2f2f09202020203bull,0x722e747663090a20ull,0x33752e3233662e6eull,0x2c38316625092032ull,
0x20203b3532722520ull,0x6c090a202f2f0920ull,0x2e6d617261702e64ull,0x3166250920323366ull,
0x75635f5f5b202c39ull,0x5f5f6d7261706164ull,0x72656e656738315aull,0x6e61697254657461ull,
0x6636503273656c67ull,0x5f30533474616f6cull,0x3568505f31536a50ull,0x5f335333746e6975ull,
0x616f6c66365f3353ull,0x6f765f6a6a663374ull,0x2b657a69536c6578ull,0x69202f2f093b5d30ull,
0x5f20323634333a64ull,0x726170616475635full,0x656738315a5f5f6dull,0x725465746172656eull,
0x3273656c676e6169ull,0x3474616f6c663650ull,0x5f31536a505f3053ull,0x33746e6975356850ull,
0x66365f33535f3353ull,0x6a6a663374616f6cull,0x69536c65786f765full,0x090a3078302b657aull,
0x203233662e6c756dull,0x25202c3032662509ull,0x316625202c383166ull,0x2f09202020203b39ull,
0x2e747663090a202full,0x203233752e343675ull,0x25202c3664722509ull,0x202020203b303172ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3764722509203436ull,0x202c36647225202cull,
0x2f092020203b3231ull,0x2e646461090a202full,0x6472250920343675ull,0x2c35647225202c38ull,
0x20203b3764722520ull,0x090a202f2f092020ull,0x203233662e766f6dull,0x30202c3132662509ull,
0x3030303038666266ull,0x2f09202020203b30ull,0x6461090a312d202full,0x2509203233662e64ull,
0x326625202c323266ull,0x3b31326625202c30ull,0x202f2f0920202020ull,0x33662e646461090aull,
0x2c33326625092032ull,0x25202c3232662520ull,0x202020203b393166ull,0x7573090a202f2f09ull,
0x2509203233662e62ull,0x326625202c343266ull,0x3b32326625202c33ull,0x202f2f0920202020ull,
0x33662e64616d090aull,0x2c35326625092032ull,0x25202c3731662520ull,0x326625202c343266ull,
0x090a202f2f093b32ull,0x65726168732e7473ull,0x5b09203233662e64ull,0x2c5d302b38647225ull,
0x2f093b3532662520ull,0x3834333a6469202full,0x616475635f5f2031ull,0x73696c747265765full,
0x78302b3432353974ull,0x722e747663090a30ull,0x33752e3233662e6eull,0x2c36326625092032ull,
0x20203b3732722520ull,0x6c090a202f2f0920ull,0x2e6d617261702e64ull,0x3266250920323366ull,
0x75635f5f5b202c37ull,0x5f5f6d7261706164ull,0x72656e656738315aull,0x6e61697254657461ull,
0x6636503273656c67ull,0x5f30533474616f6cull,0x3568505f31536a50ull,0x5f335333746e6975ull,
0x616f6c66365f3353ull,0x6f765f6a6a663374ull,0x2b657a69536c6578ull,0x69202f2f093b5d34ull,
0x5f20313634333a64ull,0x726170616475635full,0x656738315a5f5f6dull,0x725465746172656eull,
0x3273656c676e6169ull,0x3474616f6c663650ull,0x5f31536a505f3053ull,0x33746e6975356850ull,
0x66365f33535f3353ull,0x6a6a663374616f6cull,0x69536c65786f765full,0x090a3478302b657aull,
0x203233662e6c756dull,0x25202c3832662509ull,0x326625202c363266ull,0x2f09202020203b37ull,
0x2e766f6d090a202full,0x3266250920323366ull,0x3866626630202c39ull,0x20203b3030303030ull,
0x312d202f2f092020ull,0x33662e646461090aull,0x2c30336625092032ull,0x25202c3832662520ull,
0x202020203b393266ull,0x7573090a202f2f09ull,0x2509203233662e62ull,0x336625202c313366ull,
0x3b30336625202c30ull,0x202f2f0920202020ull,0x33662e64616d090aull,0x2c32336625092032ull,
0x25202c3731662520ull,0x336625202c313366ull,0x090a202f2f093b30ull,0x65726168732e7473ull,
0x5b09203233662e64ull,0x2c5d342b38647225ull,0x2f093b3233662520ull,0x3834333a6469202full,
0x616475635f5f2032ull,0x73696c747265765full,0x78302b3432353974ull,0x722e747663090a30ull,
0x33752e3233662e6eull,0x2c33336625092032ull,0x20203b3932722520ull,0x6c090a202f2f0920ull,
0x2e6d617261702e64ull,0x3366250920323366ull,0x75635f5f5b202c34ull,0x5f5f6d7261706164ull,
0x72656e656738315aull,0x6e61697254657461ull,0x6636503273656c67ull,0x5f30533474616f6cull,
0x3568505f31536a50ull,0x5f335333746e6975ull,0x616f6c66365f3353ull,0x6f765f6a6a663374ull,
0x2b657a69536c6578ull,0x69202f2f093b5d38ull,0x5f20303634333a64ull,0x726170616475635full,
0x656738315a5f5f6dull,0x725465746172656eull,0x3273656c676e6169ull,0x3474616f6c663650ull,
0x5f31536a505f3053ull,0x33746e6975356850ull,0x66365f33535f3353ull,0x6a6a663374616f6cull,
0x69536c65786f765full,0x090a3878302b657aull,0x203233662e6c756dull,0x25202c3533662509ull,
0x336625202c333366ull,0x2f09202020203b34ull,0x2e766f6d090a202full,0x3366250920323366ull,
0x3866626630202c36ull,0x20203b3030303030ull,0x312d202f2f092020ull,0x33662e646461090aull,
0x2c37336625092032ull,0x25202c3533662520ull,0x202020203b363366ull,0x7573090a202f2f09ull,
0x2509203233662e62ull,0x336625202c383366ull,0x3b37336625202c37ull,0x202f2f0920202020ull,
0x33662e64616d090aull,0x2c39336625092032ull,0x25202c3731662520ull,0x336625202c383366ull,
0x090a202f2f093b37ull,0x65726168732e7473ull,0x5b09203233662e64ull,0x2c5d382b38647225ull,
0x2f093b3933662520ull,0x3834333a6469202full,0x616475635f5f2033ull,0x73696c747265765full,
0x78302b3432353974ull,0x09636f6c2e090a30ull,0x0938323331093032ull,0x662e627573090a30ull,
0x3034662509203233ull,0x25202c386625202cull,0x20202020203b3266ull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x6625202c30316625ull,0x20202020203b3034ull,0x2f2f092020202020ull,
0x662e627573090a20ull,0x3134662509203233ull,0x25202c336625202cull,0x20202020203b3266ull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x6625202c32316625ull,0x20202020203b3134ull,
0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x0930353231093032ull,0x662e736261090a30ull,
0x3234662509203233ull,0x203b31346625202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x6630202c33346625ull,0x3030303030386537ull,0x2f2f09202020203bull,
0x36303730352e3820ull,0x6573090a37332b65ull,0x33662e74672e7074ull,0x2c30317025092032ull,
0x25202c3234662520ull,0x202f2f093b333466ull,0x303170252140090aull,0x4c24092061726220ull,
0x203b30375f335f74ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,0x323109303209636full,
0x6f6d090a30093135ull,0x2509203233662e76ull,0x336630202c343466ull,0x3b30303030303865ull,
0x202f2f0920202020ull,0x756d090a35322e30ull,0x2509203233662e6cull,0x346625202c303166ull,
0x3b34346625202c30ull,0x202f2f0920202020ull,0x3209636f6c2e090aull,0x3009323532310930ull,
0x33662e766f6d090aull,0x2c35346625092032ull,0x3030386533663020ull,0x202020203b303030ull,
0x35322e30202f2f09ull,0x33662e6c756d090aull,0x2c32316625092032ull,0x25202c3134662520ull,
0x202020203b353466ull,0x744c240a202f2f09ull,0x090a3a30375f335full,0x09363109636f6c2eull,
0x64090a3009343734ull,0x09203233662e7669ull,0x6625202c37316625ull,0x32316625202c3031ull,
0x2f2f09202020203bull,0x662e627573090a20ull,0x3634662509203233ull,0x202c33326625202cull,
0x2020203b33326625ull,0x6d090a202f2f0920ull,0x09203233662e6461ull,0x6625202c37346625ull,
0x36346625202c3731ull,0x093b33326625202cull,0x2e7473090a202f2full,0x662e646572616873ull,
0x6472255b09203233ull,0x202c5d3438332b38ull,0x2f2f093b37346625ull,0x343834333a646920ull,
0x5f616475635f5f20ull,0x7473696c74726576ull,0x3078302b34323539ull,0x33662e646461090aull,
0x2c38346625092032ull,0x25202c3033662520ull,0x202020203b373266ull,0x7573090a202f2f09ull,
0x2509203233662e62ull,0x346625202c393466ull,0x3b30336625202c38ull,0x202f2f0920202020ull,
0x33662e64616d090aull,0x2c30356625092032ull,0x25202c3731662520ull,0x336625202c393466ull,
0x090a202f2f093b30ull,0x65726168732e7473ull,0x5b09203233662e64ull,0x3838332b38647225ull,
0x3b30356625202c5dull,0x333a6469202f2f09ull,0x75635f5f20353834ull,0x6c747265765f6164ull,
0x2b34323539747369ull,0x64616d090a307830ull,0x662509203233662eull,0x37316625202c3135ull,
0x202c38336625202cull,0x2f2f093b37336625ull,0x68732e7473090a20ull,0x3233662e64657261ull,
0x2b386472255b0920ull,0x6625202c5d323933ull,0x69202f2f093b3135ull,0x5f20363834333a64ull,
0x65765f616475635full,0x35397473696c7472ull,0x090a3078302b3432ull,0x09303209636f6c2eull,
0x090a300938323331ull,0x203233662e627573ull,0x25202c3235662509ull,0x3b336625202c3866ull,
0x2f09202020202020ull,0x2e766f6d090a202full,0x3166250920323366ull,0x3b32356625202c30ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x203233662e627573ull,0x25202c3335662509ull,
0x3b336625202c3466ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3166250920323366ull,
0x3b33356625202c32ull,0x2020202020202020ull,0x090a202f2f092020ull,0x09303209636f6c2eull,
0x090a300930353231ull,0x203233662e736261ull,0x25202c3435662509ull,0x202020203b333566ull,
0x2f09202020202020ull,0x2e766f6d090a202full,0x3566250920323366ull,0x3865376630202c35ull,
0x20203b3030303030ull,0x2e38202f2f092020ull,0x332b653630373035ull,0x2e70746573090a37ull,
0x09203233662e7467ull,0x6625202c31317025ull,0x35356625202c3435ull,0x40090a202f2f093bull,
0x7262203131702521ull,0x335f744c24092061ull,0x202020203b32375full,0x2f2f092020202020ull,
0x09636f6c2e090a20ull,0x0931353231093032ull,0x662e766f6d090a30ull,0x3635662509203233ull,
0x303865336630202cull,0x2020203b30303030ull,0x322e30202f2f0920ull,0x662e6c756d090a35ull,
0x3031662509203233ull,0x202c32356625202cull,0x2020203b36356625ull,0x2e090a202f2f0920ull,
0x3109303209636f6cull,0x6d090a3009323532ull,0x09203233662e766full,0x6630202c37356625ull,
0x3030303030386533ull,0x2f2f09202020203bull,0x6d090a35322e3020ull,0x09203233662e6c75ull,
0x6625202c32316625ull,0x37356625202c3335ull,0x2f2f09202020203bull,0x5f335f744c240a20ull,
0x6f6c2e090a3a3237ull,0x3537340936310963ull,0x2e766964090a3009ull,0x3166250920323366ull,
0x2c30316625202c37ull,0x20203b3231662520ull,0x090a202f2f092020ull,0x203233662e627573ull,
0x25202c3835662509ull,0x326625202c323266ull,0x2f09202020203b33ull,0x2e64616d090a202full,
0x3566250920323366ull,0x2c37316625202c39ull,0x25202c3835662520ull,0x202f2f093b333266ull,
0x6168732e7473090aull,0x203233662e646572ull,0x372b386472255b09ull,0x356625202c5d3836ull,
0x6469202f2f093b39ull,0x5f5f20373834333aull,0x7265765f61647563ull,0x3235397473696c74ull,
0x73090a3078302b34ull,0x09203233662e6275ull,0x6625202c30366625ull,0x38346625202c3834ull,
0x2f2f09202020203bull,0x662e64616d090a20ull,0x3136662509203233ull,0x202c37316625202cull,
0x6625202c30366625ull,0x0a202f2f093b3834ull,0x726168732e747309ull,0x09203233662e6465ull,
0x37372b386472255bull,0x31366625202c5d32ull,0x3a6469202f2f093bull,0x635f5f2038383433ull,
0x747265765f616475ull,0x343235397473696cull,0x616d090a3078302bull,0x2509203233662e64ull,
0x316625202c323666ull,0x2c38336625202c37ull,0x2f093b3733662520ull,0x732e7473090a202full,
0x33662e6465726168ull,0x386472255b092032ull,0x25202c5d3637372bull,0x202f2f093b323666ull,
0x20393834333a6469ull,0x765f616475635f5full,0x397473696c747265ull,0x0a3078302b343235ull,
0x303209636f6c2e09ull,0x0a30093832333109ull,0x3233662e62757309ull,0x202c333666250920ull,
0x346625202c386625ull,0x092020202020203bull,0x766f6d090a202f2full,0x662509203233662eull,
0x33366625202c3031ull,0x202020202020203bull,0x0a202f2f09202020ull,0x3233662e62757309ull,
0x202c343666250920ull,0x346625202c316625ull,0x092020202020203bull,0x766f6d090a202f2full,
0x662509203233662eull,0x34366625202c3231ull,0x202020202020203bull,0x0a202f2f09202020ull,
0x303209636f6c2e09ull,0x0a30093035323109ull,0x3233662e73626109ull,0x202c353666250920ull,
0x2020203b34366625ull,0x0920202020202020ull,0x766f6d090a202f2full,0x662509203233662eull,
0x65376630202c3636ull,0x203b303030303038ull,0x38202f2f09202020ull,0x2b6536303730352eull,
0x70746573090a3733ull,0x203233662e74672eull,0x25202c3231702509ull,0x366625202c353666ull,
0x090a202f2f093b36ull,0x6220323170252140ull,0x5f744c2409206172ull,0x2020203b34375f33ull,
0x2f09202020202020ull,0x636f6c2e090a202full,0x3135323109303209ull,0x2e766f6d090a3009ull,
0x3666250920323366ull,0x3865336630202c37ull,0x20203b3030303030ull,0x2e30202f2f092020ull,
0x2e6c756d090a3532ull,0x3166250920323366ull,0x2c33366625202c30ull,0x20203b3736662520ull,
0x090a202f2f092020ull,0x09303209636f6c2eull,0x090a300932353231ull,0x203233662e766f6dull,
0x30202c3836662509ull,0x3030303038653366ull,0x2f09202020203b30ull,0x090a35322e30202full,
0x203233662e6c756dull,0x25202c3231662509ull,0x366625202c343666ull,0x2f09202020203b38ull,
0x335f744c240a202full,0x6c2e090a3a34375full,0x373409363109636full,0x766964090a300936ull,
0x662509203233662eull,0x30316625202c3731ull,0x203b32316625202cull,0x0a202f2f09202020ull,
0x3233662e62757309ull,0x202c393666250920ull,0x6625202c32326625ull,0x09202020203b3232ull,
0x64616d090a202f2full,0x662509203233662eull,0x37316625202c3037ull,0x202c39366625202cull,
0x2f2f093b32326625ull,0x68732e7473090a20ull,0x3233662e64657261ull,0x2b386472255b0920ull,
0x25202c5d32353131ull,0x202f2f093b303766ull,0x20303934333a6469ull,0x765f616475635f5full,
0x397473696c747265ull,0x0a3078302b343235ull,0x3233662e62757309ull,0x202c313766250920ull,
0x6625202c30336625ull,0x09202020203b3834ull,0x64616d090a202f2full,0x662509203233662eull,
0x37316625202c3237ull,0x202c31376625202cull,0x2f2f093b38346625ull,0x68732e7473090a20ull,
0x3233662e64657261ull,0x2b386472255b0920ull,0x25202c5d36353131ull,0x202f2f093b323766ull,
0x20313934333a6469ull,0x765f616475635f5full,0x397473696c747265ull,0x0a3078302b343235ull,
0x3233662e64616d09ull,0x202c333766250920ull,0x6625202c37316625ull,0x37336625202c3833ull,
0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,0x303631312b386472ull,
0x3b33376625202c5dull,0x333a6469202f2f09ull,0x75635f5f20323934ull,0x6c747265765f6164ull,
0x2b34323539747369ull,0x6f6c2e090a307830ull,0x3233310930320963ull,0x627573090a300938ull,
0x662509203233662eull,0x2c386625202c3031ull,0x2020203b35662520ull,0x0a202f2f09202020ull,
0x3233662e62757309ull,0x202c343766250920ull,0x356625202c366625ull,0x092020202020203bull,
0x766f6d090a202f2full,0x662509203233662eull,0x34376625202c3231ull,0x202020202020203bull,
0x0a202f2f09202020ull,0x303209636f6c2e09ull,0x0a30093035323109ull,0x3233662e73626109ull,
0x202c353766250920ull,0x2020203b34376625ull,0x0920202020202020ull,0x766f6d090a202f2full,
0x662509203233662eull,0x65376630202c3637ull,0x203b303030303038ull,0x38202f2f09202020ull,
0x2b6536303730352eull,0x70746573090a3733ull,0x203233662e74672eull,0x25202c3331702509ull,
0x376625202c353766ull,0x090a202f2f093b36ull,0x6220333170252140ull,0x5f744c2409206172ull,
0x2020203b36375f33ull,0x2f09202020202020ull,0x636f6c2e090a202full,0x3135323109303209ull,
0x2e766f6d090a3009ull,0x3766250920323366ull,0x3865336630202c37ull,0x20203b3030303030ull,
0x2e30202f2f092020ull,0x2e6c756d090a3532ull,0x3166250920323366ull,0x2c30316625202c30ull,
0x20203b3737662520ull,0x090a202f2f092020ull,0x09303209636f6c2eull,0x090a300932353231ull,
0x203233662e766f6dull,0x30202c3837662509ull,0x3030303038653366ull,0x2f09202020203b30ull,
0x090a35322e30202full,0x203233662e6c756dull,0x25202c3231662509ull,0x376625202c343766ull,
0x2f09202020203b38ull,0x335f744c240a202full,0x6c2e090a3a36375full,0x373409363109636full,
0x766964090a300937ull,0x662509203233662eull,0x30316625202c3731ull,0x203b32316625202cull,
0x0a202f2f09202020ull,0x3233662e64616d09ull,0x202c393766250920ull,0x6625202c37316625ull,
0x32326625202c3432ull,0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,
0x363335312b386472ull,0x3b39376625202c5dull,0x333a6469202f2f09ull,0x75635f5f20333934ull,
0x6c747265765f6164ull,0x2b34323539747369ull,0x64616d090a307830ull,0x662509203233662eull,
0x37316625202c3038ull,0x202c31336625202cull,0x2f2f093b30336625ull,0x68732e7473090a20ull,
0x3233662e64657261ull,0x2b386472255b0920ull,0x25202c5d30343531ull,0x202f2f093b303866ull,
0x20343934333a6469ull,0x765f616475635f5full,0x397473696c747265ull,0x0a3078302b343235ull,
0x3233662e64646109ull,0x202c313866250920ull,0x6625202c37336625ull,0x09202020203b3433ull,
0x627573090a202f2full,0x662509203233662eull,0x31386625202c3238ull,0x203b31386625202cull,
0x0a202f2f09202020ull,0x3233662e64616d09ull,0x202c333866250920ull,0x6625202c37316625ull,
0x31386625202c3238ull,0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,
0x343435312b386472ull,0x3b33386625202c5dull,0x333a6469202f2f09ull,0x75635f5f20353934ull,
0x6c747265765f6164ull,0x2b34323539747369ull,0x6f6c2e090a307830ull,0x3233310930320963ull,
0x627573090a300938ull,0x662509203233662eull,0x2c386625202c3031ull,0x2020203b36662520ull,
0x0a202f2f09202020ull,0x3233662e62757309ull,0x202c343866250920ull,0x366625202c376625ull,
0x092020202020203bull,0x766f6d090a202f2full,0x662509203233662eull,0x34386625202c3231ull,
0x202020202020203bull,0x0a202f2f09202020ull,0x303209636f6c2e09ull,0x0a30093035323109ull,
0x3233662e73626109ull,0x202c353866250920ull,0x2020203b34386625ull,0x0920202020202020ull,
0x766f6d090a202f2full,0x662509203233662eull,0x65376630202c3638ull,0x203b303030303038ull,
0x38202f2f09202020ull,0x2b6536303730352eull,0x70746573090a3733ull,0x203233662e74672eull,
0x25202c3431702509ull,0x386625202c353866ull,0x090a202f2f093b36ull,0x6220343170252140ull,
0x5f744c2409206172ull,0x2020203b38375f33ull,0x2f09202020202020ull,0x636f6c2e090a202full,
0x3135323109303209ull,0x2e766f6d090a3009ull,0x3866250920323366ull,0x3865336630202c37ull,
0x20203b3030303030ull,0x2e30202f2f092020ull,0x2e6c756d090a3532ull,0x3166250920323366ull,
0x2c30316625202c30ull,0x20203b3738662520ull,0x090a202f2f092020ull,0x09303209636f6c2eull,
0x090a300932353231ull,0x203233662e766f6dull,0x30202c3838662509ull,0x3030303038653366ull,
0x2f09202020203b30ull,0x090a35322e30202full,0x203233662e6c756dull,0x25202c3231662509ull,
0x386625202c343866ull,0x2f09202020203b38ull,0x335f744c240a202full,0x6c2e090a3a38375full,
0x373409363109636full,0x766964090a300938ull,0x662509203233662eull,0x30316625202c3731ull,
0x203b32316625202cull,0x0a202f2f09202020ull,0x3233662e64616d09ull,0x202c393866250920ull,
0x6625202c37316625ull,0x33326625202c3634ull,0x73090a202f2f093bull,0x6465726168732e74ull,
0x255b09203233662eull,0x303239312b386472ull,0x3b39386625202c5dull,0x333a6469202f2f09ull,
0x75635f5f20363934ull,0x6c747265765f6164ull,0x2b34323539747369ull,0x64616d090a307830ull,
0x662509203233662eull,0x37316625202c3039ull,0x202c39346625202cull,0x2f2f093b30336625ull,
0x68732e7473090a20ull,0x3233662e64657261ull,0x2b386472255b0920ull,0x25202c5d34323931ull,
0x202f2f093b303966ull,0x20373934333a6469ull,0x765f616475635f5full,0x397473696c747265ull,
0x0a3078302b343235ull,0x3233662e64616d09ull,0x202c313966250920ull,0x6625202c37316625ull,
0x31386625202c3238ull,0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,
0x383239312b386472ull,0x3b31396625202c5dull,0x333a6469202f2f09ull,0x75635f5f20383934ull,
0x6c747265765f6164ull,0x2b34323539747369ull,0x6f6c2e090a307830ull,0x3233310930320963ull,
0x627573090a300938ull,0x662509203233662eull,0x2c386625202c3031ull,0x2020203b37662520ull,
0x0a202f2f09202020ull,0x3233622e766f6d09ull,0x202c323966250920ull,0x2020203b35347225ull,
0x0920202020202020ull,0x627573090a202f2full,0x662509203233662eull,0x32396625202c3339ull,
0x20203b376625202cull,0x0a202f2f09202020ull,0x3233662e766f6d09ull,0x202c323166250920ull,
0x2020203b33396625ull,0x0920202020202020ull,0x6f6c2e090a202f2full,0x3532310930320963ull,
0x736261090a300930ull,0x662509203233662eull,0x33396625202c3439ull,0x202020202020203bull,
0x0a202f2f09202020ull,0x3233662e766f6d09ull,0x202c353966250920ull,0x3030303865376630ull,
0x09202020203b3030ull,0x3730352e38202f2full,0x090a37332b653630ull,0x2e74672e70746573ull,
0x3170250920323366ull,0x2c34396625202c35ull,0x2f093b3539662520ull,0x70252140090a202full,
0x0920617262203531ull,0x30385f335f744c24ull,0x202020202020203bull,0x090a202f2f092020ull,
0x09303209636f6c2eull,0x090a300931353231ull,0x203233662e766f6dull,0x30202c3639662509ull,
0x3030303038653366ull,0x2f09202020203b30ull,0x090a35322e30202full,0x203233662e6c756dull,
0x25202c3031662509ull,0x396625202c303166ull,0x2f09202020203b36ull,0x636f6c2e090a202full,
0x3235323109303209ull,0x2e766f6d090a3009ull,0x3966250920323366ull,0x3865336630202c37ull,
0x20203b3030303030ull,0x2e30202f2f092020ull,0x2e6c756d090a3532ull,0x3166250920323366ull,
0x2c33396625202c32ull,0x20203b3739662520ull,0x240a202f2f092020ull,0x3a30385f335f744cull,
0x3109636f6c2e090aull,0x0a30093937340936ull,0x3233662e76696409ull,0x202c373166250920ull,
0x6625202c30316625ull,0x09202020203b3231ull,0x64616d090a202f2full,0x662509203233662eull,
0x37316625202c3839ull,0x202c38356625202cull,0x2f2f093b33326625ull,0x68732e7473090a20ull,
0x3233662e64657261ull,0x2b386472255b0920ull,0x25202c5d34303332ull,0x202f2f093b383966ull,
0x20393934333a6469ull,0x765f616475635f5full,0x397473696c747265ull,0x0a3078302b343235ull,
0x3233662e64616d09ull,0x202c393966250920ull,0x6625202c37316625ull,0x38346625202c3036ull,
0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,0x383033322b386472ull,
0x3b39396625202c5dull,0x333a6469202f2f09ull,0x75635f5f20303035ull,0x6c747265765f6164ull,
0x2b34323539747369ull,0x64616d090a307830ull,0x662509203233662eull,0x316625202c303031ull,
0x2c32386625202c37ull,0x2f093b3138662520ull,0x732e7473090a202full,0x33662e6465726168ull,
0x386472255b092032ull,0x202c5d323133322bull,0x2f093b3030316625ull,0x3035333a6469202full,
0x616475635f5f2031ull,0x73696c747265765full,0x78302b3432353974ull,0x09636f6c2e090a30ull,
0x0938323331093032ull,0x662e627573090a30ull,0x3031662509203233ull,0x25202c386625202cull,
0x202020203b323966ull,0x73090a202f2f0920ull,0x09203233662e6275ull,0x25202c3130316625ull,
0x32396625202c3566ull,0x2f2f09202020203bull,0x662e766f6d090a20ull,0x3231662509203233ull,
0x3b3130316625202cull,0x2020202020202020ull,0x2e090a202f2f0920ull,0x3109303209636f6cull,
0x61090a3009303532ull,0x09203233662e7362ull,0x25202c3230316625ull,0x2020203b31303166ull,
0x2f2f092020202020ull,0x662e766f6d090a20ull,0x3031662509203233ull,0x3865376630202c33ull,
0x20203b3030303030ull,0x352e38202f2f0920ull,0x37332b6536303730ull,0x672e70746573090aull,
0x2509203233662e74ull,0x316625202c363170ull,0x30316625202c3230ull,0x090a202f2f093b33ull,
0x6220363170252140ull,0x5f744c2409206172ull,0x2020203b32385f33ull,0x2f09202020202020ull,
0x636f6c2e090a202full,0x3135323109303209ull,0x2e766f6d090a3009ull,0x3166250920323366ull,
0x65336630202c3430ull,0x203b303030303038ull,0x2e30202f2f092020ull,0x2e6c756d090a3532ull,
0x3166250920323366ull,0x2c30316625202c30ull,0x203b343031662520ull,0x090a202f2f092020ull,
0x09303209636f6c2eull,0x090a300932353231ull,0x203233662e766f6dull,0x202c353031662509ull,
0x3030303865336630ull,0x2f092020203b3030ull,0x090a35322e30202full,0x203233662e6c756dull,
0x25202c3231662509ull,0x6625202c31303166ull,0x2f0920203b353031ull,0x335f744c240a202full,
0x6c2e090a3a32385full,0x383409363109636full,0x766964090a300930ull,0x662509203233662eull,
0x30316625202c3731ull,0x203b32316625202cull,0x0a202f2f09202020ull,0x3233662e64616d09ull,
0x2c36303166250920ull,0x25202c3731662520ull,0x326625202c393666ull,0x090a202f2f093b32ull,
0x65726168732e7473ull,0x5b09203233662e64ull,0x3836322b38647225ull,0x30316625202c5d38ull,
0x6469202f2f093b36ull,0x5f5f20323035333aull,0x7265765f61647563ull,0x3235397473696c74ull,
0x6d090a3078302b34ull,0x09203233662e6461ull,0x25202c3730316625ull,0x376625202c373166ull,
0x3b38346625202c31ull,0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,
0x5d323936322b3864ull,0x3b3730316625202cull,0x333a6469202f2f09ull,0x75635f5f20333035ull,
0x6c747265765f6164ull,0x2b34323539747369ull,0x64616d090a307830ull,0x662509203233662eull,
0x316625202c383031ull,0x2c32386625202c37ull,0x2f093b3138662520ull,0x732e7473090a202full,
0x33662e6465726168ull,0x386472255b092032ull,0x202c5d363936322bull,0x2f093b3830316625ull,
0x3035333a6469202full,0x616475635f5f2034ull,0x73696c747265765full,0x78302b3432353974ull,
0x09636f6c2e090a30ull,0x0938323331093032ull,0x662e766f6d090a30ull,0x3031662509203233ull,
0x20203b396625202cull,0x2020202020202020ull,0x73090a202f2f0920ull,0x09203233662e6275ull,
0x25202c3930316625ull,0x3b316625202c3566ull,0x2f2f092020202020ull,0x662e766f6d090a20ull,
0x3231662509203233ull,0x3b3930316625202cull,0x2020202020202020ull,0x2e090a202f2f0920ull,
0x3109303209636f6cull,0x61090a3009303532ull,0x09203233662e7362ull,0x25202c3031316625ull,
0x2020203b39303166ull,0x2f2f092020202020ull,0x662e766f6d090a20ull,0x3131662509203233ull,
0x3865376630202c31ull,0x20203b3030303030ull,0x352e38202f2f0920ull,0x37332b6536303730ull,
0x672e70746573090aull,0x2509203233662e74ull,0x316625202c373170ull,0x31316625202c3031ull,
0x090a202f2f093b31ull,0x6220373170252140ull,0x5f744c2409206172ull,0x2020203b34385f33ull,
0x2f09202020202020ull,0x636f6c2e090a202full,0x3135323109303209ull,0x2e766f6d090a3009ull,
0x3166250920323366ull,0x65336630202c3231ull,0x203b303030303038ull,0x2e30202f2f092020ull,
0x2e6c756d090a3532ull,0x3166250920323366ull,0x202c396625202c30ull,0x20203b3231316625ull,
0x090a202f2f092020ull,0x09303209636f6c2eull,0x090a300932353231ull,0x203233662e766f6dull,
0x202c333131662509ull,0x3030303865336630ull,0x2f092020203b3030ull,0x090a35322e30202full,
0x203233662e6c756dull,0x25202c3231662509ull,0x6625202c39303166ull,0x2f0920203b333131ull,
0x335f744c240a202full,0x6c2e090a3a34385full,0x383409363109636full,0x766964090a300931ull,
0x662509203233662eull,0x30316625202c3731ull,0x203b32316625202cull,0x0a202f2f09202020ull,
0x3233662e64616d09ull,0x2c34313166250920ull,0x25202c3731662520ull,0x326625202c393666ull,
0x090a202f2f093b32ull,0x65726168732e7473ull,0x5b09203233662e64ull,0x3730332b38647225ull,
0x31316625202c5d32ull,0x6469202f2f093b34ull,0x5f5f20353035333aull,0x7265765f61647563ull,
0x3235397473696c74ull,0x6d090a3078302b34ull,0x09203233662e6461ull,0x25202c3531316625ull,
0x336625202c373166ull,0x3b30336625202c31ull,0x7473090a202f2f09ull,0x2e6465726168732eull,
0x72255b0920323366ull,0x5d363730332b3864ull,0x3b3531316625202cull,0x333a6469202f2f09ull,
0x75635f5f20363035ull,0x6c747265765f6164ull,0x2b34323539747369ull,0x627573090a307830ull,
0x662509203233662eull,0x386625202c363131ull,0x3b37336625202c31ull,0x0a202f2f09202020ull,
0x3233662e64616d09ull,0x2c37313166250920ull,0x25202c3731662520ull,0x6625202c36313166ull,
0x0a202f2f093b3733ull,0x726168732e747309ull,0x09203233662e6465ull,0x30332b386472255bull,
0x316625202c5d3038ull,0x69202f2f093b3731ull,0x5f20373035333a64ull,0x65765f616475635full,
0x35397473696c7472ull,0x090a3078302b3432ull,0x09303209636f6c2eull,0x090a300938323331ull,
0x203233662e766f6dull,0x25202c3031662509ull,0x202020203b303466ull,0x2f09202020202020ull,
0x2e627573090a202full,0x3166250920323366ull,0x2c366625202c3831ull,0x2020203b32662520ull,
0x090a202f2f092020ull,0x203233662e766f6dull,0x25202c3231662509ull,0x2020203b38313166ull,
0x2f09202020202020ull,0x636f6c2e090a202full,0x3035323109303209ull,0x2e736261090a3009ull,
0x3166250920323366ull,0x31316625202c3931ull,0x2020202020203b38ull,0x090a202f2f092020ull,
0x203233662e766f6dull,0x202c303231662509ull,0x3030303865376630ull,0x2f092020203b3030ull,
0x303730352e38202full,0x73090a37332b6536ull,0x662e74672e707465ull,0x3831702509203233ull,
0x2c3931316625202cull,0x093b303231662520ull,0x252140090a202f2full,0x2061726220383170ull,
0x385f335f744c2409ull,0x2020202020203b36ull,0x0a202f2f09202020ull,0x303209636f6c2e09ull,
0x0a30093135323109ull,0x3233662e766f6d09ull,0x2c31323166250920ull,0x3030386533663020ull,
0x092020203b303030ull,0x0a35322e30202f2full,0x3233662e6c756d09ull,0x202c303166250920ull,
0x6625202c30346625ull,0x092020203b313231ull,0x6f6c2e090a202f2full,0x3532310930320963ull,
0x766f6d090a300932ull,0x662509203233662eull,0x336630202c323231ull,0x3b30303030303865ull,
0x30202f2f09202020ull,0x6c756d090a35322eull,0x662509203233662eull,0x31316625202c3231ull,
0x3232316625202c38ull,0x0a202f2f0920203bull,0x36385f335f744c24ull,0x09636f6c2e090a3aull,
0x3009323834093631ull,0x33662e766964090aull,0x2c37316625092032ull,0x25202c3031662520ull,
0x202020203b323166ull,0x616d090a202f2f09ull,0x2509203233662e64ull,0x6625202c33323166ull,
0x36346625202c3731ull,0x093b33326625202cull,0x2e7473090a202f2full,0x662e646572616873ull,
0x6472255b09203233ull,0x2c5d363534332b38ull,0x093b333231662520ull,0x35333a6469202f2full,
0x6475635f5f203830ull,0x696c747265765f61ull,0x302b343235397473ull,0x2e64616d090a3078ull,
0x3166250920323366ull,0x37316625202c3432ull,0x202c31336625202cull,0x2f2f093b30336625ull,
0x68732e7473090a20ull,0x3233662e64657261ull,0x2b386472255b0920ull,0x25202c5d30363433ull,
0x2f2f093b34323166ull,0x393035333a646920ull,0x5f616475635f5f20ull,0x7473696c74726576ull,
0x3078302b34323539ull,0x33662e64616d090aull,0x3532316625092032ull,0x202c37316625202cull,
0x25202c3631316625ull,0x202f2f093b373366ull,0x6168732e7473090aull,0x203233662e646572ull,
0x332b386472255b09ull,0x6625202c5d343634ull,0x202f2f093b353231ull,0x20303135333a6469ull,
0x765f616475635f5full,0x397473696c747265ull,0x0a3078302b343235ull,0x303209636f6c2e09ull,
0x0a30093832333109ull,0x3233662e766f6d09ull,0x202c303166250920ull,0x2020203b32356625ull,
0x0920202020202020ull,0x627573090a202f2full,0x662509203233662eull,0x376625202c363231ull,
0x20203b336625202cull,0x0a202f2f09202020ull,0x3233662e766f6d09ull,0x202c323166250920ull,
0x20203b3632316625ull,0x0920202020202020ull,0x6f6c2e090a202f2full,0x3532310930320963ull,
0x736261090a300930ull,0x662509203233662eull,0x316625202c373231ull,0x20202020203b3632ull,
0x0a202f2f09202020ull,0x3233662e766f6d09ull,0x2c38323166250920ull,0x3030386537663020ull,
0x092020203b303030ull,0x3730352e38202f2full,0x090a37332b653630ull,0x2e74672e70746573ull,
0x3170250920323366ull,0x3732316625202c39ull,0x3b3832316625202cull,0x2140090a202f2f09ull,
0x6172622039317025ull,0x5f335f744c240920ull,0x20202020203b3838ull,0x202f2f0920202020ull,
0x3209636f6c2e090aull,0x3009313532310930ull,0x33662e766f6d090aull,0x3932316625092032ull,
0x303865336630202cull,0x2020203b30303030ull,0x35322e30202f2f09ull,0x33662e6c756d090aull,
0x2c30316625092032ull,0x25202c3235662520ull,0x2020203b39323166ull,0x6c2e090a202f2f09ull,
0x323109303209636full,0x6f6d090a30093235ull,0x2509203233662e76ull,0x6630202c30333166ull,
0x3030303030386533ull,0x202f2f092020203bull,0x756d090a35322e30ull,0x2509203233662e6cull,
0x316625202c323166ull,0x33316625202c3632ull,0x202f2f0920203b30ull,0x385f335f744c240aull,
0x636f6c2e090a3a38ull,0x0933383409363109ull,0x662e766964090a30ull,0x3731662509203233ull,
0x202c30316625202cull,0x2020203b32316625ull,0x6d090a202f2f0920ull,0x09203233662e6461ull,
0x25202c3133316625ull,0x346625202c373166ull,0x3b33326625202c36ull,0x7473090a202f2f09ull,
0x2e6465726168732eull,0x72255b0920323366ull,0x5d303438332b3864ull,0x3b3133316625202cull,
0x333a6469202f2f09ull,0x75635f5f20313135ull,0x6c747265765f6164ull,0x2b34323539747369ull,
0x64616d090a307830ull,0x662509203233662eull,0x316625202c323331ull,0x2c30366625202c37ull,
0x2f093b3834662520ull,0x732e7473090a202full,0x33662e6465726168ull,0x386472255b092032ull,
0x202c5d343438332bull,0x2f093b3233316625ull,0x3135333a6469202full,0x616475635f5f2032ull,
0x73696c747265765full,0x78302b3432353974ull,0x662e64616d090a30ull,0x3331662509203233ull,
0x2c37316625202c33ull,0x202c363131662520ull,0x2f2f093b37336625ull,0x68732e7473090a20ull,
0x3233662e64657261ull,0x2b386472255b0920ull,0x25202c5d38343833ull,0x2f2f093b33333166ull,
0x333135333a646920ull,0x5f616475635f5f20ull,0x7473696c74726576ull,0x3078302b34323539ull,
0x3209636f6c2e090aull,0x3009383233310930ull,0x33662e766f6d090aull,0x2c30316625092032ull,
0x20203b3336662520ull,0x2020202020202020ull,0x7573090a202f2f09ull,0x2509203233662e62ull,
0x6625202c34333166ull,0x3b346625202c3239ull,0x202f2f0920202020ull,0x33662e766f6d090aull,
0x2c32316625092032ull,0x203b343331662520ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,
0x323109303209636full,0x6261090a30093035ull,0x2509203233662e73ull,0x6625202c35333166ull,
0x202020203b343331ull,0x202f2f0920202020ull,0x33662e766f6d090aull,0x3633316625092032ull,
0x303865376630202cull,0x2020203b30303030ull,0x30352e38202f2f09ull,0x0a37332b65363037ull,
0x74672e7074657309ull,0x702509203233662eull,0x33316625202c3032ull,0x3633316625202c35ull,
0x40090a202f2f093bull,0x7262203032702521ull,0x335f744c24092061ull,0x202020203b30395full,
0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x0931353231093032ull,0x662e766f6d090a30ull,
0x3331662509203233ull,0x3865336630202c37ull,0x20203b3030303030ull,0x322e30202f2f0920ull,
0x662e6c756d090a35ull,0x3031662509203233ull,0x202c33366625202cull,0x20203b3733316625ull,
0x2e090a202f2f0920ull,0x3109303209636f6cull,0x6d090a3009323532ull,0x09203233662e766full,
0x30202c3833316625ull,0x3030303038653366ull,0x2f2f092020203b30ull,0x6d090a35322e3020ull,
0x09203233662e6c75ull,0x6625202c32316625ull,0x316625202c343331ull,0x2f2f0920203b3833ull,
0x5f335f744c240a20ull,0x6f6c2e090a3a3039ull,0x3438340936310963ull,0x2e766964090a3009ull,
0x3166250920323366ull,0x2c30316625202c37ull,0x20203b3231662520ull,0x090a202f2f092020ull,
0x203233662e64616dull,0x202c393331662509ull,0x6625202c37316625ull,0x32326625202c3936ull,
0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,0x343232342b386472ull,
0x3933316625202c5dull,0x3a6469202f2f093bull,0x635f5f2034313533ull,0x747265765f616475ull,
0x343235397473696cull,0x616d090a3078302bull,0x2509203233662e64ull,0x6625202c30343166ull,
0x30366625202c3731ull,0x093b38346625202cull,0x2e7473090a202f2full,0x662e646572616873ull,
0x6472255b09203233ull,0x2c5d383232342b38ull,0x093b303431662520ull,0x35333a6469202f2full,
0x6475635f5f203531ull,0x696c747265765f61ull,0x302b343235397473ull,0x2e64616d090a3078ull,
0x3166250920323366ull,0x37316625202c3134ull,0x2c3631316625202cull,0x2f093b3733662520ull,
0x732e7473090a202full,0x33662e6465726168ull,0x386472255b092032ull,0x202c5d323332342bull,
0x2f093b3134316625ull,0x3135333a6469202full,0x616475635f5f2036ull,0x73696c747265765full,
0x78302b3432353974ull,0x09636f6c2e090a30ull,0x3009353834093631ull,0x79732e726162090aull,
0x20203b300920636eull,0x2020202020202020ull,0x2020202020202020ull,0x6461090a202f2f09ull,
0x2509203233752e64ull,0x7225202c37323172ull,0x383231202c363231ull,0x202f2f092020203bull,
0x6c2e70746573090aull,0x2509203233662e74ull,0x396625202c313270ull,0x203b386625202c32ull,
0x6573090a202f2f09ull,0x09203233752e706cull,0x25202c3832317225ull,0x7225202c37323172ull,
0x327025202c363231ull,0x090a202f2f093b31ull,0x203233732e766f6dull,0x202c393231722509ull,
0x20203b3832317225ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3172250920323373ull,
0x20203b30202c3033ull,0x2020202020202020ull,0x090a202f2f092020ull,0x203233732e766f6dull,
0x202c313331722509ull,0x2020202020203b30ull,0x2f09202020202020ull,0x2e766f6d090a202full,
0x3172250920323373ull,0x20203b30202c3233ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x762e64312e786574ull,0x33732e3233752e34ull,0x33333172257b2032ull,0x252c34333172252cull,
0x3172252c35333172ull,0x6d756e5b2c7d3633ull,0x7865547374726556ull,0x2c39323172257b2cull,
0x72252c3033317225ull,0x333172252c313331ull,0x6c2e090a3b5d7d32ull,0x303509363109636full,
0x766f6d090a300937ull,0x722509203233732eull,0x317225202c373331ull,0x20202020203b3333ull,
0x0a202f2f09202020ull,0x3233752e766f6d09ull,0x2c38333172250920ull,0x20202020203b3020ull,
0x0920202020202020ull,0x746573090a202f2full,0x3233752e71652e70ull,0x202c323270250920ull,
0x25202c3733317225ull,0x2f2f093b38333172ull,0x3232702540090a20ull,0x4c24092061726220ull,
0x203b32395f335f74ull,0x2020202020202020ull,0x61090a202f2f0920ull,0x09203233752e6464ull,
0x25202c3933317225ull,0x3b32202c37333172ull,0x2f2f092020202020ull,0x732e766f6d090a20ull,
0x3431722509203233ull,0x313334312d202c30ull,0x203b353637353536ull,0x6d090a202f2f0920ull,
0x09203233732e766full,0x30202c3134317225ull,0x202020202020203bull,0x2f2f092020202020ull,
0x2e70746573090a20ull,0x09203233732e746cull,0x7225202c33327025ull,0x317225202c393331ull,
0x0a202f2f093b3134ull,0x3233732e73626109ull,0x2c32343172250920ull,0x203b393331722520ull,
0x0920202020202020ull,0x6c756d090a202f2full,0x203233752e69682eull,0x202c333431722509ull,
0x25202c3234317225ull,0x2f2f093b30343172ull,0x732e726873090a20ull,0x3431722509203233ull,
0x3334317225202c34ull,0x202020203b31202cull,0x40090a202f2f0920ull,0x6275732033327025ull,
0x722509203233732eull,0x317225202c343431ull,0x34317225202c3134ull,0x090a202f2f093b34ull,
0x203233732e766f6dull,0x202c353431722509ull,0x20203b3434317225ull,0x2f09202020202020ull,
0x702e646c090a202full,0x3233752e6d617261ull,0x2c36343172250920ull,0x616475635f5f5b20ull,
0x315a5f5f6d726170ull,0x746172656e656738ull,0x6c676e6169725465ull,0x6f6c663650327365ull,
0x6a505f3053347461ull,0x69753568505f3153ull,0x33535f335333746eull,0x3374616f6c66365full,
0x5678616d5f6a6a66ull,0x2f093b5d73747265ull,0x3135333a6469202full,0x616475635f5f2038ull,
0x315a5f5f6d726170ull,0x746172656e656738ull,0x6c676e6169725465ull,0x6f6c663650327365ull,
0x6a505f3053347461ull,0x69753568505f3153ull,0x33535f335333746eull,0x3374616f6c66365full,
0x5678616d5f6a6a66ull,0x3078302b73747265ull,0x33752e627573090aull,0x3734317225092032ull,
0x2c3634317225202cull,0x20202020203b3320ull,0x646c090a202f2f09ull,0x752e6d617261702eull,
0x3964722509203436ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x6172656e65673831ull,
0x676e616972546574ull,0x6c6636503273656cull,0x505f30533474616full,0x753568505f31536aull,
0x535f335333746e69ull,0x74616f6c66365f33ull,0x6d756e5f6a6a6633ull,0x6163537374726556ull,
0x2f093b5d64656e6eull,0x3135333a6469202full,0x616475635f5f2039ull,0x315a5f5f6d726170ull,
0x746172656e656738ull,0x6c676e6169725465ull,0x6f6c663650327365ull,0x6a505f3053347461ull,
0x69753568505f3153ull,0x33535f335333746eull,0x3374616f6c66365full,0x566d756e5f6a6a66ull,
0x6e61635373747265ull,0x0a3078302b64656eull,0x3436752e74766309ull,0x722509203233752eull,
0x317225202c303164ull,0x0920202020203b33ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,
0x202c313164722509ull,0x34202c3031647225ull,0x0a202f2f0920203bull,0x3436752e64646109ull,
0x2c32316472250920ull,0x25202c3964722520ull,0x0920203b31316472ull,0x6c756d090a202f2full,
0x203233752e6f6c2eull,0x202c383431722509ull,0x31202c3832317225ull,0x0a202f2f09203b36ull,
0x3233732e64646109ull,0x2c39343172250920ull,0x202c383431722520ull,0x0920202020203b31ull,
0x646461090a202f2full,0x722509203233732eull,0x317225202c303531ull,0x20203b32202c3834ull,
0x0a202f2f09202020ull,0x3233732e766f6d09ull,0x2c31353172250920ull,0x20202020203b3020ull,
0x0920202020202020ull,0x766f6d090a202f2full,0x722509203233732eull,0x317225202c323531ull,
0x20202020203b3534ull,0x0a202f2f09202020ull,0x34395f335f744c24ull,0x6f6c3c2f2f200a3aull,
0x706f6f4c203e706full,0x696c2079646f6220ull,0x202c37303520656eull,0x20676e697473656eull,
0x31203a6874706564ull,0x616d69747365202cull,0x7265746920646574ull,0x203a736e6f697461ull,
0x0a6e776f6e6b6e75ull,0x363109636f6c2e09ull,0x090a300939303509ull,0x61626f6c672e646cull,
0x2509203233752e6cull,0x255b202c33353172ull,0x3b5d302b32316472ull,0x333a6469202f2f09ull,
0x646461090a303235ull,0x722509203233752eull,0x317225202c343531ull,0x35317225202c3135ull,
0x0a202f2f09203b33ull,0x3233732e64646109ull,0x2c35353172250920ull,0x202c313531722520ull,
0x09203b3834317225ull,0x766f6d090a202f2full,0x722509203233732eull,0x203b30202c363531ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x3233732e766f6d09ull,0x2c37353172250920ull,
0x20202020203b3020ull,0x0920202020202020ull,0x766f6d090a202f2full,0x722509203233732eull,
0x203b30202c383531ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x2e64312e78657409ull,
0x732e3233752e3476ull,0x353172257b203233ull,0x2c30363172252c39ull,0x72252c3136317225ull,
0x72745b2c7d323631ull,0x72257b2c78655469ull,0x353172252c353531ull,0x2c37353172252c36ull,
0x3b5d7d3835317225ull,0x3109636f6c2e090aull,0x0a30093331350936ull,0x3233732e766f6d09ull,
0x2c33363172250920ull,0x203b393531722520ull,0x0920202020202020ull,0x646461090a202f2full,
0x722509203233732eull,0x317225202c343631ull,0x35317225202c3934ull,0x0a202f2f09203b31ull,
0x3233732e766f6d09ull,0x2c35363172250920ull,0x20202020203b3020ull,0x0920202020202020ull,
0x766f6d090a202f2full,0x722509203233732eull,0x203b30202c363631ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x3233732e766f6d09ull,0x2c37363172250920ull,0x20202020203b3020ull,
0x0920202020202020ull,0x786574090a202f2full,0x752e34762e64312eull,0x7b203233732e3233ull,
0x72252c3836317225ull,0x373172252c393631ull,0x7d31373172252c30ull,0x7865546972745b2cull,
0x2c34363172257b2cull,0x72252c3536317225ull,0x363172252c363631ull,0x6c2e090a3b5d7d37ull,
0x323509363109636full,0x766f6d090a300930ull,0x722509203233732eull,0x317225202c323731ull,
0x20202020203b3836ull,0x0a202f2f09202020ull,0x3233732e64646109ull,0x2c33373172250920ull,
0x202c303531722520ull,0x09203b3135317225ull,0x766f6d090a202f2full,0x722509203233732eull,
0x203b30202c343731ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x3233732e766f6d09ull,
0x2c35373172250920ull,0x20202020203b3020ull,0x0920202020202020ull,0x766f6d090a202f2full,
0x722509203233732eull,0x203b30202c363731ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x2e64312e78657409ull,0x732e3233752e3476ull,0x373172257b203233ull,0x2c38373172252c37ull,
0x72252c3937317225ull,0x72745b2c7d303831ull,0x72257b2c78655469ull,0x373172252c333731ull,
0x2c35373172252c34ull,0x3b5d7d3637317225ull,0x3109636f6c2e090aull,0x0a30093732350936ull,
0x3233732e766f6d09ull,0x2c31383172250920ull,0x203b373731722520ull,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x3938330936310963ull,0x2e6c756d090a3009ull,0x09203233752e6f6cull,
0x25202c3238317225ull,0x3233202c32373172ull,0x090a202f2f09203bull,0x203233752e646461ull,
0x202c333831722509ull,0x25202c3238317225ull,0x2f0920203b303172ull,0x2e747663090a202full,
0x203233752e343675ull,0x202c333164722509ull,0x20203b3338317225ull,0x090a202f2f092020ull,
0x752e6f6c2e6c756dull,0x3164722509203436ull,0x3331647225202c34ull,0x2f09203b3231202cull,
0x2e646461090a202full,0x6472250920343675ull,0x35647225202c3531ull,0x3b3431647225202cull,
0x090a202f2f092020ull,0x65726168732e646cull,0x2509203233662e64ull,0x255b202c32343166ull,
0x3b5d302b35316472ull,0x333a6469202f2f09ull,0x75635f5f20313235ull,0x6c747265765f6164ull,
0x2b34323539747369ull,0x2e646c090a307830ull,0x662e646572616873ull,0x3431662509203233ull,
0x316472255b202c33ull,0x2f2f093b5d342b35ull,0x323235333a646920ull,0x5f616475635f5f20ull,
0x7473696c74726576ull,0x3078302b34323539ull,0x6168732e646c090aull,0x203233662e646572ull,
0x202c343431662509ull,0x382b35316472255bull,0x6469202f2f093b5dull,0x5f5f20333235333aull,
0x7265765f61647563ull,0x3235397473696c74ull,0x6d090a3078302b34ull,0x33752e6f6c2e6c75ull,
0x3438317225092032ull,0x2c3336317225202cull,0x2f2f09203b323320ull,0x752e646461090a20ull,
0x3831722509203233ull,0x3438317225202c35ull,0x203b30317225202cull,0x63090a202f2f0920ull,
0x752e3436752e7476ull,0x3164722509203233ull,0x3538317225202c36ull,0x2f2f09202020203bull,
0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c37316472ull,0x3b3231202c363164ull,
0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3831647225ull,0x647225202c356472ull,
0x2f2f0920203b3731ull,0x68732e646c090a20ull,0x3233662e64657261ull,0x2c35343166250920ull,
0x2b38316472255b20ull,0x69202f2f093b5d30ull,0x5f20343235333a64ull,0x65765f616475635full,
0x35397473696c7472ull,0x090a3078302b3432ull,0x65726168732e646cull,0x2509203233662e64ull,
0x255b202c36343166ull,0x3b5d342b38316472ull,0x333a6469202f2f09ull,0x75635f5f20353235ull,
0x6c747265765f6164ull,0x2b34323539747369ull,0x2e646c090a307830ull,0x662e646572616873ull,
0x3431662509203233ull,0x316472255b202c37ull,0x2f2f093b5d382b38ull,0x363235333a646920ull,
0x5f616475635f5f20ull,0x7473696c74726576ull,0x3078302b34323539ull,0x3109636f6c2e090aull,
0x0a30093039330936ull,0x2e6f6c2e6c756d09ull,0x3172250920323375ull,0x38317225202c3638ull,
0x09203b3233202c31ull,0x646461090a202f2full,0x722509203233752eull,0x317225202c373831ull,
0x30317225202c3638ull,0x0a202f2f0920203bull,0x3436752e74766309ull,0x722509203233752eull,
0x317225202c393164ull,0x09202020203b3738ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,
0x202c303264722509ull,0x31202c3931647225ull,0x0a202f2f09203b32ull,0x3436752e64646109ull,
0x2c31326472250920ull,0x25202c3564722520ull,0x0920203b30326472ull,0x2e646c090a202f2full,
0x662e646572616873ull,0x3431662509203233ull,0x326472255b202c38ull,0x2f2f093b5d302b31ull,
0x373235333a646920ull,0x5f616475635f5f20ull,0x7473696c74726576ull,0x3078302b34323539ull,
0x6168732e646c090aull,0x203233662e646572ull,0x202c393431662509ull,0x342b31326472255bull,
0x6469202f2f093b5dull,0x5f5f20383235333aull,0x7265765f61647563ull,0x3235397473696c74ull,
0x6c090a3078302b34ull,0x6465726168732e64ull,0x662509203233662eull,0x72255b202c303531ull,
0x093b5d382b313264ull,0x35333a6469202f2full,0x6475635f5f203932ull,0x696c747265765f61ull,
0x302b343235397473ull,0x636f6c2e090a3078ull,0x0935333509363109ull,0x2e70746573090a30ull,
0x09203233752e656cull,0x7225202c34327025ull,0x317225202c373431ull,0x0a202f2f093b3435ull,
0x6220343270254009ull,0x5f744c2409206172ull,0x2020203b35395f33ull,0x0920202020202020ull,
0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x37303520656e696cull,0x6c2064616568202cull,0x242064656c656261ull,0x0a34395f335f744cull,
0x363109636f6c2e09ull,0x090a300938333509ull,0x2e3436752e747663ull,0x6472250920323375ull,
0x35317225202c3232ull,0x2f09202020203b34ull,0x2e6c756d090a202full,0x09203436752e6f6cull,
0x25202c3332647225ull,0x3631202c32326472ull,0x090a202f2f09203bull,0x6d617261702e646cull,
0x722509203436752eull,0x5f5f5b202c343264ull,0x6d72617061647563ull,0x6e656738315a5f5full,
0x6972546574617265ull,0x503273656c676e61ull,0x533474616f6c6636ull,0x505f31536a505f30ull,
0x5333746e69753568ull,0x6c66365f33535f33ull,0x5f6a6a663374616full,0x2f2f093b5d736f70ull,
0x303335333a646920ull,0x70616475635f5f20ull,0x38315a5f5f6d7261ull,0x65746172656e6567ull,
0x656c676e61697254ull,0x616f6c6636503273ull,0x536a505f30533474ull,0x6e69753568505f31ull,
0x5f33535f33533374ull,0x663374616f6c6636ull,0x302b736f705f6a6aull,0x2e646461090a3078ull,
0x6472250920343675ull,0x32647225202c3532ull,0x3332647225202c34ull,0x090a202f2f09203bull,
0x203233662e766f6dull,0x202c313531662509ull,0x3030303866336630ull,0x2f092020203b3030ull,
0x6f6c2e090a31202full,0x3938330936310963ull,0x732e646c090a3009ull,0x33662e6465726168ull,
0x3534316625092032ull,0x38316472255b202cull,0x202f2f093b5d302bull,0x6168732e646c090aull,
0x203233662e646572ull,0x202c363431662509ull,0x342b38316472255bull,0x090a202f2f093b5dull,
0x65726168732e646cull,0x2509203233662e64ull,0x255b202c37343166ull,0x3b5d382b38316472ull,
0x7473090a202f2f09ull,0x2e6c61626f6c672eull,0x09203233662e3476ull,0x302b35326472255bull,
0x343166257b202c5dull,0x2c36343166252c35ull,0x66252c3734316625ull,0x2f2f093b7d313531ull,
0x68732e646c090a20ull,0x3233662e64657261ull,0x2c33343166250920ull,0x2b35316472255b20ull,
0x0a202f2f093b5d34ull,0x363109636f6c2e09ull,0x090a300939333509ull,0x203233662e627573ull,
0x202c323531662509ull,0x25202c3334316625ull,0x2f09203b36343166ull,0x636f6c2e090a202full,
0x0930393309363109ull,0x68732e646c090a30ull,0x3233662e64657261ull,0x2c30353166250920ull,
0x2b31326472255b20ull,0x0a202f2f093b5d38ull,0x363109636f6c2e09ull,0x090a300939333509ull,
0x203233662e627573ull,0x202c333531662509ull,0x25202c3035316625ull,0x2f09203b37343166ull,
0x636f6c2e090a202full,0x0930393309363109ull,0x68732e646c090a30ull,0x3233662e64657261ull,
0x2c39343166250920ull,0x2b31326472255b20ull,0x0a202f2f093b5d34ull,0x363109636f6c2e09ull,
0x090a300939333509ull,0x203233662e627573ull,0x202c343531662509ull,0x25202c3934316625ull,
0x2f09203b36343166ull,0x636f6c2e090a202full,0x0939383309363109ull,0x68732e646c090a30ull,
0x3233662e64657261ull,0x2c34343166250920ull,0x2b35316472255b20ull,0x0a202f2f093b5d38ull,
0x363109636f6c2e09ull,0x090a300939333509ull,0x203233662e627573ull,0x202c353531662509ull,
0x25202c3434316625ull,0x2f09203b37343166ull,0x2e6c756d090a202full,0x3166250920323366ull,
0x35316625202c3635ull,0x3335316625202c32ull,0x090a202f2f09203bull,0x203233662e6c756dull,
0x202c373531662509ull,0x25202c3435316625ull,0x2f09203b35353166ull,0x702e646c090a202full,
0x3436752e6d617261ull,0x2c36326472250920ull,0x616475635f5f5b20ull,0x315a5f5f6d726170ull,
0x746172656e656738ull,0x6c676e6169725465ull,0x6f6c663650327365ull,0x6a505f3053347461ull,
0x69753568505f3153ull,0x33535f335333746eull,0x3374616f6c66365full,0x6d726f6e5f6a6a66ull,
0x6469202f2f093b5dull,0x5f5f20353335333aull,0x6d72617061647563ull,0x6e656738315a5f5full,
0x6972546574617265ull,0x503273656c676e61ull,0x533474616f6c6636ull,0x505f31536a505f30ull,
0x5333746e69753568ull,0x6c66365f33535f33ull,0x5f6a6a663374616full,0x3078302b6d726f6eull,
0x36752e646461090aull,0x3732647225092034ull,0x2c3632647225202cull,0x203b333264722520ull,
0x7573090a202f2f09ull,0x2509203233662e62ull,0x6625202c38353166ull,0x316625202c363531ull,
0x202f2f09203b3735ull,0x3109636f6c2e090aull,0x0a30093039330936ull,0x726168732e646c09ull,
0x09203233662e6465ull,0x5b202c3834316625ull,0x5d302b3132647225ull,0x2e090a202f2f093bull,
0x3509363109636f6cull,0x7573090a30093933ull,0x2509203233662e62ull,0x6625202c39353166ull,
0x316625202c383431ull,0x202f2f09203b3534ull,0x3109636f6c2e090aull,0x0a30093938330936ull,
0x726168732e646c09ull,0x09203233662e6465ull,0x5b202c3234316625ull,0x5d302b3531647225ull,
0x2e090a202f2f093bull,0x3509363109636f6cull,0x7573090a30093933ull,0x2509203233662e62ull,
0x6625202c30363166ull,0x316625202c323431ull,0x202f2f09203b3534ull,0x33662e6c756d090aull,
0x3136316625092032ull,0x2c3535316625202cull,0x203b393531662520ull,0x756d090a202f2f09ull,
0x2509203233662e6cull,0x6625202c32363166ull,0x316625202c333531ull,0x202f2f09203b3036ull,
0x33662e627573090aull,0x3336316625092032ull,0x2c3136316625202cull,0x203b323631662520ull,
0x756d090a202f2f09ull,0x2509203233662e6cull,0x6625202c34363166ull,0x316625202c323531ull,
0x202f2f09203b3935ull,0x33662e6c756d090aull,0x3536316625092032ull,0x2c3435316625202cull,
0x203b303631662520ull,0x7573090a202f2f09ull,0x2509203233662e62ull,0x6625202c36363166ull,
0x316625202c353631ull,0x202f2f09203b3436ull,0x33662e766f6d090aull,0x3736316625092032ull,
0x303030306630202cull,0x2020203b30303030ull,0x73090a30202f2f09ull,0x6c61626f6c672e74ull,
0x203233662e34762eull,0x2b37326472255b09ull,0x3166257b202c5d30ull,0x33363166252c3835ull,
0x252c36363166252cull,0x2f093b7d37363166ull,0x636f6c2e090a202full,0x0931343509363109ull,
0x68732e646c090a30ull,0x3233662e64657261ull,0x2c38363166250920ull,0x2b35316472255b20ull,
0x69202f2f093b5d34ull,0x5f20303435333a64ull,0x65765f616475635full,0x35397473696c7472ull,
0x090a3078302b3432ull,0x65726168732e646cull,0x2509203233662e64ull,0x255b202c39363166ull,
0x3b5d382b35316472ull,0x333a6469202f2f09ull,0x75635f5f20313435ull,0x6c747265765f6164ull,
0x2b34323539747369ull,0x2e646c090a307830ull,0x662e646572616873ull,0x3731662509203233ull,
0x316472255b202c30ull,0x2f2f093b5d302b35ull,0x323435333a646920ull,0x5f616475635f5f20ull,
0x7473696c74726576ull,0x3078302b34323539ull,0x33662e766f6d090aull,0x3137316625092032ull,
0x303866336630202cull,0x2020203b30303030ull,0x73090a31202f2f09ull,0x6c61626f6c672e74ull,
0x203233662e34762eull,0x2b35326472255b09ull,0x66257b202c5d3631ull,0x363166252c303731ull,
0x2c39363166252c38ull,0x093b7d3137316625ull,0x6f6c2e090a202f2full,0x3234350936310963ull,
0x2e766f6d090a3009ull,0x3166250920323366ull,0x30306630202c3237ull,0x203b303030303030ull,
0x0a30202f2f092020ull,0x626f6c672e747309ull,0x33662e34762e6c61ull,0x326472255b092032ull,
0x7b202c5d36312b37ull,0x66252c3835316625ull,0x363166252c333631ull,0x7d32373166252c36ull,
0x2e090a202f2f093bull,0x3509363109636f6cull,0x646c090a30093434ull,0x2e6465726168732eull,
0x3166250920323366ull,0x6472255b202c3337ull,0x2f093b5d342b3132ull,0x3535333a6469202full,
0x616475635f5f2031ull,0x73696c747265765full,0x78302b3432353974ull,0x68732e646c090a30ull,
0x3233662e64657261ull,0x2c34373166250920ull,0x2b31326472255b20ull,0x69202f2f093b5d38ull,
0x5f20323535333a64ull,0x65765f616475635full,0x35397473696c7472ull,0x090a3078302b3432ull,
0x65726168732e646cull,0x2509203233662e64ull,0x255b202c35373166ull,0x3b5d302b31326472ull,
0x333a6469202f2f09ull,0x75635f5f20333535ull,0x6c747265765f6164ull,0x2b34323539747369ull,
0x766f6d090a307830ull,0x662509203233662eull,0x336630202c363731ull,0x3b30303030303866ull,
0x31202f2f09202020ull,0x6f6c672e7473090aull,0x662e34762e6c6162ull,0x6472255b09203233ull,
0x202c5d32332b3532ull,0x252c35373166257bull,0x3166252c33373166ull,0x36373166252c3437ull,
0x090a202f2f093b7dull,0x09363109636f6c2eull,0x6d090a3009353435ull,0x09203233662e766full,
0x30202c3737316625ull,0x3030303030303066ull,0x2f2f092020203b30ull,0x672e7473090a3020ull,
0x34762e6c61626f6cull,0x255b09203233662eull,0x5d32332b37326472ull,0x38353166257b202cull,
0x252c33363166252cull,0x3166252c36363166ull,0x202f2f093b7d3737ull,0x395f335f744c240aull,
0x6c3c2f2f200a3a35ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c37303520656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x090a34395f335f74ull,
0x203233732e646461ull,0x202c313531722509ull,0x33202c3135317225ull,0x2f0920202020203bull,
0x70746573090a202full,0x203233752e746c2eull,0x25202c3532702509ull,0x7225202c31353172ull,
0x202f2f093b373331ull,0x203532702540090aull,0x744c240920617262ull,0x20203b34395f335full,
0x2020202020202020ull,0x744c240a202f2f09ull,0x090a3a32395f335full,0x09363109636f6c2eull,
0x65090a3009383435ull,0x202020203b746978ull,0x2020202020202020ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x6e6557444c240a20ull,0x656738315a5f5f64ull,0x725465746172656eull,
0x3273656c676e6169ull,0x3474616f6c663650ull,0x5f31536a505f3053ull,0x33746e6975356850ull,
0x66365f33535f3353ull,0x6a6a663374616f6cull,0x202f2f207d090a3aull,0x656e656738315a5full,
0x6169725465746172ull,0x36503273656c676eull,0x30533474616f6c66ull,0x68505f31536a505full,
0x335333746e697535ull,0x6f6c66365f33535full,0x0a0a6a6a66337461ull,0x0000000000000000ull
};


}


static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_13",(char*)__deviceText_$compute_13$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{(char*)"sm_13",(char*)__deviceText_$sm_13$},{0,0}};
static __cudaFatDebugEntry __debugEntries[] = {{0,0}};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000003,0x8ecc680c,(char*)"628c4864c4ab9abd",(char*)"marchingCubes_kernel.cu",(char*)" ",__ptxEntries,__cubinEntries,__debugEntries,0,0,0,0,0};
# 5 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.c" 2
# 1 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 1
# 74 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h"
# 1 "/home/gdiamos/temp/cuda/bin//../include/host_defines.h" 1
# 75 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 2
# 100 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h"
extern "C" {


extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterShared(
  void **fatCubinHandle,
  void **devicePtr
);

extern void __cudaRegisterSharedVar(
  void **fatCubinHandle,
  void **devicePtr,
  size_t size,
  size_t alignment,
  int storage
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);


}




extern int atexit(void(*)(void)) throw();







static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}
# 215 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h"
# 1 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h" 1
# 68 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h"
# 1 "/home/gdiamos/temp/cuda/bin//../include/crt/func_macro.h" 1 3
# 69 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h" 2

static clock_t __cuda_clock(void)
{
  return clock();
}

static void *__cuda_memset(void *s, int c, size_t n)
{
  return memset(s, c, n);
}

static void *__cuda_memcpy(void *d, const void *s, size_t n)
{
  return memcpy(d, s, n);
}
# 93 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h"
# 1 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 1 3
# 844 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
extern __attribute__((__weak__)) int __cuda_error_not_implememted(void); int __cuda_error_not_implememted(void);
# 900 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
static int __cuda_abs(int a)
{
  return abs(a);
}

static float __cuda_fabsf(float a)
{
  return fabsf(a);
}

static long long int __cuda_llabs(long long int a)
{

  return ::llabs(a);



}

static float __cuda_exp2f(float a)
{
  return exp2f(a);
}

# 1 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 1 3
# 347 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/math_constants.h" 1 3
# 348 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 2 3



static int __cuda___isnan(double a);
static int __cuda___isnanf(float a);
static int __double2int_rz(double);
static unsigned int __double2uint_rz(double);
static long long int __double2ll_rz(double);
static unsigned long long int __double2ull_rz(double);
# 370 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
static int __mulhi(int a, int b)
{
  long long int c = (long long int)a * (long long int)b;

  return (int)(c >> 32);
}

static unsigned int __umulhi(unsigned int a, unsigned int b)
{
  unsigned long long int c = (unsigned long long int)a * (unsigned long long int)b;

  return (unsigned int)(c >> 32);
}

static unsigned long long int __umul64hi(unsigned long long int a, unsigned long long int b)
{
  unsigned int a_lo = (unsigned int)a;
  unsigned long long int a_hi = a >> 32;
  unsigned int b_lo = (unsigned int)b;
  unsigned long long int b_hi = b >> 32;
  unsigned long long int m1 = a_lo * b_hi;
  unsigned long long int m2 = a_hi * b_lo;
  unsigned int carry;

  carry = (0ULL + __umulhi(a_lo, b_lo) + (unsigned int)m1 + (unsigned int)m2) >> 32;

  return a_hi * b_hi + (m1 >> 32) + (m2 >> 32) + carry;
}

static long long int __mul64hi(long long int a, long long int b)
{
  long long int res;
  res = __umul64hi(a, b);
  if (a < 0LL) res = res - b;
  if (b < 0LL) res = res - a;
  return res;
}

static float __saturatef(float a)
{
  return a >= 1.0f ? 1.0f : a <= 0.0f ? 0.0f : a;
}

static unsigned int __sad(int a, int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static unsigned int __usad(unsigned int a, unsigned int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static int __mul24(int a, int b)
{

  a &= 0xffffff;
  a = (a & 0x800000) != 0 ? a | ~0xffffff : a;
  b &= 0xffffff;
  b = (b & 0x800000) != 0 ? b | ~0xffffff : b;


  return a * b;
}

static unsigned int __umul24(unsigned int a, unsigned int b)
{

  a &= 0xffffff;
  b &= 0xffffff;


  return a * b;
}

static float __int_as_float(int a)
{
  volatile union {int a; float b;} u;

  u.a = a;

  return u.b;
}

static int __float_as_int(float a)
{
  volatile union {float a; int b;} u;

  u.a = a;

  return u.b;
}

static long long int __internal_float2ll_kernel(float a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  ia = __float_as_int(a);
  shift = 189 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)(((ia << 8) | 0x80000000) >> 1) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundMinInf && t != 0ULL && ia > 0x80000000) {
    res++;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL && (int)ia > 0) {
    res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)-(long long int)res;
  return (long long int)res;
}

static int __internal_float2int(float a, enum cudaRoundMode rndMode)
{
  return (int)__internal_float2ll_kernel(a, 2147483647LL, -2147483648LL, 0LL, rndMode);
}

static int __float2int_rz(float a)
{



  return __internal_float2int(a, cudaRoundZero);

}

static int __float2int_ru(float a)
{
  return __internal_float2int(a, cudaRoundPosInf);
}

static int __float2int_rd(float a)
{
  return __internal_float2int(a, cudaRoundMinInf);
}

static int __float2int_rn(float a)
{
  return __internal_float2int(a, cudaRoundNearest);
}

static long long int __internal_float2ll(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __float2ll_rz(float a)
{



  return __internal_float2ll(a, cudaRoundZero);

}

static long long int __float2ll_ru(float a)
{
  return __internal_float2ll(a, cudaRoundPosInf);
}

static long long int __float2ll_rd(float a)
{
  return __internal_float2ll(a, cudaRoundMinInf);
}

static long long int __float2ll_rn(float a)
{
  return __internal_float2ll(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull_kernel(float a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;
  ia = __float_as_int(a);
  shift = 190 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)((ia << 8) | 0x80000000) << 32;
  if (shift >= 64) {
    t = res >> (int)(shift > 64);
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL) {
    res++;
  }
  return res;
}

static unsigned int __internal_float2uint(float a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_float2ull_kernel(a, 4294967295U, 0U, rndMode);
}

static unsigned int __float2uint_rz(float a)
{



  return __internal_float2uint(a, cudaRoundZero);

}

static unsigned int __float2uint_ru(float a)
{
  return __internal_float2uint(a, cudaRoundPosInf);
}

static unsigned int __float2uint_rd(float a)
{
  return __internal_float2uint(a, cudaRoundMinInf);
}

static unsigned int __float2uint_rn(float a)
{
  return __internal_float2uint(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __float2ull_rz(float a)
{



  return __internal_float2ull(a, cudaRoundZero);

}

static unsigned long long int __float2ull_ru(float a)
{
  return __internal_float2ull(a, cudaRoundPosInf);
}

static unsigned long long int __float2ull_rd(float a)
{
  return __internal_float2ull(a, cudaRoundMinInf);
}

static unsigned long long int __float2ull_rn(float a)
{
  return __internal_float2ull(a, cudaRoundNearest);
}

static int __internal_normalize64(unsigned long long int *a)
{
  int lz = 0;

  if ((*a & 0xffffffff00000000ULL) == 0ULL) {
    *a <<= 32;
    lz += 32;
  }
  if ((*a & 0xffff000000000000ULL) == 0ULL) {
    *a <<= 16;
    lz += 16;
  }
  if ((*a & 0xff00000000000000ULL) == 0ULL) {
    *a <<= 8;
    lz += 8;
  }
  if ((*a & 0xf000000000000000ULL) == 0ULL) {
    *a <<= 4;
    lz += 4;
  }
  if ((*a & 0xC000000000000000ULL) == 0ULL) {
    *a <<= 2;
    lz += 2;
  }
  if ((*a & 0x8000000000000000ULL) == 0ULL) {
    *a <<= 1;
    lz += 1;
  }
  return lz;
}

static int __internal_normalize(unsigned int *a)
{
  unsigned long long int t = (unsigned long long int)*a;
  int lz = __internal_normalize64(&t);

  *a = (unsigned int)(t >> 32);

  return lz - 32;
}

static float __internal_int2float_kernel(int a, enum cudaRoundMode rndMode)
{
  volatile union {
    float f;
    unsigned int i;
  } res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  if (a < 0) res.i = (unsigned int)-a;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if (a < 0) res.i |= 0x80000000;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.f;
}

static float __int2float_rz(int a)
{
  return __internal_int2float_kernel(a, cudaRoundZero);
}

static float __int2float_ru(int a)
{
  return __internal_int2float_kernel(a, cudaRoundPosInf);
}

static float __int2float_rd(int a)
{
  return __internal_int2float_kernel(a, cudaRoundMinInf);
}

static float __int2float_rn(int a)
{



  return __internal_int2float_kernel(a, cudaRoundNearest);

}

static float __internal_uint2float_kernel(unsigned int a, enum cudaRoundMode rndMode)
{
  volatile union {
    float f;
    unsigned int i;
  } res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.f;
}

static float __uint2float_rz(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundZero);
}

static float __uint2float_ru(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundPosInf);
}

static float __uint2float_rd(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundMinInf);
}

static float __uint2float_rn(unsigned int a)
{



  return __internal_uint2float_kernel(a, cudaRoundNearest);

}

static float __ll2float_rn(long long int a)
{
  return (float)a;
}

static float __ull2float_rn(unsigned long long int a)
{



  unsigned long long int temp;
  unsigned int res, t;
  int shift;
  if (a == 0ULL) return 0.0f;
  temp = a;
  shift = __internal_normalize64(&temp);
  temp = (temp >> 8) | ((temp & 0xffULL) ? 1ULL : 0ULL);
  res = (unsigned int)(temp >> 32);
  t = (unsigned int)temp;
  res += (127 + 62 - shift) << 23;
  res += t == 0x80000000 ? res & 1 : t >> 31;
  return __int_as_float(res);

}

static float __internal_fmul_kernel(float a, float b, int rndNearest)
{
  unsigned long long product;
  volatile union {
    float f;
    unsigned int i;
  } xx, yy;
  unsigned expo_x, expo_y;

  xx.f = a;
  yy.f = b;

  expo_y = 0xFF;
  expo_x = expo_y & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
multiply:
    expo_x = expo_x + expo_y;
    expo_y = xx.i ^ yy.i;
    xx.i = xx.i & 0x00ffffff;
    yy.i = yy.i << 8;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i | 0x80000000;

    product = ((unsigned long long)xx.i) * yy.i;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xx.i = (unsigned int)(product >> 32);
    yy.i = (unsigned int)(product & 0xffffffff);

    if (xx.i < 0x00800000) {
      xx.i = (xx.i << 1) | (yy.i >> 31);
      yy.i = (yy.i << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xx.i = xx.i | expo_y;
      xx.i = xx.i + (expo_x << 23);

      if (yy.i < 0x80000000) return xx.f;
      xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
               && rndNearest);
      return xx.f;
    } else if ((int)expo_x >= 254) {

      xx.i = (expo_y | 0x7F800000) - (!rndNearest);
      return xx.f;
    } else {

      expo_x = ((unsigned int)-((int)expo_x));
      if (expo_x > 25) {

        xx.i = expo_y;
        return xx.f;
      } else {
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
                 && rndNearest);
        return xx.f;
      }
    }
  } else {
    product = xx.i ^ yy.i;
    product = product & 0x80000000;
    if (!(xx.i & 0x7fffffff)) {
      if (expo_y != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_y = yy.i << 1;
      if (expo_y == 0xFF000000) {
        xx.i = expo_y | 0x00C00000;
      } else {
        xx.i = yy.i | 0x00400000;
      }
      return xx.f;
    }
    if (!(yy.i & 0x7fffffff)) {
      if (expo_x != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_x = xx.i << 1;
      if (expo_x == 0xFF000000) {
        xx.i = expo_x | 0x00C00000;
      } else {
        xx.i = xx.i | 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {
      expo_y++;
      expo_x++;
      if (expo_x == 0) {
        expo_y |= xx.i & 0x80000000;




        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        xx.i = (xx.i >> 8) | (expo_y & 0x80000000);
        expo_y &= ~0x80000000;
        expo_y--;
        goto multiply;
      }
      if (expo_y == 0) {
        expo_x |= yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        yy.i = (yy.i >> 8) | (expo_x & 0x80000000);
        expo_x &= ~0x80000000;
        expo_x--;
        goto multiply;
      }
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xFF000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xFF000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    xx.i = (unsigned int)product | 0x7f800000;
    return xx.f;
  }
}

static float __internal_fadd_kernel(float a, float b, int rndNearest)
{
  volatile union {
    float f;
    unsigned int i;
  } xx, yy;
  unsigned int expo_x;
  unsigned int expo_y;
  unsigned int temp;

  xx.f = a;
  yy.f = b;


  expo_y = yy.i << 1;
  if (expo_y > (xx.i << 1)) {
    expo_y = xx.i;
    xx.i = yy.i;
    yy.i = expo_y;
  }

  temp = 0xff;
  expo_x = temp & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {

add:
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xx.i ^ yy.i;
    xx.i = xx.i & ~0x7f000000;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i & ~0xff000000;
    yy.i = yy.i | 0x00800000;

    if ((int)temp < 0) {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      temp = (unsigned int)(-((int)temp));
      xx.i = xx.i - (yy.i >> expo_y) - (temp ? 1 : 0);
      if (xx.i & 0x00800000) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i & ~0x00800000;
          xx.i = (xx.i + (expo_x << 23)) + 0x00800000;
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {
        if ((temp | (xx.i << 1)) == 0) {

          xx.i = 0;
          return xx.f;
        }

        yy.i = xx.i & 0x80000000;
        do {
          xx.i = (xx.i << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xx.i & 0x00800000));
        xx.i = xx.i | yy.i;
      }
    } else {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      xx.i = xx.i + (yy.i >> expo_y);
      if (!(xx.i & 0x01000000)) {
        if (expo_x <= 0xFD) {
          expo_y = xx.i & 1;
          xx.i = xx.i + (expo_x << 23);
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {

        temp = (xx.i << 31) | (temp >> 1);

        xx.i = ((xx.i & 0x80000000) | (xx.i >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      expo_y = xx.i & 1;
      xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
               && rndNearest);
      xx.i = xx.i + (expo_x << 23);
      return xx.f;
    }
    if ((int)expo_x >= 254) {

        xx.i = ((xx.i & 0x80000000) | 0x7f800000) - (!rndNearest);
        return xx.f;
    }

    expo_y = expo_x + 32;
    yy.i = xx.i & 0x80000000;
    xx.i = xx.i & ~0xff000000;

    expo_x = (unsigned int)(-((int)expo_x));
    temp = xx.i << expo_y | ((temp) ? 1 : 0);
    xx.i = yy.i | (xx.i >> expo_x);
    xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
             && rndNearest);
    return xx.f;
  } else {

    if (!(yy.i << 1)) {
      if (xx.i == 0x80000000) {
          xx.i = yy.i;
      }
      if ((xx.i << 1) > 0xff000000) {
          xx.i |= 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {

      if (expo_x == (unsigned int) -1) {
        temp = xx.i & 0x80000000;
        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        expo_x++;
        xx.i = (xx.i >> 8) | temp;
      }
      if (expo_y == (unsigned int) -1) {
        temp = yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        expo_y++;
        yy.i = (yy.i >> 8) | temp;
      }
      goto add;
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xff000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xff000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    if ((expo_x == 0xff000000) && (expo_y == 0xff000000)) {




      expo_x = xx.i ^ yy.i;
      xx.i = xx.i | ((expo_x) ? 0xffc00000 : 0);
      return xx.f;
    }

    if (expo_y == 0xff000000) {
      xx.i = yy.i;
    }
    return xx.f;
  }
}

static float __fadd_rz(float a, float b)
{
  return __internal_fadd_kernel(a, b, 0);
}

static float __fmul_rz(float a, float b)
{
  return __internal_fmul_kernel(a, b, 0);
}

static float __fadd_rn(float a, float b)
{
  return __internal_fadd_kernel(a, b, 1);
}

static float __fmul_rn(float a, float b)
{
  return __internal_fmul_kernel(a, b, 1);
}

static void __brkpt(int c)
{

}
# 1164 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
extern int __cudaSynchronizeThreads(void**, void*);



static inline __attribute__((always_inline)) void __syncthreads(void)
{
  volatile int _ = 0;
  L: if (__cudaSynchronizeThreads((void**)&&L, (void*)&_)) goto L;
}
# 1185 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
static void __trap(void)
{
  __builtin_trap();
}
# 1207 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
static float __fdividef(float a, float b)
{






  if (__cuda_fabsf(b) > 8.507059173e37f) {
    if (__cuda_fabsf(a) <= 3.402823466e38f) {
      return ((a / b) / 3.402823466e38f) / 3.402823466e38f;
    } else {
      return __int_as_float(0x7fffffff);
    }
  } else {
    return a / b;
  }

}

static float __sinf(float a)
{
  return sinf(a);
}

static float __cosf(float a)
{
  return cosf(a);
}

static float __log2f(float a)
{
  return log2f(a);
}







static float __internal_accurate_fdividef(float a, float b)
{
  if (__cuda_fabsf(b) > 8.507059173e37f) {
    a *= .25f;
    b *= .25f;
  }
  return __fdividef(a, b);
}

static float __tanf(float a)
{



  return __sinf(a) / __cosf(a);

}

static void __sincosf(float a, float *sptr, float *cptr)
{



  *sptr = __sinf(a);
  *cptr = __cosf(a);

}

static float __expf(float a)
{



  return __cuda_exp2f(a * 1.442695041f);

}

static float __exp10f(float a)
{



  return __cuda_exp2f(a * 3.321928094f);

}

static float __log10f(float a)
{



  return 0.301029996f * __log2f(a);

}

static float __logf(float a)
{



  return 0.693147181f * __log2f(a);

}

static float __powf(float a, float b)
{



  return __cuda_exp2f(b * __log2f(a));

}

static float fdividef(float a, float b)
{





  return __internal_accurate_fdividef(a, b);

}

static int __clz(int a)
{
  return (a)?(158-(__float_as_int(__uint2float_rz((unsigned int)a))>>23)):32;
}

static int __ffs(int a)
{
  return 32 - __clz (a & -a);
}

static int __popc(unsigned int a)
{
  a = a - ((a >> 1) & 0x55555555);
  a = (a & 0x33333333) + ((a >> 2) & 0x33333333);
  a = (a + (a >> 4)) & 0x0f0f0f0f;
  a = ((__umul24(a, 0x808080) << 1) + a) >> 24;
  return a;
}

static int __clzll(long long int a)
{
  int ahi = ((int)((unsigned long long)a >> 32));
  int alo = ((int)((unsigned long long)a & 0xffffffffULL));
  int res;
  if (ahi) {
      res = 0;
  } else {
      res = 32;
      ahi = alo;
  }
  res = res + __clz(ahi);
  return res;
}

static int __ffsll(long long int a)
{
  return 64 - __clzll (a & -a);
}

static int __popcll(unsigned long long int a)
{
  unsigned int ahi = ((unsigned int)(a >> 32));
  unsigned int alo = ((unsigned int)(a & 0xffffffffULL));
  alo = alo - ((alo >> 1) & 0x55555555);
  alo = (alo & 0x33333333) + ((alo >> 2) & 0x33333333);
  ahi = ahi - ((ahi >> 1) & 0x55555555);
  ahi = (ahi & 0x33333333) + ((ahi >> 2) & 0x33333333);
  alo = alo + ahi;
  alo = (alo & 0x0f0f0f0f) + ((alo >> 4) & 0x0f0f0f0f);
  alo = ((__umul24(alo, 0x808080) << 1) + alo) >> 24;
  return alo;
}
# 1426 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
static double fdivide(double a, double b)
{
  return a / b;
}



static int __internal_double2int(double a, enum cudaRoundMode rndMode);
static unsigned int __internal_double2uint(double a, enum cudaRoundMode rndMode);
static long long int __internal_double2ll(double a, enum cudaRoundMode rndMode);
static unsigned long long int __internal_double2ull(double a, enum cudaRoundMode rndMode);

static int __double2int_rz(double a)
{
  return __internal_double2int(a, cudaRoundZero);
}

static unsigned int __double2uint_rz(double a)
{
  return __internal_double2uint(a, cudaRoundZero);
}

static long long int __double2ll_rz(double a)
{
  return __internal_double2ll(a, cudaRoundZero);
}

static unsigned long long int __double2ull_rz(double a)
{
  return __internal_double2ull(a, cudaRoundZero);
}
# 1470 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/sm_11_atomic_functions.h" 1 3
# 257 "/home/gdiamos/temp/cuda/bin//../include/sm_11_atomic_functions.h" 3
static int __iAtomicAdd(int *address, int val)
{
  int old = *address;

  *address = old + val;

  return old;
}

static unsigned int __uAtomicAdd(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old + val;

  return old;
}

static int __iAtomicExch(int *address, int val)
{
  int old = *address;

  *address = val;

  return old;
}

static unsigned int __uAtomicExch(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = val;

  return old;
}

static float __fAtomicExch(float *address, float val)
{
  float old = *address;

  *address = val;

  return old;
}

static int __iAtomicMin(int *address, int val)
{
  int old = *address;

  *address = old < val ? old : val;

  return old;
}

static unsigned int __uAtomicMin(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old < val ? old : val;

  return old;
}

static int __iAtomicMax(int *address, int val)
{
  int old = *address;

  *address = old > val ? old : val;

  return old;
}

static unsigned int __uAtomicMax(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old > val ? old : val;

  return old;
}

static unsigned int __uAtomicInc(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = (old >= val) ? 0 : old + 1;

  return old;
}

static unsigned int __uAtomicDec(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = ((old == 0) | (old > val)) ? val : (old - 1);

  return old;
}

static int __iAtomicAnd(int *address, int val)
{
  int old = *address;

  *address = old & val;

  return old;
}

static unsigned int __uAtomicAnd(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old & val;

  return old;
}

static int __iAtomicOr(int *address, int val)
{
  int old = *address;

  *address = old | val;

  return old;
}

static unsigned int __uAtomicOr(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old | val;

  return old;
}

static int __iAtomicXor(int *address, int val)
{
  int old = *address;

  *address = old ^ val;

  return old;
}

static unsigned int __uAtomicXor(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old ^ val;

  return old;
}

static int __iAtomicCAS(int *address, int compare, int val)
{
  int old = *address;

  *address = old == compare ? val : old;

  return old;
}

static unsigned int __uAtomicCAS(unsigned int *address, unsigned int compare, unsigned int val)
{
  unsigned int old = *address;

  *address = old == compare ? val : old;

  return old;
}
# 1471 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/sm_12_atomic_functions.h" 1 3
# 118 "/home/gdiamos/temp/cuda/bin//../include/sm_12_atomic_functions.h" 3
static unsigned long long int __ullAtomicAdd(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old = *address;

  *address = old + val;

  return old;
}

static unsigned long long int __ullAtomicExch(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old = *address;

  *address = val;

  return old;
}

static unsigned long long int __ullAtomicCAS(unsigned long long int *address, unsigned long long int compare, unsigned long long int val)
{
  unsigned long long int old = *address;

  *address = old == compare ? val : old;

  return old;
}



static int __any(int cond)
{
  return cond;
}

static int __all(int cond)
{
  return cond;
}
# 1472 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/sm_13_double_functions.h" 1 3
# 266 "/home/gdiamos/temp/cuda/bin//../include/sm_13_double_functions.h" 3
static double __longlong_as_double(long long int a)
{
  volatile union {long long int a; double b;} u;

  u.a = a;

  return u.b;
}

static long long int __double_as_longlong(double a)
{
  volatile union {double a; long long int b;} u;

  u.a = a;

  return u.b;
}

static float __internal_double2float_kernel(double a)
{
  volatile union {
    double d;
    unsigned long long int i;
  } xx;
  volatile union {
    float f;
    unsigned int i;
  } res;
  int shift;
  xx.d = a;
  if (xx.i == 0) return 0.0f;
  res.i = (((unsigned int) (xx.i >> 32)) & 0x80000000);
  if ((xx.i & 0x7ff0000000000000ULL) == 0x7ff0000000000000ULL) {
    if ((xx.i & 0x7fffffffffffffffULL) > 0x7ff0000000000000ULL) {

      res.i = 0x7f8fffff;
    } else {

      res.i |= 0x7f800000;
    }
    return res.f;
  }
  shift = ((int) ((xx.i >> 52) & 0x7ff)) - 1023;

  xx.i = (xx.i & 0x000fffffffffffffULL);
  if (shift >= 128) {
    res.i |= 0x7f7fffff;
    return res.f;
  }
  if (shift <= -127) {
    if (shift < -180) {

      xx.i = 0;
    } else {
      xx.i |= 0x0010000000000000ULL;
      xx.i >>= 127 + shift;
    }
  } else {
    res.i |= (unsigned int) (127 + shift) << 23;
  }
  res.i |= ((unsigned int) (xx.i >> 29)) & 0x007fffff;
  xx.i &= 0x1fffffff;
  return res.f;
}

static double __internal_ll2double_kernel(long long int a, enum cudaRoundMode rndMode)
{
  volatile union {
    double d;
    unsigned long long int i;
  } res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  if (a < 0) res.i = (unsigned long long int)-a;
  shift = __internal_normalize64((unsigned long long int*)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if (a < 0) res.i |= 0x8000000000000000ULL;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.d;
}

static double __internal_ull2double_kernel(unsigned long long int a, enum cudaRoundMode rndMode)
{
  volatile union {
    double d;
    unsigned long long int i;
  } res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  shift = __internal_normalize64((unsigned long long int *)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.d;
}

static long long int __internal_double2ll_kernel(double a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  volatile union {
    double d;
    unsigned long long int i;
  } xx, res;
  unsigned long long int t = 0;
  int shift;

  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  shift = (int) (1023 + 62 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL) >> 1;
  if (shift >= 64) {
    t = res.i;
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t &&
          (xx.i > 0x8000000000000000ULL)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && ((long long int)xx.i > 0)) {
    res.i++;
  }
  if ((long long int)xx.i < 0) {
    res.i = (unsigned long long int)(-(long long int)res.i);
  }
  return res.i;
}

static unsigned long long int __internal_double2ull_kernel(double a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  volatile union {
    double d;
    unsigned long long int i;
  } xx, res;
  unsigned long long int t = 0;
  int shift;
  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;

  if (a == 0.0) return 0LL;
  shift = (int) (1023 + 63 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL);
  if (shift >= 64) {
    t = res.i >> (int)(shift > 64);
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.i;
}

static int __double2hiint(double a)
{
  volatile union {
    double d;
    signed int i[2];
  } cvt;

  cvt.d = a;

  return cvt.i[1];
}

static int __double2loint(double a)
{
  volatile union {
    double d;
    signed int i[2];
  } cvt;

  cvt.d = a;

  return cvt.i[0];
}

static double __hiloint2double(int a, int b)
{
  volatile union {
    double d;
    signed int i[2];
  } cvt;

  cvt.i[0] = b;
  cvt.i[1] = a;

  return cvt.d;
}

static float __double2float_rn(double a)
{
  return (float)a;
}

static float __double2float_rz(double a)
{
  return __internal_double2float_kernel(a);
}

static int __internal_double2int(double a, enum cudaRoundMode rndMode)
{
  return (int)__internal_double2ll_kernel(a, 2147483647LL, -2147483648LL, -2147483648LL, rndMode);
}

static int __double2int_rn(double a)
{
  return __internal_double2int(a, cudaRoundNearest);
}

static int __double2int_ru(double a)
{
  return __internal_double2int(a, cudaRoundPosInf);
}

static int __double2int_rd(double a)
{
  return __internal_double2int(a, cudaRoundMinInf);
}

static unsigned int __internal_double2uint(double a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_double2ull_kernel(a, 4294967295ULL, 2147483648ULL, rndMode);
}

static unsigned int __double2uint_rn(double a)
{
  return __internal_double2uint(a, cudaRoundNearest);
}

static unsigned int __double2uint_ru(double a)
{
  return __internal_double2uint(a, cudaRoundPosInf);
}

static unsigned int __double2uint_rd(double a)
{
  return __internal_double2uint(a, cudaRoundMinInf);
}

static long long int __internal_double2ll(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __double2ll_rn(double a)
{
  return __internal_double2ll(a, cudaRoundNearest);
}

static long long int __double2ll_ru(double a)
{
  return __internal_double2ll(a, cudaRoundPosInf);
}

static long long int __double2ll_rd(double a)
{
  return __internal_double2ll(a, cudaRoundMinInf);
}

static unsigned long long int __internal_double2ull(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __double2ull_rn(double a)
{
  return __internal_double2ull(a, cudaRoundNearest);
}

static unsigned long long int __double2ull_ru(double a)
{
  return __internal_double2ull(a, cudaRoundPosInf);
}

static unsigned long long int __double2ull_rd(double a)
{
  return __internal_double2ull(a, cudaRoundMinInf);
}

static double __int2double_rn(int a)
{
  return (double)a;
}

static double __uint2double_rn(unsigned int a)
{
  return (double)a;
}

static double __ll2double_rn(long long int a)
{
  return (double)a;
}

static double __ll2double_rz(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundZero);
}

static double __ll2double_rd(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundMinInf);
}

static double __ll2double_ru(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundPosInf);
}

static double __ull2double_rn(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundNearest);
}

static double __ull2double_rz(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundZero);
}

static double __ull2double_rd(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundMinInf);
}

static double __ull2double_ru(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundPosInf);
}





static double __internal_fma_kernel(double x, double y, double z, enum cudaRoundMode rndMode)
{



  struct {
    unsigned int lo;
    unsigned int hi;
  } xx, yy, zz, ww;
  unsigned int s, t, u, prod0, prod1, prod2, prod3, expo_x, expo_y, expo_z;

  xx.hi = __double2hiint(x);
  xx.lo = __double2loint(x);
  yy.hi = __double2hiint(y);
  yy.lo = __double2loint(y);
  zz.hi = __double2hiint(z);
  zz.lo = __double2loint(z);

  expo_z = 0x7FF;
  t = xx.hi >> 20;
  expo_x = expo_z & t;
  expo_x = expo_x - 1;
  t = yy.hi >> 20;
  expo_y = expo_z & t;
  expo_y = expo_y - 1;
  t = zz.hi >> 20;
  expo_z = expo_z & t;
  expo_z = expo_z - 1;

  if (!((expo_x <= 0x7FD) &&
        (expo_y <= 0x7FD) &&
        (expo_z <= 0x7FD))) {





    if (((yy.hi << 1) | (yy.lo != 0)) > 0xffe00000) {
      yy.hi |= 0x00080000;
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) > 0xffe00000) {
      zz.hi |= 0x00080000;
      return __hiloint2double(zz.hi, zz.lo);
    }
    if (((xx.hi << 1) | (xx.lo != 0)) > 0xffe00000) {
      xx.hi |= 0x00080000;
      return __hiloint2double(xx.hi, xx.lo);
    }
# 690 "/home/gdiamos/temp/cuda/bin//../include/sm_13_double_functions.h" 3
    if (((((xx.hi << 1) | xx.lo) == 0) &&
         (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000)) ||
        ((((yy.hi << 1) | yy.lo) == 0) &&
         (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000))) {
      xx.hi = 0xfff80000;
      xx.lo = 0x00000000;
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      if ((((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) ||
          (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000)) {
        if ((int)(xx.hi ^ yy.hi ^ zz.hi) < 0) {
          xx.hi = 0xfff80000;
          xx.lo = 0x00000000;
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
    }




    if (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000) {
      xx.hi = xx.hi ^ (yy.hi & 0x80000000);
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) {
      yy.hi = yy.hi ^ (xx.hi & 0x80000000);
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      return __hiloint2double(zz.hi, zz.lo);
    }





    if ((zz.hi == 0x80000000) && (zz.lo == 0)) {
      if ((((xx.hi << 1) | xx.lo) == 0) ||
          (((yy.hi << 1) | yy.lo) == 0)) {
        if ((int)(xx.hi ^ yy.hi) < 0) {
          return __hiloint2double(zz.hi, zz.lo);
        }
      }
    }



    if ((((zz.hi << 1) | zz.lo) == 0) &&
        ((((xx.hi << 1) | xx.lo) == 0) ||
         (((yy.hi << 1) | yy.lo) == 0))) {
      if (rndMode == cudaRoundMinInf) {
        return __hiloint2double((xx.hi ^ yy.hi ^ zz.hi) & 0x80000000, zz.lo);
      } else {
        zz.hi &= 0x7fffffff;
        return __hiloint2double(zz.hi, zz.lo);
      }
    }




    if ((((xx.hi << 1) | xx.lo) == 0) ||
        (((yy.hi << 1) | yy.lo) == 0)) {
      return __hiloint2double(zz.hi, zz.lo);
    }

    if (expo_x == 0xffffffff) {
      expo_x++;
      t = xx.hi & 0x80000000;
      s = xx.lo >> 21;
      xx.lo = xx.lo << 11;
      xx.hi = xx.hi << 11;
      xx.hi = xx.hi | s;
      if (!xx.hi) {
        xx.hi = xx.lo;
        xx.lo = 0;
        expo_x -= 32;
      }
      while ((int)xx.hi > 0) {
        s = xx.lo >> 31;
        xx.lo = xx.lo + xx.lo;
        xx.hi = xx.hi + xx.hi;
        xx.hi = xx.hi | s;
        expo_x--;
      }
      xx.lo = (xx.lo >> 11);
      xx.lo |= (xx.hi << 21);
      xx.hi = (xx.hi >> 11) | t;
    }
    if (expo_y == 0xffffffff) {
      expo_y++;
      t = yy.hi & 0x80000000;
      s = yy.lo >> 21;
      yy.lo = yy.lo << 11;
      yy.hi = yy.hi << 11;
      yy.hi = yy.hi | s;
      if (!yy.hi) {
        yy.hi = yy.lo;
        yy.lo = 0;
        expo_y -= 32;
      }
      while ((int)yy.hi > 0) {
        s = yy.lo >> 31;
        yy.lo = yy.lo + yy.lo;
        yy.hi = yy.hi + yy.hi;
        yy.hi = yy.hi | s;
        expo_y--;
      }
      yy.lo = (yy.lo >> 11);
      yy.lo |= (yy.hi << 21);
      yy.hi = (yy.hi >> 11) | t;
    }
    if (expo_z == 0xffffffff) {
      expo_z++;
      t = zz.hi & 0x80000000;
      s = zz.lo >> 21;
      zz.lo = zz.lo << 11;
      zz.hi = zz.hi << 11;
      zz.hi = zz.hi | s;
      if (!zz.hi) {
        zz.hi = zz.lo;
        zz.lo = 0;
        expo_z -= 32;
      }
      while ((int)zz.hi > 0) {
        s = zz.lo >> 31;
        zz.lo = zz.lo + zz.lo;
        zz.hi = zz.hi + zz.hi;
        zz.hi = zz.hi | s;
        expo_z--;
      }
      zz.lo = (zz.lo >> 11);
      zz.lo |= (zz.hi << 21);
      zz.hi = (zz.hi >> 11) | t;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx.hi ^ yy.hi;
  t = xx.lo >> 21;
  xx.lo = xx.lo << 11;
  xx.hi = xx.hi << 11;
  xx.hi = xx.hi | t;
  yy.hi = yy.hi & 0x000fffff;
  xx.hi = xx.hi | 0x80000000;
  yy.hi = yy.hi | 0x00100000;

  prod0 = xx.lo * yy.lo;
  prod1 = __umulhi (xx.lo, yy.lo);
  prod2 = xx.hi * yy.lo;
  prod3 = xx.lo * yy.hi;
  prod1 += prod2;
  t = prod1 < prod2;
  prod1 += prod3;
  t += prod1 < prod3;
  prod2 = __umulhi (xx.hi, yy.lo);
  prod3 = __umulhi (xx.lo, yy.hi);
  prod2 += prod3;
  s = prod2 < prod3;
  prod3 = xx.hi * yy.hi;
  prod2 += prod3;
  s += prod2 < prod3;
  prod2 += t;
  s += prod2 < t;
  prod3 = __umulhi (xx.hi, yy.hi) + s;

  yy.lo = prod0;
  yy.hi = prod1;
  xx.lo = prod2;
  xx.hi = prod3;
  expo_x = expo_x - (1023 - 2);
  expo_y = expo_y & 0x80000000;

  if (xx.hi < 0x00100000) {
    s = xx.lo >> 31;
    s = (xx.hi << 1) + s;
    xx.hi = s;
    s = yy.hi >> 31;
    s = (xx.lo << 1) + s;
    xx.lo = s;
    s = yy.lo >> 31;
    s = (yy.hi << 1) + s;
    yy.hi = s;
    s = yy.lo << 1;
    yy.lo = s;
    expo_x--;
  }

  t = 0;
  if (((zz.hi << 1) | zz.lo) != 0) {

    s = zz.hi & 0x80000000;

    zz.hi &= 0x000fffff;
    zz.hi |= 0x00100000;
    ww.hi = 0;
    ww.lo = 0;


    if ((int)expo_z > (int)expo_x) {
      t = expo_z;
      expo_z = expo_x;
      expo_x = t;
      t = zz.hi;
      zz.hi = xx.hi;
      xx.hi = t;
      t = zz.lo;
      zz.lo = xx.lo;
      xx.lo = t;
      t = ww.hi;
      ww.hi = yy.hi;
      yy.hi = t;
      t = ww.lo;
      ww.lo = yy.lo;
      yy.lo = t;
      t = expo_y;
      expo_y = s;
      s = t;
    }



    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 107) {

      t = 0;
      while (expo_z >= 32) {
        t = ww.lo | (t != 0);
        ww.lo = ww.hi;
        ww.hi = zz.lo;
        zz.lo = zz.hi;
        zz.hi = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        t = (t >> expo_z) | (ww.lo << (32 - expo_z)) |
                ((t << (32 - expo_z)) != 0);
        ww.lo = (ww.lo >> expo_z) | (ww.hi << (32 - expo_z));
        ww.hi = (ww.hi >> expo_z) | (zz.lo << (32 - expo_z));
        zz.lo = (zz.lo >> expo_z) | (zz.hi << (32 - expo_z));
        zz.hi = (zz.hi >> expo_z);
      }
    } else {
      t = 1;
      ww.lo = 0;
      ww.hi = 0;
      zz.lo = 0;
      zz.hi = 0;
    }
    if ((int)u < 0) {

      t = (unsigned)(-(int)t);
      s = (t != 0);
      u = yy.lo - s;
      s = u > yy.lo;
      yy.lo = u - ww.lo;
      s += yy.lo > u;
      u = yy.hi - s;
      s = u > yy.hi;
      yy.hi = u - ww.hi;
      s += yy.hi > u;
      u = xx.lo - s;
      s = u > xx.lo;
      xx.lo = u - zz.lo;
      s += xx.lo > u;
      xx.hi = (xx.hi - zz.hi) - s;
      if (!(xx.hi | xx.lo | yy.hi | yy.lo | t)) {

        if (rndMode == cudaRoundMinInf) {
          return __hiloint2double(0x80000000, xx.lo);
        } else {
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
      if ((int)xx.hi < 0) {



        t = ~t;
        yy.lo = ~yy.lo;
        yy.hi = ~yy.hi;
        xx.lo = ~xx.lo;
        xx.hi = ~xx.hi;
        if (++t == 0) {
          if (++yy.lo == 0) {
            if (++yy.hi == 0) {
              if (++xx.lo == 0) {
              ++xx.hi;
              }
            }
          }
        }
        expo_y ^= 0x80000000;
      }


      while (!(xx.hi & 0x00100000)) {
        xx.hi = (xx.hi << 1) | (xx.lo >> 31);
        xx.lo = (xx.lo << 1) | (yy.hi >> 31);
        yy.hi = (yy.hi << 1) | (yy.lo >> 31);
        yy.lo = (yy.lo << 1);
        expo_x--;
      }
    } else {

      yy.lo = yy.lo + ww.lo;
      s = yy.lo < ww.lo;
      yy.hi = yy.hi + s;
      u = yy.hi < s;
      yy.hi = yy.hi + ww.hi;
      u += yy.hi < ww.hi;
      xx.lo = xx.lo + u;
      s = xx.lo < u;
      xx.lo = xx.lo + zz.lo;
      s += xx.lo < zz.lo;
      xx.hi = xx.hi + zz.hi + s;
      if (xx.hi & 0x00200000) {
        t = t | (yy.lo << 31);
        yy.lo = (yy.lo >> 1) | (yy.hi << 31);
        yy.hi = (yy.hi >> 1) | (xx.lo << 31);
        xx.lo = (xx.lo >> 1) | (xx.hi << 31);
        xx.hi = ((xx.hi & 0x80000000) | (xx.hi >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  t = yy.lo | (t != 0);
  t = yy.hi | (t != 0);

  xx.hi |= expo_y;
  if (expo_x <= 0x7FD) {

    xx.hi = xx.hi & ~0x00100000;
    s = xx.lo & 1;
    u = xx.lo;
    if (rndMode == cudaRoundNearest) {
      xx.lo += (t == 0x80000000) ? s : (t >> 31);
    } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
               ((rndMode == cudaRoundMinInf) && t && expo_y)) {
      xx.lo += 1;
    }
    xx.hi += (u > xx.lo);
    xx.hi += ((expo_x + 1) << 20);
    return __hiloint2double(xx.hi, xx.lo);
  } else if ((int)expo_x >= 2046) {

    if ((rndMode == cudaRoundNearest) ||
        ((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      xx.hi = (xx.hi & 0x80000000) | 0x7ff00000;
      xx.lo = 0;
    } else {
      xx.hi = (xx.hi & 0x80000000) | 0x7fefffff;
      xx.lo = 0xffffffff;
    }
    return __hiloint2double(xx.hi, xx.lo);
  }

  expo_x = (unsigned)(-(int)expo_x);
  if (expo_x > 54) {

    if (((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      return __hiloint2double(xx.hi & 0x80000000, 1);
    } else {
      return __hiloint2double(xx.hi & 0x80000000, 0);
    }
  }
  yy.hi = xx.hi & 0x80000000;
  xx.hi = xx.hi & ~0xffe00000;
  if (expo_x >= 32) {
    t = xx.lo | (t != 0);
    xx.lo = xx.hi;
    xx.hi = 0;
    expo_x -= 32;
  }
  if (expo_x) {
    t = (t >> expo_x) | (xx.lo << (32 - expo_x)) | (t != 0);
    xx.lo = (xx.lo >> expo_x) | (xx.hi << (32 - expo_x));
    xx.hi = (xx.hi >> expo_x);
  }
  expo_x = xx.lo & 1;
  u = xx.lo;
  if (rndMode == cudaRoundNearest) {
    xx.lo += (t == 0x80000000) ? expo_x : (t >> 31);
  } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
             ((rndMode == cudaRoundMinInf) && t && expo_y)) {
    xx.lo += 1;
  }
  xx.hi += (u > xx.lo);
  xx.hi |= yy.hi;
  return __hiloint2double(xx.hi, xx.lo);
}

static double __fma_rn(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundNearest);
}

static double __fma_rd(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundMinInf);
}

static double __fma_ru(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundPosInf);
}

static double __fma_rz(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundZero);
}

static double __dadd_rz(double a, double b)
{
  return __fma_rz(a, 1.0, b);
}

static double __dadd_ru(double a, double b)
{
  return __fma_ru(a, 1.0, b);
}

static double __dadd_rd(double a, double b)
{
  return __fma_rd(a, 1.0, b);
}

static double __dmul_rz(double a, double b)
{
  return __fma_rz(a, b, __longlong_as_double(0x8000000000000000ULL));
}

static double __dmul_ru(double a, double b)
{
  return __fma_ru(a, b, __longlong_as_double(0x8000000000000000ULL));
}

static double __dmul_rd(double a, double b)
{
  return __fma_rd(a, b, 0.0);
}

static double __dadd_rn(double a, double b)
{
  return __fma_rn(a, 1.0, b);
}

static double __dmul_rn(double a, double b)
{
  return __fma_rn(a, b, __longlong_as_double(0x8000000000000000ULL));
}
# 1473 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/texture_fetch_functions.h" 1 3
# 1910 "/home/gdiamos/temp/cuda/bin//../include/texture_fetch_functions.h" 3
extern void __cudaTextureFetch(const void *tex, void *index, int integer, void *val);

static int4 __itexfetchi(const void *tex, int4 index)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static uint4 __utexfetchi(const void *tex, int4 index)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static float4 __ftexfetchi(const void *tex, int4 index)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static int4 __itexfetch(const void *tex, float4 index, int dim)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static uint4 __utexfetch(const void *tex, float4 index, int dim)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static float4 __ftexfetch(const void *tex, float4 index, int dim)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}
# 1474 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 2 3
# 925 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 2 3


static int __cuda___signbitf(float a)
{
  return (int)((unsigned int)__float_as_int(a) >> 31);
}




static float __cuda_copysignf(float a, float b)
{
  return __int_as_float((__float_as_int(b) & 0x80000000) |
                        (__float_as_int(a) & ~0x80000000));
}
# 949 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) int max(int a, int b); int max(int a, int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umax(unsigned int a, unsigned int b); unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}
# 1035 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
static float __internal_nearbyintf(float a)
{
  float fa = fabsf(a);

  if (fa >= 8388608.0f) {
    return a;
  } else {
    volatile float u = 8388608.0f + fa;

    u = u - 8388608.0f;
    return copysignf(u, a);
  }
}

static float __internal_fminf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;

  cvta.f = a;
  cvtb.f = b;
  if ((cvta.i << 1) > 0xff000000) return b;
  if ((cvtb.i << 1) > 0xff000000) return a;
  if ((cvta.i | cvtb.i) == 0x80000000) {
    return __int_as_float(0x80000000);
  }
  return a < b ? a : b;
}

static float __internal_fmaxf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;

  cvta.f = a;
  cvtb.f = b;
  if ((cvta.i << 1) > 0xff000000) return b;
  if ((cvtb.i << 1) > 0xff000000) return a;
  if ((cvta.f == 0.0f) && (cvtb.f == 0.0f)) {
    cvta.i &= cvtb.i;
    return cvta.f;
  }
  return a > b ? a : b;
}
# 1123 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
static long int __cuda_labs(long int a)
{
  return labs(a);
}

static float __cuda_ceilf(float a)
{
  return ceilf(a);
}

static float __cuda_floorf(float a)
{
  return floorf(a);
}

static float __cuda_sqrtf(float a)
{
   return sqrtf(a);
}

static float __cuda_rsqrtf(float a)
{
   return 1.0f / sqrtf(a);
}

static float __cuda_truncf(float a)
{
  return truncf(a);
}

static int __cuda_max(int a, int b)
{
  return max(a, b);
}

static int __cuda_min(int a, int b)
{
  return min(a, b);
}

static unsigned int __cuda_umax(unsigned int a, unsigned int b)
{
  return umax(a, b);
}

static unsigned int __cuda_umin(unsigned int a, unsigned int b)
{
  return umin(a, b);
}

static long long int __cuda_llrintf(float a)
{



  return __float2ll_rn(a);

}

static long int __cuda_lrintf(float a)
{




  return (long int)__cuda_llrintf(a);




}

static float __cuda_nearbyintf(float a)
{





  return __internal_nearbyintf(a);

}

static float __cuda_fmaxf(float a, float b)
{





  return __internal_fmaxf(a, b);

}

static float __cuda_fminf(float a, float b)
{





  return __internal_fminf(a, b);

}
# 1244 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
static int __cuda___finitef(float a)
{
  return __cuda_fabsf(a) < __int_as_float(0x7f800000);
}
# 1258 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
static int __cuda___isinff(float a)
{
  return __cuda_fabsf(a) == __int_as_float(0x7f800000);
}

static int __cuda___isnanf(float a)
{
  return !(__cuda_fabsf(a) <= __int_as_float(0x7f800000));
}

static float __cuda_nextafterf(float a, float b)
{
  unsigned int ia;
  unsigned int ib;
  ia = __float_as_int(a);
  ib = __float_as_int(b);




  if (__cuda___isnanf(a) || __cuda___isnanf(b)) return a + b;
  if (__int_as_float (ia | ib) == 0.0f) return __int_as_float(ib);





  if (__int_as_float(ia) == 0.0f) {
    return __cuda_copysignf(__int_as_float(0x00000001), b);
  }

  if ((a < b) && (a < 0.0f)) ia--;
  if ((a < b) && (a > 0.0f)) ia++;
  if ((a > b) && (a < 0.0f)) ia++;
  if ((a > b) && (a > 0.0f)) ia--;
  a = __int_as_float(ia);





  return a;
}

static float __cuda_nanf(const char *tagp)
{

  return __int_as_float(0x7fffffff);
}


static float __internal_atanhf_kernel(float a_1, float a_2)
{
  float a, a2, t;

  a = a_1 + a_2;
  a2 = a * a;
  t = 1.566305595598990E-001f/64.0f;
  t = t * a2 + 1.995081856004762E-001f/16.0f;
  t = t * a2 + 3.333382699617026E-001f/4.0f;
  t = t * a2;
  t = t * a + a_2;
  t = t + a_1;
  return t;
}




static float __internal_atanf_kernel(float a)
{
  float t4, t0, t1;

  t4 = a * a;
  t0 = - 5.674867153f;
  t0 = t4 * - 0.823362947f + t0;
  t0 = t0 * t4 - 6.565555096f;
  t0 = t0 * t4;
  t0 = t0 * a;
  t1 = t4 + 11.33538818f;
  t1 = t1 * t4 + 28.84246826f;
  t1 = t1 * t4 + 19.69667053f;
  t1 = 1.0f / t1;
  a = t0 * t1 + a;
  return a;
}


static float __internal_tan_kernel(float a)
{
  float a2, s, t;

  a2 = a * a;
  t = 4.114678393115178E-003f * a2 - 8.231194034909670E-001f;
  s = a2 - 2.469348886157666E+000f;
  s = 1.0f / s;
  t = t * s;
  t = t * a2;
  t = t * a + a;
  return t;
}

static float __internal_accurate_logf(float a)
{
  float t;
  float z;
  float m;
  int ia, e;
  ia = __float_as_int(a);

  if ((ia < 0x00800000) || (ia > 0x7f7fffff)) {
    return __logf(a);
  }

  m = __int_as_float((ia & 0x807fffff) | 0x3f800000);
  e = ((unsigned)ia >> 23) - 127;
  if (m > 1.414213562f) {
    m = m * 0.5f;
    e = e + 1;
  }
  t = m - 1.0f;
  z = m + 1.0f;
  z = t / z;
  z = -t * z;
  z = __internal_atanhf_kernel(t, z);
  z = (float)e * 0.693147181f + z;
  return z;
}

static float2 __internal_log_ep(float a)
{
  float2 res;
  int expo;
  float m;
  float log_hi, log_lo;
  float t_hi, t_lo;
  float f, g, u, v, q;



  float r, s, e;

  expo = (__float_as_int(a) >> 23) & 0xff;


  if (expo == 0) {
    a *= 16777216.0f;
    expo = (__float_as_int(a) >> 23) & 0xff;
    expo -= 24;
  }

  expo -= 127;
  m = __int_as_float((__float_as_int(a) & 0x807fffff) | 0x3f800000);
  if (m > 1.414213562f) {
    m = m * 0.5f;
    expo = expo + 1;
  }






  f = m - 1.0f;
  g = m + 1.0f;
  g = 1.0f / g;
  u = 2.0f * f * g;
  v = u * u;
  q = 1.49356810919559350E-001f/64.0f;
  q = q * v + 1.99887797540072460E-001f/16.0f;
  q = q * v + 3.33333880955515580E-001f/4.0f;
  q = q * v;
  q = q * u;
  log_hi = __int_as_float(__float_as_int(u) & 0xfffff000);
  v = __int_as_float(__float_as_int(f) & 0xfffff000);
  u = 2.0f * (f - log_hi);
  f = f - v;
  u = u - log_hi * v;
  u = u - log_hi * f;
  u = g * u;



  r = log_hi + u;
  s = u - (r - log_hi);
  log_hi = r;
  log_lo = s;

  r = log_hi + q;
  s = ((log_hi - r) + q) + log_lo;
  log_hi = e = r + s;
  log_lo = (r - e) + s;


  t_hi = expo * 0.6931457519f;
  t_lo = expo * 1.4286067653e-6f;


  r = t_hi + log_hi;
  s = (((t_hi - r) + log_hi) + log_lo) + t_lo;
  res.y = e = r + s;
  res.x = (r - e) + s;
  return res;
}

static float __internal_accurate_log2f(float a)
{
  return 1.442695041f * __internal_accurate_logf(a);
}




static float2 __internal_dsmul (float2 x, float2 y)
{
    float2 z;

    volatile float up, vp, u1, u2, v1, v2, mh, ml;



    up = x.y * 4097.0f;
    u1 = (x.y - up) + up;
    u2 = x.y - u1;
    vp = y.y * 4097.0f;
    v1 = (y.y - vp) + vp;
    v2 = y.y - v1;
    mh = __fmul_rn(x.y,y.y);
    ml = (((u1 * v1 - mh) + u1 * v2) + u2 * v1) + u2 * v2;
    ml = (__fmul_rn(x.y,y.x) + __fmul_rn(x.x,y.y)) + ml;
    z.y = up = mh + ml;
    z.x = (mh - up) + ml;
    return z;
}


static unsigned int __cudart_i2opi_f [] = {
  0x3c439041,
  0xdb629599,
  0xf534ddc0,
  0xfc2757d1,
  0x4e441529,
  0xa2f9836e,
};


static float __internal_trig_reduction_kernel(float a, int *quadrant)
{
  float j;
  int q;
  if (__cuda_fabsf(a) > 48039.0f) {

    unsigned int ia = __float_as_int(a);
    unsigned int s = ia & 0x80000000;
    unsigned int result[7];
    unsigned int phi, plo;
    unsigned int hi, lo;
    unsigned int e;
    int idx;
    e = ((ia >> 23) & 0xff) - 128;
    ia = (ia << 8) | 0x80000000;

    idx = 4 - (e >> 5);
    hi = 0;



    for (q = 0; q < 6; q++) {
      plo = __cudart_i2opi_f[q] * ia;
      phi = __umulhi (__cudart_i2opi_f[q], ia);
      lo = hi + plo;
      hi = phi + (lo < plo);
      result[q] = lo;
    }
    result[q] = hi;
    e = e & 31;



    hi = result[idx+2];
    lo = result[idx+1];
    if (e) {
      q = 32 - e;
      hi = (hi << e) | (lo >> q);
      lo = (lo << e) | (result[idx] >> q);
    }
    q = hi >> 30;

    hi = (hi << 2) | (lo >> 30);
    lo = (lo << 2);
    e = (hi + (lo > 0)) > 0x80000000;
    q += e;
    if (s) q = -q;
    if (e) {
      unsigned int t;
      hi = ~hi;
      lo = -(int)lo;
      t = (lo == 0);
      hi += t;
      s = s ^ 0x80000000;
    }
    *quadrant = q;

    e = 0;
    while ((int)hi > 0) {
      hi = (hi << 1) | (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    lo = hi * 0xc90fdaa2;
    hi = __umulhi(hi, 0xc90fdaa2);
    if ((int)hi > 0) {
      hi = (hi << 1) | (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    hi = hi + (lo > 0);
    ia = s | (((e + 126) << 23) + (hi >> 8) + ((hi << 24) >= 0x80000000));
    return __int_as_float(ia);
  }
  q = __float2int_rn(a * 0.636619772f);
  j = (float)q;
  a = a - j * 1.5703125000000000e+000f;
  a = a - j * 4.8351287841796875e-004f;
  a = a - j * 3.1385570764541626e-007f;
  a = a - j * 6.0771005065061922e-011f;
  *quadrant = q;
  return a;
}
# 1597 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
static float __internal_expf_kernel(float a, float scale)
{
  float j, z;

  j = __cuda_truncf(a * 1.442695041f);
  z = a - j * 0.6931457519f;
  z = z - j * 1.4286067653e-6f;
  z = z * 1.442695041f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j + scale);
  return z;
}

static float __internal_accurate_expf(float a)
{
  float z;
  z = __internal_expf_kernel(a, 0.0f);
  if (a < -105.0f) z = 0.0f;
  if (a > 105.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_accurate_exp10f(float a)
{
  float j, z;
  j = __cuda_truncf(a * 3.321928094f);
  z = a - j * 3.0102920532226563e-001f;
  z = z - j * 7.9034171557301747e-007f;
  z = z * 3.321928094f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j);
  if (a < -46.0f) z = 0.0f;
  if (a > 46.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_lgammaf_pos(float a)
{
  float sum;
  float s, t;

  if (a == __int_as_float(0x7f800000)) {
    return a;
  }
  if (a >= 3.0f) {
    if (a >= 7.8f) {



      s = 1.0f / a;
      t = s * s;
      sum = 0.77783067e-3f;
      sum = sum * t - 0.2777655457e-2f;
      sum = sum * t + 0.83333273853e-1f;
      sum = sum * s + 0.918938533204672f;
      s = 0.5f * __internal_accurate_logf(a);
      t = a - 0.5f;
      s = s * t;
      t = s - a;
      s = __fadd_rn(s, sum);
      t = t + s;
      return t;
    } else {
      a = a - 3.0f;
      s = - 7.488903254816711E+002f;
      s = s * a - 1.234974215949363E+004f;
      s = s * a - 4.106137688064877E+004f;
      s = s * a - 4.831066242492429E+004f;
      s = s * a - 1.430333998207429E+005f;
      t = a - 2.592509840117874E+002f;
      t = t * a - 1.077717972228532E+004f;
      t = t * a - 9.268505031444956E+004f;
      t = t * a - 2.063535768623558E+005f;
      t = s / t;
      t = t + a;
      return t;
    }
  } else if (a >= 1.5f) {
    a = a - 2.0f;
    t = + 4.959849168282574E-005f;
    t = t * a - 2.208948403848352E-004f;
    t = t * a + 5.413142447864599E-004f;
    t = t * a - 1.204516976842832E-003f;
    t = t * a + 2.884251838546602E-003f;
    t = t * a - 7.382757963931180E-003f;
    t = t * a + 2.058131963026755E-002f;
    t = t * a - 6.735248600734503E-002f;
    t = t * a + 3.224670187176319E-001f;
    t = t * a + 4.227843368636472E-001f;
    t = t * a;
    return t;
  } else if (a >= 0.7f) {
    a = 1.0f - a;
    t = + 4.588266515364258E-002f;
    t = t * a + 1.037396712740616E-001f;
    t = t * a + 1.228036339653591E-001f;
    t = t * a + 1.275242157462838E-001f;
    t = t * a + 1.432166835245778E-001f;
    t = t * a + 1.693435824224152E-001f;
    t = t * a + 2.074079329483975E-001f;
    t = t * a + 2.705875136435339E-001f;
    t = t * a + 4.006854436743395E-001f;
    t = t * a + 8.224669796332661E-001f;
    t = t * a + 5.772156651487230E-001f;
    t = t * a;
    return t;
  } else {
    t = + 3.587515669447039E-003f;
    t = t * a - 5.471285428060787E-003f;
    t = t * a - 4.462712795343244E-002f;
    t = t * a + 1.673177015593242E-001f;
    t = t * a - 4.213597883575600E-002f;
    t = t * a - 6.558672843439567E-001f;
    t = t * a + 5.772153712885004E-001f;
    t = t * a;
    t = t * a + a;
    return -__internal_accurate_logf(t);
  }
}


static float __internal_sin_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = - 1.95152959e-4f;
  z = z * x2 + 8.33216087e-3f;
  z = z * x2 - 1.66666546e-1f;
  z = z * x2;
  z = z * x + x;

  return z;
}


static float __internal_cos_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = 2.44331571e-5f;
  z = z * x2 - 1.38873163e-3f;
  z = z * x2 + 4.16666457e-2f;
  z = z * x2 - 5.00000000e-1f;
  z = z * x2 + 1.00000000e+0f;
  return z;
}

static float __internal_accurate_sinf(float a)
{
  float z;
  int i;

  if ((__cuda___isinff(a)) || (a == 0.0f)) {
    return __fmul_rn (a, 0.0f);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}







static float __cuda_rintf(float a)
{



  return __cuda_nearbyintf(a);

}

static float __cuda_sinf(float a)
{





  return __internal_accurate_sinf(a);

}

static float __cuda_cosf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __int_as_float(0x7fffffff);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  i++;
  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;

}

static float __cuda_tanf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __int_as_float(0x7fffffff);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  z = __internal_tan_kernel(z);
  if (i & 1) {
    z = -1.0f / z;
  }
  return z;

}

static float __cuda_log2f(float a)
{





  return __internal_accurate_log2f(a);

}

static float __cuda_expf(float a)
{





  return __internal_accurate_expf(a);

}

static float __cuda_exp10f(float a)
{





  return __internal_accurate_exp10f(a);

}

static float __cuda_coshf(float a)
{
  float z;

  a = __cuda_fabsf(a);
  z = __internal_expf_kernel(a, -2.0f);
  z = 2.0f * z + 0.125f / z;
  if (a >= 90.0f) {
    z = __int_as_float(0x7f800000);
  }
  return z;
}

static float __cuda_sinhf(float a)
{
  float s, z;

  s = a;
  a = __cuda_fabsf(a);
  if (a < 1.0f) {
    float a2 = a * a;

    z = 2.816951222e-6f;
    z = z * a2 + 1.983615978e-4f;
    z = z * a2 + 8.333350058e-3f;
    z = z * a2 + 1.666666650e-1f;
    z = z * a2;
    z = z * a + a;
  } else {
    z = __internal_expf_kernel(a, -2.0f);
    z = 2.0f * z - 0.125f / z;
    if (a >= 90.0f) {
      z = __int_as_float(0x7f800000);
    }
  }
  return __cuda_copysignf(z, s);
}

static float __cuda_tanhf(float a)
{
  float s, t;

  t = __cuda_fabsf(a);
  if (t < 0.55f) {
    float z, z2;
    z = t;
    z2 = z * z;
    t = 1.643758066599993e-2f;
    t = t * z2 - 5.267181327760551e-2f;
    t = t * z2 + 1.332072505223051e-1f;
    t = t * z2 - 3.333294663641083e-1f;
    t = t * z2;
    s = t * z + z;
  } else {
    s = 1.0f - 2.0f / (__internal_expf_kernel(2.0f * t, 0.0f) + 1.0f);
    if (t >= 88.0f) {
      s = 1.0f;
    }
  }
  return __cuda_copysignf(s, a);
}

static float __cuda_atan2f(float a, float b)
{



  float t0, t1, t3, fa, fb;



  fb = __cuda_fabsf(b);
  fa = __cuda_fabsf(a);

  if (fa == 0.0f && fb == 0.0f) {
    t3 = __cuda___signbitf(b) ? 3.141592654f : 0;
  } else if ((fa == __int_as_float(0x7f800000)) && (fb == __int_as_float(0x7f800000))) {
    t3 = __cuda___signbitf(b) ? 2.356194490f : 0.785398163f;
  } else {

    if (fb < fa) {
      t0 = fa;
      t1 = fb;
    } else {
      t0 = fb;
      t1 = fa;
    }
    t3 = __internal_accurate_fdividef(t1, t0);
    t3 = __internal_atanf_kernel(t3);

    if (fa > fb) t3 = 1.570796327f - t3;
    if (b < 0.0f) t3 = 3.141592654f - t3;
  }
  t3 = __cuda_copysignf(t3, a);

  return t3;

}

static float __cuda_atanf(float a)
{
  float t0, t1;


  t0 = __cuda_fabsf(a);
  t1 = t0;
  if (t0 > 1.0f) {
    t1 = 1.0f / t1;
  }

  t1 = __internal_atanf_kernel(t1);

  if (t0 > 1.0f) {
    t1 = 1.570796327f - t1;
  }
  return __cuda_copysignf(t1, a);
}


static float __internal_asinf_kernel(float a)
{
  float t2, t3, t4;

  t2 = a * a;
  t3 = - 0.501162291f;
  t3 = t3 * t2 + 0.915201485f;
  t3 = t3 * t2;
  t3 = t3 * a;
  t4 = t2 - 5.478654385f;
  t4 = t4 * t2 + 5.491230488f;
  t4 = 1.0f / t4;
  a = t3 * t4 + a;
  return a;
}

static float __cuda_asinf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t2 = -2.0f * t1 + 1.570796327f;
  if (t0 > 0.575f) {
    t1 = t2;
  }
  return __cuda_copysignf(t1, a);
}

static float __cuda_acosf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t1 = t0 > 0.575f ? 2.0f * t1 : 1.570796327f - t1;
  if (__cuda___signbitf(a)) {
    t1 = 3.141592654f - t1;
  }
  return t1;
}

static float __cuda_logf(float a)
{





  return __internal_accurate_logf(a);

}

static float __cuda_log10f(float a)
{





  return 0.434294482f * __internal_accurate_logf(a);

}

static float __cuda_log1pf(float a)
{



  float t;




  if (a >= -0.394f && a <= 0.65f) {

    t = a + 2.0f;
    t = a / t;
    t = -a * t;
    t = __internal_atanhf_kernel (a, t);
  } else {
    t = __internal_accurate_logf (1.0f + a);
  }
  return t;

}

static float __cuda_acoshf(float a)
{



  float t;

  t = a - 1.0f;
  if (__cuda_fabsf(t) > 8388608.0f) {

    return 0.693147181f + __internal_accurate_logf(a);
  } else {
    t = t + __cuda_sqrtf(a * t + t);
    return __cuda_log1pf(t);
  }

}

static float __cuda_asinhf(float a)
{



  float fa, oofa, t;

  fa = __cuda_fabsf(a);
  if (fa > 8.507059173e37f) {
    t = 0.693147181f + __logf(fa);
  } else {
    oofa = 1.0f / fa;
    t = fa + fa / (oofa + __cuda_sqrtf(1.0f + oofa * oofa));
    t = __cuda_log1pf(t);
  }
  return __cuda_copysignf(t, a);

}

static float __cuda_atanhf(float a)
{



  float fa, t;

  fa = __cuda_fabsf(a);
  t = (2.0f * fa) / (1.0f - fa);
  t = 0.5f * __cuda_log1pf(t);
  return __cuda_copysignf(t, a);

}

static float __cuda_expm1f(float a)
{
  float t, z, j, u;

  t = __cuda_rintf (a * 1.442695041f);
  z = a - t * 0.6931457519f;
  z = z - t * 1.4286067653e-6f;

  if (__cuda_fabsf(a) < 0.41f) {
    z = a;
    t = 0.0f;
  }

  j = t;
  if (t == 128.0f) j = j - 1.0f;

  u = 1.38795078474044430E-003f;
  u = u * z + 8.38241261853264930E-003f;
  u = u * z + 4.16678317762833940E-002f;
  u = u * z + 1.66663978874356580E-001f;
  u = u * z + 4.99999940395997040E-001f;
  u = u * z;
  u = u * z + z;
  if (a == 0.0f) u = a;

  z = __cuda_exp2f (j);
  a = z - 1.0f;
  if (a != 0.0f) u = u * z + a;
  if (t == 128.0f) u = u + u;

  if (j > 128.0f) u = __int_as_float(0x7f800000);
  if (j < -25.0f) u = -1.0f;
  return u;
}

static float __cuda_hypotf(float a, float b)
{



  float v, w, t;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);

  if (a > b) {
    v = a;
    w = b;
  } else {
    v = b;
    w = a;
  }
  t = __internal_accurate_fdividef(w, v);
  t = 1.0f + t * t;
  t = v * __cuda_sqrtf(t);
  if (v == 0.0f) {
    t = v + w;
  }
  if ((v == __int_as_float(0x7f800000)) || (w == __int_as_float(0x7f800000))) {
    t = __int_as_float(0x7f800000);
  }
  return t;

}

static float __cuda_cbrtf(float a)
{



  float s, t;

  s = __cuda_fabsf(a);
  if ((a == 0.0f) || (s == __int_as_float(0x7f800000))) {
    return a;
  }
  t = __cuda_exp2f(0.333333333f * __log2f(s));
  t = t - (t - (s / (t * t))) * 0.333333333f;
  if (__cuda___signbitf(a)) {
     t = -t;
  }
  return t;

}

static float __cuda_erff(float a)
{
  float t, r, q;

  t = __cuda_fabsf(a);
  if (t < 1.0f) {
    t = t * t;
    r = -5.58510127926029810E-004f;
    r = r * t + 4.90688891415893070E-003f;
    r = r * t - 2.67027980930150640E-002f;
    r = r * t + 1.12799056505903940E-001f;
    r = r * t - 3.76122956138427440E-001f;
    r = r * t + 1.12837911712623450E+000f;
    a = a * r;
  } else if (t <= __int_as_float(0x7f800000)) {



    q = 0.3275911f * t + 1.0f;
    q = 1.0f / q;
    r = 1.061405429f;
    r = r * q - 1.453152027f;
    r = r * q + 1.421413741f;
    r = r * q - 0.284496736f;
    r = r * q + 0.254829592f;
    r = r * q;
    q = __internal_expf_kernel(-a * a, 0.0f);
    r = 1.0f - q * r;
    if (t >= 5.5f) {
      r = 1.0f;
    }
    a = __int_as_float (__float_as_int(r) | (__float_as_int(a) & 0x80000000));
  }
  return a;
}

static float __cuda_erfcf(float a)
{
  if (a <= 0.55f) {
    return 1.0f - __cuda_erff(a);
  } else if (a > 10.0f) {
    return 0.0f;
  } else {
    float p;
    float q;
    float h;
    float l;




    p = + 4.014893410762552E-006f;
    p = p * a + 5.640401259462436E-001f;
    p = p * a + 2.626649872281140E+000f;
    p = p * a + 5.486372652389673E+000f;
    p = p * a + 5.250714831459401E+000f;
    q = a + 4.651376250488319E+000f;
    q = q * a + 1.026302828878470E+001f;
    q = q * a + 1.140762166021288E+001f;
    q = q * a + 5.251211619089947E+000f;

    h = 1.0f / q;
    q = 2.0f * h - q * h * h;
    p = p * q;

    h = __int_as_float(__float_as_int(a) & 0xfffff000);
    l = __fadd_rn (a, -h);
    q = __fmul_rn (-h, h);
    q = __internal_expf_kernel(q, 0.0f);
    a = a + h;
    l = l * a;
    h = __internal_expf_kernel(-l, 0.0f);
    q = q * h;
    p = p * q;
    return p;
  }
}

static float __cuda_lgammaf(float a)
{
  float t;
  float i;
  int quot;
  t = __internal_lgammaf_pos(__cuda_fabsf(a));
  if (a >= 0.0f) return t;
  a = __cuda_fabsf(a);
  i = __cuda_floorf(a);
  if (a == i) return __int_as_float(0x7f800000);
  if (a < 1e-19f) return -__internal_accurate_logf(a);
  i = __cuda_rintf (2.0f * a);
  quot = (int)i;
  i = a - 0.5f * i;
  i = i * 3.141592654f;
  if (quot & 1) {
    i = __internal_cos_kernel(i);
  } else {
    i = __internal_sin_kernel(i);
  }
  i = __cuda_fabsf(i);
  t = 1.144729886f - __internal_accurate_logf(i * a) - t;
  return t;
}

static float __cuda_ldexpf(float a, int b)
{



  float fa = __cuda_fabsf(a);

  if ((fa == 0.0f) || (fa == __int_as_float(0x7f800000)) || (b == 0)) {
    return a;
  }
  else if (__cuda_abs(b) < 126) {
    return a * __cuda_exp2f((float)b);
  }
  else if (__cuda_abs(b) < 252) {
    int bhalf = b / 2;
    return a * __cuda_exp2f((float)bhalf) * __cuda_exp2f((float)(b - bhalf));
  }
  else {
    int bquarter = b / 4;
    float t = __cuda_exp2f((float)bquarter);
    return a * t * t * t * __cuda_exp2f((float)(b - 3 * bquarter));
  }

}

static float __cuda_scalbnf(float a, int b)
{




  return __cuda_ldexpf(a, b);

}

static float __cuda_scalblnf(float a, long int b)
{



  int t;
  if (b > 2147483647L) {
    t = 2147483647;
  } else if (b < (-2147483647 - 1)) {
    t = (-2147483647 - 1);
  } else {
    t = (int)b;
  }
  return __cuda_scalbnf(a, t);

}

static float __cuda_frexpf(float a, int *b)
{
  float fa = __cuda_fabsf(a);
  unsigned int expo;
  unsigned int denorm;

  if (fa < 1.175494351e-38f) {
    a *= 16777216.0f;
    denorm = 24;
  } else {
    denorm = 0;
  }
  expo = ((__float_as_int(a) >> 23) & 0xff);
  if ((fa == 0.0f) || (expo == 0xff)) {
    expo = 0;
    a = a + a;
  } else {
    expo = expo - denorm - 126;
    a = __int_as_float(((__float_as_int(a) & 0x807fffff) | 0x3f000000));
  }
  *b = expo;
  return a;
}

static float __cuda_modff(float a, float *b)
{



  float t;
  if (__cuda___finitef(a)) {
    t = __cuda_truncf(a);
    *b = t;
    t = a - t;
    return __cuda_copysignf(t, a);
  } else if (__cuda___isinff(a)) {
    t = 0.0f;
    *b = a;
    return __cuda_copysignf(t, a);
  } else {
    *b = a;
    return a;
  }

}

static float __cuda_fmodf(float a, float b)
{



  float orig_a = a;
  float orig_b = b;
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __int_as_float(0x7fffffff);
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }







    while (scaled_b >= b) {
      if (a >= scaled_b) {
        a -= scaled_b;
      }
      scaled_b *= 0.5f;
    }
    return __cuda_copysignf(a, orig_a);
  } else {
    return orig_a;
  }

}

static float __cuda_remainderf(float a, float b)
{

  float twoa = 0.0f;
  unsigned int quot0 = 0;
  float orig_a = a;
  float orig_b = b;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __int_as_float(0x7fffffff);
  } else if (a >= b) {

    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2509 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot0 = 0;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot0 = 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && quot0)) {
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2541 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  return a;
}

static float __cuda_remquof(float a, float b, int* quo)
{
  float twoa = 0.0f;
  unsigned int quot = 0;
  unsigned int sign;
  float orig_a = a;
  float orig_b = b;


  sign = 0 - (__cuda___signbitf(a) != __cuda___signbitf(b));
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    *quo = quot;
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    *quo = quot;
    return __int_as_float(0x7fffffff);
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2594 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot <<= 1;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot += 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && (quot & 1))) {
    quot++;
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2629 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  quot = quot & (~((~0)<<3));
  quot = quot ^ sign;
  quot = quot - sign;
  *quo = quot;
  return a;
}

static float __cuda_fmaf(float a, float b, float c)
{
  unsigned int xx, yy, zz, ww;
  unsigned int temp, s, u;
  unsigned int expo_x, expo_y, expo_z;

  xx = __float_as_int(a);
  yy = __float_as_int(b);
  zz = __float_as_int(c);
# 2655 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
  temp = 0xff;
  expo_x = temp & (xx >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy >> 23);
  expo_y = expo_y - 1;
  expo_z = temp & (zz >> 23);
  expo_z = expo_z - 1;

  if (!((expo_x <= 0xFD) &&
        (expo_y <= 0xFD) &&
        (expo_z <= 0xFD))) {




    if ((yy << 1) > 0xff000000) {
      return __int_as_float(0x7fffffff);
    }
    if ((zz << 1) > 0xff000000) {
      return __int_as_float(0x7fffffff);
    }
    if ((xx << 1) > 0xff000000) {
      return __int_as_float(0x7fffffff);
    }
# 2690 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
    if ((((xx << 1) == 0) && ((yy << 1) == 0xff000000)) ||
        (((yy << 1) == 0) && ((xx << 1) == 0xff000000))) {
      return __int_as_float(0x7fffffff);
    }
    if ((zz << 1) == 0xff000000) {
      if (((yy << 1) == 0xff000000) || ((xx << 1) == 0xff000000)) {
        if ((int)(xx ^ yy ^ zz) < 0) {
          return __int_as_float(0x7fffffff);
        }
      }
    }




    if ((xx << 1) == 0xff000000) {
      xx = xx ^ (yy & 0x80000000);
      return __int_as_float(xx);
    }
    if ((yy << 1) == 0xff000000) {
      yy = yy ^ (xx & 0x80000000);
      return __int_as_float(yy);
    }
    if ((zz << 1) == 0xff000000) {
      return __int_as_float(zz);
    }





    if (zz == 0x80000000) {
      if (((xx << 1) == 0) || ((yy << 1) == 0)) {
        if ((int)(xx ^ yy) < 0) {
          return __int_as_float(zz);
        }
      }
    }



    if (((zz << 1) == 0) &&
        (((xx << 1) == 0) || ((yy << 1) == 0))) {
      zz &= 0x7fffffff;
      return __int_as_float(zz);
    }



    if (((xx << 1) == 0) || ((yy << 1) == 0)) {
      return __int_as_float(zz);
    }

    if (expo_x == (unsigned int)-1) {
      temp = xx & 0x80000000;
      xx = xx << 8;
      while (!(xx & 0x80000000)) {
        xx <<= 1;
        expo_x--;
      }
      expo_x++;
      xx = (xx >> 8) | temp;
    }

    if (expo_y == (unsigned int)-1) {
      temp = yy & 0x80000000;
      yy = yy << 8;
      while (!(yy & 0x80000000)) {
        yy <<= 1;
        expo_y--;
      }
      expo_y++;
      yy = (yy >> 8) | temp;
    }

    if ((expo_z == (unsigned int)-1) && ((zz << 1) != 0)) {
      temp = zz & 0x80000000;
      zz = zz << 8;
      while (!(zz & 0x80000000)) {
        zz <<= 1;
        expo_z--;
      }
      expo_z++;
      zz = (zz >> 8) | temp;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx ^ yy;
  xx = xx & 0x00ffffff;
  yy = yy << 8;
  xx = xx | 0x00800000;
  yy = yy | 0x80000000;

  s = __umulhi(xx, yy);
  yy = xx * yy;
  xx = s;
  expo_x = expo_x - 127 + 2;
  expo_y = expo_y & 0x80000000;


  if (xx < 0x00800000) {
      xx = (xx << 1) | (yy >> 31);
      yy = (yy << 1);
      expo_x--;
  }
  temp = 0;
  if ((zz << 1) != 0) {
    s = zz & 0x80000000;
    zz &= 0x00ffffff;
    zz |= 0x00800000;
    ww = 0;

    if ((int)expo_z > (int)expo_x) {
      temp = expo_z;
      expo_z = expo_x;
      expo_x = temp;
      temp = zz;
      zz = xx;
      xx = temp;
      temp = ww;
      ww = yy;
      yy = temp;
      temp = expo_y;
      expo_y = s;
      s = temp;
    }


    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 49) {

      temp = 0;
      while (expo_z >= 32) {
        temp = ww | (temp != 0);
        ww = zz;
        zz = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        temp = ((temp >> expo_z) | (ww << (32 - expo_z)) |
                ((temp << (32 - expo_z)) != 0));
        ww = (ww >> expo_z) | (zz << (32 - expo_z));
        zz = (zz >> expo_z);
      }
    } else {
      temp = 1;
      ww = 0;
      zz = 0;
    }
    if ((int)u < 0) {

      temp = (unsigned)(-(int)temp);
      s = (temp != 0);
      u = yy - s;
      s = u > yy;
      yy = u - ww;
      s += yy > u;
      xx = (xx - zz) - s;
      if (!(xx | yy | temp)) {

        return __int_as_float(xx);
      }
      if ((int)xx < 0) {



        temp = ~temp;
        yy = ~yy;
        xx = ~xx;
        if (++temp == 0) {
          if (++yy == 0) {
            ++xx;
          }
        }
        expo_y ^= 0x80000000;
      }

      while (!(xx & 0x00800000)) {
        xx = (xx << 1) | (yy >> 31);
        yy = (yy << 1);
        expo_x--;
      }
    } else {

      yy = yy + ww;
      s = yy < ww;
      xx = xx + zz + s;
      if (xx & 0x01000000) {
        temp = temp | (yy << 31);
        yy = (yy >> 1) | (xx << 31);
        xx = ((xx & 0x80000000) | (xx >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  temp = yy | (temp != 0);
  if (expo_x <= 0xFD) {

    xx |= expo_y;
    s = xx & 1;
    xx += (temp == 0x80000000) ? s : (temp >> 31);
    xx = xx + (expo_x << 23);
    return __int_as_float(xx);
  } else if ((int)expo_x >= 126) {

    xx = expo_y | 0x7f800000;
    return __int_as_float(xx);
  }

  expo_x = (unsigned int)(-(int)expo_x);
  if (expo_x > 25) {

    return __int_as_float(expo_y);
  }
  yy = (xx << (32 - expo_x)) | ((yy) ? 1 : 0);
  xx = expo_y + (xx >> expo_x);
  xx = xx + ((yy==0x80000000) ? (xx & 1) : (yy >> 31));
  xx |= expo_y;




  return __int_as_float(xx);
}

static float __internal_accurate_powf(float a, float b)
{
  float2 loga, prod;



  float t;



  loga = __internal_log_ep(a);


  if (__cuda_fabsf(b) > 1.0e34f) b *= 1.220703125e-4f;
  prod.y = b;
  prod.x = 0.0f;
  prod = __internal_dsmul (prod, loga);


  if (__float_as_int(prod.y) == 0x42b17218) {
    prod.y = __int_as_float(__float_as_int(prod.y) - 1);
    prod.x = prod.x + __int_as_float(0x37000000);
  }


  t = __cuda_expf(prod.y);

  if (t != __int_as_float(0x7f800000)) {



    t = t * prod.x + t;
  }
  return t;
}

static float __cuda_powif(float a, int b)
{
  unsigned int e = __cuda_abs(b);
  float r = 1.0f;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0f/r : r;
    }
    a = a * a;
  }
}

static double __cuda_powi(double a, int b)
{
  unsigned int e = __cuda_abs(b);
  double r = 1.0;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0/r : r;
    }
    a = a * a;
  }
}

static float __cuda_powf(float a, float b)
{





  int bIsOddInteger;
  float t;
  if (a == 1.0f || b == 0.0f) {
    return 1.0f;
  }
  if (__cuda___isnanf(a) || __cuda___isnanf(b)) {
    return a + b;
  }
  if (a == __int_as_float(0x7f800000)) {
    return __cuda___signbitf(b) ? 0.0f : __int_as_float(0x7f800000);
  }
  if (__cuda___isinff(b)) {
    if (a == -1.0f) {
      return 1.0f;
    }
    t = (__cuda_fabsf(a) > 1.0f) ? __int_as_float(0x7f800000) : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  bIsOddInteger = (b - (2.0f * floorf(0.5f * b))) == 1.0f;
  if (a == 0.0f) {
    t = bIsOddInteger ? a : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  if (a == -__int_as_float(0x7f800000)) {
    t = (b < 0.0f) ? -1.0f/a : -a;
    if (bIsOddInteger) {
      t = __int_as_float(__float_as_int(t) ^ 0x80000000);
    }
    return t;
  }
  if ((a < 0.0f) && (b != __cuda_truncf(b))) {
    return __int_as_float(0x7fffffff);
  }
  t = __cuda_fabsf(a);
  t = __internal_accurate_powf(t, b);
  if ((a < 0.0f) && bIsOddInteger) {
    t = __int_as_float(__float_as_int(t) ^ 0x80000000);
  }
  return t;

}


static float __internal_tgammaf_kernel(float a)
{
  float t;
  t = - 1.05767296987211380E-003f;
  t = t * a + 7.09279059435508670E-003f;
  t = t * a - 9.65347121958557050E-003f;
  t = t * a - 4.21736613253687960E-002f;
  t = t * a + 1.66542401247154280E-001f;
  t = t * a - 4.20043267827838460E-002f;
  t = t * a - 6.55878234051332940E-001f;
  t = t * a + 5.77215696929794240E-001f;
  t = t * a + 1.00000000000000000E+000f;
  return t;
}





static float __cuda_tgammaf(float a)
{
  float s, xx, x=a;
  if (x >= 0.0f) {
    if (x > 36.0f) x = 36.0f;
    s = 1.0f;
    xx = x;
    if (x > 34.03f) {
      xx -= 1.0f;
    }
    while (xx > 1.5f) {
      xx = xx - 1.0f;
      s = s * xx;
    }
    if (x >= 0.5f) {
      xx = xx - 1.0f;
    }
    xx = __internal_tgammaf_kernel(xx);
    if (x < 0.5f) {
      xx = xx * x;
    }
    s = s / xx;
    if (x > 34.03f) {

      xx = x - 1.0f;
      s = s * xx;
    }
    return s;
  } else {
    if (x == __cuda_floorf(x)) {
      x = __int_as_float(0x7fffffff);

      return x;

    }
    if (x < -41.1f) x = -41.1f;
    xx = x;
    if (x < -34.03f) {
      xx += 6.0f;
    }
    s = xx;
    while (xx < -0.5f) {
      xx = xx + 1.0f;
      s = s * xx;
    }
    xx = __internal_tgammaf_kernel(xx);
    s = s * xx;
    s = 1.0f / s;
    if (x < -34.03f) {
      xx = x;
      xx *= (x + 1.0f);
      xx *= (x + 2.0f);
      xx *= (x + 3.0f);
      xx *= (x + 4.0f);
      xx *= (x + 5.0f);
      xx = 1.0f / xx;
      s = s * xx;
      if ((a < -42.0f) && !(((int)a)&1)) {
        s = __int_as_float(0x80000000);
      }
    }
    return s;
  }
}

static float __cuda_roundf(float a)
{



  float fa = __cuda_fabsf(a);
  if (fa > 8388608.0f) {
    return a;
  } else {
    float u = __cuda_floorf(fa + 0.5f);
    if (fa < 0.5f) u = 0.0f;
    return __cuda_copysignf(u, a);
  }

}

static long long int __internal_llroundf_kernel(float a)
{
  unsigned long long int res, t = 0LL;
  int shift;
  unsigned int ia = __float_as_int(a);
  if ((ia << 1) > 0xff000000) return 0LL;
  if ((int)ia >= 0x5f000000) return 0x7fffffffffffffffLL;
  if (ia >= 0xdf000000) return 0x8000000000000000LL;
  shift = 189 - ((ia >> 23) & 0xff);
  res = ((long long int)(((ia << 8) | 0x80000000) >> 1)) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (t >= 0x8000000000000000LL) {
      res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)(-(long long int)res);
  return (long long int)res;
}

static long long int __cuda_llroundf(float a)
{



  return __internal_llroundf_kernel(a);

}

static long int __cuda_lroundf(float a)
{




  return (long int)__cuda_llroundf(a);
# 3192 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
}

static float __cuda_fdimf(float a, float b)
{
  float t;
  t = a - b;
  if (a <= b) {
    t = 0.0f;
  }
  return t;
}

static int __cuda_ilogbf(float a)
{
  unsigned int i;
  int expo;
  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    if ((i == 0x7f800000)) {
      expo = ((int)((unsigned int)-1 >> 1));
    }
    if ((i > 0x7f800000)) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    }
  }
  return expo;
}

static float __cuda_logbf(float a)
{



  unsigned int i;
  int expo;
  float res;

  if (__cuda___isnanf(a)) return a + a;

  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      res = -__int_as_float(0x7f800000);
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
      res = (float)expo;
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    res = (float)expo;
    if ((i >= 0x7f800000)) {

      res = a + a;
    }
  }
  return res;

}

static void __cuda_sincosf(float a, float *sptr, float *cptr)
{





  float t, u, s, c;
  int quadrant;
  if (__cuda___isinff(a)) {
    *sptr = __int_as_float(0x7fffffff);
    *cptr = __int_as_float(0x7fffffff);
    return;
  }
  if (a == 0.0f) {
    *sptr = a;
    *cptr = 1.0f;
    return;
  }
  t = __internal_trig_reduction_kernel(a, &quadrant);
  u = __internal_cos_kernel(t);
  t = __internal_sin_kernel(t);
  if (quadrant & 1) {
    s = u;
    c = t;
  } else {
    s = t;
    c = u;
  }
  if (quadrant & 2) {
    s = -s;
  }
  quadrant++;
  if (quadrant & 2) {
    c = -c;
  }
  *sptr = s;
  *cptr = c;

}
# 3323 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}
# 3861 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/math_functions_dbl_ptx3.h" 1 3
# 59 "/home/gdiamos/temp/cuda/bin//../include/math_functions_dbl_ptx3.h" 3
static double __cuda_fabs(double a)
{
  return fabs(a);
}

static double __cuda_fmax(double a, double b)
{

  volatile union {
    double d;
    unsigned long long int l;
  } cvta, cvtb;
  cvta.d = a;
  cvtb.d = b;
  if ((cvtb.l << 1) > 0xffe0000000000000ULL) return a;
  if ((cvta.l << 1) > 0xffe0000000000000ULL) return b;
  if ((cvta.d == 0.0) && (cvtb.d == 0.0)) {
    cvta.l &= cvtb.l;
    return cvta.d;
  }
  return a > b ? a : b;



}

static double __cuda_fmin(double a, double b)
{

  volatile union {
    double d;
    unsigned long long int l;
  } cvta, cvtb;
  cvta.d = a;
  cvtb.d = b;
  if ((cvtb.l << 1) > 0xffe0000000000000ULL) return a;
  if ((cvta.l << 1) > 0xffe0000000000000ULL) return b;
  if ((cvta.l | cvtb.l) == 0x8000000000000000ULL) {
    return __longlong_as_double(0x8000000000000000ULL) ;
  }
  return a < b ? a : b;



}

static double __cuda_ceil(double a)
{
  return ceil(a);
}

static double __cuda_floor(double a)
{
  return floor(a);
}

static double __cuda_trunc(double a)
{
  return trunc(a);
}

static double __cuda_nearbyint(double a)
{



  double res = nearbyint(a);





  return res;

}







static double __cuda_rint(double a)
{
  return __cuda_nearbyint(a);
}

static long int __cuda_lrint(double a)
{

  return (long int)__double2ll_rn(a);



}

static long long int __cuda_llrint(double a)
{
  return __double2ll_rn(a);
}

static int __cuda___signbit(double a)
{
  return (int)((unsigned int)__double2hiint(a) >> 31);
}

static int __cuda___finite(double a)
{
  return __cuda_fabs(a) < __longlong_as_double(0x7ff0000000000000ULL);
}

static int __cuda___isinf(double a)
{
  return __cuda_fabs(a) == __longlong_as_double(0x7ff0000000000000ULL);
}

static int __cuda___isnan(double a)
{
  return !(__cuda_fabs(a) <= __longlong_as_double(0x7ff0000000000000ULL));
}

static double __cuda_copysign(double a, double b)
{
  int alo, ahi, bhi;

  bhi = __double2hiint(b);
  alo = __double2loint(a);
  ahi = __double2hiint(a);
  ahi = (bhi & 0x80000000) | (ahi & ~0x80000000);
  return __hiloint2double(ahi, alo);
}


static unsigned long long int __cudart_i2opi_d [] = {
  0x6bfb5fb11f8d5d08ULL,
  0x3d0739f78a5292eaULL,
  0x7527bac7ebe5f17bULL,
  0x4f463f669e5fea2dULL,
  0x6d367ecf27cb09b7ULL,
  0xef2f118b5a0a6d1fULL,
  0x1ff897ffde05980fULL,
  0x9c845f8bbdf9283bULL,
  0x3991d639835339f4ULL,
  0xe99c7026b45f7e41ULL,
  0xe88235f52ebb4484ULL,
  0xfe1deb1cb129a73eULL,
  0x06492eea09d1921cULL,
  0xb7246e3a424dd2e0ULL,
  0xfe5163abdebbc561ULL,
  0xdb6295993c439041ULL,
  0xfc2757d1f534ddc0ULL,
  0xa2f9836e4e441529ULL,
};

static double __internal_trig_reduction_kerneld(double a, int *quadrant)
{
  double j;
  int q;
  if (__cuda_fabs(a) > 2147483648.0) {

    unsigned long long int ia;
    unsigned long long int s;
    unsigned long long int result[5];
    unsigned long long int phi, plo;
    unsigned long long int hi, lo;
    unsigned int e;
    int idx;

    ia = __double_as_longlong(a);
    s = ia & 0x8000000000000000ULL;
    e = (unsigned int)(((ia >> 52) & 0x7ff) - 1024);
    ia = (ia << 11) | 0x8000000000000000ULL;

    idx = 16 - (e >> 6);
    hi = 0;



    for (q = (idx-1); q < min(18,idx+3); q++) {
      plo = __cudart_i2opi_d[q] * ia;
      phi = __umul64hi (__cudart_i2opi_d[q], ia);
      lo = hi + plo;
      hi = phi + (lo < plo);
      result[q-(idx-1)] = lo;
    }
    result[q-(idx-1)] = hi;
    e = e & 63;



    hi = result[3];
    lo = result[2];
    if (e) {
      q = 64 - e;
      hi = (hi << e) | (lo >> q);
      lo = (lo << e) | (result[1] >> q);
    }
    q = (int)(hi >> 62);

    hi = (hi << 2) | (lo >> 62);
    lo = (lo << 2);
    e = (hi | (lo > 0)) > 0x8000000000000000ULL;
    q += e;
    if (s) q = -q;
    if (e) {
      unsigned long long int t;
      hi = ~hi;
      lo = -(long long int)lo;
      t = (lo == 0ULL);
      hi += t;
      s = s ^ 0x8000000000000000ULL;
    }
    *quadrant = q;

    e = 0;
    while ((long long int)hi > 0) {
      hi = (hi << 1) | (lo >> 63);
      lo = (lo << 1);
      e--;
    }
    lo = hi * 0xC90FDAA22168C235ULL;
    hi = __umul64hi (hi, 0xC90FDAA22168C235ULL);
    if ((long long int)hi > 0) {
      hi = (hi << 1) | (lo >> 63);
      lo = (lo << 1);
      e--;
    }
    hi = hi + (lo > 0);
    ia = s | ((((unsigned long long int)(e + 1022)) << 52) + (hi >> 11) +
              ((hi << 53) >= 0x8000000000000000ULL));
    return __longlong_as_double(ia);
  }

  q = __double2int_rn (a * 6.3661977236758138e-1);
  j = (double)q;




  a = __fma_rn (-j, 1.5707963267948966e+000, a);
  a = __fma_rn (-j, 6.1232339957367574e-017, a);
  a = __fma_rn (-j, 8.4784276603688985e-032, a);
  *quadrant = q;
  return a;
}


static double __internal_sin_kerneld(double x)
{
  double x2, z;
  x2 = x * x;
  z = 1.5896230157221844E-010;
  z = __fma_rn (z, x2, -2.5050747762850355E-008);
  z = __fma_rn (z, x2, 2.7557313621385676E-006);
  z = __fma_rn (z, x2, -1.9841269829589539E-004);
  z = __fma_rn (z, x2, 8.3333333333221182E-003);
  z = __fma_rn (z, x2, -1.6666666666666630E-001);
  z = z * x2;
  z = __fma_rn (z, x, x);
  return z;
}


static double __internal_cos_kerneld(double x)
{
  double x2, z;
  x2 = x * x;
  z = -1.136788825395985E-011;
  z = __fma_rn (z, x2, 2.087588480545065E-009);
  z = __fma_rn (z, x2, -2.755731555403950E-007);
  z = __fma_rn (z, x2, 2.480158729365970E-005);
  z = __fma_rn (z, x2, -1.388888888888074E-003);
  z = __fma_rn (z, x2, 4.166666666666664E-002);
  z = __fma_rn (z, x2, -5.000000000000000E-001);
  z = __fma_rn (z, x2, 1.000000000000000E+000);
  return z;
}


static double __internal_tan_kerneld(double x, int i)
{
  double x2, z, q;
  x2 = x * x;
  z = 9.8006287203286300E-006;
  z = __fma_rn (z, x2, -2.4279526494179897E-005);
  z = __fma_rn (z, x2, 4.8644173130937162E-005);
  z = __fma_rn (z, x2, -2.5640012693782273E-005);
  z = __fma_rn (z, x2, 6.7223984330880073E-005);
  z = __fma_rn (z, x2, 8.3559287318211639E-005);
  z = __fma_rn (z, x2, 2.4375039850848564E-004);
  z = __fma_rn (z, x2, 5.8886487754856672E-004);
  z = __fma_rn (z, x2, 1.4560454844672040E-003);
  z = __fma_rn (z, x2, 3.5921008885857180E-003);
  z = __fma_rn (z, x2, 8.8632379218613715E-003);
  z = __fma_rn (z, x2, 2.1869488399337889E-002);
  z = __fma_rn (z, x2, 5.3968253972902704E-002);
  z = __fma_rn (z, x2, 1.3333333333325342E-001);
  z = __fma_rn (z, x2, 3.3333333333333381E-001);
  z = z * x2;
  q = __fma_rn (z, x, x);
  if (i) {
    double s = q - x;
    double w = __fma_rn (z, x, -s);
    z = 1.0 / q;
    z = -z;
    s = __fma_rn (q, z, 1.0);
    q = __fma_rn (z, __fma_rn (z, w, s), z);
  }
  return q;
}

static double __cuda_sqrt(double a)
{
  return sqrt(a);
}

static double __cuda_rsqrt(double a)
{

    return 1.0 / sqrt(a);



}


static double __internal_expm1_kernel (double a)
{
  double t;
  t = 2.08842685477913050E-009;
  t = __fma_rn (t, a, 2.51366409033551950E-008);
  t = __fma_rn (t, a, 2.75574612072447230E-007);
  t = __fma_rn (t, a, 2.75571539284473460E-006);
  t = __fma_rn (t, a, 2.48015869443077950E-005);
  t = __fma_rn (t, a, 1.98412699878799470E-004);
  t = __fma_rn (t, a, 1.38888888892029890E-003);
  t = __fma_rn (t, a, 8.33333333327662860E-003);
  t = __fma_rn (t, a, 4.16666666666656370E-002);
  t = __fma_rn (t, a, 1.66666666666667380E-001);
  t = __fma_rn (t, a, 5.00000000000000000E-001);
  t = t * a;
  t = __fma_rn (t, a, a);
  return t;
}


static double __internal_atanh_kernel (double a_1, double a_2)
{
  double a, a2, t;

  a = a_1 + a_2;
  a2 = a * a;
  t = 7.597322383488143E-002/65536.0;
  t = __fma_rn (t, a2, 6.457518383364042E-002/16384.0);
  t = __fma_rn (t, a2, 7.705685707267146E-002/4096.0);
  t = __fma_rn (t, a2, 9.090417561104036E-002/1024.0);
  t = __fma_rn (t, a2, 1.111112158368149E-001/256.0);
  t = __fma_rn (t, a2, 1.428571416261528E-001/64.0);
  t = __fma_rn (t, a2, 2.000000000069858E-001/16.0);
  t = __fma_rn (t, a2, 3.333333333333198E-001/4.0);
  t = t * a2;
  t = __fma_rn (t, a, a_2);
  t = t + a_1;
  return t;
}

static double __internal_exp2i_kernel(int b)
{
  return __hiloint2double((b + 1023) << 20, 0);
}

static double __internal_half(double a)
{
  unsigned int ihi, ilo;
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  return __hiloint2double(ihi - 0x00100000, ilo);
}

static double __internal_twice(double a)
{
  unsigned int ihi, ilo;
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  return __hiloint2double(ihi + 0x00100000, ilo);
}

static double __cuda_sin(double a)
{
  double z;
  int i;
  if (__cuda___isinf(a) || (a == 0.0)) {
    return __dmul_rn(a, 0.0);
  }
  z = __internal_trig_reduction_kerneld(a, &i);

  if (i & 1) {
    z = __internal_cos_kerneld(z);
  } else {
    z = __internal_sin_kerneld(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}

static double __cuda_cos(double a)
{
  double z;
  int i;
  if (__cuda___isinf(a)) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  z = __internal_trig_reduction_kerneld(a, &i);

  i++;
  if (i & 1) {
    z = __internal_cos_kerneld(z);
  } else {
    z = __internal_sin_kerneld(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}

static void __cuda_sincos(double a, double *sptr, double *cptr)
{
  double t, u, s, c;
  int i;
  if (__cuda___isinf(a)) {
    *sptr = __longlong_as_double(0xfff8000000000000ULL);
    *cptr = __longlong_as_double(0xfff8000000000000ULL);
    return;
  }
  if (a == 0.0) {
    *sptr = a;
    *cptr = 1.0;
    return;
  }
  t = __internal_trig_reduction_kerneld(a, &i);
  u = __internal_cos_kerneld(t);
  t = __internal_sin_kerneld(t);
  if (i & 1) {
    s = u;
    c = t;
  } else {
    s = t;
    c = u;
  }
  if (i & 2) {
    s = -s;
  }
  i++;
  if (i & 2) {
    c = -c;
  }
  *sptr = s;
  *cptr = c;
}

static double __cuda_tan(double a)
{
  double z;
  int i;
  if (__cuda___isinf(a)) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  z = __internal_trig_reduction_kerneld(a, &i);

  z = __internal_tan_kerneld(z, i & 1);
  return z;
}

static double __cuda_log(double a)
{
  double m, f, g, u, v, tmp, q, ulo, log_lo, log_hi;
  int ihi, ilo;
  int e = 0;

  ihi = __double2hiint(a);
  ilo = __double2loint(a);
  if (__cuda___isnan(a)) {
    return a + a;
  }

  if (a < 0.0) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }

  if (a == 0) {
    return -__longlong_as_double(0x7ff0000000000000ULL);
  }

  if (__cuda___isinf(a)) {
    return a;
  }

  if (a < 2.22507385850720140e-308) {
    a = a * 18014398509481984.0;
    e = -54;
    ihi = __double2hiint(a);
    ilo = __double2loint(a);
  }



  e += ((ihi >> 20) & 0x7ff) - 1023;
  m = __hiloint2double ((ihi & 0x800fffff) | 0x3ff00000, ilo);
  if (m > 1.4142135623730951e+0) {
    m = __internal_half(m);
    e = e + 1;
  }

  f = m - 1.0;
  g = m + 1.0;
  g = 1.0 / g;
  u = f * g;
  u = u + u;

  v = u * u;
  q = 6.7261411553826339E-2/65536.0;
  q = __fma_rn (q, v, 6.6133829643643394E-2/16384.0);
  q = __fma_rn (q, v, 7.6940931149150890E-2/4096.0);
  q = __fma_rn (q, v, 9.0908745692137444E-2/1024.0);
  q = __fma_rn (q, v, 1.1111111499059706E-1/256.0);
  q = __fma_rn (q, v, 1.4285714283305975E-1/64.0);
  q = __fma_rn (q, v, 2.0000000000007223E-1/16.0);
  q = __fma_rn (q, v, 3.3333333333333326E-1/4.0);
  tmp = __internal_twice (f - u);
  tmp = __fma_rn (-u, f, tmp);
  ulo = g * tmp;

  q = q * v;
  q = q * u;

  log_hi = u;
  log_lo = ulo + q;

  q = __fma_rn ( e, 6.9314718055994529e-1, log_hi);
  tmp = __fma_rn (-e, 6.9314718055994529e-1, q);
  tmp = tmp - log_hi;
  log_hi = q;
  log_lo = log_lo - tmp;
  log_lo = __fma_rn (e, 2.3190468138462996e-17, log_lo);
  return log_hi + log_lo;
}


static double2 __internal_ddadd_xgty (double2 x, double2 y)
{
    double2 z;

    volatile double r, s, e;



    r = x.y + y.y;
    e = x.y - r;
    s = ((e + y.y) + y.x) + x.x;
    z.y = e = r + s;
    z.x = (r - e) + s;
    return z;
}


static double2 __internal_ddmul (double2 x, double2 y)
{

    volatile double e;



    double2 t, z;
    t.y = x.y * y.y;
    t.x = __fma_rn (x.y, y.y, -t.y);
    t.x = __fma_rn (x.x, y.x, t.x);
    t.x = __fma_rn (x.y, y.x, t.x);
    t.x = __fma_rn (x.x, y.y, t.x);
    z.y = e = t.y + t.x;
    z.x = (t.y - e) + t.x;
    return z;
}

static double2 __internal_log_ext_prec(double a)
{
  double2 res;
  double2 qq, cc, uu, tt;
  double f, g, u, v, q, ulo, tmp, m;
  int ilo, ihi, expo;

  ihi = __double2hiint(a);
  ilo = __double2loint(a);
  expo = (ihi >> 20) & 0x7ff;

  if (expo == 0) {
    a *= 18014398509481984.0;
    ihi = __double2hiint(a);
    ilo = __double2loint(a);
    expo = (ihi >> 20) & 0x7ff;
    expo -= 54;
  }
  expo -= 1023;




  m = __hiloint2double((ihi & 0x800fffff) | 0x3ff00000, ilo);
  if (m > 1.4142135623730951e+0) {
    m = __internal_half(m);
    expo = expo + 1;
  }





  f = m - 1.0;
  g = m + 1.0;
  g = 1.0 / g;
  u = f * g;
  u = u + u;

  v = u * u;
  q = 6.6253631649203309E-2/65536.0;
  q = __fma_rn (q, v, 6.6250935587260612E-2/16384.0);
  q = __fma_rn (q, v, 7.6935437806732829E-2/4096.0);
  q = __fma_rn (q, v, 9.0908878711093280E-2/1024.0);
  q = __fma_rn (q, v, 1.1111111322892790E-1/256.0);
  q = __fma_rn (q, v, 1.4285714284546502E-1/64.0);
  q = __fma_rn (q, v, 2.0000000000003113E-1/16.0);
  q = q * v;

  tmp = __internal_twice (f - u);
  tmp = __fma_rn (-u, f, tmp);
  ulo = g * tmp;

  qq.y = q;
  qq.x = 0.0;
  uu.y = u;
  uu.x = ulo;
  cc.y = 3.3333333333333331E-1/4.0;
  cc.x = -9.8201492846582465E-18/4.0;
  qq = __internal_ddadd_xgty (cc, qq);

  qq = __internal_ddmul(qq, uu);
  qq = __internal_ddmul(qq, uu);
  qq = __internal_ddmul(qq, uu);
  uu = __internal_ddadd_xgty (uu, qq);
  u = uu.y;
  ulo = uu.x;

  tt.y = expo * 6.9314718055966296e-001;
  tt.x = expo * 2.8235290563031577e-013;

  res = __internal_ddadd_xgty (tt, uu);
  return res;
}

static double __cuda_log2(double a)
{
  double t;
  t = __cuda_log(a);
  return __fma_rn (t, 1.4426950408889634e+0, t * 2.0355273740931033e-17);
}

static double __cuda_log10(double a)
{
  double t;
  t = __cuda_log(a);
  return __fma_rn (t, 4.3429448190325182e-1, t * 1.09831965021676510e-17);
}

static double __cuda_log1p(double a)
{
  double t;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  if ((a < -0.4) || (a > 6.6666666666666667e-1)) {
    return __cuda_log (a + 1.0);
  }

  t = a + 2.0;
  t = a / t;
  t = -a * t;
  t = __internal_atanh_kernel(a, t);
  return t;
}

static double __internal_exp_kernel(double a, int scale)
{
  double t, fac, z;
  int i;

  t = __cuda_rint (a * 1.4426950408889634e+0);
  i = (int)t;
  z = __fma_rn (t, -6.9314718055994529e-1, a);
  z = __fma_rn (t, -2.3190468138462996e-17, z);
  fac = 2.0;
  if (i <= -1021) {
    i += 55;
    fac = 5.5511151231257827e-17;
  }
  t = __internal_expm1_kernel(z);

  z = __hiloint2double((1022 + i + scale) << 20, 0);
  t = __fma_rn (t, z, z);
  t = t * fac;
  return t;
}

static double __cuda_exp(double a)
{
  if (a > 7.0978271289338397e+2) {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (a <= -7.4513321910194122e+2) {
    return 0.0;
  }
  a = __internal_exp_kernel(a, 0);
  return a;
}

static double __cuda_exp2(double a)
{
  double z;
  double t;
  double fac;
  int i;

  if (a >= 1024.0) {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (a < -1075.0) {
    return 0.0;
  }
  t = __cuda_rint (a);
  z = a - t;
  i = (int)t;
  fac = 2.0;
  if (i <= -1021) {
    i += 55;
    fac = 5.5511151231257827e-17;
  }

  z = __fma_rn (z, 6.9314718055994529e-1, z * 2.3190468138462996e-17);
  t = __internal_expm1_kernel(z);
  z = __hiloint2double((1022 + i) << 20, 0);
  t = __fma_rn (t, z, z);
  t = t * fac;
  return t;
}

static double __cuda_exp10(double a)
{
  double z;
  double t;
  double fac;
  int i;

  if (a >= 3.0825471555991675e+2) {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (a < -3.2360724533877976e+2) {
    return 0.0;
  }
  t = __cuda_rint (a * 3.3219280948873622e+0);
  i = (int)t;
  z = __fma_rn (t, -3.0102999566398120e-1, a);
  z = __fma_rn (t, -(-2.8037281277851704e-18), z);
  fac = 2.0;
  if (i <= -1021) {
    i += 55;
    fac = 5.5511151231257827e-17;
  }

  z = __fma_rn (z, 2.3025850929940459e+0, z * (-2.1707562233822494e-16));
  t = __internal_expm1_kernel(z);

  z = __hiloint2double((1022 + i) << 20, 0);
  t = __fma_rn (t, z, z);
  t = t * fac;
  return t;
}

static double __cuda_expm1(double a)
{
  double t, z, u;
  int i, j;
  if (a > 7.0978271289338397e+2) {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (a < -53.0) {
    return -1.0;
  }
  t = __cuda_rint (a * 1.4426950408889634e+0);
  i = (int)t;
  z = __fma_rn (t, -6.9314718055994529e-1, a);
  z = __fma_rn (t, -2.3190468138462996e-17, z);
  if (__cuda_fabs(a) < 0.405465108) {
    z = a;
    i = 0;
  }
  j = (i == 1024) ? (i - 1) : i;
  t = __internal_expm1_kernel(z);
  u = __hiloint2double((1023 + j) << 20, 0);
  a = u - 1.0;
  t = __fma_rn (t, u, a);
  if (z == 0.0) t = z;
  if (i == 1024) t = t + t;
  return t;
}

static double __cuda_cosh(double a)
{
  double z;
  if (__cuda___isnan(a)) {
    return a + a;
  }
  a = __cuda_fabs(a);
  z = __internal_exp_kernel(a, -2);
  z = __fma_rn(2.0, z, 0.125 / z);
  if (a >= 7.1047586007394398e+2) {
    z = __int_as_float(0x7f800000);
  }
  return z;
}

static double __cuda_sinh(double a)
{
  double s, z;
  s = a;
  a = __cuda_fabs(a);
  if (a < 1.0) {
    double a2 = a * a;

    z = 1.632386098183803E-010;
    z = __fma_rn (z, a2, 2.504854501385687E-008);
    z = __fma_rn (z, a2, 2.755734274788706E-006);
    z = __fma_rn (z, a2, 1.984126976294102E-004);
    z = __fma_rn (z, a2, 8.333333333452911E-003);
    z = __fma_rn (z, a2, 1.666666666666606E-001);
    z = z * a2;
    z = __fma_rn (z, a, a);
  } else if (a < 2.0) {
    z = __cuda_expm1(a);
    z = __internal_half (z + z / (z + 1.0));
  } else {
    z = __internal_exp_kernel(a, -1);
    z = z + (1.0 / (-4.0 * z));
    if (a >= 7.1047586007394398e+2) {
      z = __longlong_as_double(0x7ff0000000000000ULL);
    }
  }
  z = __cuda_copysign(z, s);
  return z;
}

static double __cuda_tanh(double a)
{
  double t;
  t = __cuda_fabs(a);
  if (t >= 0.55) {
    double s;
    s = 1.0 - 2.0 / (__internal_exp_kernel(2.0 * t, 0) + 1.0);
    if (t > 350.0) {
      s = 1.0;
    }
    a = __cuda_copysign(s, a);
  } else {
    double a2;
    a2 = a * a;
    t = 5.102147717274194E-005;
    t = __fma_rn (t, a2, -2.103023983278533E-004);
    t = __fma_rn (t, a2, 5.791370145050539E-004);
    t = __fma_rn (t, a2, -1.453216755611004E-003);
    t = __fma_rn (t, a2, 3.591719696944118E-003);
    t = __fma_rn (t, a2, -8.863194503940334E-003);
    t = __fma_rn (t, a2, 2.186948597477980E-002);
    t = __fma_rn (t, a2, -5.396825387607743E-002);
    t = __fma_rn (t, a2, 1.333333333316870E-001);
    t = __fma_rn (t, a2, -3.333333333333232E-001);
    t = t * a2;
    t = __fma_rn (t, a, a);
    a = __cuda_copysign(t, a);
  }
  return a;
}

static double __internal_atan_kernel(double a)
{
  double t, a2;
  a2 = a * a;
  t = -2.0258553044438358E-005 ;
  t = __fma_rn (t, a2, 2.2302240345758510E-004);
  t = __fma_rn (t, a2, -1.1640717779930576E-003);
  t = __fma_rn (t, a2, 3.8559749383629918E-003);
  t = __fma_rn (t, a2, -9.1845592187165485E-003);
  t = __fma_rn (t, a2, 1.6978035834597331E-002);
  t = __fma_rn (t, a2, -2.5826796814495994E-002);
  t = __fma_rn (t, a2, 3.4067811082715123E-002);
  t = __fma_rn (t, a2, -4.0926382420509971E-002);
  t = __fma_rn (t, a2, 4.6739496199157994E-002);
  t = __fma_rn (t, a2, -5.2392330054601317E-002);
  t = __fma_rn (t, a2, 5.8773077721790849E-002);
  t = __fma_rn (t, a2, -6.6658603633512573E-002);
  t = __fma_rn (t, a2, 7.6922129305867837E-002);
  t = __fma_rn (t, a2, -9.0909012354005225E-002);
  t = __fma_rn (t, a2, 1.1111110678749424E-001);
  t = __fma_rn (t, a2, -1.4285714271334815E-001);
  t = __fma_rn (t, a2, 1.9999999999755019E-001);
  t = __fma_rn (t, a2, -3.3333333333331860E-001);
  t = t * a2;
  t = __fma_rn (t, a, a);
  return t;
}

static double __cuda_atan2(double a, double b)
{
  double t0, t1, t3;
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }


  t3 = __cuda_fabs(b);
  t1 = __cuda_fabs(a);
  if (t3 == 0.0 && t1 == 0.0) {
    t3 = __cuda___signbit(b) ? 3.1415926535897931e+0 : 0;
  } else if (__cuda___isinf(t3) && __cuda___isinf(t1)) {
    t3 = __cuda___signbit(b) ? 2.3561944901923448e+0 : 7.8539816339744828e-1;
  } else {
    t0 = __cuda_fmax (t1, t3);
    t1 = __cuda_fmin (t1, t3);
    t3 = t1 / t0;
    t3 = __internal_atan_kernel(t3);

    if (__cuda_fabs(a) > __cuda_fabs(b)) t3 = 1.5707963267948966e+0 - t3;
    if (b < 0.0) t3 = 3.1415926535897931e+0 - t3;
  }
  t3 = __cuda_copysign(t3, a);
  return t3;
}

static double __cuda_atan(double a)
{
  double t0, t1;

  t0 = __cuda_fabs(a);
  t1 = t0;
  if (t0 > 1.0) {
    t1 = 1.0 / t1;
  }

  t1 = __internal_atan_kernel(t1);

  if (t0 > 1.0) {
    t1 = 1.5707963267948966e+0 - t1;
  }
  return __cuda_copysign (t1, a);
}


static double __internal_asin_kernel(double a, double b)
{
  double r;
  r = 6.259798167646803E-002;
  r = __fma_rn (r, b, -7.620591484676952E-002);
  r = __fma_rn (r, b, 6.686894879337643E-002);
  r = __fma_rn (r, b, -1.787828218369301E-002);
  r = __fma_rn (r, b, 1.745227928732326E-002);
  r = __fma_rn (r, b, 1.000422754245580E-002);
  r = __fma_rn (r, b, 1.418108777515123E-002);
  r = __fma_rn (r, b, 1.733194598980628E-002);
  r = __fma_rn (r, b, 2.237350511593569E-002);
  r = __fma_rn (r, b, 3.038188875134962E-002);
  r = __fma_rn (r, b, 4.464285849810986E-002);
  r = __fma_rn (r, b, 7.499999998342270E-002);
  r = __fma_rn (r, b, 1.666666666667375E-001);
  r = r * b;
  return r;
}

static double __cuda_asin(double a)
{
  double t0, t1;
  t0 = __cuda_fabs(a);
  if (t0 > 1.0) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  if (t0 > 0.575) {
    t1 = __fma_rn (-0.5, t0, 0.5);
    t0 = __cuda_sqrt (t1);
    t1 = __internal_asin_kernel (t0, t1);
    t0 = -2.0 * t0;
    t1 = __fma_rn (t0, t1, 6.1232339957367660e-17);
    t0 = t0 + 7.8539816339744828e-1;
    t1 = t0 + t1;
    t1 = t1 + 7.8539816339744828e-1;
  } else {
    t1 = t0 * t0;
    t1 = __internal_asin_kernel (t0, t1);
    t1 = __fma_rn (t1, t0, t0);
  }
  return __cuda_copysign(t1, a);
}

static double __cuda_acos(double a)
{
  double t0, t1;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  t0 = __cuda_fabs (a);
  if (t0 > 0.575) {
    t1 = __fma_rn (-0.5, t0, 0.5);
    t0 = __cuda_sqrt(t1);
    t1 = __internal_asin_kernel (t0, t1);
    t0 = __fma_rn (t1, t0, t0);
    t0 = 2.0 * t0;
    if (__cuda___signbit(a)) {
      t0 = __fma_rn (1.0, t0, -1.2246467991473532e-16);
      t0 = 3.1415926535897931e+0 - t0;
    }
  } else {
    t1 = t0 * t0;
    t1 = __internal_asin_kernel (t0, t1);
    t0 = __fma_rn (t1, t0, t0);
    if (__cuda___signbit(a)) {
      t0 = __fma_rn (1.0, t0, +6.1232339957367660e-17);
      t0 = 1.5707963267948966e+0 + t0;
    } else {
      t0 = __fma_rn (1.0, t0, -6.1232339957367660e-17);
      t0 = 1.5707963267948966e+0 - t0;
    }
  }
  return t0;
}

static double __cuda_acosh(double a)
{
  double t;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  t = a - 1.0;
  if (__cuda_fabs(t) > 4503599627370496.0) {

    return 6.9314718055994529e-1 + __cuda_log(a);
  } else {
    t = t + __cuda_sqrt(__fma_rn(a, t, t));
    return __cuda_log1p(t);
  }
}

static double __cuda_asinh(double a)
{
# 1136 "/home/gdiamos/temp/cuda/bin//../include/math_functions_dbl_ptx3.h" 3
  double fa, t;
  fa = __cuda_fabs(a);
  if (fa > 1.0e153) {
    t = 6.9314718055994529e-1 + __cuda_log(fa);
  } else {
    t = fa * fa;
    t = __cuda_log1p (fa + t / (1.0 + __cuda_sqrt(1.0 + t)));
  }

  return __cuda_copysign(t, a);
}

static double __cuda_atanh(double a)
{
  double fa, t;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  fa = __cuda_fabs(a);
  t = (2.0 * fa) / (1.0 - fa);
  t = 0.5 * __cuda_log1p(t);

  if (__cuda___isnan(t)) {
    return t;
  }

  if (__cuda___signbit(a)) {
    t = -t;
  }
  return t;
}

static double __cuda_hypot(double a, double b)
{
  double v, w, t;
  if (__cuda___isinf(a) || __cuda___isinf(b)) {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  v = __cuda_fmax(a, b);
  w = __cuda_fmin(a, b);
  t = w / v;
  t = __fma_rn (t, t, 1.0);
  t = v * __cuda_sqrt(t);
  if (v == 0.0) {
    t = v + w;
  }
  return t;
}

static double __cuda_cbrt(double a)
{
  float s;
  double t, r;
  int ilo, ihi, expo, nexpo, denorm;
  if ((a == 0.0) || !(__cuda___finite(a))) {
    return a + a;
  }
  t = __cuda_fabs(a);
  ilo = __double2loint(t);
  ihi = __double2hiint(t);
  expo = ((int)((unsigned int)ihi >> 20) & 0x7ff);
  denorm = 0;
  if (expo == 0) {

    t = t * 18014398509481984.0;
    denorm = 18;
    ilo = __double2loint(t);
    ihi = __double2hiint(t);
    expo = ((int)((unsigned int)ihi >> 20) & 0x7ff);
  }

  nexpo = __float2int_rn(0.333333333f * (float)(expo - 1022));
  ihi -= (3 * nexpo) << 20;
  r = __hiloint2double(ihi, ilo);

  s = (float)r;
  t = __cuda_exp2f(0.333333333f * __log2f(s));

  t = t - (t - (r / (t * t))) * 3.3333333333333333e-1;
  t = t - (t - (r / (t * t))) * 3.3333333333333333e-1;

  ilo = __double2loint(t);
  ihi = __double2hiint(t);
  ihi += (nexpo - denorm) << 20;
  t = __hiloint2double(ihi, ilo);
  if (__cuda___signbit(a)) {
     t = -t;
  }
  return t;
}

static double __internal_accurate_pow(double a, double b)
{
  double2 loga;
  double2 prod;
  double t_hi, t_lo;
  double tmp;



  double e;



  loga = __internal_log_ext_prec(a);


  if (__cuda_fabs(b) > 1e304) b *= 1.220703125e-4;

  t_hi = loga.y * b;
  t_lo = __fma_rn (loga.y, b, -t_hi);
  t_lo = __fma_rn (loga.x, b, t_lo);
  prod.y = e = t_hi + t_lo;
  prod.x = (t_hi - e) + t_lo;


  tmp = __cuda_exp(prod.y);

  if (!__cuda___isinf(tmp)) {



    tmp = __fma_rn (tmp, prod.x, tmp);
  }
  return tmp;
}

static double __cuda_pow(double a, double b)
{
  int bIsOddInteger;
  double t;
  if (a == 1.0 || b == 0.0) {
    return 1.0;
  }
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }
  if (a == __longlong_as_double(0x7ff0000000000000ULL)) {
    return __cuda___signbit(b) ? 0.0 : __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (__cuda___isinf(b)) {
    if (a == -1.0) {
      return 1.0;
    }
    t = __cuda_fabs(a) > 1.0 ? __longlong_as_double(0x7ff0000000000000ULL) : 0.0;
    if (b < 0.0) {
      t = 1.0 / t;
    }
    return t;
  }
  bIsOddInteger = (b - (2.0 * __cuda_floor(0.5 * b))) == 1.0;
  if (a == 0.0) {
    t = bIsOddInteger ? a : 0.0;
    if (b < 0.0) {
      t = 1.0 / t;
    }
    return t;
  }
  if (a == -__longlong_as_double(0x7ff0000000000000ULL)) {
    t = (b < 0.0) ? -1.0/a : -a;
    if (bIsOddInteger) {
      t = __longlong_as_double(__double_as_longlong(t)^0x8000000000000000ULL);
    }
    return t;
  }
  if ((a < 0.0) && (b != __cuda_trunc(b))) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  t = __cuda_fabs(a);
  t = __internal_accurate_pow(t, b);
  if ((a < 0.0) && bIsOddInteger) {
    t = __longlong_as_double(__double_as_longlong(t) ^ 0x8000000000000000ULL);
  }
  return t;
}

static double __cuda_erf(double a)
{
  double t, r, q;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  t = __cuda_fabs(a);
  if (t >= 1.0) {
    r = -1.28836351230756500E-019;
    r = __fma_rn (r, t, 1.30597472161093370E-017);
    r = __fma_rn (r, t, -6.33924401259620500E-016);
    r = __fma_rn (r, t, 1.96231865908940140E-014);
    r = __fma_rn (r, t, -4.35272243559990750E-013);
    r = __fma_rn (r, t, 7.37083927929352150E-012);
    r = __fma_rn (r, t, -9.91402142550461630E-011);
    r = __fma_rn (r, t, 1.08817017167760820E-009);
    r = __fma_rn (r, t, -9.93918713097634620E-009);
    r = __fma_rn (r, t, 7.66739923255145500E-008);
    r = __fma_rn (r, t, -5.05440278302806720E-007);
    r = __fma_rn (r, t, 2.87474157099000620E-006);
    r = __fma_rn (r, t, -1.42246725399722510E-005);
    r = __fma_rn (r, t, 6.16994555079419460E-005);
    r = __fma_rn (r, t, -2.36305221938908790E-004);
    r = __fma_rn (r, t, 8.05032844055371070E-004);
    r = __fma_rn (r, t, -2.45833366629108140E-003);
    r = __fma_rn (r, t, 6.78340988296706120E-003);
    r = __fma_rn (r, t, -1.70509103597554640E-002);
    r = __fma_rn (r, t, 3.93322852515666300E-002);
    r = __fma_rn (r, t, -8.37271292613764040E-002);
    r = __fma_rn (r, t, 1.64870423707623280E-001);
    r = __fma_rn (r, t, -2.99729521787681470E-001);
    r = __fma_rn (r, t, 4.99394435612628580E-001);
    r = __fma_rn (r, t, -7.52014596480123030E-001);
    r = __fma_rn (r, t, 9.99933138314926250E-001);
    r = __fma_rn (r, t, -1.12836725321102670E+000);
    r = __fma_rn (r, t, 9.99998988715182450E-001);
    q = __internal_exp_kernel(-t * t, 0);
    r = __fma_rn (r, -q, 1.0);
    if (t >= 6.5) {
      r = 1.0;
    }
    a = __cuda_copysign (r, a);
  } else {
    q = t * t;
    r = -7.77946848895991420E-010;
    r = __fma_rn (r, q, 1.37109803980285950E-008);
    r = __fma_rn (r, q, -1.62063137584932240E-007);
    r = __fma_rn (r, q, 1.64471315712790040E-006);
    r = __fma_rn (r, q, -1.49247123020098620E-005);
    r = __fma_rn (r, q, 1.20552935769006260E-004);
    r = __fma_rn (r, q, -8.54832592931448980E-004);
    r = __fma_rn (r, q, 5.22397760611847340E-003);
    r = __fma_rn (r, q, -2.68661706431114690E-002);
    r = __fma_rn (r, q, 1.12837916709441850E-001);
    r = __fma_rn (r, q, -3.76126389031835210E-001);
    r = __fma_rn (r, q, 1.12837916709551260E+000);
    a = r * a;
  }
  return a;
}

static double __cuda_erfc(double a)
{
  double p, q, h, l;
  if (__cuda___isnan(a)) {
    return a + a;
  }
  if (a <= 0.55) {
    return 1.0 - __cuda_erf(a);
  }
  if (a > 27.3) {
    return 0.0;
  }
  if (a <= 5.0) {
    p = 5.64189549785304440E-001;
    p = __fma_rn (p, a, 8.17405083437083490E+000);
    p = __fma_rn (p, a, 5.68958722557864720E+001);
    p = __fma_rn (p, a, 2.42568747802647010E+002);
    p = __fma_rn (p, a, 6.80381374390412930E+002);
    p = __fma_rn (p, a, 1.25873132236024590E+003);
    p = __fma_rn (p, a, 1.43925353963809330E+003);
    p = __fma_rn (p, a, 8.15949420587659230E+002);
    q = a+ 1.44881247113239940E+001;
    q = __fma_rn (q, a, 1.01345387970210510E+002);
    q = __fma_rn (q, a, 4.37184684964009650E+002);
    q = __fma_rn (q, a, 1.25588209225251330E+003);
    q = __fma_rn (q, a, 2.43864015012647630E+003);
    q = __fma_rn (q, a, 3.10570469008816280E+003);
    q = __fma_rn (q, a, 2.35995386578953550E+003);
    q = __fma_rn (q, a, 8.15949420692539320E+002);
  } else {
    p = 5.64189583545675280E-001;
    p = __fma_rn (p, a, 2.04728556066513970E+000);
    p = __fma_rn (p, a, 6.75128409662943610E+000);
    p = __fma_rn (p, a, 1.10459345071747900E+001);
    p = __fma_rn (p, a, 1.22570382896313600E+001);
    p = __fma_rn (p, a, 6.01884641114116460E+000);
    q = a+ 3.62871917534986780E+000;
    q = __fma_rn (q, a, 1.24663395327043550E+001);
    q = __fma_rn (q, a, 2.13927672803974790E+001);
    q = __fma_rn (q, a, 2.72082423532866070E+001);
    q = __fma_rn (q, a, 1.86422906830006700E+001);
    q = __fma_rn (q, a, 6.13809834548870550E+000);
  }
  p = p / q;
  h = -a * a;
  l = __fma_rn (-a, a, -h);
  q = __internal_exp_kernel(h, 0);
  q = __fma_rn (q, l, q);
  p = p * q;
  return p;
}


static double __internal_tgamma_kernel(double a)
{
  double t;
  t = -4.42689340712524750E-010;
  t = __fma_rn (t, a, -2.02665918466589540E-007);
  t = __fma_rn (t, a, 1.13812117211195270E-006);
  t = __fma_rn (t, a, -1.25077348166307480E-006);
  t = __fma_rn (t, a, -2.01365017404087710E-005);
  t = __fma_rn (t, a, 1.28050126073544860E-004);
  t = __fma_rn (t, a, -2.15241408115274180E-004);
  t = __fma_rn (t, a, -1.16516754597046040E-003);
  t = __fma_rn (t, a, 7.21894322484663810E-003);
  t = __fma_rn (t, a, -9.62197153268626320E-003);
  t = __fma_rn (t, a, -4.21977345547223940E-002);
  t = __fma_rn (t, a, 1.66538611382503560E-001);
  t = __fma_rn (t, a, -4.20026350341054440E-002);
  t = __fma_rn (t, a, -6.55878071520257120E-001);
  t = __fma_rn (t, a, 5.77215664901532870E-001);
  t = __fma_rn (t, a, 1.00000000000000000E+000);
  return t;
}


static double __internal_stirling_poly(double a)
{
  double x = 1.0 / a;
  double z = 0.0;
  z = __fma_rn (z, x, 8.3949872067208726e-004);
  z = __fma_rn (z, x, -5.1717909082605919e-005);
  z = __fma_rn (z, x, -5.9216643735369393e-004);
  z = __fma_rn (z, x, 6.9728137583658571e-005);
  z = __fma_rn (z, x, 7.8403922172006662e-004);
  z = __fma_rn (z, x, -2.2947209362139917e-004);
  z = __fma_rn (z, x, -2.6813271604938273e-003);
  z = __fma_rn (z, x, 3.4722222222222220e-003);
  z = __fma_rn (z, x, 8.3333333333333329e-002);
  z = __fma_rn (z, x, 1.0000000000000000e+000);
  return z;
}

static double __internal_tgamma_stirling(double a)
{
  if (a < 1.7162437695630274e+002) {

    volatile double t_hi, t_lo, e;



    double2 loga, prod;
    double z = __internal_stirling_poly (a);
    double b = a - 0.5;


    loga = __internal_log_ext_prec(a);


    t_hi = loga.y * b;
    t_lo = __fma_rn (loga.y, b, -t_hi);
    t_lo = __fma_rn (loga.x, b, t_lo);
    prod.y = e = t_hi + t_lo;
    prod.x = (t_hi - e) + t_lo;


    loga.y = -a;
    loga.x = 0.0;
    prod = __internal_ddadd_xgty (prod, loga);


    a = __cuda_exp(prod.y);

    if (!__cuda___isinf(a)) {



      a = __fma_rn (a, prod.x, a);
    }
    a = __fma_rn (a, 2.5066282746310007e+0, a * (-1.8328579980459167e-16));
    return a * z;
  } else {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
}

static double __cuda_tgamma(double a)
{
  double s, xx, x = a;
  if (__cuda___isnan(a)) {
    return a + a;
  }
  if (__cuda_fabs(x) < 15.0) {




    if (x >= 0.0) {
      s = 1.0;
      xx = x;
      while (xx > 1.5) {
        s = __fma_rn(s, xx, -s);
        xx = xx - 1.0;
      }
      if (x >= 0.5) {
        xx = xx - 1.0;
      }
      xx = __internal_tgamma_kernel (xx);
      if (x < 0.5) {
        xx = xx * x;
      }
      s = s / xx;
    } else {
      xx = x;
      s = xx;
      if (x == __cuda_floor(x)) {
        return __longlong_as_double(0xfff8000000000000ULL);
      }
      while (xx < -0.5) {
        s = __fma_rn (s, xx, s);
        xx = xx + 1.0;
      }
      xx = __internal_tgamma_kernel (xx);
      s = s * xx;
      s = 1.0 / s;
    }
    return s;
  } else {
    if (x >= 0.0) {
      return __internal_tgamma_stirling (x);
    } else {
      double t;
      int quot;
      if (x == __cuda_floor(x)) {
        return __longlong_as_double(0xfff8000000000000ULL);
      }
      if (x < -185.0) {
        int negative;
        x = __cuda_floor(x);
        negative = ((x - (2.0 * __cuda_floor(0.5 * x))) == 1.0);
        return negative ? __longlong_as_double(0x8000000000000000ULL) : 0.0;
      }

      xx = __cuda_rint (__internal_twice(x));
      quot = (int)xx;
      xx = __fma_rn (-0.5, xx, x);
      xx = xx * 3.1415926535897931e+0;
      if (quot & 1) {
        xx = __internal_cos_kerneld (xx);
      } else {
        xx = __internal_sin_kerneld (xx);
      }
      if (quot & 2) {
        xx = -xx;
      }
      x = __cuda_fabs (x);
      s = __cuda_exp (-x);
      t = x - 0.5;
      if (x > 140.0) t = __internal_half(t);
      t = __cuda_pow (x, t);
      if (x > 140.0) s = s * t;
      s = s * __internal_stirling_poly (x);
      s = s * x;
      s = s * xx;
      s = 1.0 / s;
      s = __fma_rn (s, 1.2533141373155003e+0, (-9.1642899902295834e-17) * s);
      s = s / t;
      return s;
    }
  }
}

static double __internal_lgamma_pos(double a)
{
  double sum;
  double s, t;

  if (a == __longlong_as_double(0x7ff0000000000000ULL)) {
    return a;
  }
  if (a >= 3.0) {
    if (a >= 8.0) {



      s = 1.0 / a;
      t = s * s;
      sum = -0.1633436431e-2;
      sum = __fma_rn (sum, t, 0.83645878922e-3);
      sum = __fma_rn (sum, t, -0.5951896861197e-3);
      sum = __fma_rn (sum, t, 0.793650576493454e-3);
      sum = __fma_rn (sum, t, -0.277777777735865004e-2);
      sum = __fma_rn (sum, t, 0.833333333333331018375e-1);
      sum = __fma_rn (sum, s, 0.918938533204672);
      s = __internal_half(__cuda_log (a));
      t = a - 0.5;
      s = s * t;
      t = s - a;
      s = s + sum;
      t = t + s;
      return t;
    } else {
      a = a - 3.0;
      s = -4.02412642744125560E+003;
      s = __fma_rn (s, a, -2.97693796998962000E+005);
      s = __fma_rn (s, a, -6.38367087682528790E+006);
      s = __fma_rn (s, a, -5.57807214576539320E+007);
      s = __fma_rn (s, a, -2.24585140671479230E+008);
      s = __fma_rn (s, a, -4.70690608529125090E+008);
      s = __fma_rn (s, a, -7.62587065363263010E+008);
      s = __fma_rn (s, a, -9.71405112477113250E+008);
      t = a -1.02277248359873170E+003;
      t = __fma_rn (t, a, -1.34815350617954480E+005);
      t = __fma_rn (t, a, -4.64321188814343610E+006);
      t = __fma_rn (t, a, -6.48011106025542540E+007);
      t = __fma_rn (t, a, -4.19763847787431360E+008);
      t = __fma_rn (t, a, -1.25629926018000720E+009);
      t = __fma_rn (t, a, -1.40144133846491690E+009);
      t = s / t;
      t = t + a;
      return t;
    }
  } else if (a >= 1.5) {
    a = a - 2.0;
    t = 9.84839283076310610E-009;
    t = __fma_rn (t, a, -6.69743850483466500E-008);
    t = __fma_rn (t, a, 2.16565148880011450E-007);
    t = __fma_rn (t, a, -4.86170275781575260E-007);
    t = __fma_rn (t, a, 9.77962097401114400E-007);
    t = __fma_rn (t, a, -2.03041287574791810E-006);
    t = __fma_rn (t, a, 4.36119725805364580E-006);
    t = __fma_rn (t, a, -9.43829310866446590E-006);
    t = __fma_rn (t, a, 2.05106878496644220E-005);
    t = __fma_rn (t, a, -4.49271383742108440E-005);
    t = __fma_rn (t, a, 9.94570466342226000E-005);
    t = __fma_rn (t, a, -2.23154589559238440E-004);
    t = __fma_rn (t, a, 5.09669559149637430E-004);
    t = __fma_rn (t, a, -1.19275392649162300E-003);
    t = __fma_rn (t, a, 2.89051032936815490E-003);
    t = __fma_rn (t, a, -7.38555102806811700E-003);
    t = __fma_rn (t, a, 2.05808084278121250E-002);
    t = __fma_rn (t, a, -6.73523010532073720E-002);
    t = __fma_rn (t, a, 3.22467033424113040E-001);
    t = __fma_rn (t, a, 4.22784335098467190E-001);
    t = t * a;
    return t;
  } else if (a >= 0.7) {
    a = 1.0 - a;
    t = 1.17786911519331130E-002;
    t = __fma_rn (t, a, 3.89046747413522300E-002);
    t = __fma_rn (t, a, 5.90045711362049900E-002);
    t = __fma_rn (t, a, 6.02143305254344420E-002);
    t = __fma_rn (t, a, 5.61652708964839180E-002);
    t = __fma_rn (t, a, 5.75052755193461370E-002);
    t = __fma_rn (t, a, 6.21061973447320710E-002);
    t = __fma_rn (t, a, 6.67614724532521880E-002);
    t = __fma_rn (t, a, 7.14856037245421020E-002);
    t = __fma_rn (t, a, 7.69311251313347100E-002);
    t = __fma_rn (t, a, 8.33503129714946310E-002);
    t = __fma_rn (t, a, 9.09538288991182800E-002);
    t = __fma_rn (t, a, 1.00099591546322310E-001);
    t = __fma_rn (t, a, 1.11334278141734510E-001);
    t = __fma_rn (t, a, 1.25509666613462880E-001);
    t = __fma_rn (t, a, 1.44049896457704160E-001);
    t = __fma_rn (t, a, 1.69557177031481600E-001);
    t = __fma_rn (t, a, 2.07385551032182120E-001);
    t = __fma_rn (t, a, 2.70580808427600350E-001);
    t = __fma_rn (t, a, 4.00685634386517050E-001);
    t = __fma_rn (t, a, 8.22467033424113540E-001);
    t = __fma_rn (t, a, 5.77215664901532870E-001);
    t = t * a;
    return t;
  } else {
    t= -9.04051686831357990E-008;
    t = __fma_rn (t, a, 7.06814224969349250E-007);
    t = __fma_rn (t, a, -3.80702154637902830E-007);
    t = __fma_rn (t, a, -2.12880892189316100E-005);
    t = __fma_rn (t, a, 1.29108470307156190E-004);
    t = __fma_rn (t, a, -2.15932815215386580E-004);
    t = __fma_rn (t, a, -1.16484324388538480E-003);
    t = __fma_rn (t, a, 7.21883433044470670E-003);
    t = __fma_rn (t, a, -9.62194579514229560E-003);
    t = __fma_rn (t, a, -4.21977386992884450E-002);
    t = __fma_rn (t, a, 1.66538611813682460E-001);
    t = __fma_rn (t, a, -4.20026350606819980E-002);
    t = __fma_rn (t, a, -6.55878071519427450E-001);
    t = __fma_rn (t, a, 5.77215664901523870E-001);
    t = t * a;
    t = __fma_rn (t, a, a);
    return -__cuda_log (t);
  }
}

static double __cuda_lgamma(double a)
{
  double t;
  double i;
  long long int quot;
  if (__cuda___isnan(a)) {
    return a + a;
  }
  t = __internal_lgamma_pos(__cuda_fabs(a));
  if (a >= 0.0) return t;
  a = __cuda_fabs(a);
  i = __cuda_floor(a);
  if (a == i) return __longlong_as_double(0x7ff0000000000000ULL);
  if (a < 1e-19) return -__cuda_log(a);
  i = __cuda_rint (2.0 * a);
  quot = (long long int)i;
  i = __fma_rn (-0.5, i, a);
  i = i * 3.1415926535897931e+0;
  if (quot & 1) {
    i = __internal_cos_kerneld(i);
  } else {
    i = __internal_sin_kerneld(i);
  }
  i = __cuda_fabs(i);
  t = __cuda_log(3.1415926535897931e+0 / (i * a)) - t;
  return t;
}

static double __cuda_ldexp(double a, int b)
{
  double fa = __cuda_fabs (a);
  if ((fa == 0.0) || (fa == __longlong_as_double(0x7ff0000000000000ULL)) || (!(fa <= __longlong_as_double(0x7ff0000000000000ULL)))) {
    return a + a;
  }
  if (b == 0) {
    return a;
  }
  if (b > 2200) b = 2200;
  if (b < -2200) b = -2200;
  if (__cuda_abs (b) < 1022) {
    return a * __internal_exp2i_kernel(b);
  }
  if (__cuda_abs (b) < 2044) {
    int bhalf = b / 2;
    return a * __internal_exp2i_kernel (bhalf) *
           __internal_exp2i_kernel (b - bhalf);
  } else {
    int bquarter = b / 4;
    double t = __internal_exp2i_kernel(bquarter);
    return a * t * t * t *__internal_exp2i_kernel (b - 3 * bquarter);
  }
}

static double __cuda_scalbn(double a, int b)
{

  return __cuda_ldexp(a, b);
}

static double __cuda_scalbln(double a, long int b)
{


  if (b < -2147483648L) b = -2147483648L;
  if (b > 2147483647L) b = 2147483647L;

  return __cuda_scalbn(a, (int)b);
}

static double __cuda_frexp(double a, int *b)
{
  double fa = __cuda_fabs(a);
  unsigned int expo;
  unsigned int denorm;

  if (fa < 2.22507385850720140e-308) {
    a *= 18014398509481984.0;
    denorm = 54;
  } else {
    denorm = 0;
  }
  expo = (__double2hiint(a) >> 20) & 0x7ff;
  if ((fa == 0.0) || (expo == 0x7ff)) {
    expo = 0;
    a = a + a;
  } else {
    expo = expo - denorm - 1022;
    a = __longlong_as_double((__double_as_longlong(a) & 0x800fffffffffffffULL)|
                              0x3fe0000000000000ULL);
  }
  *b = expo;
  return a;
}

static double __cuda_modf(double a, double *b)
{
  double t;
  if (__cuda___finite(a)) {
    t = __cuda_trunc(a);
    *b = t;
    t = a - t;
    return __cuda_copysign(t, a);
  } else if (__cuda___isinf(a)) {
    t = 0.0;
    *b = a;
    return __cuda_copysign(t, a);
  } else {
    *b = a + a;
    return a + a;
  }
}

static double __cuda_fmod(double a, double b)
{
  double orig_a = a;
  double orig_b = b;
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  if (!((a <= __longlong_as_double(0x7ff0000000000000ULL)) && (b <= __longlong_as_double(0x7ff0000000000000ULL)))) {
      return orig_a + orig_b;
  }
  if (a == __longlong_as_double(0x7ff0000000000000ULL) || b == 0.0) {
    return __longlong_as_double(0xfff8000000000000ULL);
  } else if (a >= b) {
    int bhi = __double2hiint(b);
    int blo = __double2loint(b);
    int ahi = __double2hiint(a);
    double scaled_b = 0.0;
    if (b < 2.22507385850720140e-308) {
      double t = b;
      while ((t < a) && (t < 2.22507385850720140e-308)) {
        t = t + t;
      }
      bhi = __double2hiint(t);
      blo = __double2loint(t);
      scaled_b = t;
    }
    if (a >= 2.22507385850720140e-308) {
      scaled_b = __hiloint2double ((bhi & 0x000fffff)|(ahi & 0x7ff00000), blo);
    }
    if (scaled_b > a) {
      scaled_b *= 0.5;
    }
    while (scaled_b >= b) {
      if (a >= scaled_b) {
        a -= scaled_b;
      }
      scaled_b *= 0.5;
    }
    return __cuda_copysign (a, orig_a);
  } else {
    return orig_a;
  }
}

static double __cuda_remainder(double a, double b)
{
  double orig_a;
  double twoa = 0.0;
  unsigned int quot0 = 0;
  int bhi;
  int blo;
  int ahi;
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }
  orig_a = a;
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  if (a == __longlong_as_double(0x7ff0000000000000ULL) || b == 0.0) {
    return __longlong_as_double(0xfff8000000000000ULL);
  } else if (a >= b) {
    double scaled_b = 0.0;
    bhi = __double2hiint(b);
    blo = __double2loint(b);
    ahi = __double2hiint(a);
    if (b < 2.22507385850720140e-308) {
      double t = b;
      while ((t < a) && (t < 2.22507385850720140e-308)) {
        t = t + t;
      }
      bhi = __double2hiint(t);
      blo = __double2loint(t);
      scaled_b = t;
    }
    if (a >= 2.22507385850720140e-308) {
      scaled_b = __hiloint2double ((bhi & 0x000fffff)|(ahi & 0x7ff00000), blo);
    }
    if (scaled_b > a) {
      scaled_b *= 0.5;
    }
    while (scaled_b >= b) {
      quot0 = 0;
      if (a >= scaled_b) {
        a -= scaled_b;
        quot0 = 1;
      }
      scaled_b *= 0.5;
    }
  }

  twoa = a + a;
  if ((twoa > b) || ((twoa == b) && quot0)) {
    a -= b;
  }
  bhi = __double2hiint(a);
  blo = __double2loint(a);
  ahi = __double2hiint(orig_a);
  a = __hiloint2double((ahi & 0x80000000) ^ bhi, blo);
  return a;
}

static double __cuda_remquo(double a, double b, int *c)
{
  double orig_a;
  double twoa = 0.0;
  unsigned int quot = 0;
  unsigned int sign;
  int bhi;
  int blo;
  int ahi;
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    *c = quot;
    return a + b;
  }
  orig_a = a;
  sign = 0 - (__cuda___signbit(a) != __cuda___signbit(b));
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  if (a == __longlong_as_double(0x7ff0000000000000ULL) || b == 0.0) {
    *c = quot;
    return __longlong_as_double(0xfff8000000000000ULL);
  } else if (a >= b) {
    double scaled_b = 0.0;
    bhi = __double2hiint(b);
    blo = __double2loint(b);
    ahi = __double2hiint(a);
    if (b < 2.22507385850720140e-308) {
      double t = b;
      while ((t < a) && (t < 2.22507385850720140e-308)) {
        t = t + t;
      }
      bhi = __double2hiint(t);
      blo = __double2loint(t);
      scaled_b = t;
    }
    if (a >= 2.22507385850720140e-308) {
      scaled_b = __hiloint2double ((bhi & 0x000fffff)|(ahi & 0x7ff00000), blo);
    }
    if (scaled_b > a) {
      scaled_b *= 0.5;
    }
    while (scaled_b >= b) {
      quot <<= 1;
      if (a >= scaled_b) {
        a -= scaled_b;
        quot += 1;
      }
      scaled_b *= 0.5;
    }
  }

  twoa = a + a;
  if ((twoa > b) || ((twoa == b) && (quot & 1))) {
    quot++;
    a -= b;
  }
  bhi = __double2hiint(a);
  blo = __double2loint(a);
  ahi = __double2hiint(orig_a);
  a = __hiloint2double((ahi & 0x80000000) ^ bhi, blo);
  quot = quot & (~((~0)<<3));
  quot = quot ^ sign;
  quot = quot - sign;
  *c = quot;
  return a;
}

static double __cuda_nextafter(double a, double b)
{
  unsigned long long int ia;
  unsigned long long int ib;
  ia = __double_as_longlong(a);
  ib = __double_as_longlong(b);
  if (__cuda___isnan(a) || __cuda___isnan(b)) return a + b;
  if (((ia | ib) << 1) == 0ULL) return b;
  if ((ia + ia) == 0ULL) {
    return __cuda_copysign (__longlong_as_double(0x0000000000000001ULL), b);
  }
  if ((a < b) && (a < 0.0)) ia--;
  if ((a < b) && (a > 0.0)) ia++;
  if ((a > b) && (a < 0.0)) ia++;
  if ((a > b) && (a > 0.0)) ia--;
  a = __longlong_as_double(ia);
  return a;
}

static double __cuda_nan(const char *s)
{
  unsigned long long i = 0;
  int c;
  int ovfl = 0;
  int invld = 0;
  if (*s == '0') {
    s++;
    if ((*s == 'x') || (*s == 'X')) {
      s++;
      while (*s == '0') s++;
      while (*s) {
        if (i > 0x0fffffffffffffffULL) {
          ovfl = 1;
        }
        c = (((*s) >= 'A') && ((*s) <= 'F')) ? (*s + 'a' - 'A') : (*s);
        if ((c >= 'a') && (c <= 'f')) {
          c = c - 'a' + 10;
          i = i * 16 + c;
        } else if ((c >= '0') && (c <= '9')) {
          c = c - '0';
          i = i * 16 + c;
        } else {
          invld = 1;
        }
        s++;
      }
    } else {
      while (*s == '0') s++;
      while (*s) {
        if (i > 0x1fffffffffffffffULL) {
          ovfl = 1;
        }
        c = *s;
        if ((c >= '0') && (c <= '7')) {
          c = c - '0';
          i = i * 8 + c;
        } else {
          invld = 1;
        }
        s++;
      }
    }
  } else {
    while (*s) {
      c = *s;
      if ((i > 1844674407370955161ULL) ||
          ((i == 1844674407370955161ULL) && (c > '5'))) {
        ovfl = 1;
      }
      if ((c >= '0') && (c <= '9')) {
        c = c - '0';
        i = i * 10 + c;
      } else {
        invld = 1;
      }
      s++;
    }
  }
  if (ovfl) {
    i = ~0ULL;
  }
  if (invld) {
    i = 0ULL;
  }
  i = (i & 0x000fffffffffffffULL) | 0x7ff8000000000000ULL;
  return __longlong_as_double(i);
}

static double __cuda_round(double a)
{
  double fa = __cuda_fabs(a);
  if (fa > 4503599627370496.0) {
    return a;
  } else {
    double u = __cuda_floor(fa + 0.5);
    if (fa < 0.5) u = 0;
    return __cuda_copysign(u, a);
  }
}

static long long int __cuda_llround(double a)
{

  if (a >= 9223372036854775807.0) return 0x7fffffffffffffffLL;
  if (a <= -9223372036854775808.0) return 0x8000000000000000LL;

  return (long long int)(__cuda_round(a));
}

static long int __cuda_lround(double a)
{

  return (long int)(__cuda_llround(a));
# 2124 "/home/gdiamos/temp/cuda/bin//../include/math_functions_dbl_ptx3.h" 3
}

static double __cuda_fdim(double a, double b)
{
  double t;
  t = a - b;
  if (a <= b) {
    t = 0.0;
  }
  return t;
}

static int __cuda_ilogb(double a)
{
  unsigned long long int i;
  unsigned int ihi;
  unsigned int ilo;
  if (__cuda___isnan(a)) return -((int)((unsigned int)-1 >> 1))-1;
  if (__cuda___isinf(a)) return ((int)((unsigned int)-1 >> 1));
  if (a == 0.0) return -((int)((unsigned int)-1 >> 1))-1;
  a = __cuda_fabs(a);
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  i = ((unsigned long long int)ihi) << 32 | (unsigned long long int)ilo;
  if (a >= 2.22507385850720140e-308) {
    return ((int)((ihi >> 20) & 0x7ff)) - 1023;
  } else {
    int expo = -1022;
    while (i < 0x0010000000000000ULL) {
      expo--;
      i = i + i;
    }
    return expo;
  }
}

static double __cuda_logb(double a)
{
  unsigned long long int i;
  unsigned int ihi;
  unsigned int ilo;
  if (__cuda___isnan(a)) return a + a;
  a = __cuda_fabs(a);
  if (a == __longlong_as_double(0x7ff0000000000000ULL)) return a;
  if (a == 0.0) return -__longlong_as_double(0x7ff0000000000000ULL);
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  i = ((unsigned long long int)ihi) << 32 | (unsigned long long int)ilo;
  if (a >= 2.22507385850720140e-308) {
    return (double)((int)((ihi >> 20) & 0x7ff)) - 1023;
  } else {
    int expo = -1022;
    while (i < 0x0010000000000000ULL) {
      expo--;
      i = i + i;
    }
    return (double)expo;
  }
}

static double __cuda_fma(double a, double b, double c)
{
  return __fma_rn(a, b, c);
}
# 3862 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 2 3
# 94 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h" 2
# 216 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 2
# 6 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.c" 2
struct __T20;
struct __T21;
struct __T22;
struct __T23;
struct __T20 {uint *__par0;uint *__par1;uchar *__par2;uint3 __par3;uint3 __par4;uint3 __par5;uint __par6;float3 __par7;float __par8;int __dummy_field;volatile char __dummy[4];};
struct __T21 {uint *__par0;uint *__par1;uint *__par2;uint __par3;int __dummy_field;};
struct __T22 {float4 *__par0;float4 *__par1;uint *__par2;uint *__par3;uint3 __par4;uint3 __par5;uint3 __par6;float3 __par7;float __par8;uint __par9;uint __par10;int __dummy_field;};
struct __T23 {float4 *__par0;float4 *__par1;uint *__par2;uint *__par3;uchar *__par4;uint3 __par5;uint3 __par6;uint3 __par7;float3 __par8;float __par9;uint __par10;uint __par11;int __dummy_field;};
# 26 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.c"
static void __sti____cudaRegisterAll_55_tmpxft_0000134d_00000000_4_marchingCubes_kernel_cpp1_ii_c14de7b3(void) __attribute__((__constructor__));
void __device_stub__Z13classifyVoxelPjS_Ph5uint3S1_S1_j6float3f(uint *__par0, uint *__par1, uchar *__par2, uint3 __par3, uint3 __par4, uint3 __par5, uint __par6, float3 __par7, float __par8){auto struct __T20 *__T242;
char __[256]; *(char**)&__T242 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T242->__par0 - (size_t)__T242) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T242->__par1 - (size_t)__T242) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T242->__par2 - (size_t)__T242) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T242->__par3 - (size_t)__T242) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T242->__par4 - (size_t)__T242) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T242->__par5 - (size_t)__T242) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T242->__par6 - (size_t)__T242) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T242->__par7 - (size_t)__T242) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T242->__par8 - (size_t)__T242) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)__device_stub__Z13classifyVoxelPjS_Ph5uint3S1_S1_j6float3f); (void)cudaLaunch(((char *)__device_stub__Z13classifyVoxelPjS_Ph5uint3S1_S1_j6float3f)); };}
void __device_stub__Z13compactVoxelsPjS_S_j(uint *__par0, uint *__par1, uint *__par2, uint __par3){auto struct __T21 *__T246;
char __[256]; *(char**)&__T246 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T246->__par0 - (size_t)__T246) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T246->__par1 - (size_t)__T246) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T246->__par2 - (size_t)__T246) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T246->__par3 - (size_t)__T246) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)__device_stub__Z13compactVoxelsPjS_S_j); (void)cudaLaunch(((char *)__device_stub__Z13compactVoxelsPjS_S_j)); };}
void __device_stub__Z17generateTrianglesP6float4S0_PjS1_5uint3S2_S2_6float3fjj(float4 *__par0, float4 *__par1, uint *__par2, uint *__par3, uint3 __par4, uint3 __par5, uint3 __par6, float3 __par7, float __par8, uint __par9, uint __par10){auto struct __T22 *__T291;
char __[256]; *(char**)&__T291 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T291->__par0 - (size_t)__T291) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T291->__par1 - (size_t)__T291) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T291->__par2 - (size_t)__T291) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T291->__par3 - (size_t)__T291) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T291->__par4 - (size_t)__T291) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T291->__par5 - (size_t)__T291) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T291->__par6 - (size_t)__T291) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T291->__par7 - (size_t)__T291) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T291->__par8 - (size_t)__T291) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T291->__par9 - (size_t)__T291) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T291->__par10 - (size_t)__T291) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)__device_stub__Z17generateTrianglesP6float4S0_PjS1_5uint3S2_S2_6float3fjj); (void)cudaLaunch(((char *)__device_stub__Z17generateTrianglesP6float4S0_PjS1_5uint3S2_S2_6float3fjj)); };}
void __device_stub__Z18generateTriangles2P6float4S0_PjS1_Ph5uint3S3_S3_6float3fjj(float4 *__par0, float4 *__par1, uint *__par2, uint *__par3, uchar *__par4, uint3 __par5, uint3 __par6, uint3 __par7, float3 __par8, float __par9, uint __par10, uint __par11){auto struct __T23 *__T2114;
char __[256]; *(char**)&__T2114 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T2114->__par0 - (size_t)__T2114) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T2114->__par1 - (size_t)__T2114) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T2114->__par2 - (size_t)__T2114) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T2114->__par3 - (size_t)__T2114) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T2114->__par4 - (size_t)__T2114) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T2114->__par5 - (size_t)__T2114) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T2114->__par6 - (size_t)__T2114) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T2114->__par7 - (size_t)__T2114) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T2114->__par8 - (size_t)__T2114) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T2114->__par9 - (size_t)__T2114) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T2114->__par10 - (size_t)__T2114) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par11, sizeof(__par11), (size_t)&__T2114->__par11 - (size_t)__T2114) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)__device_stub__Z18generateTriangles2P6float4S0_PjS1_Ph5uint3S3_S3_6float3fjj); (void)cudaLaunch(((char *)__device_stub__Z18generateTriangles2P6float4S0_PjS1_Ph5uint3S3_S3_6float3fjj)); };}
# 47 "/tmp/tmpxft_0000134d_00000000-1_marchingCubes_kernel.cudafe1.stub.c"
static void __sti____cudaRegisterAll_55_tmpxft_0000134d_00000000_4_marchingCubes_kernel_cpp1_ii_c14de7b3(void){__cudaFatCubinHandle = __cudaRegisterFatBinary((void*)(&__fatDeviceText)); atexit(__cudaUnregisterBinaryUtil);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)__device_stub__Z18generateTriangles2P6float4S0_PjS1_Ph5uint3S3_S3_6float3fjj, (char*)"_Z18generateTriangles2P6float4S0_PjS1_Ph5uint3S3_S3_6float3fjj", "_Z18generateTriangles2P6float4S0_PjS1_Ph5uint3S3_S3_6float3fjj", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)__device_stub__Z17generateTrianglesP6float4S0_PjS1_5uint3S2_S2_6float3fjj, (char*)"_Z17generateTrianglesP6float4S0_PjS1_5uint3S2_S2_6float3fjj", "_Z17generateTrianglesP6float4S0_PjS1_5uint3S2_S2_6float3fjj", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)__device_stub__Z13compactVoxelsPjS_S_j, (char*)"_Z13compactVoxelsPjS_S_j", "_Z13compactVoxelsPjS_S_j", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)__device_stub__Z13classifyVoxelPjS_Ph5uint3S1_S1_j6float3f, (char*)"_Z13classifyVoxelPjS_Ph5uint3S1_S1_j6float3f", "_Z13classifyVoxelPjS_Ph5uint3S1_S1_j6float3f", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&edgeTex, 0, "edgeTex", 1, 0, 0);__cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&triTex, 0, "triTex", 1, 0, 0);__cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&numVertsTex, 0, "numVertsTex", 1, 0, 0);__cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&volumeTex, 0, "volumeTex", 1, 1, 0);}

}
# 565 "marchingCubes_kernel.cu" 2
