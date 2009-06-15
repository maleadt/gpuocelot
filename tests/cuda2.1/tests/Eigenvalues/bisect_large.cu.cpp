# 1 "/tmp/tmpxft_00000eb0_00000000-13_bisect_large.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_00000eb0_00000000-13_bisect_large.cudafe1.cpp"
# 1 "bisect_large.cu"
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
# 41 "structs.h"
struct InputData {
# 44 "structs.h"
float *a;
# 46 "structs.h"
float *b;
# 49 "structs.h"
float *g_a;
# 51 "structs.h"
float *g_b;
# 54 "structs.h"
float *g_b_raw;
# 56 "structs.h"
};
# 58 "structs.h"
struct ResultDataSmall {
# 61 "structs.h"
float *eigenvalues;
# 64 "structs.h"
float *g_left;
# 67 "structs.h"
float *g_right;
# 70 "structs.h"
unsigned *g_left_count;
# 73 "structs.h"
unsigned *g_right_count;
# 76 "structs.h"
unsigned *g_converged;
# 80 "structs.h"
unsigned mat_size_f;
# 81 "structs.h"
unsigned mat_size_ui;
# 83 "structs.h"
float *zero_f;
# 84 "structs.h"
unsigned *zero_ui;
# 85 "structs.h"
};
# 88 "structs.h"
struct ResultDataLarge {
# 91 "structs.h"
unsigned *g_num_one;
# 95 "structs.h"
unsigned *g_num_blocks_mult;
# 99 "structs.h"
float *g_left_one;
# 103 "structs.h"
float *g_right_one;
# 107 "structs.h"
unsigned *g_pos_one;
# 111 "structs.h"
float *g_left_mult;
# 115 "structs.h"
float *g_right_mult;
# 119 "structs.h"
unsigned *g_left_count_mult;
# 123 "structs.h"
unsigned *g_right_count_mult;
# 127 "structs.h"
unsigned *g_blocks_mult;
# 131 "structs.h"
unsigned *g_blocks_mult_sum;
# 135 "structs.h"
float *g_lambda_mult;
# 139 "structs.h"
unsigned *g_pos_mult;
# 141 "structs.h"
};
# 44 "util.h"
template<class T> inline void
# 46 "util.h"
freePtr(T *&ptr) {
# 48 "util.h"
if (__null != ptr) {
# 49 "util.h"
free(ptr);
# 50 "util.h"
ptr = __null;
# 51 "util.h"
}
# 52 "util.h"
}
# 57 "util.h"
template<class T> T
# 62 "util.h"
min(const T &lhs, const T &rhs) {
# 64 "util.h"
return (lhs < rhs) ? lhs : rhs;
# 65 "util.h"
}
# 70 "util.h"
template<class T> T
# 75 "util.h"
max(const T &lhs, const T &rhs) {
# 77 "util.h"
return (lhs < rhs) ? rhs : lhs;
# 78 "util.h"
}
# 83 "util.h"
template<class T> T
# 88 "util.h"
sign_i(const T &val) {
# 89 "util.h"
return (val < 0) ? (-1) : 1;
# 90 "util.h"
}
# 99 "util.h"
inline float sign_f(const float &val) {
# 100 "util.h"
return ((val) < (0.0F)) ? (-(1.0F)) : (1.0F);
# 101 "util.h"
}
# 110 "util.h"
inline double sign_d(const double &val) {
# 111 "util.h"
return ((val) < (0.0)) ? (-(1.0)) : (1.0);
# 112 "util.h"
}
# 117 "util.h"
template<class T> void
# 122 "util.h"
swap(T &lhs, T &rhs) {
# 124 "util.h"
auto T temp = rhs;
# 125 "util.h"
rhs = lhs;
# 126 "util.h"
lhs = temp;
# 127 "util.h"
}
# 136 "util.h"
extern "C" { inline unsigned getNumBlocksLinear(const unsigned num_threads, const unsigned
# 137 "util.h"
num_threads_block)
# 138 "util.h"
{
# 139 "util.h"
auto const unsigned block_rem = (((num_threads % num_threads_block) != (0)) ? 1 : 0);
# 141 "util.h"
return num_threads / num_threads_block + block_rem;
# 142 "util.h"
} }
# 64 "matlab.h"
extern "C" void writeTridiagSymMatlab(const char *, float *, float *, float *, const unsigned);
# 76 "matlab.h"
template<class T, class S> extern void writeMatrixMatlab(T &, const char *, S *&, const unsigned);
# 88 "matlab.h"
template<class T, class S> extern void writeVectorMatlab(T &, const char *, S *&, const unsigned);
# 102 "matlab.h"
template<class T, class S> void
# 104 "matlab.h"
writeMatrixMatlab(T &file, const char *mat_name, S *&
# 105 "matlab.h"
mat, const unsigned mat_size) {
# 107 "matlab.h"
auto const unsigned pitch = (sizeof(S) * mat_size);
# 109 "matlab.h"
(file << mat_name) << " = [";
# 110 "matlab.h"
for (unsigned i = (0); i < mat_size; ++i) {
# 111 "matlab.h"
for (unsigned j = (0); j < mat_size; ++j) {
# 113 "matlab.h"
(file << (getMatrix(mat, pitch, i, j))) << " ";
# 114 "matlab.h"
}
# 115 "matlab.h"
if (i != (mat_size - (1))) {
# 116 "matlab.h"
file << "; ";
# 117 "matlab.h"
}
# 118 "matlab.h"
}
# 119 "matlab.h"
file << "];\n";
# 120 "matlab.h"
}
# 129 "matlab.h"
template<class T, class S> void
# 131 "matlab.h"
writeVectorMatlab(T &file, const char *vec_name, S *&
# 132 "matlab.h"
vec, const unsigned vec_len)
# 133 "matlab.h"
{
# 134 "matlab.h"
(file << vec_name) << " = [";
# 135 "matlab.h"
for (unsigned i = (0); i < vec_len; ++i) {
# 136 "matlab.h"
(file << (vec[i])) << " ";
# 137 "matlab.h"
}
# 138 "matlab.h"
file << "];\n";
# 139 "matlab.h"
}
# 52 "bisect_large.cuh"
extern void computeEigenvaluesLargeMatrix(const InputData &, const ResultDataLarge &, const unsigned, const float, const float, const float, const unsigned);
# 63 "bisect_large.cuh"
extern void initResultDataLargeMatrix(ResultDataLarge &, const unsigned);
# 70 "bisect_large.cuh"
extern void cleanupResultDataLargeMatrix(ResultDataLarge &);
# 81 "bisect_large.cuh"
extern void processResultDataLargeMatrix(const InputData &, const ResultDataLarge &, const unsigned, const char *, const unsigned, char *);
# 97 "bisect_large.cuh"
# 1 "/tmp/tmpxft_00000eb0_00000000-13_bisect_large.cudafe1.stub.h" 1

extern "C" {


extern void __device_stub__Z17bisectKernelLargePfS_jffjjfPjS0_S_S_S0_S_S_S0_S0_S0_S0_(float *, float *, const unsigned, const float, const float, const unsigned, const unsigned, float, unsigned *, unsigned *, float *, float *, unsigned *, float *, float *, unsigned *, unsigned *, unsigned *, unsigned *);
# 14 "/tmp/tmpxft_00000eb0_00000000-13_bisect_large.cudafe1.stub.h"
}
# 98 "bisect_large.cuh" 2


# 1 "/tmp/tmpxft_00000eb0_00000000-13_bisect_large.cudafe1.stub.h" 1

extern "C" {





extern void __device_stub__Z30bisectKernelLarge_OneIntervalsPfS_jjS_S_Pjf(float *, float *, const unsigned, unsigned, float *, float *, unsigned *, float);





}
# 101 "bisect_large.cuh" 2


# 1 "/tmp/tmpxft_00000eb0_00000000-13_bisect_large.cudafe1.stub.h" 1

extern "C" {
# 11 "/tmp/tmpxft_00000eb0_00000000-13_bisect_large.cudafe1.stub.h"
extern void __device_stub__Z31bisectKernelLarge_MultIntervalsPfS_jPjS0_S_S_S0_S0_S_S0_f(float *, float *, const unsigned, unsigned *, unsigned *, float *, float *, unsigned *, unsigned *, float *, unsigned *, float);


}
# 104 "bisect_large.cuh" 2
# 66 "bisect_large.cu"
void initResultDataLargeMatrix(ResultDataLarge &result, const unsigned mat_size) {
# 69 "bisect_large.cu"
auto unsigned zero = (0);
# 70 "bisect_large.cu"
auto unsigned mat_size_f = (sizeof(float) * mat_size);
# 71 "bisect_large.cu"
auto unsigned mat_size_ui = (sizeof(unsigned) * mat_size);
# 73 "bisect_large.cu"
auto float *tempf = ((float *)malloc(mat_size_f));
# 74 "bisect_large.cu"
auto unsigned *tempui = ((unsigned *)malloc(mat_size_ui));
# 75 "bisect_large.cu"
for (unsigned i = (0); i < mat_size; ++i) {
# 76 "bisect_large.cu"
(tempf[i]) = (0.0F);
# 77 "bisect_large.cu"
(tempui[i]) = (0);
# 78 "bisect_large.cu"
}
# 81 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_num_one)), sizeof(unsigned)), "bisect_large.cu", 82);
# 83 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_num_one, &zero, sizeof(unsigned), cudaMemcpyHostToDevice), "bisect_large.cu", 84);
# 88 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_num_blocks_mult)), sizeof(unsigned)), "bisect_large.cu", 89);
# 90 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_num_blocks_mult, &zero, sizeof(unsigned), cudaMemcpyHostToDevice), "bisect_large.cu", 92);
# 95 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_left_one)), mat_size_f), "bisect_large.cu", 95);
# 96 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_right_one)), mat_size_f), "bisect_large.cu", 96);
# 97 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_pos_one)), mat_size_ui), "bisect_large.cu", 97);
# 99 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_left_mult)), mat_size_f), "bisect_large.cu", 99);
# 100 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_right_mult)), mat_size_f), "bisect_large.cu", 100);
# 101 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_left_count_mult)), mat_size_ui), "bisect_large.cu", 102);
# 103 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_right_count_mult)), mat_size_ui), "bisect_large.cu", 104);
# 106 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_left_one, tempf, mat_size_f, cudaMemcpyHostToDevice), "bisect_large.cu", 107);
# 108 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_right_one, tempf, mat_size_f, cudaMemcpyHostToDevice), "bisect_large.cu", 109);
# 110 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_pos_one, tempui, mat_size_ui, cudaMemcpyHostToDevice), "bisect_large.cu", 111);
# 113 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_left_mult, tempf, mat_size_f, cudaMemcpyHostToDevice), "bisect_large.cu", 114);
# 115 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_right_mult, tempf, mat_size_f, cudaMemcpyHostToDevice), "bisect_large.cu", 116);
# 117 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_left_count_mult, tempui, mat_size_ui, cudaMemcpyHostToDevice), "bisect_large.cu", 118);
# 119 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_right_count_mult, tempui, mat_size_ui, cudaMemcpyHostToDevice), "bisect_large.cu", 120);
# 122 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_blocks_mult)), mat_size_ui), "bisect_large.cu", 122);
# 123 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_blocks_mult, tempui, mat_size_ui, cudaMemcpyHostToDevice), "bisect_large.cu", 124);
# 125 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_blocks_mult_sum)), mat_size_ui), "bisect_large.cu", 125);
# 126 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_blocks_mult_sum, tempui, mat_size_ui, cudaMemcpyHostToDevice), "bisect_large.cu", 127);
# 129 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_lambda_mult)), mat_size_f), "bisect_large.cu", 129);
# 130 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_lambda_mult, tempf, mat_size_f, cudaMemcpyHostToDevice), "bisect_large.cu", 131);
# 132 "bisect_large.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_pos_mult)), mat_size_ui), "bisect_large.cu", 132);
# 133 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(result.g_pos_mult, tempf, mat_size_ui, cudaMemcpyHostToDevice), "bisect_large.cu", 134);
# 135 "bisect_large.cu"
}
# 142 "bisect_large.cu"
void cleanupResultDataLargeMatrix(ResultDataLarge &result) {
# 144 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_num_one), "bisect_large.cu", 144);
# 145 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_num_blocks_mult), "bisect_large.cu", 145);
# 146 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_left_one), "bisect_large.cu", 146);
# 147 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_right_one), "bisect_large.cu", 147);
# 148 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_pos_one), "bisect_large.cu", 148);
# 149 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_left_mult), "bisect_large.cu", 149);
# 150 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_right_mult), "bisect_large.cu", 150);
# 151 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_left_count_mult), "bisect_large.cu", 151);
# 152 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_right_count_mult), "bisect_large.cu", 152);
# 153 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_blocks_mult), "bisect_large.cu", 153);
# 154 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_blocks_mult_sum), "bisect_large.cu", 154);
# 155 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_lambda_mult), "bisect_large.cu", 155);
# 156 "bisect_large.cu"
__cudaSafeCall(cudaFree(result.g_pos_mult), "bisect_large.cu", 156);
# 157 "bisect_large.cu"
}
# 170 "bisect_large.cu"
void computeEigenvaluesLargeMatrix(const InputData &input, const ResultDataLarge &result, const unsigned
# 171 "bisect_large.cu"
mat_size, const float precision, const float
# 172 "bisect_large.cu"
lg, const float ug, const unsigned
# 173 "bisect_large.cu"
iterations)
# 174 "bisect_large.cu"
{
# 175 "bisect_large.cu"
auto dim3 blocks(1, 1, 1);
# 176 "bisect_large.cu"
auto dim3 threads(256, 1, 1);
# 178 "bisect_large.cu"
auto unsigned timer_step1 = (0);
# 179 "bisect_large.cu"
auto unsigned timer_step2_one = (0);
# 180 "bisect_large.cu"
auto unsigned timer_step2_mult = (0);
# 181 "bisect_large.cu"
auto unsigned timer_total = (0);
# 182 "bisect_large.cu"
__cutilCheckError(cutCreateTimer(&timer_step1), "bisect_large.cu", 182);
# 183 "bisect_large.cu"
__cutilCheckError(cutCreateTimer(&timer_step2_one), "bisect_large.cu", 183);
# 184 "bisect_large.cu"
__cutilCheckError(cutCreateTimer(&timer_step2_mult), "bisect_large.cu", 184);
# 185 "bisect_large.cu"
__cutilCheckError(cutCreateTimer(&timer_total), "bisect_large.cu", 185);
# 187 "bisect_large.cu"
__cutilCheckError(cutStartTimer(timer_total), "bisect_large.cu", 187);
# 190 "bisect_large.cu"
for (unsigned iter = (0); iter < iterations; ++iter) {
# 192 "bisect_large.cu"
__cutilCheckError(cutStartTimer(timer_step1), "bisect_large.cu", 192);
# 193 "bisect_large.cu"
cudaConfigureCall(blocks, threads) ? ((void)0) : __device_stub__Z17bisectKernelLargePfS_jffjjfPjS0_S_S_S0_S_S_S0_S0_S0_S0_(input.g_a, input.g_b, mat_size, lg, ug, 0, mat_size, precision, result.g_num_one, result.g_num_blocks_mult, result.g_left_one, result.g_right_one, result.g_pos_one, result.g_left_mult, result.g_right_mult, result.g_left_count_mult, result.g_right_count_mult, result.g_blocks_mult, result.g_blocks_mult_sum);
# 202 "bisect_large.cu"
__cudaSafeCall(cudaThreadSynchronize(), "bisect_large.cu", 202);
# 203 "bisect_large.cu"
__cutilCheckError(cutStopTimer(timer_step1), "bisect_large.cu", 203);
# 204 "bisect_large.cu"
__cutilCheckMsg("Kernel launch failed.", "bisect_large.cu", 204);
# 208 "bisect_large.cu"
auto unsigned num_one_intervals;
# 209 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(&num_one_intervals, result.g_num_one, sizeof(unsigned), cudaMemcpyDeviceToHost), "bisect_large.cu", 211);
# 213 "bisect_large.cu"
auto dim3 grid_onei;
# 214 "bisect_large.cu"
(grid_onei.x) = getNumBlocksLinear(num_one_intervals, 256);
# 215 "bisect_large.cu"
auto dim3 threads_onei;
# 218 "bisect_large.cu"
(threads_onei.x) = (256);
# 222 "bisect_large.cu"
__cutilCheckError(cutStartTimer(timer_step2_one), "bisect_large.cu", 222);
# 224 "bisect_large.cu"
cudaConfigureCall(grid_onei, threads_onei) ? ((void)0) : __device_stub__Z30bisectKernelLarge_OneIntervalsPfS_jjS_S_Pjf(input.g_a, input.g_b, mat_size, num_one_intervals, result.g_left_one, result.g_right_one, result.g_pos_one, precision);
# 230 "bisect_large.cu"
__cudaSafeCall(cudaThreadSynchronize(), "bisect_large.cu", 230);
# 231 "bisect_large.cu"
__cutilCheckError(cutStopTimer(timer_step2_one), "bisect_large.cu", 231);
# 239 "bisect_large.cu"
auto unsigned num_blocks_mult = (0);
# 240 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(&num_blocks_mult, result.g_num_blocks_mult, sizeof(unsigned), cudaMemcpyDeviceToHost), "bisect_large.cu", 242);
# 245 "bisect_large.cu"
auto dim3 grid_mult(num_blocks_mult, 1, 1);
# 246 "bisect_large.cu"
auto dim3 threads_mult(256, 1, 1);
# 248 "bisect_large.cu"
__cutilCheckError(cutStartTimer(timer_step2_mult), "bisect_large.cu", 248);
# 250 "bisect_large.cu"
cudaConfigureCall(grid_mult, threads_mult) ? ((void)0) : __device_stub__Z31bisectKernelLarge_MultIntervalsPfS_jPjS0_S_S_S0_S0_S_S0_f(input.g_a, input.g_b, mat_size, result.g_blocks_mult, result.g_blocks_mult_sum, result.g_left_mult, result.g_right_mult, result.g_left_count_mult, result.g_right_count_mult, result.g_lambda_mult, result.g_pos_mult, precision);
# 259 "bisect_large.cu"
__cutilCheckError(cutStopTimer(timer_step2_mult), "bisect_large.cu", 259);
# 260 "bisect_large.cu"
__cutilCheckMsg("bisectKernelLarge_MultIntervals() FAILED.", "bisect_large.cu", 260);
# 261 "bisect_large.cu"
}
# 263 "bisect_large.cu"
__cutilCheckError(cutStopTimer(timer_total), "bisect_large.cu", 263);
# 266 "bisect_large.cu"
printf("Average time step 1: %f ms\n", cutGetTimerValue(timer_step1) / (float)iterations);
# 268 "bisect_large.cu"
printf("Average time step 2, one intervals: %f ms\n", cutGetTimerValue(timer_step2_one) / (float)iterations);
# 270 "bisect_large.cu"
printf("Average time step 2, mult intervals: %f ms\n", cutGetTimerValue(timer_step2_mult) / (float)iterations);
# 273 "bisect_large.cu"
printf("Average time TOTAL: %f ms\n", cutGetTimerValue(timer_total) / (float)iterations);
# 276 "bisect_large.cu"
__cutilCheckError(cutDeleteTimer(timer_step1), "bisect_large.cu", 276);
# 277 "bisect_large.cu"
__cutilCheckError(cutDeleteTimer(timer_step2_one), "bisect_large.cu", 277);
# 278 "bisect_large.cu"
__cutilCheckError(cutDeleteTimer(timer_step2_mult), "bisect_large.cu", 278);
# 279 "bisect_large.cu"
__cutilCheckError(cutDeleteTimer(timer_total), "bisect_large.cu", 279);
# 280 "bisect_large.cu"
}
# 291 "bisect_large.cu"
void processResultDataLargeMatrix(const InputData &input, const ResultDataLarge &result, const unsigned
# 292 "bisect_large.cu"
mat_size, const char *
# 293 "bisect_large.cu"
filename, const unsigned
# 294 "bisect_large.cu"
user_defined, char *exec_path)
# 295 "bisect_large.cu"
{
# 296 "bisect_large.cu"
auto const unsigned mat_size_ui = (sizeof(unsigned) * mat_size);
# 297 "bisect_large.cu"
auto const unsigned mat_size_f = (sizeof(float) * mat_size);
# 301 "bisect_large.cu"
auto float *lambda_mult = ((float *)malloc(sizeof(float) * mat_size));
# 302 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(lambda_mult, result.g_lambda_mult, sizeof(float) * mat_size, cudaMemcpyDeviceToHost), "bisect_large.cu", 304);
# 305 "bisect_large.cu"
auto unsigned *pos_mult = ((unsigned *)malloc(sizeof(unsigned) * mat_size));
# 307 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(pos_mult, result.g_pos_mult, sizeof(unsigned) * mat_size, cudaMemcpyDeviceToHost), "bisect_large.cu", 309);
# 311 "bisect_large.cu"
auto unsigned *blocks_mult_sum = ((unsigned *)malloc(sizeof(unsigned) * mat_size));
# 313 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(blocks_mult_sum, result.g_blocks_mult_sum, sizeof(unsigned) * mat_size, cudaMemcpyDeviceToHost), "bisect_large.cu", 315);
# 317 "bisect_large.cu"
auto unsigned num_one_intervals;
# 318 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(&num_one_intervals, result.g_num_one, sizeof(unsigned), cudaMemcpyDeviceToHost), "bisect_large.cu", 320);
# 322 "bisect_large.cu"
auto unsigned sum_blocks_mult = (mat_size - num_one_intervals);
# 327 "bisect_large.cu"
auto float *left_one = ((float *)malloc(mat_size_f));
# 328 "bisect_large.cu"
auto float *right_one = ((float *)malloc(mat_size_f));
# 329 "bisect_large.cu"
auto unsigned *pos_one = ((unsigned *)malloc(mat_size_ui));
# 330 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(left_one, result.g_left_one, mat_size_f, cudaMemcpyDeviceToHost), "bisect_large.cu", 331);
# 332 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(right_one, result.g_right_one, mat_size_f, cudaMemcpyDeviceToHost), "bisect_large.cu", 333);
# 334 "bisect_large.cu"
__cudaSafeCall(cudaMemcpy(pos_one, result.g_pos_one, mat_size_ui, cudaMemcpyDeviceToHost), "bisect_large.cu", 335);
# 338 "bisect_large.cu"
auto float *eigenvals = ((float *)malloc(mat_size_f));
# 341 "bisect_large.cu"
for (unsigned i = (0); i < sum_blocks_mult; ++i) {
# 343 "bisect_large.cu"
(eigenvals[pos_mult[i] - (1)]) = lambda_mult[i];
# 344 "bisect_large.cu"
}
# 347 "bisect_large.cu"
auto unsigned index = (0);
# 348 "bisect_large.cu"
for (unsigned i = (0); i < num_one_intervals; (++i), (++index)) {
# 350 "bisect_large.cu"
(eigenvals[pos_one[i] - (1)]) = left_one[i];
# 351 "bisect_large.cu"
}
# 353 "bisect_large.cu"
if ((1) == user_defined) {
# 355 "bisect_large.cu"
writeTridiagSymMatlab(filename, input.a, input.b + 1, eigenvals, mat_size);
# 357 "bisect_large.cu"
} else
# 358 "bisect_large.cu"
{
# 362 "bisect_large.cu"
auto float *reference = (__null);
# 363 "bisect_large.cu"
auto unsigned input_data_size = (0);
# 365 "bisect_large.cu"
auto char *ref_path = cutFindFilePath("reference.dat", exec_path);
# 366 "bisect_large.cu"
__cutilCondition((0) != ref_path, (char *)("bisect_large.cu"), 366);
# 367 "bisect_large.cu"
__cutilCheckError(cutReadFilef(ref_path, &reference, &input_data_size), "bisect_large.cu", 367);
# 368 "bisect_large.cu"
__cutilCondition(input_data_size == mat_size, (char *)("bisect_large.cu"), 368);
# 372 "bisect_large.cu"
auto float tolerance = ((9.999999747e-06F) + (4.999999874e-06F));
# 374 "bisect_large.cu"
if ((CUTTrue) == (cutComparefe(reference, eigenvals, mat_size, tolerance))) {
# 375 "bisect_large.cu"
printf("\nTest PASSED.\n");
# 376 "bisect_large.cu"
} else
# 377 "bisect_large.cu"
{
# 378 "bisect_large.cu"
printf("Test FAILED.\n");
# 379 "bisect_large.cu"
}
# 381 "bisect_large.cu"
cutFree(ref_path);
# 382 "bisect_large.cu"
cutFree(reference);
# 383 "bisect_large.cu"
}
# 385 "bisect_large.cu"
freePtr(eigenvals);
# 386 "bisect_large.cu"
freePtr(lambda_mult);
# 387 "bisect_large.cu"
freePtr(pos_mult);
# 388 "bisect_large.cu"
freePtr(blocks_mult_sum);
# 389 "bisect_large.cu"
freePtr(left_one);
# 390 "bisect_large.cu"
freePtr(right_one);
# 391 "bisect_large.cu"
freePtr(pos_one);
# 392 "bisect_large.cu"
}

# 1 "/tmp/tmpxft_00000eb0_00000000-13_bisect_large.cudafe1.stub.c" 1

extern "C" {

# 1 "/tmp/tmpxft_00000eb0_00000000-15_bisect_large.fatbin.c" 1
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
# 2 "/tmp/tmpxft_00000eb0_00000000-15_bisect_large.fatbin.c" 2




extern "C" {


static const unsigned long long __deviceText_$sm_13$[] = {
0x6365746968637261ull,0x6d737b2065727574ull,0x6962610a7d33315full,0x206e6f6973726576ull,
0x6f6d0a7d317b2020ull,0x202020656d616e64ull,0x696275637b202020ull,0x2065646f630a7d6eull,
0x20656d616e090a7bull,0x696237315a5f203dull,0x6e72654b74636573ull,0x50656772614c6c65ull,
0x6a6a66666a5f5366ull,0x5f535f30536a5066ull,0x535f535f30535f53ull,0x535f30535f30535full,
0x6c090a5f30535f30ull,0x0a30203d206d656dull,0x203d206d656d7309ull,0x6572090a30383338ull,
0x0a3432203d202067ull,0x203d202072616209ull,0x74736e6f63090a31ull,0x65730909090a7b20ull,
0x203d20656d616e67ull,0x09090a74736e6f63ull,0x206d756e67657309ull,0x0909090a31203d20ull,
0x202074657366666full,0x620909090a30203dull,0x3d20202073657479ull,0x656d09090a363520ull,
0x300909090a7b206dull,0x3030303030303078ull,0x3030663378302031ull,0x3778302030303030ull,
0x2030303030303865ull,0x3030303030307830ull,0x300909090a203230ull,0x3030303038303078ull,
0x3030303078302030ull,0x3078302066663030ull,0x2030303230303030ull,0x3130303030307830ull,
0x300909090a203030ull,0x6666663030303078ull,0x3038653378302066ull,0x3478302030303030ull,
0x2030303030303862ull,0x3030303030307830ull,0x300909090a203831ull,0x3030303030303078ull,
0x6666666678302030ull,0x09090a2066666666ull,0x6962090a7d090a7dull,0x0a7b2065646f636eull,
0x3030306178300909ull,0x3078302031313030ull,0x2030383730303034ull,0x3030303030317830ull,
0x3030307830203131ull,0x090a203330303030ull,0x3032303030783009ull,0x3063783020393038ull,
0x3020303837303030ull,0x3038303130303078ull,0x3030306378302035ull,0x09090a2030383730ull,
0x3639633034307830ull,0x3030657830203130ull,0x7830203038373031ull,0x3933383865303032ull,
0x3030303030783020ull,0x3009090a20376330ull,0x3338386130303278ull,0x3030303078302064ull,
0x3078302037343030ull,0x2031303834303038ull,0x3730663334657830ull,0x783009090a203038ull,
0x3130633438303830ull,0x3066333465783020ull,0x3032783020303837ull,0x3020313038383632ull,
0x3430303030303078ull,0x32783009090a2033ull,0x2035303838343230ull,0x3030303030307830ull,
0x3030327830203330ull,0x7830203134383862ull,0x3736303030303030ull,0x3430783009090a20ull,
0x3020313034393830ull,0x3837303130306578ull,0x3230303078302030ull,0x6378302064303030ull,
0x2030383730303030ull,0x303030783009090aull,0x7830203131323032ull,0x3038373030303063ull,
0x3938313430783020ull,0x3065783020313063ull,0x0a20303837303130ull,0x3030303178300909ull,
0x3078302039303866ull,0x2030383763333036ull,0x3866303030317830ull,0x3034307830203530ull,
0x090a203038376333ull,0x3032303033783009ull,0x3463783020313338ull,0x3020303837303031ull,
0x3065666631363878ull,0x3030303078302033ull,0x09090a2030303030ull,0x3830633730337830ull,
0x3034367830203130ull,0x7830203064373830ull,0x6466313030303061ull,0x3431306330783020ull,
0x3009090a20386337ull,0x3030353230306178ull,0x3030303078302033ull,0x3178302030303030ull,
0x2033303035323030ull,0x3131303030307830ull,0x783009090a203030ull,0x3130323130303031ull,
0x6330303434783020ull,0x3030783020303837ull,0x3020313038343030ull,0x3837303032346578ull,
0x31783009090a2030ull,0x2031303431303030ull,0x3763303034347830ull,0x3030307830203038ull,
0x7830203130633438ull,0x3038373030323465ull,0x3031783009090a20ull,0x3020313036313030ull,
0x3837633030343478ull,0x3830303078302030ull,0x6578302031303439ull,0x2030383730303030ull,
0x303031783009090aull,0x7830203130383130ull,0x3038376330303434ull,0x3938313030783020ull,
0x3065783020313063ull,0x0a20303837303030ull,0x3130303178300909ull,0x3078302031303038ull,
0x2033303030303030ull,0x3035303130307830ull,0x3334657830203130ull,0x090a203038373066ull,
0x3530313030783009ull,0x3465783020313032ull,0x3020303837303032ull,0x3034353031303078ull,
0x3032346578302031ull,0x09090a2030383730ull,0x3635303130307830ull,0x3234657830203130ull,
0x7830203038373030ull,0x3130303030303066ull,0x3030303065783020ull,0x3009090a20323030ull,
0x3065666631363878ull,0x3030303078302033ull,0x6178302030303030ull,0x2035333234303030ull,
0x3730303234307830ull,0x783009090a203038ull,0x6431386630303031ull,0x6333303630783020ull,
0x3031783020303837ull,0x3020643038663030ull,0x3837633330343078ull,0x31783009090a2030ull,
0x2035313866303030ull,0x3763333036307830ull,0x3030317830203038ull,0x7830203931386630ull,
0x3038376333303430ull,0x3064783009090a20ull,0x3020353038343134ull,0x3837303030303278ull,
0x3430343378302030ull,0x3678302064663163ull,0x2038643763303234ull,0x303061783009090aull,
0x7830203330303235ull,0x3030303030303030ull,0x3235303031783020ull,0x3030783020333030ull,
0x0a20303832313030ull,0x3030303178300909ull,0x3478302031303030ull,0x2034383763303034ull,
0x3163303063627830ull,0x3230367830206466ull,0x090a203864373433ull,0x3030303031783009ull,
0x3434783020393130ull,0x3020343837633030ull,0x3130303030633178ull,0x3030343478302035ull,
0x09090a2030383763ull,0x6531313030307830ull,0x3030637830203530ull,0x7830203038373030ull,
0x3930303430303461ull,0x3030323430783020ull,0x3009090a20303837ull,0x3063313130303078ull,
0x3030306378302035ull,0x6178302030383730ull,0x2035303034303034ull,0x3730303234307830ull,
0x783009090a203038ull,0x3330306234303031ull,0x3130303030783020ull,0x6362783020303031ull,
0x3020646631636337ull,0x6537343032303678ull,0x61783009090a2038ull,0x2033303034343030ull,
0x3030303030307830ull,0x3730627830203030ull,0x7830206466316363ull,0x6364373430323036ull,
0x3031783009090a20ull,0x3020393130303030ull,0x3837633030343478ull,0x3030633178302034ull,
0x3478302035313030ull,0x2030383763303034ull,0x303031783009090aull,0x7830203330303234ull,
0x3030313230303030ull,0x6630303031783020ull,0x3630783020313038ull,0x0a20303837633330ull,
0x3030303178300909ull,0x3278302031303030ull,0x2030383264303434ull,0x3034343030317830ull,
0x3030307830203330ull,0x090a203038373030ull,0x3831303031783009ull,0x3030783020313030ull,
0x3020333030303030ull,0x3038663030303178ull,0x3330343078302031ull,0x09090a2030383264ull,
0x6130303030627830ull,0x3030307830206430ull,0x7830203238373831ull,0x6466313030303061ull,
0x3431306332783020ull,0x3009090a20386437ull,0x3061303030306278ull,0x3130383078302031ull,
0x6378302030383738ull,0x2064303630303030ull,0x3030306633307830ull,0x783009090a203330ull,
0x6430303031383065ull,0x3931343030783020ull,0x3030783020303834ull,0x3020313036353031ull,
0x3837306633346578ull,0x31783009090a2030ull,0x2033303032353030ull,0x3730303030307830ull,
0x3030307830203038ull,0x7830203530633131ull,0x3038373030303063ull,0x3461783009090a20ull,
0x3020353030343030ull,0x3837303032343078ull,0x3130303078302030ull,0x6378302035306531ull,
0x2030383730303030ull,0x303461783009090aull,0x7830203930303430ull,0x3038373030323430ull,
0x3030343032783020ull,0x3430783020313032ull,0x0a20303837383030ull,0x3038303378300909ull,
0x3678302064663130ull,0x2038643763303434ull,0x3635303130307830ull,0x3334657830203130ull,
0x090a203030353166ull,0x3030303066783009ull,0x3065783020313030ull,0x3020323030303030ull,
0x3065666631363878ull,0x3030303078302033ull,0x09090a2030303030ull,0x3835313430647830ull,
0x3030327830203530ull,0x7830203038373030ull,0x6466316330383433ull,0x3431363436783020ull,
0x3009090a20386437ull,0x3030663731303178ull,0x3030303078302033ull,0x3378302030303531ull,
0x2064663164633730ull,0x3738303234367830ull,0x783009090a203864ull,0x3132303130303031ull,
0x6330303434783020ull,0x3031783020303837ull,0x3020313038663030ull,0x3837633330343078ull,
0x31783009090a2030ull,0x2033303038383030ull,0x3231303030307830ull,0x3430647830203038ull,
0x7830203530383431ull,0x3038373030303032ull,0x3433783009090a20ull,0x3020646631633430ull,
0x6437303132343678ull,0x3030303178302038ull,0x3078302035323866ull,0x2030383763333036ull,
0x303031783009090aull,0x7830206432303830ull,0x3330303038663330ull,0x6666313638783020ull,
0x3030783020333065ull,0x0a20303030303030ull,0x3030303278300909ull,0x3078302039323231ull,
0x2030383730313034ull,0x3164613030337830ull,0x3234367830206466ull,0x090a203865376330ull,
0x6336303061783009ull,0x3030783020333030ull,0x3020303030303030ull,0x3030633630303178ull,
0x3030303078302033ull,0x09090a2030383232ull,0x3231303030327830ull,0x3034307830203932ull,
0x7830203038373031ull,0x3535343132303033ull,0x3030313463783020ull,0x3009090a20303837ull,
0x3263653531313278ull,0x3531313278302038ull,0x6478302034353865ull,0x2035356132653030ull,
0x3730306330387830ull,0x783009090a203038ull,0x3932343963333032ull,0x6666666630783020ull,
0x3064783020666666ull,0x3020393234316530ull,0x3837303063303878ull,0x30783009090a2030ull,
0x2031303030303030ull,0x3734353234657830ull,0x3063307830203438ull,0x7830203130303030ull,
0x3038373832323465ull,0x3066783009090a20ull,0x3020313030303030ull,0x3030303030306578ull,
0x6631363878302032ull,0x3078302033306566ull,0x2030303030303030ull,0x303061783009090aull,
0x7830203330303438ull,0x3030303030303030ull,0x3438303031783020ull,0x3030783020333030ull,
0x0a20303031313030ull,0x6430303378300909ull,0x6178302035353031ull,0x2030653730303034ull,
0x3034383030317830ull,0x3030307830203330ull,0x090a203030313230ull,0x3830313031783009ull,
0x3030783020393230ull,0x3020623030303030ull,0x3034313030303078ull,0x3030306378302035ull,
0x09090a2030383730ull,0x3038383130317830ull,0x3030307830203932ull,0x7830206230313030ull,
0x3930343130303030ull,0x3030303063783020ull,0x3009090a20303837ull,0x3238663030303178ull,
0x3330343078302039ull,0x3178302030383763ull,0x2039353030303038ull,0x3763303034347830ull,
0x783009090a203038ull,0x6466373132383062ull,0x3031353036783020ull,0x3031783020386537ull,
0x3020633536393230ull,0x3530363631396378ull,0x63783009090a2038ull,0x2039356332393830ull,
0x3632303430307830ull,0x3830637830203038ull,0x7830206435363139ull,0x3038363230343030ull,
0x3039783009090a20ull,0x3020633265323030ull,0x3532363334376278ull,0x6230306578302063ull,
0x3078302064326332ull,0x2030383763353034ull,0x373062783009090aull,0x7830203935363163ull,
0x3038373430303036ull,0x3030343032783020ull,0x3430783020313030ull,0x0a20303837383530ull,
0x3130303278300909ull,0x3078302039323439ull,0x2033303030303030ull,0x6232613030337830ull,
0x3034367830206466ull,0x090a203865373431ull,0x3030303864783009ull,0x3032783020393038ull,
0x3020303837303030ull,0x3030373730303178ull,0x3030303078302033ull,0x09090a2030383232ull,
0x6131303030327830ull,0x3034307830203532ull,0x7830203238373432ull,0x6466316439303033ull,
0x3031323436783020ull,0x3009090a20386537ull,0x3230313034303278ull,0x3330343078302031ull,
0x3178302030383734ull,0x2033303066353030ull,0x3232303030307830ull,0x783009090a203038ull,
0x3330656666313638ull,0x3030303030783020ull,0x3064783020303030ull,0x3020353038343134ull,
0x3837303030303278ull,0x33783009090a2030ull,0x2064663163343034ull,0x3763303234367830ull,
0x3130617830203864ull,0x7830203330303431ull,0x3030303030303030ull,0x3031783009090a20ull,
0x3020333030343131ull,0x3832313030303078ull,0x3630306278302030ull,0x3678302064666230ull,
0x2038643734333030ull,0x313031783009090aull,0x7830203330306430ull,0x3030313130303030ull,
0x3030303061783020ull,0x3430783020313230ull,0x0a20303837303030ull,0x3030306178300909ull,
0x3078302064313830ull,0x2030383730303034ull,0x3430303030617830ull,0x3034307830203532ull,
0x090a203038373030ull,0x3137303033783009ull,0x3436783020393230ull,0x3020306437343130ull,
0x3230313930303378ull,0x3130343678302064ull,0x09090a2030383734ull,0x3431303830647830ull,
0x3434307830203535ull,0x7830203038373030ull,0x3932363130303061ull,0x3431306332783020ull,
0x3009090a20303837ull,0x6662326130306478ull,0x3030343078302064ull,0x6178302038653730ull,
0x2039323630303030ull,0x3734303134637830ull,0x783009090a203038ull,0x3330303363303031ull,
0x3230303030783020ull,0x3062783020303031ull,0x3020353263306130ull,0x3837303031303878ull,
0x30783009090a2030ull,0x2035306531313030ull,0x3730303030637830ull,0x3034307830203038ull,
0x7830203130303030ull,0x3038373833303065ull,0x3063783009090a20ull,0x3020643161643930ull,
0x3837303032303078ull,0x3130303078302030ull,0x6378302035306331ull,0x2030383730303030ull,
0x303430783009090aull,0x7830203130303030ull,0x3038373034303065ull,0x3832333031783020ull,
0x3930783020393230ull,0x0a20376532643233ull,0x3430303178300909ull,0x3078302064323038ull,
0x2062343435363833ull,0x6530303030617830ull,0x3434637830203132ull,0x090a203038373030ull,
0x3030303062783009ull,0x3830783020353536ull,0x3020303837383130ull,0x3230316130306578ull,
0x3030306378302039ull,0x09090a2030383730ull,0x6132303030617830ull,0x3534637830203132ull,
0x7830203038373030ull,0x6466313161303065ull,0x6330303065783020ull,0x3009090a20386437ull,
0x3030626230306178ull,0x3030303078302033ull,0x3178302030303030ull,0x2033303039623030ull,
0x3131303030307830ull,0x783009090a203030ull,0x6431633063373062ull,0x3430303036783020ull,
0x3062783020306537ull,0x3020646637306337ull,0x6637343030303678ull,0x61783009090a2038ull,
0x2033303032623030ull,0x3030303030307830ull,0x3030617830203030ull,0x7830206466663030ull,
0x3864373431306330ull,0x3031783009090a20ull,0x3020333030306230ull,0x3031333030303078ull,
0x3030303178302030ull,0x3078302064313866ull,0x2030383763333034ull,0x303031783009090aull,
0x7830206431303030ull,0x3038326530343432ull,0x3262303031783020ull,0x3030783020333030ull,
0x0a20303837303030ull,0x3130303178300909ull,0x3078302064313038ull,0x2033303030303030ull,
0x3866303030317830ull,0x3034307830206431ull,0x090a203038326433ull,0x3030303062783009ull,
0x3030783020313236ull,0x3020323837383130ull,0x6666303030306178ull,0x3130633278302064ull,
0x09090a2038643734ull,0x3031303030637830ull,0x6633307830206431ull,0x7830203330303030ull,
0x6431613231383065ull,0x3931343030783020ull,0x3009090a20303834ull,0x3030303030303078ull,
0x3132346578302031ull,0x3078302034383763ull,0x2031303030303063ull,0x3763313234657830ull,
0x783009090a203038ull,0x3330306262303031ull,0x3030303030783020ull,0x3030783020303837ull,
0x3020313030303030ull,0x3837383132346578ull,0x30783009090a2034ull,0x2031303030303063ull,
0x3763303234657830ull,0x3030667830203038ull,0x7830203130303030ull,0x3230303030303065ull,
0x3031783009090a20ull,0x3020393330303130ull,0x3030303030303078ull,0x3130303078302033ull,
0x6378302035303032ull,0x2030383730303030ull,0x303430783009090aull,0x7830203130323030ull,
0x3038373833303065ull,0x3831303031783020ull,0x3030783020643130ull,0x0a20333030303030ull,
0x3031303078300909ull,0x6578302031303035ull,0x2030383763313234ull,0x3038313030317830ull,
0x3030307830206431ull,0x090a203330303030ull,0x3431313031783009ull,0x3030783020333030ull,
0x3020303837303030ull,0x3530303030303178ull,0x3030303078302039ull,0x09090a2033303030ull,
0x3032313030307830ull,0x3030637830203530ull,0x7830203038373030ull,0x3130323030303430ull,
0x3835303065783020ull,0x3009090a20303837ull,0x3030623031306178ull,0x3030303078302033ull,
0x3178302030303030ull,0x2033303061653030ull,0x3131303030307830ull,0x783009090a203030ull,
0x3532633061303062ull,0x3030313038783020ull,0x3030783020303837ull,0x3020353065313130ull,
0x3837303030306378ull,0x30783009090a2030ull,0x2031303030303034ull,0x3738333030657830ull,
0x3030637830203038ull,0x7830206431616439ull,0x3038373030323030ull,0x3030783009090a20ull,
0x3020353063313130ull,0x3837303030306378ull,0x3030343078302030ull,0x6578302031303030ull,
0x2030383730343030ull,0x333031783009090aull,0x7830203932303832ull,0x3765326432333930ull,
0x3834303031783020ull,0x3330783020643230ull,0x0a20623434353638ull,0x3030306178300909ull,
0x6378302031326530ull,0x2030383730303434ull,0x3630303030627830ull,0x3038307830203535ull,
0x090a203038373831ull,0x3161303065783009ull,0x3063783020393230ull,0x3020303837303030ull,
0x3261323030306178ull,0x3035346378302031ull,0x09090a2030383730ull,0x3131613030657830ull,
0x3030657830206466ull,0x7830203864376330ull,0x3330303765303031ull,0x3130303030783020ull,
0x3009090a20303031ull,0x3163306337306278ull,0x3030303678302064ull,0x6278302030653734ull,
0x2064663730633730ull,0x3734303030367830ull,0x783009090a203866ull,0x3330303065303061ull,
0x3030303030783020ull,0x3061783020303030ull,0x3020646666303030ull,0x6437343130633078ull,
0x31783009090a2038ull,0x2033303065643030ull,0x3133303030307830ull,0x3030317830203030ull,
0x7830206431386630ull,0x3038376333303630ull,0x3031783009090a20ull,0x3020643130303030ull,
0x3832653034343278ull,0x6530303178302030ull,0x3078302033303030ull,0x2030383730303030ull,
0x303031783009090aull,0x7830206431303831ull,0x3330303030303030ull,0x6630303031783020ull,
0x3430783020643138ull,0x0a20303832643330ull,0x3030306278300909ull,0x3078302031323630ull,
0x2032383738313030ull,0x6630303030617830ull,0x3063327830206466ull,0x090a203864373431ull,
0x3130303063783009ull,0x3330783020643130ull,0x3020333030303066ull,0x3161323138306578ull,
0x3134303078302064ull,0x09090a2030383439ull,0x3030303030307830ull,0x3234657830203130ull,
0x7830203438376331ull,0x3130303030306330ull,0x6331323465783020ull,0x3009090a20303837ull,
0x3030623031303178ull,0x3030303078302033ull,0x3078302030383730ull,0x2031303030303030ull,
0x3738313234657830ull,0x783009090a203438ull,0x3130303030306330ull,0x6330323465783020ull,
0x3031783020303837ull,0x3020333030623031ull,0x3837303030303078ull,0x62783009090a2030ull,
0x2064316130613030ull,0x3730303130387830ull,0x3030307830203038ull,0x7830203530653131ull,
0x3038373030303063ull,0x3430783009090a20ull,0x3020313030303030ull,0x3837303430306578ull,
0x3730306378302030ull,0x3078302064316164ull,0x2030383730303230ull,0x303030783009090aull,
0x7830203530633131ull,0x3038373030303063ull,0x3030303430783020ull,0x3065783020313030ull,
0x0a20303837383430ull,0x3233303178300909ull,0x3078302039323038ull,0x2037653264323339ull,
0x3038343030317830ull,0x3833307830206432ull,0x090a206234343536ull,0x3030303061783009ull,
0x3463783020313265ull,0x3020303837303034ull,0x3561303030306278ull,0x3030383078302035ull,
0x09090a2030383763ull,0x3031613030657830ull,0x3030637830203932ull,0x7830203038373030ull,
0x3132613230303061ull,0x3030353463783020ull,0x3009090a20303837ull,0x6631316130306578ull,
0x3030306578302064ull,0x3178302038643763ull,0x2033303039303130ull,0x3131303030307830ull,
0x783009090a203030ull,0x6431363063373062ull,0x3430303036783020ull,0x3062783020306537ull,
0x3020646662306337ull,0x6637343030303678ull,0x61783009090a2038ull,0x2033303032303130ull,
0x3030303030307830ull,0x3030617830203030ull,0x7830206466663030ull,0x3864373431306330ull,
0x3031783009090a20ull,0x3020333030303031ull,0x3031333030303078ull,0x3030303178302030ull,
0x3078302064313866ull,0x2030383763333034ull,0x303031783009090aull,0x7830206431303030ull,
0x3038326530343432ull,0x3230313031783020ull,0x3030783020333030ull,0x0a20303837303030ull,
0x3130303178300909ull,0x3078302064313038ull,0x2033303030303030ull,0x3866303030317830ull,
0x3034307830206431ull,0x090a203038326433ull,0x3030303062783009ull,0x3030783020313236ull,
0x3020323837343130ull,0x6666303030306178ull,0x3130633278302064ull,0x09090a2038643734ull,
0x3031303030637830ull,0x6633307830206431ull,0x7830203330303030ull,0x6431613231383065ull,
0x6430343030783020ull,0x3009090a20303834ull,0x3030303030303078ull,0x3132346578302031ull,
0x3078302034383763ull,0x2031303030303063ull,0x3763313234657830ull,0x783009090a203038ull,
0x3330306230313031ull,0x3030303030783020ull,0x3030783020303837ull,0x3020313030303030ull,
0x3837633032346578ull,0x30783009090a2034ull,0x2031303030303063ull,0x3734313234657830ull,
0x3030317830203038ull,0x7830206431386630ull,0x3238376333303630ull,0x3031783009090a20ull,
0x3020333030343131ull,0x3837303030303078ull,0x3030303078302030ull,0x6578302031303030ull,
0x2034383738313234ull,0x306330783009090aull,0x7830203130303030ull,0x3038373831323465ull,
0x3131303030783020ull,0x3063783020353065ull,0x0a20303837303030ull,0x3030343078300909ull,
0x6578302031303030ull,0x2030383730313030ull,0x3866303030317830ull,0x3034307830206431ull,
0x090a203038376333ull,0x3131303030783009ull,0x3063783020353063ull,0x3020303837303030ull,
0x3030303030343078ull,0x3030306578302031ull,0x09090a2030383738ull,0x3030303030667830ull,
0x3030657830203130ull,0x7830203230303030ull,0x3330656666313638ull,0x3030303030783020ull,
0x3009090a20303030ull,0x3030343134306478ull,0x3030303278302035ull,0x3378302030383730ull,
0x2064663163633734ull,0x3738303234367830ull,0x783009090a203864ull,0x3330303935313061ull,
0x3030303030783020ull,0x3031783020303030ull,0x3020333030393531ull,0x3832313030303078ull,
0x64783009090a2030ull,0x2035303035313430ull,0x3730303030327830ull,0x3034337830203038ull,
0x7830206432306331ull,0x3038373030333465ull,0x3431783009090a20ull,0x3020313230303030ull,
0x3837633030343478ull,0x6337303378302030ull,0x3678302064663731ull,0x2038643763303063ull,
0x303031783009090aull,0x7830203932303831ull,0x3330303030303030ull,0x3433313031783020ull,
0x3030783020333030ull,0x0a20303832313030ull,0x6631363878300909ull,0x3078302033306566ull,
0x2030303030303030ull,0x3731343030337830ull,0x3034367830206466ull,0x090a203864376330ull,
0x3033313061783009ull,0x3030783020333030ull,0x3020303030303030ull,0x3030303331303178ull,
0x3030303078302033ull,0x09090a2030383231ull,0x3830313030337830ull,0x3134637830203532ull,
0x7830203038373030ull,0x3535323932303032ull,0x3030303030783020ull,0x3009090a20333030ull,
0x3561326130303478ull,0x3130303078302035ull,0x3078302030383730ull,0x2035306132313030ull,
0x3730303030637830ull,0x783009090a203038ull,0x3532323931303032ull,0x3030303030783020ull,
0x3034783020333030ull,0x3020353234313930ull,0x3837303130303078ull,0x30783009090a2030ull,
0x2039303231313030ull,0x3730303030637830ull,0x3138647830203038ull,0x7830203930633239ull,
0x3038373030303032ull,0x3831783009090a20ull,0x3020393430303030ull,0x3837343030303478ull,
0x3931346478302030ull,0x3278302039306332ull,0x2030383730303030ull,0x303832783009090aull,
0x7830203934303430ull,0x3038373834323030ull,0x3963303430783020ull,0x3065783020313036ull,
0x0a20303837383430ull,0x3130303378300909ull,0x6578302064323631ull,0x2032383730303163ull,
0x3731633730337830ull,0x3063367830206466ull,0x090a203864373031ull,0x3131303033783009ull,
0x3463783020393234ull,0x3020303837303031ull,0x3030303231303178ull,0x3030303078302033ull,
0x09090a2030383231ull,0x3131333830337830ull,0x3434367830206466ull,0x7830203864376330ull,
0x3330306134313031ull,0x3130303030783020ull,0x3009090a20303832ull,0x3230383230303178ull,
0x3030303078302064ull,0x3378302033303030ull,0x2039323431313030ull,0x3730303134657830ull,
0x783009090a203038ull,0x3330656666313638ull,0x3030303030783020ull,0x3032783020303030ull,
0x3020353236396633ull,0x6666666666663078ull,0x33783009090a2066ull,0x2064663930393030ull,
0x3738313034367830ull,0x3130617830203864ull,0x7830203330303734ull,0x3030303030303030ull,
0x3031783009090a20ull,0x3020333030373431ull,0x3832313030303078ull,0x3130303278302030ull,
0x3078302035323838ull,0x2033303030303030ull,0x303033783009090aull,0x7830203535343131ull,
0x3038373030313465ull,0x3139343034783020ull,0x3032783020343234ull,0x0a20343561613930ull,
0x3130303078300909ull,0x6378302035303231ull,0x2030383730303030ull,0x6332393134647830ull,
0x3030327830203930ull,0x090a203038373030ull,0x3231303030783009ull,0x3063783020353061ull,
0x3020303837303030ull,0x3430303030383178ull,0x3030303478302039ull,0x09090a2030383734ull,
0x6332393134647830ull,0x3030327830203930ull,0x7830203038373030ull,0x3934303430303832ull,
0x3834323030783020ull,0x3009090a20303837ull,0x3036396330343078ull,0x3430306578302031ull,
0x3378302030383738ull,0x2064323631313030ull,0x3730303134637830ull,0x783009090a203238ull,
0x6466373138303033ull,0x3430303436783020ull,0x3031783020386437ull,0x3020333030373331ull,
0x3832313030303078ull,0x38783009090a2030ull,0x2033306566663136ull,0x3030303030307830ull,
0x3430647830203030ull,0x7830203530383431ull,0x3038373030303032ull,0x3033783009090a20ull,
0x3020646666303038ull,0x6437383034343678ull,0x3430343378302038ull,0x3678302064663163ull,
0x2038643231313234ull,0x313031783009090aull,0x7830203330303935ull,0x3030313130303030ull,
0x3431343064783020ull,0x3032783020393038ull,0x0a20303837303030ull,0x3130303078300909ull,
0x6378302035303032ull,0x2030383730303030ull,0x3034303034617830ull,0x3234307830203132ull,
0x090a203038373030ull,0x6330303832783009ull,0x3430783020313230ull,0x3020303837303232ull,
0x3030313230303078ull,0x3030306378302035ull,0x09090a2030383730ull,0x3834303034307830ull,
0x3234657830203130ull,0x7830203038376330ull,0x3130633438303430ull,0x3431323465783020ull,
0x3009090a20303837ull,0x3030313130303078ull,0x3030306378302035ull,0x3078302030383730ull,
0x2031303439383034ull,0x3730303030657830ull,0x783009090a203038ull,0x3130633938313430ull,
0x3830303065783020ull,0x3066783020303837ull,0x3020313030303030ull,0x3030303030306578ull,
0x38783009090a2032ull,0x2033306566663136ull,0x3030303030307830ull,0x3130617830203030ull,
0x7830203330306137ull,0x3030303030303030ull,0x3031783009090a20ull,0x3020333030613731ull,
0x3031303030303078ull,0x3134306478302030ull,0x3278302035303834ull,0x2030383730303030ull,
0x303430783009090aull,0x7830203930306331ull,0x3038373030323063ull,0x3239313864783020ull,
0x3032783020393063ull,0x0a20303837303030ull,0x3030386178300909ull,0x3078302031303034ull,
0x2030383730303234ull,0x3063303034327830ull,0x3234307830203130ull,0x090a203038373030ull,
0x3866333032783009ull,0x6630783020313230ull,0x3020666666666666ull,0x6631303830306478ull,
0x3030343078302064ull,0x09090a2038643730ull,0x3235303130307830ull,0x3234657830203130ull,
0x7830203038373030ull,0x3330303736313031ull,0x3130303030783020ull,0x3009090a20303832ull,
0x3030363731303178ull,0x3030303078302033ull,0x6178302030383730ull,0x2031303030303030ull,
0x3734313034347830ull,0x783009090a203038ull,0x6466313034383062ull,0x3430353036783020ull,
0x3061783020386437ull,0x3020353230303030ull,0x3837343031346378ull,0x63783009090a2030ull,
0x2031303030613830ull,0x3631303430307830ull,0x3030317830203038ull,0x7830203132363130ull,
0x3038366430343432ull,0x3031783009090a20ull,0x3020313238663030ull,0x3031643330363078ull,
0x3731303378302030ull,0x6578302031303030ull,0x2030383730303163ull,0x383064783009090aull,
0x7830203130303035ull,0x3038373030343430ull,0x3035383033783020ull,0x3436783020646631ull,
0x0a20386437383034ull,0x3034303278300909ull,0x3078302031303030ull,0x2030383730323034ull,
0x3331633730627830ull,0x3030367830206466ull,0x090a203835313930ull,0x3832303032783009ull,
0x6630783020313030ull,0x3020626666666666ull,0x3230383130303178ull,0x3030303078302031ull,
0x09090a2033303030ull,0x3866303030317830ull,0x3034307830203130ull,0x7830203038366433ull,
0x3130303130303033ull,0x3030303463783020ull,0x3009090a20303837ull,0x3034353031303078ull,
0x3032346578302031ull,0x3178302030383730ull,0x2031303038313030ull,0x3030303030307830ull,
0x783009090a203330ull,0x3130303530313030ull,0x3066333465783020ull,0x3030783020303837ull,
0x3020313036353031ull,0x3837303032346578ull,0x66783009090a2030ull,0x2031303030303030ull,
0x3030303030657830ull,0x3136387830203230ull,0x7830203330656666ull,0x3030303030303030ull,
0x3064783009090a20ull,0x3020353030353134ull,0x3837303030303278ull,0x6430343378302030ull,
0x3678302064663163ull,0x2038643763303234ull,0x303031783009090aull,0x7830203330306332ull,
0x3038323130303030ull,0x6666313638783020ull,0x3030783020333065ull,0x0a20303030303030ull,
0x3030303278300909ull,0x3078302064306131ull,0x2030383730313034ull,0x3834313430647830ull,
0x3030327830203530ull,0x090a203038373030ull,0x6333303433783009ull,0x3436783020646631ull,
0x3020386437633032ull,0x3065313130303078ull,0x3030306378302035ull,0x09090a2030383730ull,
0x3034303034617830ull,0x3234307830203931ull,0x7830203038373030ull,0x3530633131303030ull,
0x3030303063783020ull,0x3009090a20303837ull,0x3130343030346178ull,0x3032343078302035ull,
0x3078302030383730ull,0x2035303630313030ull,0x3531303030637830ull,0x783009090a203030ull,
0x3530383231313464ull,0x3130303032783020ull,0x3461783020303035ull,0x3020353430343030ull,
0x3035313032343078ull,0x30783009090a2030ull,0x2035303630313030ull,0x3531303030637830ull,
0x3334647830203030ull,0x7830203530383331ull,0x3030353130303032ull,0x3461783009090a20ull,
0x3020393430343030ull,0x3035313032343078ull,0x3030303178302030ull,0x3278302031303033ull,
0x2030383634303430ull,0x303030783009090aull,0x7830203130343938ull,0x3038363030303065ull,
0x3938313030783020ull,0x3065783020313063ull,0x0a20303836303030ull,0x6631363878300909ull,
0x3078302033306566ull,0x2030303030303030ull,0x6130303430327830ull,0x3034307830203530ull,
0x090a203038373831ull,0x3030383033783009ull,0x3436783020313032ull,0x3020306437383034ull,
0x3030303038306478ull,0x3034343078302031ull,0x09090a2030383730ull,0x3230303830337830ull,
0x3434367830203930ull,0x7830203038373431ull,0x3530653131303030ull,0x3030303063783020ull,
0x3009090a20303837ull,0x3032303030343078ull,0x3030306578302031ull,0x6478302030383730ull,
0x2031303430303830ull,0x3730303434307830ull,0x783009090a203038ull,0x3530323032303064ull,
0x3030303430783020ull,0x3030783020303837ull,0x3020353063313130ull,0x3837303030306378ull,
0x30783009090a2030ull,0x2031303230303034ull,0x3730303030657830ull,0x3030307830203038ull,
0x7830203530303231ull,0x3038373030303063ull,0x3430783009090a20ull,0x3020313032303030ull,
0x3837383030306578ull,0x3030303178302030ull,0x3078302031303030ull,0x2033303030303030ull,
0x303030783009090aull,0x7830203530383031ull,0x3038373030303063ull,0x3963313430783020ull,
0x3065783020313065ull,0x0a20303837303030ull,0x3134306478300909ull,0x3278302035303834ull,
0x2030383730303030ull,0x3163333034337830ull,0x3234367830206466ull,0x090a203865376330ull,
0x6662313061783009ull,0x3030783020333030ull,0x3020303030303030ull,0x3036303130303078ull,
0x3030306378302035ull,0x09090a2030383730ull,0x6333393334647830ull,0x3030327830203530ull,
0x7830203038373030ull,0x6431303030303430ull,0x3030303034783020ull,0x3009090a20303837ull,
0x3038303130303078ull,0x3030306378302035ull,0x6478302030383730ull,0x2035306333393334ull,
0x3730303030327830ull,0x783009090a203038ull,0x3132303030303430ull,0x3030303034783020ull,
0x3031783020303837ull,0x3020333030386231ull,0x3832323030303078ull,0x32783009090a2030ull,
0x2039303432303430ull,0x3734343034307830ull,0x3830337830203038ull,0x7830203130343030ull,
0x3038373830343436ull,0x3033783009090a20ull,0x3020353234303038ull,0x3837343134343678ull,
0x3038306478302030ull,0x3078302031303030ull,0x2030383730303434ull,0x383064783009090aull,
0x7830203530323130ull,0x3038373030343430ull,0x3031303030783020ull,0x3063783020353036ull,
0x0a20303837303030ull,0x3830343078300909ull,0x6578302031303639ull,0x2030383730303030ull,
0x6539383134307830ull,0x3030657830203130ull,0x090a203038373830ull,0x3039303064783009ull,
0x3430783020353034ull,0x3020303837303030ull,0x3038396330343078ull,0x3030306578302031ull,
0x09090a2030383738ull,0x3030303030317830ull,0x3030307830203930ull,0x7830203330303030ull,
0x3530653030303030ull,0x3030303063783020ull,0x3009090a20303837ull,0x3030303030343078ull,
0x3030306578302031ull,0x3178302030383738ull,0x2033303066623130ull,0x3730303030307830ull,
0x783009090a203038ull,0x6466373036383033ull,0x3031343436783020ull,0x3031783020386537ull,
0x3020313030333030ull,0x3035363034303278ull,0x30783009090a2030ull,0x2035303630313030ull,
0x3532303030637830ull,0x3034307830203030ull,0x7830203130383963ull,0x3030353230303065ull,
0x3030783009090a20ull,0x3020353065303030ull,0x3035323030306378ull,0x3030343078302030ull,
0x6578302031303030ull,0x2030303532303030ull,0x303031783009090aull,0x7830203130386630ull,
0x3038376333303630ull,0x3531343064783020ull,0x3032783020353030ull,0x0a20323837303030ull,
0x3130343378300909ull,0x6578302064323063ull,0x2030383730303334ull,0x3030303034317830ull,
0x3034347830203532ull,0x090a203038376330ull,0x3163373033783009ull,0x6336783020646637ull,
0x3020386537633030ull,0x3030383130303178ull,0x3030303078302035ull,0x09090a2033303030ull,
0x3032323230317830ull,0x3030307830203330ull,0x7830203038323230ull,0x3330303132323061ull,
0x3030303030783020ull,0x3009090a20303030ull,0x3030643132303478ull,0x3030303078302033ull,
0x3878302030303030ull,0x2033306566663136ull,0x3030303030307830ull,0x783009090a203030ull,
0x6466373134303033ull,0x6330303436783020ull,0x3035783020386537ull,0x3020333030303030ull,
0x3832323030303078ull,0x33783009090a2030ull,0x2035333830313030ull,0x3730303134637830ull,
0x3030327830203038ull,0x7830203930613931ull,0x3330303030303030ull,0x3034783009090a20ull,
0x3020393236303430ull,0x3837303030303078ull,0x3530303678302030ull,0x3078302039323430ull,
0x2030383738323030ull,0x313033783009090aull,0x7830203932343130ull,0x3038373030313463ull,
0x3034303036783020ull,0x3030783020393034ull,0x0a20303837383230ull,0x3130303078300909ull,
0x6378302035303430ull,0x2030383730303030ull,0x3832313134647830ull,0x3030327830203930ull,
0x090a203038373030ull,0x3030303831783009ull,0x3034783020313530ull,0x3020303837343030ull,
0x3061393230303278ull,0x3030303078302039ull,0x09090a2033303030ull,0x3830333030347830ull,
0x3030307830203533ull,0x7830203038373030ull,0x3533613032303036ull,0x3433303030783020ull,
0x3009090a20303837ull,0x3361313031303378ull,0x3031346378302035ull,0x3678302030383730ull,
0x2035333830323030ull,0x3734333030307830ull,0x783009090a203038ull,0x3930613131303030ull,
0x3030303063783020ull,0x3864783020303837ull,0x3020393038323131ull,0x3837303030303278ull,
0x30783009090a2030ull,0x2039303030303038ull,0x3730303030347830ull,0x3038327830203038ull,
0x7830203131303430ull,0x3038373035323030ull,0x3030783009090a20ull,0x3020393061313130ull,
0x3837303030306378ull,0x3830383078302030ull,0x6578302031303439ull,0x2030383730313030ull,
0x333464783009090aull,0x7830203930383331ull,0x3038373030303032ull,0x3030303830783020ull,
0x3034783020393030ull,0x0a20303837303030ull,0x3030383178300909ull,0x3478302031313030ull,
0x2030383734303030ull,0x6131313030307830ull,0x3030637830203930ull,0x090a203038373030ull,
0x3331333864783009ull,0x3032783020393038ull,0x3020303837303030ull,0x3230303030383078ull,
0x3030303478302039ull,0x09090a2030383730ull,0x3034303038327830ull,0x3230307830203131ull,
0x7830203038373031ull,0x3930613131303030ull,0x3030303063783020ull,0x3009090a20303837ull,
0x3063393831383078ull,0x3130306578302031ull,0x6478302030383730ull,0x2039303833393334ull,
0x3730303030327830ull,0x783009090a203038ull,0x3930303030303830ull,0x3030303034783020ull,
0x3833783020303837ull,0x3020646631343038ull,0x6537343136303678ull,0x31783009090a2038ull,
0x2031313030303038ull,0x3734303030347830ull,0x3030327830203038ull,0x7830203932613966ull,
0x3765303030303030ull,0x3061783009090a20ull,0x3020333030346631ull,0x3030303030303078ull,
0x6631303178302030ull,0x3078302033303034ull,0x2030383232303030ull,0x303030783009090aull,
0x7830203930343131ull,0x3038373030303063ull,0x3030303830783020ull,0x3034783020353530ull,
0x0a20303837303030ull,0x6533303278300909ull,0x3078302035356161ull,0x2066666666666666ull,
0x6132303030307830ull,0x3030637830203930ull,0x090a203038373030ull,0x3430383833783009ull,
0x3036783020646631ull,0x3020386537383036ull,0x3030303030303578ull,0x3030303078302033ull,
0x09090a2030383232ull,0x3930303830337830ull,0x3430367830206466ull,0x7830206165373431ull,
0x3330306466313031ull,0x3230303030783020ull,0x3009090a20303832ull,0x3034313130303078ull,
0x3030306378302039ull,0x3078302030383730ull,0x2039303030303038ull,0x3730303030347830ull,
0x783009090a203038ull,0x3930343865333032ull,0x6666666630783020ull,0x3030783020666666ull,
0x3020353034303030ull,0x3837303030306378ull,0x31783009090a2030ull,0x2031313030313030ull,
0x3030303030307830ull,0x3034307830203330ull,0x7830203130303030ull,0x3038373031303065ull,
0x3035783009090a20ull,0x3020333030303030ull,0x3837303030303078ull,0x3130303078302030ull,
0x6378302039303431ull,0x2030383730303030ull,0x303830783009090aull,0x7830203930303030ull,
0x3038373030303034ull,0x3865333032783020ull,0x6630783020393034ull,0x0a20666666666666ull,
0x3030303078300909ull,0x6378302039303430ull,0x2030383730303030ull,0x3134303838337830ull,
0x3630367830206466ull,0x090a203865373431ull,0x3630323031783009ull,0x3030783020333030ull,
0x3020303832323030ull,0x3130303130303178ull,0x3030303078302031ull,0x09090a2033303030ull,
0x6339633134307830ull,0x3030657830203130ull,0x7830203038373031ull,0x3330303030303035ull,
0x3030303030783020ull,0x3009090a20303837ull,0x3063323931346478ull,0x3030303278302039ull,
0x3078302030383730ull,0x2039303030303038ull,0x3730303030347830ull,0x783009090a203038ull,
0x3930303430303861ull,0x3030323430783020ull,0x3030783020303837ull,0x3020393061313130ull,
0x3837303030306378ull,0x64783009090a2030ull,0x2039306332393138ull,0x3730303030327830ull,
0x3038307830203038ull,0x7830203535303030ull,0x3038373030303034ull,0x3861783009090a20ull,
0x3020353530343030ull,0x3837303032343078ull,0x3030303278302030ull,0x3078302039303430ull,
0x2030383734353034ull,0x383033783009090aull,0x7830206466353037ull,0x3865376330343436ull,
0x3831323031783020ull,0x3030783020333030ull,0x0a20303832323030ull,0x3130303078300909ull,
0x6378302039303431ull,0x2030383730303030ull,0x3030303038307830ull,0x3030347830203930ull,
0x090a203038373030ull,0x3031303031783009ull,0x3030783020313530ull,0x3020333030303030ull,
0x3063396331343078ull,0x3530306578302031ull,0x09090a2030383730ull,0x3438653330327830ull,
0x6666307830203930ull,0x7830206666666666ull,0x3530343030303030ull,0x3030303063783020ull,
0x3009090a20303837ull,0x3030303030343078ull,0x3530306578302031ull,0x3578302030383730ull,
0x2033303030303030ull,0x3730303030307830ull,0x783009090a203038ull,0x3930613131303030ull,
0x3030303063783020ull,0x3830783020303837ull,0x3020313036396330ull,0x3837303130306578ull,
0x31783009090a2030ull,0x2031313030303030ull,0x3030303030307830ull,0x3034307830203330ull,
0x7830203130363963ull,0x3038373031303065ull,0x3035783009090a20ull,0x3020333030303030ull,
0x3837303030303078ull,0x3130303378302030ull,0x6578302064323631ull,0x2030383730303163ull,
0x373033783009090aull,0x7830206466373163ull,0x3865373031306336ull,0x3031303033783020ull,
0x3463783020353032ull,0x0a20303837303031ull,0x6331303178300909ull,0x3078302033303036ull,
0x2030383232303030ull,0x3030303030667830ull,0x3030657830203130ull,0x090a203230303030ull,
0x3133383033783009ull,0x3436783020646633ull,0x3020386537633034ull,0x3030663332303178ull,
0x3030303078302033ull,0x09090a2030383232ull,0x3038323030317830ull,0x3030307830203932ull,
0x7830203330303030ull,0x3530323031303033ull,0x3030313465783020ull,0x3009090a20303837ull,
0x3065666631363878ull,0x3030303078302033ull,0x3278302030303030ull,0x2039303439663330ull,
0x6666666666307830ull,0x783009090a206666ull,0x6466393032303033ull,0x3831303436783020ull,
0x3061783020386537ull,0x3020333030633332ull,0x3030303030303078ull,0x31783009090a2030ull,
0x2033303063333230ull,0x3232303030307830ull,0x3030327830203038ull,0x7830203930383831ull,
0x3330303030303030ull,0x3034783009090a20ull,0x3020643232303230ull,0x3837303130303078ull,
0x3130303378302030ull,0x6578302039303230ull,0x2030383730303134ull,0x303032783009090aull,
0x7830203930343030ull,0x3038376332303430ull,0x3131303030783020ull,0x3063783020393036ull,
0x0a20303837303030ull,0x3131386478300909ull,0x3278302039303832ull,0x2030383730303030ull,
0x3430313030307830ull,0x3030637830203530ull,0x090a203038373030ull,0x3030303831783009ull,
0x3034783020313130ull,0x3020303837343030ull,0x3038323131346478ull,0x3030303278302039ull,
0x09090a2030383730ull,0x3034303038327830ull,0x3230307830203131ull,0x7830203038373031ull,
0x3130343938303430ull,0x3031303065783020ull,0x3009090a20303837ull,0x3036313130303078ull,
0x3030306378302039ull,0x6478302030383730ull,0x2039303833313338ull,0x3730303030327830ull,
0x783009090a203038ull,0x3131303030303831ull,0x3430303034783020ull,0x3464783020303837ull,
0x3020393038333133ull,0x3837303030303278ull,0x32783009090a2030ull,0x2031313034303038ull,
0x3730313230307830ull,0x3134307830203038ull,0x7830203130633938ull,0x3038373031303065ull,
0x3033783009090a20ull,0x3020393234313130ull,0x3837303031346378ull,0x3930303378302032ull,
0x3678302064663531ull,0x2038653734303034ull,0x323031783009090aull,0x7830203330303532ull,
0x3038323230303030ull,0x3431343064783020ull,0x3032783020353038ull,0x0a20303837303030ull,
0x3130343378300909ull,0x6578302064323263ull,0x2030383730303334ull,0x3731633730337830ull,
0x3063367830206466ull,0x090a203865376330ull,0x3831303031783009ull,0x3030783020393230ull,
0x3020333030303030ull,0x3032303030343178ull,0x3030343478302035ull,0x09090a2030383763ull,
0x3063313034307830ull,0x3230637830203530ull,0x7830203038373030ull,0x3532303030303430ull,
0x3030303034783020ull,0x3009090a20303837ull,0x3030623532303178ull,0x3030303078302033ull,
0x3878302030383232ull,0x2033306566663136ull,0x3030303030307830ull,0x783009090a203030ull,
0x6466373134303033ull,0x6330303436783020ull,0x3061783020386537ull,0x3020333030373532ull,
0x3030303030303078ull,0x31783009090a2030ull,0x2033303037353230ull,0x3232303030307830ull,
0x3030337830203038ull,0x7830203930383031ull,0x3038373030313463ull,0x3032783009090a20ull,
0x3020353334383130ull,0x3030303030303078ull,0x6430303478302033ull,0x3078302035333431ull,
0x2030383730313030ull,0x303032783009090aull,0x7830203930343832ull,0x3330303030303030ull,
0x3131303030783020ull,0x3063783020353061ull,0x0a20303837303030ull,0x6130303478300909ull,
0x3078302039303430ull,0x2030383730313030ull,0x6332393134647830ull,0x3030327830203930ull,
0x090a203038373030ull,0x3031303030783009ull,0x3063783020353034ull,0x3020303837303030ull,
0x3130303030383178ull,0x3030303478302031ull,0x09090a2030383734ull,0x6332393134647830ull,
0x3030327830203930ull,0x7830203038373030ull,0x3131303430303832ull,0x3031323030783020ull,
0x3009090a20303837ull,0x3036396330343078ull,0x3130306578302031ull,0x3378302030383730ull,
0x2064323631313030ull,0x3730303163657830ull,0x783009090a203238ull,0x6466373163373033ull,
0x3031306336783020ull,0x3033783020386537ull,0x3020393234313130ull,0x3837303031346378ull,
0x31783009090a2030ull,0x2033303037343230ull,0x3232303030307830ull,0x3330327830203038ull,
0x7830206432323866ull,0x6666666666666630ull,0x3033783009090a20ull,0x3020646637313338ull,
0x6537633034343678ull,0x3732303178302038ull,0x3078302033303033ull,0x2030383232303030ull,
0x303031783009090aull,0x7830203533303832ull,0x3330303030303030ull,0x3131303033783020ull,
0x3465783020393234ull,0x0a20303837303031ull,0x6631363878300909ull,0x3078302033306566ull,
0x2030303030303030ull,0x6139663330327830ull,0x6666307830203930ull,0x090a206666666666ull,
0x3032303033783009ull,0x3436783020646639ull,0x3020386537383130ull,0x3030303732306178ull,
0x3030303078302033ull,0x09090a2030303030ull,0x3030373230317830ull,0x3030307830203330ull,
0x7830203038323230ull,0x3930383831303032ull,0x3030303030783020ull,0x3009090a20333030ull,
0x3034313230303478ull,0x3130303078302039ull,0x3378302030383730ull,0x2035353431313030ull,
0x3730303134657830ull,0x783009090a203038ull,0x3530343031303030ull,0x3030303063783020ull,
0x3032783020303837ull,0x3020393061323030ull,0x3837383030343078ull,0x64783009090a2030ull,
0x2039306332393134ull,0x3730303030327830ull,0x3030307830203038ull,0x7830203530343031ull,
0x3038373030303063ull,0x3831783009090a20ull,0x3020313130303030ull,0x3837343030303478ull,
0x3931346478302030ull,0x3278302039306332ull,0x2030383730303030ull,0x303832783009090aull,
0x7830203131303430ull,0x3038373031323030ull,0x3963303430783020ull,0x3065783020313036ull,
0x0a20303837303130ull,0x3130303378300909ull,0x6378302035336131ull,0x2032383730303134ull,
0x6231623030337830ull,0x3034367830206466ull,0x090a203865373430ull,0x6635323031783009ull,
0x3030783020333030ull,0x3020303832323030ull,0x3065666631363878ull,0x3030303078302033ull,
0x09090a2030303030ull,0x3066373230617830ull,0x3030307830203330ull,0x7830203030303030ull,
0x3330306637323031ull,0x3030303030783020ull,0x3009090a20303031ull,0x3032303130303078ull,
0x3030306378302039ull,0x6478302030383730ull,0x2035303833393338ull,0x3730303030327830ull,
0x783009090a203038ull,0x3930303030303431ull,0x3430303034783020ull,0x3030783020303837ull,
0x3020353032313030ull,0x3837303030306378ull,0x30783009090a2030ull,0x2031306339633134ull,
0x3738303030657830ull,0x3138647830203038ull,0x7830203530633239ull,0x3038373030303032ull,
0x3431783009090a20ull,0x3020393030303030ull,0x3837343030303478ull,0x3030303078302030ull,
0x6378302035303231ull,0x2030383730303030ull,0x303430783009090aull,0x7830203130363963ull,
0x3038373830303065ull,0x3030303066783020ull,0x3065783020313030ull,0x0a20323030303030ull,
0x6631363878300909ull,0x3078302033306566ull,0x2030303030303030ull,0x3031303030307830ull,
0x3030637830203530ull,0x090a203038373030ull,0x3430383433783009ull,0x3036783020646631ull,
0x3020386537343136ull,0x3063313130303078ull,0x3030306378302035ull,0x09090a2030303532ull,
0x3234303034617830ull,0x3234307830203530ull,0x7830203030353230ull,0x3530303231303030ull,
0x3230303063783020ull,0x3009090a20303035ull,0x3432303030343178ull,0x3030303478302064ull,
0x3278302030303536ull,0x2064323230303031ull,0x3532303434307830ull,0x783009090a203030ull,
0x6434303330303031ull,0x3630343032783020ull,0x3031783020303832ull,0x3020643238663030ull,
0x3832653330343078ull,0x30783009090a2030ull,0x2035306530303030ull,0x3730303030637830ull,
0x3834337830203038ull,0x7830206466313430ull,0x3865373431363036ull,0x3061783009090a20ull,
0x3020333030383932ull,0x3030303030303078ull,0x3932303178302030ull,0x3078302033303036ull,
0x2030383232303030ull,0x303030783009090aull,0x7830203530363031ull,0x3038373030303063ull,
0x3331333464783020ull,0x3032783020353063ull,0x0a20303837303030ull,0x3030346178300909ull,
0x3078302035303034ull,0x2030383730303234ull,0x3630313030307830ull,0x3030637830203530ull,
0x090a203038373030ull,0x3339313464783009ull,0x3032783020353030ull,0x3020303837303030ull,
0x3430303030343178ull,0x3030303478302039ull,0x09090a2030383734ull,0x3238313030327830ull,
0x3030307830203930ull,0x7830203330303030ull,0x3330303839323031ull,0x3030303030783020ull,
0x3009090a20303837ull,0x3430303030303178ull,0x3030303078302039ull,0x3178302033303030ull,
0x2039303866303030ull,0x3763333036307830ull,0x783009090a203038ull,0x3530303531343064ull,
0x3030303032783020ull,0x3431783020323837ull,0x3020353030303030ull,0x3837633030343478ull,
0x33783009090a2030ull,0x2064663163333034ull,0x3763303234367830ull,0x3030307830203865ull,
0x7830203530303130ull,0x3038373030303063ull,0x3431783009090a20ull,0x3020313530303030ull,
0x3837343030303478ull,0x3130303078302030ull,0x6378302035303032ull,0x2030383730303030ull,
0x303430783009090aull,0x7830203130323030ull,0x3038373035303065ull,0x3030303030783020ull,
0x3063783020353065ull,0x0a20303035323030ull,0x3030343178300909ull,0x3478302031353030ull,
0x2030303536303030ull,0x3630313030307830ull,0x3030637830203530ull,0x090a203030353230ull,
0x3963303430783009ull,0x3065783020313038ull,0x3020303035323530ull,0x3065666631363878ull,
0x3030303078302033ull,0x09090a2030303030ull,0x3230313030337830ull,0x3134657830203535ull,
0x7830203038373030ull,0x6466623263373033ull,0x6330306336783020ull,0x3009090a20386537ull,
0x3330383130303178ull,0x3030303078302035ull,0x3178302033303030ull,0x2033303063623230ull,
0x3232303030307830ull,0x783009090a203038ull,0x3330656666313638ull,0x3030303030783020ull,
0x3033783020303030ull,0x3020646662323430ull,0x6537633030343678ull,0x61783009090a2038ull,
0x2033303038623230ull,0x3030303030307830ull,0x3230317830203030ull,0x7830203330303862ull,
0x3038323230303030ull,0x3033783009090a20ull,0x3020393538303130ull,0x3837303031346378ull,
0x3130303278302030ull,0x3078302039326361ull,0x2033303030303030ull,0x303034783009090aull,
0x7830203932613161ull,0x3038373031303030ull,0x6132303032783020ull,0x3030783020393563ull,
0x0a20333030303030ull,0x3130303078300909ull,0x6378302035303431ull,0x2030383730303030ull,
0x6332643030347830ull,0x3030307830203932ull,0x090a203038373031ull,0x3239313464783009ull,
0x3032783020393063ull,0x3020303837303030ull,0x3034313130303078ull,0x3030306378302035ull,
0x09090a2030383730ull,0x3030303038317830ull,0x3030347830203135ull,0x7830203038373430ull,
0x3930633239313464ull,0x3030303032783020ull,0x3009090a20303837ull,0x3530343030383278ull,
0x3532303078302031ull,0x3078302030383730ull,0x2031303639633034ull,0x3730353030657830ull,
0x783009090a203038ull,0x3535613231303033ull,0x3030316365783020ull,0x3033783020323837ull,
0x3020646662326337ull,0x6537303130633678ull,0x33783009090a2038ull,0x2035336131313030ull,
0x3730303134637830ull,0x3230317830203038ull,0x7830203330303861ull,0x3038323230303030ull,
0x3033783009090a20ull,0x3020646633303338ull,0x6537633034343678ull,0x6432303178302038ull,
0x3078302033303033ull,0x2030383232303030ull,0x303031783009090aull,0x7830203535303832ull,
0x3330303030303030ull,0x3131303033783020ull,0x3465783020353361ull,0x0a20303837303031ull,
0x6631363878300909ull,0x3078302033306566ull,0x2030303030303030ull,0x6161663330327830ull,
0x6666307830203932ull,0x090a206666666666ull,0x3061303033783009ull,0x3436783020646639ull,
0x3020386537383130ull,0x3030306432306178ull,0x3030303078302033ull,0x09090a2030303030ull,
0x3030643230317830ull,0x3030307830203330ull,0x7830203038323230ull,0x3932383831303032ull,
0x3030303030783020ull,0x3009090a20333030ull,0x3261316130303478ull,0x3130303078302039ull,
0x3378302030383730ull,0x2039356131313030ull,0x3730303134657830ull,0x783009090a203038ull,
0x3530343131303030ull,0x3030303063783020ull,0x3032783020303837ull,0x3020393263323030ull,
0x3837383230343078ull,0x64783009090a2030ull,0x2039306332393134ull,0x3730303030327830ull,
0x3030307830203038ull,0x7830203530343131ull,0x3038373030303063ull,0x3831783009090a20ull,
0x3020313530303030ull,0x3837343030303478ull,0x3931346478302030ull,0x3278302039306332ull,
0x2030383730303030ull,0x303832783009090aull,0x7830203135303430ull,0x3038373035323030ull,
0x3963303430783020ull,0x3065783020313036ull,0x0a20303837303530ull,0x3130303378300909ull,
0x6378302035356132ull,0x2032383730303134ull,0x6232313030337830ull,0x3034367830206466ull,
0x090a203865373430ull,0x6662323031783009ull,0x3030783020333030ull,0x3020303832323030ull,
0x3065666631363878ull,0x3030303078302033ull,0x09090a2030303030ull,0x3035653230617830ull,
0x3030307830203330ull,0x7830203030303030ull,0x3330303565323031ull,0x3030303030783020ull,
0x3009090a20303031ull,0x3038343134306478ull,0x3030303278302035ull,0x3078302030383730ull,
0x2035303063313034ull,0x3730303230637830ull,0x783009090a203038ull,0x3930633239313464ull,
0x3030303032783020ull,0x3861783020303837ull,0x3020393230343030ull,0x3837303032343078ull,
0x64783009090a2030ull,0x2039303832313134ull,0x3730303030327830ull,0x3130307830203038ull,
0x7830203130383530ull,0x3038373832323465ull,0x3861783009090a20ull,0x3020353330343030ull,
0x3837303032343078ull,0x3133346478302030ull,0x3278302035303833ull,0x2030383730303030ull,
0x313030783009090aull,0x7830203130613530ull,0x3038373433323465ull,0x3430303461783020ull,
0x3430783020353530ull,0x0a20303837303032ull,0x3030303178300909ull,0x3478302035306331ull,
0x2030383763303034ull,0x3230653030647830ull,0x6330617830203533ull,0x090a203038373030ull,
0x3230303031783009ull,0x3434783020353030ull,0x3020303837633030ull,0x3063353031303078ull,
0x3532346578302031ull,0x09090a2030383734ull,0x3230653030647830ull,0x6330617830203932ull,
0x7830203038373030ull,0x3130303030303066ull,0x3030303065783020ull,0x3009090a20323030ull,
0x3065666631363878ull,0x3030303078302033ull,0x6478302030303030ull,0x2035303834313430ull,
0x3730303030327830ull,0x783009090a203038ull,0x3932306333303433ull,0x3031323436783020ull,
0x3031783020306637ull,0x3020353030303030ull,0x3837633030343478ull,0x31783009090a2034ull,
0x2039353030303063ull,0x3763303034347830ull,0x3030617830203038ull,0x7830206466353130ull,
0x3865373431306330ull,0x3030783009090a20ull,0x3020353036303230ull,0x3836333030306378ull,
0x3130346478302030ull,0x3278302039303032ull,0x2030383633303030ull,0x303831783009090aull,
0x7830206434303030ull,0x3038366630303434ull,0x3331323464783020ull,0x3032783020353030ull,
0x0a20303836333030ull,0x3030343178300909ull,0x3478302031353030ull,0x2030383666303034ull,
0x6566663136387830ull,0x3030307830203330ull,0x090a203030303030ull,0x6266323061783009ull,
0x3030783020333030ull,0x3020303030303030ull,0x3030376632303178ull,0x3030303078302033ull,
0x09090a2030303131ull,0x6531313030307830ull,0x3030637830203530ull,0x7830203038373030ull,
0x3535303430303461ull,0x3030323430783020ull,0x3009090a20303837ull,0x3030626632303178ull,
0x3030303078302033ull,0x6478302030383730ull,0x2039303836313430ull,0x3730303030327830ull,
0x783009090a203038ull,0x3530633131303030ull,0x3030303063783020ull,0x3461783020303837ull,
0x3020393230343030ull,0x3837303032343078ull,0x32783009090a2030ull,0x2035353063303038ull,
0x3738323234307830ull,0x3730337830203038ull,0x7830203932363163ull,0x3266373431303436ull,
0x3061783009090a20ull,0x3020646635313030ull,0x6437343130633078ull,0x3130303078302038ull,
0x6378302035303032ull,0x2030383633303030ull,0x303461783009090aull,0x7830203932303430ull,
0x3038363330323430ull,0x3131303030783020ull,0x3063783020353034ull,0x0a20303836333030ull,
0x3030343078300909ull,0x3478302035333030ull,0x2030383633303030ull,0x3866313030307830ull,
0x3030637830203530ull,0x090a203030313330ull,0x3030303430783009ull,0x3034783020353330ull,
0x3020303031333030ull,0x3030393133306178ull,0x3030303078302033ull,0x09090a2030303030ull,
0x3037313330317830ull,0x3030307830203330ull,0x7830203030313230ull,0x6466313030383033ull,
0x3431343436783020ull,0x3009090a20386637ull,0x3036303130303078ull,0x3030306378302035ull,
0x6478302030303533ull,0x2035303832313134ull,0x3533303030327830ull,0x783009090a203030ull,
0x3932303430303461ull,0x3330323430783020ull,0x3030783020303035ull,0x3020353036303130ull,
0x3832333030306378ull,0x64783009090a2030ull,0x2035303833313334ull,0x3233303030327830ull,
0x3034617830203038ull,0x7830203130303430ull,0x3038323330323430ull,0x3064783009090a20ull,
0x3020353038363134ull,0x3837303030303278ull,0x3030343278302030ull,0x3078302039323063ull,
0x2030383233303234ull,0x373033783009090aull,0x7830206466353063ull,0x3866373830303436ull,
0x3531333031783020ull,0x3030783020333030ull,0x0a20303832333030ull,0x3130303078300909ull,
0x6378302035303630ull,0x2030383730303030ull,0x6332393134647830ull,0x3030327830203530ull,
0x090a203038373030ull,0x3430303461783009ull,0x3430783020313030ull,0x3020303837303032ull,
0x3030303130303078ull,0x3030306378302039ull,0x09090a2030383730ull,0x3039313330317830ull,
0x3030307830203330ull,0x7830203038373030ull,0x3930386631303030ull,0x3030303063783020ull,
0x3009090a20303837ull,0x3030393133303178ull,0x3030303078302033ull,0x3078302030383730ull,
0x2039303866313030ull,0x3730303030637830ull,0x783009090a203038ull,0x3932386630303031ull,
0x6333303430783020ull,0x3066783020303837ull,0x3020313030303030ull,0x3030303030306578ull,
0x38783009090a2032ull,0x2033306566663136ull,0x3030303030307830ull,0x3030307830203030ull,
0x7830203530613232ull,0x3038373030303063ull,0x3430783009090a20ull,0x3020313030303030ull,
0x3837303030303478ull,0x3030343078302030ull,0x6578302031303834ull,0x2030383734303234ull,
0x303430783009090aull,0x7830203130633438ull,0x3038373835323465ull,0x3038383064783020ull,
0x3430783020313063ull,0x0a20303837303034ull,0x3130303078300909ull,0x6378302035306132ull,
0x2030383730303030ull,0x3030303034307830ull,0x3030347830203530ull,0x090a203038373030ull,
0x3038383064783009ull,0x3430783020353061ull,0x3020303837303034ull,0x3034393830343078ull,
0x3030306578302031ull,0x09090a2030383730ull,0x6339383134307830ull,0x3030657830203130ull,
0x7830203038373830ull,0x3130363130303132ull,0x3533343430783020ull,0x3009090a20303836ull,
0x3061313030303078ull,0x3030306378302035ull,0x3078302030383631ull,0x2031303839633034ull,
0x3631303030657830ull,0x783009090a203038ull,0x3130306163313430ull,0x6434303065783020ull,
0x3061783020303836ull,0x3020333030373333ull,0x3030303030303078ull,0x31783009090a2030ull,
0x2033303037333330ull,0x3132303030307830ull,0x3030307830203030ull,0x7830203530343132ull,
0x3038373030303063ull,0x3430783009090a20ull,0x3020313038343030ull,0x3837633432346578ull,
0x3830343078302030ull,0x6578302031306334ull,0x2030383730353234ull,0x383064783009090aull,
0x7830203130323238ull,0x3038373030343430ull,0x3131303030783020ull,0x3063783020353034ull,
0x0a20303837303030ull,0x3838306478300909ull,0x3078302035303432ull,0x2030383730303434ull,
0x3439383034307830ull,0x3030657830203130ull,0x090a203038373030ull,0x3938313430783009ull,
0x3065783020313063ull,0x3020303837383030ull,0x6635306337303378ull,0x3030343678302064ull,
0x09090a2038643738ull,0x3430303031327830ull,0x3434307830203130ull,0x7830203030353533ull,
0x3130383963303830ull,0x3130303065783020ull,0x3009090a20303035ull,0x3030616331383078ull,
0x3430306578302031ull,0x6678302030303539ull,0x2031303030303030ull,0x3030303030657830ull,
0x783009090a203230ull,0x3330656666313638ull,0x3030303030783020ull,0x3064783020303030ull,
0x3020353030363134ull,0x3837303030303278ull,0x31783009090a2030ull,0x2031303430303034ull,
0x3663303034347830ull,0x3034307830203038ull,0x7830203530306331ull,0x3038363030323063ull,
0x3430783009090a20ull,0x3020313036396330ull,0x3836303030306578ull,0x3030303178302030ull,
0x3278302031303033ull,0x2030383634303430ull,0x313030783009090aull,0x7830203130653963ull,
0x3038363030303065ull,0x6666313638783020ull,0x3030783020333065ull,0x0a20303030303030ull,
0x3134306478300909ull,0x3278302035303836ull,0x2030383730303030ull,0x3163343034337830ull,
0x3234367830206466ull,0x090a203863376330ull,0x3036333061783009ull,0x3030783020333030ull,
0x3020303030303030ull,0x3030663433303178ull,0x3030303078302033ull,0x09090a2030383230ull,
0x3030303030317830ull,0x3034347830203130ull,0x7830203438376330ull,0x3530303030306331ull,
0x6330303434783020ull,0x3009090a20303837ull,0x3063313130303078ull,0x3030306378302035ull,
0x6178302030383730ull,0x2035313034303034ull,0x3730303234307830ull,0x783009090a203038ull,
0x3930346530303032ull,0x3033323430783020ull,0x3064783020303837ull,0x3020313034306530ull,
0x3837303063306178ull,0x32783009090a2030ull,0x2031303865303030ull,0x3730333234307830ull,
0x3030647830203038ull,0x7830203530303065ull,0x3038373030633061ull,0x3032783009090a20ull,
0x3020313063653030ull,0x3837303332343078ull,0x6530306478302030ull,0x6178302035313030ull,
0x2030383730306330ull,0x333031783009090aull,0x7830203330303036ull,0x3038373030303030ull,
0x3631343064783020ull,0x3032783020353038ull,0x0a20303837303030ull,0x3030343378300909ull,
0x3078302035303063ull,0x2030383730313234ull,0x3030303030317830ull,0x3034347830203130ull,
0x090a203438376330ull,0x3032303033783009ull,0x3463783020353032ull,0x3020303837303031ull,
0x3030663030303278ull,0x3032343078302039ull,0x09090a2030383734ull,0x3430653030647830ull,
0x6330617830203130ull,0x7830203038373030ull,0x3130303030306331ull,0x6330303434783020ull,
0x3009090a20303837ull,0x3034663030303278ull,0x3032343078302039ull,0x6478302030383734ull,
0x2031303430653030ull,0x3730306330617830ull,0x783009090a203038ull,0x3530653131303030ull,
0x3030303063783020ull,0x3461783020303837ull,0x3020393030343030ull,0x3837303032343078ull,
0x32783009090a2030ull,0x2031303866303030ull,0x3734303234307830ull,0x3030647830203038ull,
0x7830203930303065ull,0x3038373030633061ull,0x3030783009090a20ull,0x3020353063313130ull,
0x3837303030306378ull,0x3030346178302030ull,0x3078302039303034ull,0x2030383730303234ull,
0x303032783009090aull,0x7830203130636630ull,0x3038373430323430ull,0x3065303064783020ull,
0x3061783020393030ull,0x0a20303837303063ull,0x3134306478300909ull,0x3278302035303834ull,
0x2032383730303030ull,0x3163333034337830ull,0x3234367830206466ull,0x090a203863376330ull,
0x3738333061783009ull,0x3030783020333030ull,0x3020303030303030ull,0x3030373833303178ull,
0x3030303078302033ull,0x09090a2030383230ull,0x3836313430647830ull,0x3030327830203530ull,
0x7830203038373030ull,0x6466316333303433ull,0x6330323436783020ull,0x3009090a20386337ull,
0x3036383632303278ull,0x3030303078302031ull,0x3278302033343030ull,0x2035303638343230ull,
0x3030303030307830ull,0x783009090a203330ull,0x3930303032303030ull,0x3030303063783020ull,
0x3030783020303837ull,0x3020643032303230ull,0x3837303030306378ull,0x30783009090a2030ull,
0x2035303630313030ull,0x3730303030637830ull,0x3334647830203038ull,0x7830203131383331ull,
0x3038373030303032ull,0x3033783009090a20ull,0x3020393036303230ull,0x3837303031346378ull,
0x3733303178302030ull,0x3078302033303037ull,0x2030383230303030ull,0x306431783009090aull,
0x7830203030306530ull,0x3430306530303931ull,0x3430303061783020ull,0x3430783020393130ull,
0x0a20343837303032ull,0x3030303278300909ull,0x3078302035313465ull,0x2030383738303234ull,
0x6130653030647830ull,0x6330617830203130ull,0x090a203038373030ull,0x6530303032783009ull,
0x3430783020313038ull,0x3020303837383032ull,0x3030306530306478ull,0x3063306178302035ull,
0x09090a2030383730ull,0x6365303030327830ull,0x3234307830203130ull,0x7830203038373830ull,
0x3931303065303064ull,0x3030633061783020ull,0x3009090a20303837ull,0x3030373833303178ull,
0x3030303078302033ull,0x6478302030383730ull,0x2035303836313430ull,0x3730303030327830ull,
0x783009090a203038ull,0x3430306533303533ull,0x6530306431783020ull,0x3033783020303030ull,
0x3020353032303230ull,0x3837303031346378ull,0x32783009090a2030ull,0x2039303066303030ull,
0x3734303234307830ull,0x3030647830203038ull,0x7830203130343065ull,0x3038373030633061ull,
0x3831783009090a20ull,0x3020313030303030ull,0x3837633030343478ull,0x3030303278302030ull,
0x3078302039303466ull,0x2030383734303234ull,0x303030783009090aull,0x7830203530363031ull,
0x3038373030303063ull,0x3231313464783020ull,0x3032783020353038ull,0x0a20303837303030ull,
0x6530306478300909ull,0x6178302031303430ull,0x2030383730306330ull,0x3034303034617830ull,
0x3234307830203930ull,0x090a203038373030ull,0x6630303032783009ull,0x3430783020313038ull,
0x3020303837343032ull,0x3030306530306478ull,0x3063306178302039ull,0x09090a2030383730ull,
0x3034303030617830ull,0x3234307830203930ull,0x7830203438373030ull,0x3130636630303032ull,
0x3430323430783020ull,0x3009090a20303837ull,0x3030306530306478ull,0x3063306178302039ull,
0x6678302030383730ull,0x2031303030303030ull,0x3030303030657830ull,0x783009090a203230ull,
0x3530303631343064ull,0x3030303032783020ull,0x3433783020303837ull,0x3020646631633430ull,
0x6337343032343678ull,0x31783009090a2038ull,0x2031303030303034ull,0x3763303034347830ull,
0x3330617830203038ull,0x7830203330303639ull,0x3030303030303030ull,0x3031783009090a20ull,
0x3020333030363933ull,0x3832303030303078ull,0x3130303078302030ull,0x6378302035303032ull,
0x2030383730303030ull,0x303461783009090aull,0x7830203930303430ull,0x3038373030323430ull,
0x3031303064783020ull,0x3032783020353030ull,0x0a20303837303030ull,0x3030343278300909ull,
0x3078302035303063ull,0x2030383730333234ull,0x3230653030647830ull,0x6330617830203930ull,
0x090a203038373030ull,0x3130303030783009ull,0x3063783020393030ull,0x3020303837303030ull,
0x3030343030386178ull,0x3032343078302039ull,0x09090a2030383730ull,0x3463303034327830ull,
0x3234307830203530ull,0x7830203038373033ull,0x3930323065303064ull,0x3030633061783020ull,
0x3009090a20303837ull,0x6637303030303378ull,0x3130343678302064ull,0x3378302061633730ull,
0x2033303030303030ull,0x3230303030307830ull,0x783009090a203038ull,0x3530303031303064ull,
0x3030303032783020ull,0x3030783020303837ull,0x3020393036303130ull,0x3837303030306378ull,
0x64783009090a2030ull,0x2039306332393138ull,0x3730303030327830ull,0x3030337830203038ull,
0x7830203130363032ull,0x3038373030313463ull,0x3861783009090a20ull,0x3020393030343030ull,
0x3837303032343078ull,0x3030343278302030ull,0x3078302035303063ull,0x2030383730303234ull,
0x303064783009090aull,0x7830203930323065ull,0x3038373030633061ull,0x3030303030783020ull,
0x3063783020393065ull,0x0a20303837303030ull,0x3030386178300909ull,0x3078302035303034ull,
0x2030383730303234ull,0x3463303034327830ull,0x3234307830203130ull,0x090a203038373030ull,
0x3065303064783009ull,0x3061783020353030ull,0x0a20313837303063ull,0x646f630a7d0a7d09ull,
0x6d616e090a7b2065ull,0x30335a5f203d2065ull,0x654b746365736962ull,0x6772614c6c656e72ull,
0x746e49656e4f5f65ull,0x6650736c61767265ull,0x5f535f536a6a5f53ull,0x656d6c090a666a50ull,
0x73090a30203d206dull,0x3132203d206d656dull,0x20676572090a3032ull,0x62090a3831203d20ull,
0x0a31203d20207261ull,0x7b2074736e6f6309ull,0x6e6765730909090aull,0x6f63203d20656d61ull,
0x730909090a74736eull,0x3d20206d756e6765ull,0x666f0909090a3120ull,0x203d202074657366ull,
0x7479620909090a30ull,0x32203d2020207365ull,0x206d656d09090a30ull,0x3078300909090a7bull,
0x2031303030303030ull,0x3030303030307830ull,0x3066337830203030ull,0x7830203030303030ull,
0x3030303030386537ull,0x3378300909090a20ull,0x2030303030303865ull,0x0a7d090a7d09090aull,
0x65646f636e696209ull,0x61783009090a7b20ull,0x2064313234303030ull,0x3730303234307830ull,
0x3030617830203038ull,0x7830206432303030ull,0x3038373030303430ull,0x3134783009090a20ull,
0x3020303063326530ull,0x3336393030303278ull,0x6330303378302030ull,0x3678302031303264ull,
0x2030643730313234ull,0x303061783009090aull,0x7830206466313030ull,0x3863373431306330ull,
0x6430303061783020ull,0x3030783020333030ull,0x0a20303030303030ull,0x3030303178300909ull,
0x3078302033303064ull,0x2030303131303030ull,0x3831323030337830ull,0x3134637830203130ull,
0x090a203038373030ull,0x6630303132783009ull,0x3132783020343034ull,0x3020633038663030ull,
0x3063643030303278ull,0x3032343078302031ull,0x09090a2030383730ull,0x3230653030647830ull,
0x6330387830203930ull,0x7830203038373030ull,0x6430363065303064ull,0x3030633038783020ull,
0x3009090a20303837ull,0x3330306530306478ull,0x3063303878302035ull,0x3378302030383730ull,
0x2064663731633730ull,0x3734313034367830ull,0x783009090a206164ull,0x3130323234303030ull,
0x3166333465783020ull,0x3638783020303035ull,0x3020333065666631ull,0x3030303030303078ull,
0x31783009090a2030ull,0x2035303866303030ull,0x3763333036307830ull,0x3730337830203038ull,
0x7830206466316463ull,0x3864373031323436ull,0x3031783009090a20ull,0x3020313038663030ull,
0x3837633330343078ull,0x3030303178302030ull,0x3078302031373030ull,0x2033303030303030ull,
0x303031783009090aull,0x7830203530303030ull,0x3038326330343432ull,0x3332383033783020ull,
0x3036783020646639ull,0x0a20386537383034ull,0x3030303178300909ull,0x3078302031313866ull,
0x2030383763333036ull,0x3030303030317830ull,0x3434327830203131ull,0x090a203038326530ull,
0x3831303031783009ull,0x3030783020353130ull,0x3020333030303030ull,0x3438303130306478ull,
0x3030343078302031ull,0x09090a2030653730ull,0x3232343030307830ull,0x3234657830203130ull,
0x7830203038373431ull,0x3330306232303061ull,0x3030303030783020ull,0x3009090a20303030ull,
0x3030623230303178ull,0x3030303078302033ull,0x6178302030303132ull,0x2033303036323030ull,
0x3030303030307830ull,0x783009090a203030ull,0x6466373063373062ull,0x3430303036783020ull,
0x3062783020386637ull,0x3020646635306337ull,0x6537343030303678ull,0x31783009090a2038ull,
0x2033303034323030ull,0x3133303030307830ull,0x3030317830203030ull,0x7830203130386630ull,
0x3038376333303430ull,0x3031783009090a20ull,0x3020313030303030ull,0x3832653034343278ull,
0x3230303178302030ull,0x3078302033303036ull,0x2030383730303030ull,0x303031783009090aull,
0x7830203130303831ull,0x3330303030303030ull,0x6630303031783020ull,0x3430783020313038ull,
0x0a20303832653330ull,0x3030306278300909ull,0x3078302035313630ull,0x2032383738303030ull,
0x3130303030617830ull,0x3063327830206466ull,0x090a203865373431ull,0x3030303062783009ull,
0x3830783020313136ull,0x3020303837383030ull,0x3061303030306378ull,0x3066333078302031ull,
0x09090a2033303030ull,0x3830323830657830ull,0x3430307830203130ull,0x7830203038346130ull,
0x3131303130303031ull,0x6330303434783020ull,0x3009090a20323837ull,0x3138663030303178ull,
0x3330363078302035ull,0x3178302030383763ull,0x2033303061353030ull,0x3131303030307830ull,
0x783009090a203030ull,0x3931386630303031ull,0x6333303430783020ull,0x3031783020303837ull,
0x3020313230383030ull,0x3030303866333078ull,0x38783009090a2033ull,0x2033306566663136ull,
0x3030303030307830ull,0x3030327830203030ull,0x7830203532633030ull,0x3038376332303430ull,
0x3033783009090a20ull,0x3020646631643930ull,0x6537633032343678ull,0x3330306178302038ull,
0x3078302033303065ull,0x2030303030303030ull,0x303031783009090aull,0x7830203330306533ull,
0x3038323230303030ull,0x3130303032783020ull,0x3430783020353236ull,0x0a20303837383130ull,
0x3230303378300909ull,0x6378302035323231ull,0x2030383730303134ull,0x6365393031327830ull,
0x3031327830203832ull,0x090a203432386539ull,0x3132303030783009ull,0x3063783020353036ull,
0x3020303837303030ull,0x3334396333303278ull,0x6666663078302064ull,0x09090a2066666666ull,
0x3231653030647830ull,0x6330387830203932ull,0x7830203038373030ull,0x3532653165303064ull,
0x3030633038783020ull,0x3009090a20303837ull,0x3032323030343078ull,0x3232346578302031ull,
0x3078302030383738ull,0x2031303232323034ull,0x3734323234657830ull,0x783009090a203038ull,
0x3130303030303066ull,0x3030303065783020ull,0x3638783020323030ull,0x3020333065666631ull,
0x3030303030303078ull,0x61783009090a2030ull,0x2033303036353030ull,0x3030303030307830ull,
0x3030317830203030ull,0x7830203330303635ull,0x3030313030303030ull,0x3033783009090a20ull,
0x3020353438303730ull,0x6537303030346178ull,0x3530303178302030ull,0x3078302033303036ull,
0x2030303132303030ull,0x303031783009090aull,0x7830203532303834ull,0x3730303030303030ull,
0x3130303030783020ull,0x3063783020353032ull,0x0a20303837303030ull,0x3430303178300909ull,
0x3078302035323038ull,0x2037343030303030ull,0x3231303030307830ull,0x3030637830203930ull,
0x090a203038373030ull,0x6630303031783009ull,0x3630783020353238ull,0x3020303837633330ull,
0x3330303030383178ull,0x3030343478302064ull,0x09090a2030383763ull,0x3131333830627830ull,
0x3530367830206466ull,0x7830203865373031ull,0x3832303930303031ull,0x3666303963783020ull,
0x3009090a20633330ull,0x3365313438306378ull,0x3034303078302064ull,0x6378302030383632ull,
0x2039323031343830ull,0x3632303430307830ull,0x783009090a203038ull,0x3032343130303039ull,
0x3630343762783020ull,0x3065783020383232ull,0x3020313265313830ull,0x3837383230343078ull,
0x62783009090a2030ull,0x2039323031633730ull,0x3734303030367830ull,0x3430327830203038ull,
0x7830203531613030ull,0x3038373832303430ull,0x3032783009090a20ull,0x3020353232393130ull,
0x3030303030303078ull,0x3930303378302033ull,0x3678302064663332ull,0x2038653734313034ull,
0x303864783009090aull,0x7830203930383030ull,0x3038373030303032ull,0x3934303031783020ull,
0x3030783020333030ull,0x0a20303832323030ull,0x3030303278300909ull,0x3078302039316530ull,
0x2032383738313034ull,0x3164363030337830ull,0x3234367830206466ull,0x090a203865373031ull,
0x3030343032783009ull,0x3430783020313138ull,0x3020303837633130ull,0x3030303330303178ull,
0x3030303078302033ull,0x09090a2030383232ull,0x6566663136387830ull,0x3030307830203330ull,
0x7830203030303030ull,0x6466313263373033ull,0x3830306336783020ull,0x3009090a20386537ull,
0x3030633730306178ull,0x3030303078302033ull,0x3178302030303030ull,0x2033303063373030ull,
0x3232303030307830ull,0x783009090a203038ull,0x6466623135303033ull,0x3431303436783020ull,
0x3031783020386537ull,0x3020313130303030ull,0x3035653330363078ull,0x31783009090a2030ull,
0x2064303030303030ull,0x3565333034307830ull,0x3030317830203030ull,0x7830203531343030ull,
0x3030356533303630ull,0x3031783009090a20ull,0x3020353130303030ull,0x3832653330343078ull,
0x3030303178302030ull,0x3078302039303030ull,0x2030383265333036ull,0x303031783009090aull,
0x7830203131363030ull,0x3038326533303430ull,0x3035303062783020ull,0x3038783020393138ull,
0x0a20303837303831ull,0x3630306378300909ull,0x3078302031323065ull,0x2030383730303230ull,
0x3830303030627830ull,0x3038307830203931ull,0x090a203038373431ull,0x6538303062783009ull,
0x3061783020313230ull,0x3020303837303032ull,0x6664303830306278ull,0x3030303678302064ull,
0x09090a2038653734ull,0x3062373030317830ull,0x3030307830203330ull,0x7830203030313230ull,
0x6466393063373062ull,0x3430303036783020ull,0x3009090a20386637ull,0x3030343730306178ull,
0x3030303078302033ull,0x6278302030303030ull,0x2064666230633730ull,0x3734303030367830ull,
0x783009090a203865ull,0x3330303237303031ull,0x3330303030783020ull,0x3031783020303031ull,
0x3020393038663030ull,0x3837633330363078ull,0x31783009090a2030ull,0x2039303030303030ull,
0x3265303434327830ull,0x3030317830203038ull,0x7830203330303437ull,0x3038373030303030ull,
0x3031783009090a20ull,0x3020393030383130ull,0x3030303030303078ull,0x3030303178302033ull,
0x3078302039303866ull,0x2030383265333034ull,0x303062783009090aull,0x7830206430383030ull,
0x3238373431303030ull,0x3030303061783020ull,0x6332783020646635ull,0x0a20386537343130ull,
0x3030306378300909ull,0x3078302064303630ull,0x2033303030306633ull,0x6330323830657830ull,
0x3430307830206430ull,0x090a203038343631ull,0x3031303031783009ull,0x3030783020313730ull,
0x3020333030303030ull,0x3036303030303178ull,0x3330343078302039ull,0x09090a2030383763ull,
0x3063373030317830ull,0x3030307830203330ull,0x7830203038373030ull,0x3130323234303030ull,
0x3066333465783020ull,0x3009090a20303837ull,0x3030303030306678ull,0x3030306578302031ull,
0x3878302032303030ull,0x2033306566663136ull,0x3030303030307830ull,0x783009090a203030ull,
0x3530383830313064ull,0x3030303032783020ull,0x3433783020303837ull,0x3020646631633038ull,
0x6537343136343678ull,0x31783009090a2038ull,0x2033303033383030ull,0x3532303030307830ull,
0x3136387830203030ull,0x7830203330656666ull,0x3030303030303030ull,0x3031783009090a20ull,
0x3020333030353130ull,0x3837303030303078ull,0x6631363878302030ull,0x3078302033306566ull,
0x2030303030303030ull,0x303033783009090aull,0x7830203330303030ull,0x3030313030303030ull,
0x3132303033783020ull,0x3463783020313038ull,0x0a20303837303031ull,0x3030303278300909ull,
0x3078302031303464ull,0x2030383730303234ull,0x3030653030647830ull,0x6330617830203930ull,
0x090a203138373030ull,0x65646f630a7d0a7dull,0x656d616e090a7b20ull,0x6231335a5f203d20ull,
0x72654b7463657369ull,0x656772614c6c656eull,0x746e49746c754d5full,0x6650736c61767265ull,
0x5f30536a506a5f53ull,0x535f30535f535f53ull,0x665f30535f535f30ull,0x3d206d656d6c090aull,
0x6d656d73090a3020ull,0x3038333031203d20ull,0x3d2020676572090aull,0x726162090a363120ull,
0x63090a31203d2020ull,0x090a7b2074736e6full,0x6d616e6765730909ull,0x736e6f63203d2065ull,
0x6765730909090a74ull,0x31203d20206d756eull,0x7366666f0909090aull,0x0a30203d20207465ull,
0x7365747962090909ull,0x0a3633203d202020ull,0x0a7b206d656d0909ull,0x3830307830090909ull,
0x7830203030303030ull,0x6666303030303030ull,0x3030303030783020ull,0x6633783020313030ull,
0x0a20303030303030ull,0x3865377830090909ull,0x7830203030303030ull,0x3230303030303030ull,
0x3030386234783020ull,0x3030783020303030ull,0x0a20383130303030ull,0x3865337830090909ull,
0x090a203030303030ull,0x62090a7d090a7d09ull,0x7b2065646f636e69ull,0x303061783009090aull,
0x7830203130303030ull,0x3064373030303430ull,0x3932303061783020ull,0x3030783020333030ull,
0x0a20303030303030ull,0x6337303378300909ull,0x3678302064663130ull,0x2038633738303034ull,
0x3039323030317830ull,0x3030307830203330ull,0x090a203038363130ull,0x3430303061783009ull,
0x3430783020353063ull,0x3020303837303032ull,0x3032303230303378ull,0x3031346378302035ull,
0x09090a2030383730ull,0x3464303030327830ull,0x3234307830203132ull,0x7830203038373430ull,
0x6431303165303064ull,0x3030633038783020ull,0x3009090a20303837ull,0x3038643030303278ull,
0x3032343078302035ull,0x6478302030383734ull,0x2039313230653030ull,0x3730306330387830ull,
0x783009090a203038ull,0x3530303934303032ull,0x3030303030783020ull,0x3064783020333030ull,
0x3020353032306530ull,0x3837303063303878ull,0x30783009090a2030ull,0x2031303833343130ull,
0x3763313234657830ull,0x3130307830203038ull,0x7830203130613334ull,0x3038373430323465ull,
0x3033783009090a20ull,0x3020353065303030ull,0x3837343030343078ull,0x3431303078302030ull,
0x6578302031306333ull,0x2030383738313234ull,0x333032783009090aull,0x7830203931323866ull,
0x6666666666666630ull,0x3334313030783020ull,0x3465783020313065ull,0x0a20303837343032ull,
0x3630306478300909ull,0x3078302064663330ull,0x2038643730303034ull,0x3633303030307830ull,
0x3334657830203130ull,0x090a203038373066ull,0x3631303031783009ull,0x3030783020333030ull,
0x3020303832313030ull,0x3030353230303178ull,0x3030303078302033ull,0x09090a2030383730ull,
0x3230303030617830ull,0x3034347830203530ull,0x7830203038373431ull,0x6466333030383062ull,
0x3430353036783020ull,0x3009090a20386437ull,0x3132303030306178ull,0x3031346378302064ull,
0x6378302030383734ull,0x2035303230363830ull,0x3631303430307830ull,0x783009090a203038ull,
0x3931653030303031ull,0x6430343432783020ull,0x3031783020303836ull,0x3020393138663030ull,
0x3031643330363078ull,0x33783009090a2030ull,0x2035303230373130ull,0x3730303163657830ull,
0x3830647830203038ull,0x7830203530323031ull,0x3038373030343430ull,0x3033783009090a20ull,
0x3020646633303138ull,0x6437383034343678ull,0x3034303278302038ull,0x3078302035303230ull,
0x2030383738313034ull,0x373062783009090aull,0x7830206466663063ull,0x3835313930303036ull,
0x3832303032783020ull,0x6630783020353032ull,0x0a20626666666666ull,0x3130303178300909ull,
0x3078302039313038ull,0x2033303030303030ull,0x3866303030317830ull,0x3034307830203530ull,
0x090a203038366433ull,0x3031303033783009ull,0x3463783020353063ull,0x3020303837303030ull,
0x3030343431303078ull,0x3032346578302031ull,0x09090a2030383734ull,0x3038313030317830ull,
0x3030307830203530ull,0x7830203330303030ull,0x3130323434313030ull,0x3430323465783020ull,
0x3009090a20303837ull,0x3034343431303078ull,0x6633346578302031ull,0x6678302030383730ull,
0x2031303030303030ull,0x3030303030657830ull,0x783009090a203230ull,0x3330656666313638ull,
0x3030303030783020ull,0x3064783020303030ull,0x3020353038663035ull,0x3837303030303278ull,
0x33783009090a2030ull,0x2064663163303034ull,0x3763303234367830ull,0x3030617830203864ull,
0x7830203330306633ull,0x3030303030303030ull,0x3031783009090a20ull,0x3020333030663330ull,
0x3832313030303078ull,0x3035306478302030ull,0x3278302035303065ull,0x2030383730303030ull,
0x303432783009090aull,0x7830203530306330ull,0x3038373030323430ull,0x3032303033783020ull,
0x3463783020353032ull,0x0a20303837303031ull,0x3230303078300909ull,0x6378302035303030ull,
0x2030383730303030ull,0x6364303030327830ull,0x3234307830203931ull,0x090a203038373430ull,
0x3065303064783009ull,0x3038783020313263ull,0x3020303837303063ull,0x3130653030303278ull,
0x3032343078302039ull,0x09090a2030383734ull,0x6330653030647830ull,0x6330387830206431ull,
0x7830203038373030ull,0x3931346530303032ull,0x3430323430783020ull,0x3009090a20303837ull,
0x3163306530306478ull,0x3063303878302039ull,0x3278302030383730ull,0x2035303865303030ull,
0x3734303234307830ull,0x783009090a203038ull,0x3530323065303064ull,0x3030633038783020ull,
0x3430783020303837ull,0x3020313038336330ull,0x3837303232346578ull,0x30783009090a2030ull,
0x2031303833343034ull,0x3763313234657830ull,0x3134307830203038ull,0x7830203130383330ull,
0x3038373831323465ull,0x3430783009090a20ull,0x3020313038333830ull,0x3837343032346578ull,
0x3030306678302030ull,0x6578302031303030ull,0x2032303030303030ull,0x313638783009090aull,
0x7830203330656666ull,0x3030303030303030ull,0x6630303031783020ull,0x3630783020393138ull,
0x0a20303837633330ull,0x3030303178300909ull,0x3078302035303866ull,0x2030383763333034ull,
0x3866303530647830ull,0x3030327830203530ull,0x090a203038373030ull,0x6330303433783009ull,
0x3436783020646631ull,0x3020386437633032ull,0x3030313730306178ull,0x3030303078302033ull,
0x09090a2030303030ull,0x3031373030317830ull,0x3030307830203330ull,0x7830203038323130ull,
0x3530303032303030ull,0x3030303063783020ull,0x3009090a20303837ull,0x3030386331303278ull,
0x3030303078302039ull,0x6478302033343030ull,0x2031313065303434ull,0x3730303030327830ull,
0x783009090a203038ull,0x3930343032303030ull,0x3030303063783020ull,0x3464783020303837ull,
0x3020643030653031ull,0x3837303030303278ull,0x31783009090a2030ull,0x2031313030303030ull,
0x3763303034347830ull,0x3234647830203438ull,0x7830203131306530ull,0x3038373030303032ull,
0x3032783009090a20ull,0x3020643030386331ull,0x3830303030303078ull,0x3033346478302033ull,
0x3278302035303065ull,0x2030383730303030ull,0x306331783009090aull,0x7830203930303030ull,
0x3038376330303434ull,0x3030303031783020ull,0x3434783020353130ull,0x0a20343837633030ull,
0x3230303078300909ull,0x6378302031313630ull,0x2030383730303030ull,0x3038633130327830ull,
0x3030307830206431ull,0x090a203332303030ull,0x6332303462783009ull,0x3036783020646631ull,
0x3020386437343332ull,0x3230386331303278ull,0x3030303078302031ull,0x09090a2033363030ull,
0x3030303063317830ull,0x3034347830206430ull,0x7830203038376330ull,0x6430653032303030ull,
0x3030303063783020ull,0x3009090a20303837ull,0x3030303030343178ull,0x3030343478302039ull,
0x3078302030383763ull,0x2035303031323030ull,0x3730303030637830ull,0x783009090a203038ull,
0x3330306436303031ull,0x3130303030783020ull,0x3061783020303031ull,0x3020333030363630ull,
0x3030303030303078ull,0x62783009090a2030ull,0x2064663163633763ull,0x3734303230367830ull,
0x3034317830203865ull,0x7830206431303030ull,0x3038376330303434ull,0x3462783009090a20ull,
0x3020646631636337ull,0x6437343032303678ull,0x3030633178302038ull,0x3478302035303030ull,
0x2030383763303034ull,0x303031783009090aull,0x7830203330303436ull,0x3030313230303030ull,
0x6630303031783020ull,0x3630783020313238ull,0x0a20303837633330ull,0x3030303178300909ull,
0x3278302031323430ull,0x2030383264303434ull,0x3036363030317830ull,0x3030307830203330ull,
0x090a203038373030ull,0x3831303031783009ull,0x3030783020313230ull,0x3020333030303030ull,
0x3238663030303178ull,0x3330343078302031ull,0x09090a2030383264ull,0x6530303030627830ull,
0x3030307830203532ull,0x7830203238373430ull,0x6466313130303061ull,0x3431306332783020ull,
0x3009090a20386437ull,0x3265303030306278ull,0x3030343078302031ull,0x6378302030383734ull,
0x2035303231303030ull,0x3030306633307830ull,0x783009090a203330ull,0x3530303133383065ull,
0x6431343030783020ull,0x3030783020303834ull,0x3020313032343431ull,0x3837306633346578ull,
0x31783009090a2030ull,0x2033303031373030ull,0x3730303030307830ull,0x3030317830203038ull,
0x7830206431303030ull,0x3438376330303434ull,0x3832783009090a20ull,0x3020643130633034ull,
0x3837633132343078ull,0x3238303378302030ull,0x3678302064666630ull,0x2038643763303434ull,
0x313030783009090aull,0x7830203130323434ull,0x3030353166333465ull,0x3030303066783020ull,
0x3065783020313030ull,0x0a20323030303030ull,0x6631363878300909ull,0x3078302033306566ull,
0x2030303030303030ull,0x3830313530647830ull,0x3030327830203530ull,0x090a203038373030ull,
0x6332383433783009ull,0x3436783020646631ull,0x3020386437343136ull,0x3030663931303178ull,
0x3030303078302033ull,0x09090a2030303531ull,0x3164633730337830ull,0x3234367830206466ull,
0x7830203864373830ull,0x6431303130303031ull,0x6330303434783020ull,0x3009090a20303837ull,
0x3238663030303178ull,0x3330343078302064ull,0x3178302030383763ull,0x2033303061613030ull,
0x3231303030307830ull,0x783009090a203038ull,0x3530303032303030ull,0x3030303063783020ull,
0x3064783020303837ull,0x3020393038663035ull,0x3837303030303278ull,0x61783009090a2030ull,
0x2039323234303030ull,0x3730303234307830ull,0x3030317830203038ull,0x7830203132386630ull,
0x3038376333303630ull,0x3031783009090a20ull,0x3020353230383030ull,0x3030303866333078ull,
0x3030383378302033ull,0x3678302064663163ull,0x2038643730313234ull,0x313638783009090aull,
0x7830203330656666ull,0x3030303030303030ull,0x3130303032783020ull,0x3430783020313330ull,
0x0a20303837303030ull,0x6330303378300909ull,0x3678302064663164ull,0x2038653763303234ull,
0x3064383030617830ull,0x3030307830203330ull,0x090a203030303030ull,0x6438303031783009ull,
0x3030783020333030ull,0x3020303832323030ull,0x3330313030303278ull,0x3030343078302031ull,
0x09090a2030383730ull,0x3831323030337830ull,0x3134637830203133ull,0x7830203038373030ull,
0x3833636563303132ull,0x6563303132783020ull,0x3009090a20303338ull,0x3338316530306478ull,
0x3063303878302035ull,0x3278302030383730ull,0x2031336339633330ull,0x6666666666307830ull,
0x783009090a206666ull,0x3133383165303064ull,0x3030633038783020ull,0x3430783020303837ull,
0x3020313038336330ull,0x3837343332346578ull,0x30783009090a2030ull,0x2031303833343034ull,
0x3730333234657830ull,0x3030667830203038ull,0x7830203130303030ull,0x3230303030303065ull,
0x3638783009090a20ull,0x3020333065666631ull,0x3030303030303078ull,0x6130306178302030ull,
0x3078302033303035ull,0x2030303030303030ull,0x303031783009090aull,0x7830203330303561ull,
0x3030313130303030ull,0x3061303033783020ull,0x3461783020643365ull,0x0a20306537303030ull,
0x6130303178300909ull,0x3078302033303035ull,0x2030303132303030ull,0x3038303330317830ull,
0x3030307830203133ull,0x090a203738313030ull,0x3130303030783009ull,0x3063783020393038ull,
0x3020303837303030ull,0x3330383033303178ull,0x3030303078302031ull,0x09090a2037383030ull,
0x3831303030307830ull,0x3030637830206430ull,0x7830203038373030ull,0x3133386630303031ull,
0x6333303430783020ull,0x3009090a20303837ull,0x3330303030633178ull,0x3030343478302039ull,
0x6278302030383763ull,0x2064663331343830ull,0x3730313530367830ull,0x783009090a203865ull,
0x3433323932303031ull,0x3665306463783020ull,0x3063783020383330ull,0x3020393363313838ull,
0x3836323034303078ull,0x63783009090a2030ull,0x2035333231383830ull,0x3632303430307830ull,
0x3030397830203038ull,0x7830203432613130ull,0x3433323631346262ull,0x3065783009090a20ull,
0x3020353263313930ull,0x3837343330343078ull,0x6337306278302030ull,0x3678302035333231ull,
0x2030383734303030ull,0x343032783009090aull,0x7830206432363130ull,0x3038373433303430ull,
0x3931303032783020ull,0x3030783020313338ull,0x0a20333030303030ull,0x6330303378300909ull,
0x3678302064666631ull,0x2038653734313034ull,0x3830303063647830ull,0x3030327830206430ull,
0x090a203038373030ull,0x3839303031783009ull,0x3030783020333030ull,0x3020303832323030ull,
0x3234313030303278ull,0x3230343078302031ull,0x09090a2032383730ull,0x3164383030337830ull,
0x3234367830206466ull,0x7830203865373031ull,0x6431653030343032ull,0x3832303430783020ull,
0x3009090a20303837ull,0x3030303830303178ull,0x3030303078302033ull,0x3178302030383232ull,
0x2033303063613030ull,0x3730303030307830ull,0x783009090a203038ull,0x3530303032303030ull,
0x3030303063783020ull,0x3061783020303837ull,0x3020393232343030ull,0x3837303032343078ull,
0x38783009090a2030ull,0x2033306566663136ull,0x3030303030307830ull,0x3530647830203030ull,
0x7830203930386630ull,0x3038373030303032ull,0x3833783009090a20ull,0x3020646631633030ull,
0x6437633032343678ull,0x3331306178302038ull,0x3078302033303039ull,0x2030303030303030ull,
0x313031783009090aull,0x7830203330303933ull,0x3038323130303030ull,0x3033303062783020ull,
0x3036783020646635ull,0x0a20386437343330ull,0x3231303178300909ull,0x3078302033303034ull,
0x2030303131303030ull,0x3631343030337830ull,0x3034367830203931ull,0x090a203064373431ull,
0x3135303033783009ull,0x3436783020643136ull,0x3020303837343130ull,0x3263303238306478ull,
0x3034343078302031ull,0x09090a2030383730ull,0x6530303030617830ull,0x3063327830203931ull,
0x7830203038373431ull,0x6466313136303064ull,0x3030303430783020ull,0x3009090a20386537ull,
0x3132303030306178ull,0x3031346378302039ull,0x3178302030383734ull,0x2033303030653030ull,
0x3132303030307830ull,0x783009090a203030ull,0x3931343036303062ull,0x3030313038783020ull,
0x3063783020303837ull,0x3020393134663630ull,0x3837303032303078ull,0x30783009090a2030ull,
0x2031303833303134ull,0x3730313234657830ull,0x3330317830203038ull,0x7830203132303832ull,
0x3765326432333930ull,0x3031783009090a20ull,0x3020353230383430ull,0x3434353638333078ull,
0x3030306178302062ull,0x6378302039316330ull,0x2030383730303434ull,0x303062783009090aull,
0x7830203133323030ull,0x3038373830303830ull,0x3038303065783020ull,0x3063783020313263ull,
0x0a20303837303030ull,0x3030306178300909ull,0x6378302039313831ull,0x2030383730303534ull,
0x6430383030657830ull,0x3030657830206466ull,0x090a203864376330ull,0x6164303061783009ull,
0x3030783020333030ull,0x3020303030303030ull,0x3038333830343078ull,0x3232346578302031ull,
0x09090a2030383763ull,0x3038643030317830ull,0x3030307830203330ull,0x7830203030313130ull,
0x3931343063373062ull,0x3430303036783020ull,0x3009090a20306537ull,0x6633306337306278ull,
0x3030303678302064ull,0x6178302038663734ull,0x2033303031643030ull,0x3030303030307830ull,
0x783009090a203030ull,0x6466643030303061ull,0x3431306330783020ull,0x3031783020386437ull,
0x3020333030666330ull,0x3031333030303078ull,0x31783009090a2030ull,0x2039313866303030ull,
0x3763333034307830ull,0x3030317830203038ull,0x7830203931343030ull,0x3038326530343432ull,
0x3031783009090a20ull,0x3020333030316430ull,0x3837303030303078ull,0x3130303178302030ull,
0x3078302039313038ull,0x2033303030303030ull,0x303031783009090aull,0x7830203931386630ull,
0x3038326433303430ull,0x3030303062783020ull,0x3030783020643134ull,0x0a20323837343030ull,
0x3030306178300909ull,0x3278302064666430ull,0x2038643734313063ull,0x6530303030637830ull,
0x6633307830203931ull,0x090a203330303030ull,0x3133383065783009ull,0x3030783020393138ull,
0x3020303834393034ull,0x3038336330343078ull,0x3132346578302031ull,0x09090a2030383738ull,
0x3833343034307830ull,0x3234657830203130ull,0x7830203038373831ull,0x3330306164303031ull,
0x3030303030783020ull,0x3009090a20303837ull,0x3038336330343078ull,0x3032346578302031ull,
0x3078302030383738ull,0x2031303833343034ull,0x3734303234657830ull,0x783009090a203038ull,
0x3130303030303066ull,0x3030303065783020ull,0x3031783020323030ull,0x3020393130383130ull,
0x3030303030303078ull,0x30783009090a2033ull,0x2031303833303034ull,0x3738313234657830ull,
0x3130307830203038ull,0x7830203130343434ull,0x3038373831323465ull,0x3031783009090a20ull,
0x3020393130383130ull,0x3030303030303078ull,0x3331303178302033ull,0x3078302033303039ull,
0x2030383730303030ull,0x313061783009090aull,0x7830203330303232ull,0x3030303030303030ull,
0x3330303430783020ull,0x3465783020313038ull,0x0a20303837306633ull,0x3031303178300909ull,
0x3078302033303033ull,0x2030303131303030ull,0x3430363030627830ull,0x3130387830203931ull,
0x090a203038373030ull,0x6636303063783009ull,0x3030783020393134ull,0x3020303837303032ull,
0x3038333031343078ull,0x3132346578302031ull,0x09090a2030383730ull,0x3038323330317830ull,
0x3339307830203132ull,0x7830203765326432ull,0x3532303834303031ull,0x3536383330783020ull,
0x3009090a20623434ull,0x3163303030306178ull,0x3034346378302039ull,0x6278302030383730ull,
0x2031333230303030ull,0x3738303038307830ull,0x783009090a203038ull,0x3132633038303065ull,
0x3030303063783020ull,0x3061783020303837ull,0x3020393138313030ull,0x3837303035346378ull,
0x65783009090a2030ull,0x2064666430383030ull,0x3763303030657830ull,0x3034307830203864ull,
0x7830203130383338ull,0x3038376332323465ull,0x3031783009090a20ull,0x3020333030303031ull,
0x3031313030303078ull,0x6337306278302030ull,0x3678302039313430ull,0x2030653734303030ull,
0x373062783009090aull,0x7830206466333063ull,0x3866373430303036ull,0x3966303061783020ull,
0x3030783020333030ull,0x0a20303030303030ull,0x3030306178300909ull,0x3078302064666430ull,
0x2038643734313063ull,0x3037663030317830ull,0x3030307830203330ull,0x090a203030313330ull,
0x6630303031783009ull,0x3630783020393138ull,0x3020303837633330ull,0x3134303030303178ull,
0x3034343278302039ull,0x09090a2030383265ull,0x3039663030317830ull,0x3030307830203330ull,
0x7830203038373030ull,0x3931303831303031ull,0x3030303030783020ull,0x3009090a20333030ull,
0x3138663030303178ull,0x3330343078302039ull,0x6278302030383264ull,0x2064313430303030ull,
0x3734303030307830ull,0x783009090a203238ull,0x6466643030303061ull,0x3431306332783020ull,
0x3063783020386437ull,0x3020393165303030ull,0x3030303066333078ull,0x65783009090a2033ull,
0x2039313831333830ull,0x3439303430307830ull,0x3034307830203038ull,0x7830203130383363ull,
0x3038373831323465ull,0x3430783009090a20ull,0x3020313038333430ull,0x3837383132346578ull,
0x3231303178302030ull,0x3078302033303032ull,0x2030383730303030ull,0x303430783009090aull,
0x7830203130383363ull,0x3038373830323465ull,0x3334303430783020ull,0x3465783020313038ull,
0x0a20303837343032ull,0x3231303178300909ull,0x3078302033303032ull,0x2030383730303030ull,
0x3630363030627830ull,0x3130387830203931ull,0x090a203038373030ull,0x3330313430783009ull,
0x3465783020313038ull,0x3020303837633232ull,0x3134663630306378ull,0x3032303078302039ull,
0x09090a2030383730ull,0x3833383034307830ull,0x3234657830203130ull,0x7830203038373431ull,
0x3132303832333031ull,0x6432333930783020ull,0x3009090a20376532ull,0x3230383430303178ull,
0x3638333078302035ull,0x6178302062343435ull,0x2039316330303030ull,0x3730303434637830ull,
0x783009090a203038ull,0x3133363030303062ull,0x3430303830783020ull,0x3065783020303837ull,
0x3020313263303830ull,0x3837303030306378ull,0x61783009090a2030ull,0x2039313831303030ull,
0x3730303534637830ull,0x3030657830203038ull,0x7830206466643038ull,0x3864376330303065ull,
0x3031783009090a20ull,0x3020333030303231ull,0x3031313030303078ull,0x6337306278302030ull,
0x3678302039313230ull,0x2030653734303030ull,0x373062783009090aull,0x7830206466373063ull,
0x3866373430303036ull,0x3931313061783020ull,0x3030783020333030ull,0x0a20303030303030ull,
0x3030306178300909ull,0x3078302064666430ull,0x2038643734313063ull,0x3037313130317830ull,
0x3030307830203330ull,0x090a203030313330ull,0x6630303031783009ull,0x3430783020393138ull,
0x3020303837633330ull,0x3134303030303178ull,0x3034343278302039ull,0x09090a2030383265ull,
0x3039313130317830ull,0x3030307830203330ull,0x7830203038373030ull,0x3931303831303031ull,
0x3030303030783020ull,0x3009090a20333030ull,0x3138663030303178ull,0x3330343078302039ull,
0x6278302030383264ull,0x2064313630303030ull,0x3734303030307830ull,0x783009090a203238ull,
0x6466643030303061ull,0x3431306332783020ull,0x3063783020386437ull,0x3020393165303030ull,
0x3030303066333078ull,0x65783009090a2033ull,0x2039313831333830ull,0x3435303430307830ull,
0x3034307830203038ull,0x7830203130383363ull,0x3038373831323465ull,0x3430783009090a20ull,
0x3020313038333430ull,0x3837383132346578ull,0x3231303178302030ull,0x3078302033303032ull,
0x2030383730303030ull,0x303430783009090aull,0x7830203130383363ull,0x3038373430323465ull,
0x3334303430783020ull,0x3465783020313038ull,0x0a20303837633032ull,0x3030303178300909ull,
0x3078302039313866ull,0x2032383763333036ull,0x3039333130317830ull,0x3030307830203330ull,
0x090a203038373030ull,0x3030343032783009ull,0x3430783020393161ull,0x3020303837303130ull,
0x6664303238303378ull,0x3134343678302064ull,0x09090a2038643734ull,0x3065323130317830ull,
0x3030307830203330ull,0x7830203038323130ull,0x3130383363303430ull,0x3830323465783020ull,
0x3009090a20303837ull,0x3038333430343078ull,0x3032346578302031ull,0x3078302030383763ull,
0x2031303833303134ull,0x3730313234657830ull,0x783009090a203038ull,0x3130383338303430ull,
0x3431323465783020ull,0x3031783020303837ull,0x3020393138663030ull,0x3837633330343078ull,
0x30783009090a2030ull,0x2031303833303034ull,0x3730663334657830ull,0x3130317830203038ull,
0x7830203330303933ull,0x3038373030303030ull,0x3430783009090a20ull,0x3020313038336330ull,
0x3837383032346578ull,0x3130303378302030ull,0x6578302035306330ull,0x2030383730303134ull,
0x303430783009090aull,0x7830203130383334ull,0x3038376330323465ull,0x3030303032783020ull,
0x3430783020643232ull,0x0a20303837303130ull,0x3031343078300909ull,0x6578302031303833ull,
0x2030383730313234ull,0x3038313030317830ull,0x3030307830203530ull,0x090a203330303030ull,
0x3338303430783009ull,0x3465783020313038ull,0x3020303837633232ull,0x3038333030343078ull,
0x3032346578302031ull,0x09090a2030383734ull,0x3434343130307830ull,0x3234657830203130ull,
0x7830203038373430ull,0x3931303831303031ull,0x3030303030783020ull,0x3009090a20333030ull,
0x3034303030303178ull,0x3330363078302035ull,0x6678302030383763ull,0x2031303030303030ull,
0x3030303030657830ull,0x783009090a203230ull,0x3330656666313638ull,0x3030303030783020ull,
0x3064783020303030ull,0x3020393030313135ull,0x3837303030303278ull,0x33783009090a2030ull,
0x2064663163323838ull,0x3734313634367830ull,0x3130617830203864ull,0x7830203330303737ull,
0x3030303030303030ull,0x3031783009090a20ull,0x3020333030373731ull,0x3832313030303078ull,
0x3135306478302030ull,0x3278302039303030ull,0x2030383730303030ull,0x303833783009090aull,
0x7830203133306331ull,0x3038373030333465ull,0x3163373033783020ull,0x6336783020646639ull,
0x0a20386437633030ull,0x3130303178300909ull,0x3078302035323038ull,0x2033303030303030ull,
0x3030303038317830ull,0x3034347830206431ull,0x090a203038376330ull,0x3635313031783009ull,
0x3030783020333030ull,0x3020303832313030ull,0x3065666631363878ull,0x3030303078302033ull,
0x09090a2030303030ull,0x3931303030337830ull,0x3034367830206466ull,0x7830203864376330ull,
0x3330303235313061ull,0x3030303030783020ull,0x3009090a20303030ull,0x3030323531303178ull,
0x3030303078302033ull,0x3378302030383231ull,0x2031323030313030ull,0x3730303134637830ull,
0x783009090a203038ull,0x3533303931303032ull,0x3030303030783020ull,0x3032783020333030ull,
0x3020313230393230ull,0x3030303030303078ull,0x34783009090a2033ull,0x2034333231643430ull,
0x3031393430347830ull,0x3030307830203032ull,0x7830206430613132ull,0x3038373030303063ull,
0x3030783009090a20ull,0x3020393030313230ull,0x3837303030306378ull,0x3030633178302030ull,
0x3478302031323633ull,0x2030383763303034ull,0x303832783009090aull,0x7830203132366630ull,
0x3038373032323430ull,0x3330303830783020ull,0x3465783020313036ull,0x0a20303837303232ull,
0x3130303378300909ull,0x6578302031333831ull,0x2032383730303163ull,0x3931633730337830ull,
0x3063367830206466ull,0x090a203864373031ull,0x3131303033783009ull,0x3463783020353232ull,
0x3020303837303031ull,0x3030353431303178ull,0x3030303078302033ull,0x09090a2030383231ull,
0x6630353830337830ull,0x3434367830206466ull,0x7830203864376330ull,0x3330306136313031ull,
0x3130303030783020ull,0x3009090a20303832ull,0x3330383230303178ull,0x3030303078302031ull,
0x3378302033303030ull,0x2035323231313030ull,0x3730303134657830ull,0x783009090a203038ull,
0x3330656666313638ull,0x3030303030783020ull,0x3032783020303030ull,0x3020313238396633ull,
0x6666666666663078ull,0x33783009090a2066ull,0x2064663130383030ull,0x3738313034367830ull,
0x3130617830203864ull,0x7830203330303736ull,0x3030303030303030ull,0x3031783009090a20ull,
0x3020333030373631ull,0x3832313030303078ull,0x3130303278302030ull,0x3078302031323038ull,
0x2033303030303030ull,0x303033783009090aull,0x7830203533323131ull,0x3038373030313465ull,
0x3138343034783020ull,0x3032783020303232ull,0x0a20343361393830ull,0x3230303078300909ull,
0x6378302039303031ull,0x2030383730303030ull,0x6131323030307830ull,0x3030637830206430ull,
0x090a203038373030ull,0x3330303831783009ull,0x3434783020313236ull,0x3020303837633030ull,
0x3236663030633278ull,0x3232343078302031ull,0x09090a2030383730ull,0x3633303063307830ull,
0x3234657830203130ull,0x7830203038373032ull,0x3133383131303033ull,0x3030313463783020ull,
0x3009090a20323837ull,0x6639313730303378ull,0x3030343678302064ull,0x3178302038643734ull,
0x2033303039353130ull,0x3231303030307830ull,0x783009090a203038ull,0x3330656666313638ull,
0x3030303030783020ull,0x3064783020303030ull,0x3020393038663035ull,0x3837303030303278ull,
0x33783009090a2030ull,0x2064666430323830ull,0x3738303434367830ull,0x3038337830203864ull,
0x7830206466316330ull,0x3864323131323436ull,0x3031783009090a20ull,0x3020333030373731ull,
0x3031313030303078ull,0x3035306478302030ull,0x3278302039303866ull,0x2030383730303030ull,
0x303831783009090aull,0x7830206431303030ull,0x3038376330303434ull,0x6630303432783020ull,
0x3430783020643136ull,0x0a20303837633132ull,0x3230303078300909ull,0x6378302039306530ull,
0x2030383730303030ull,0x3833633038307830ull,0x3234657830203130ull,0x090a203038373430ull,
0x3334303830783009ull,0x3465783020313038ull,0x3020303837633032ull,0x3038333031383078ull,
0x3232346578302031ull,0x09090a2030383763ull,0x3833383038307830ull,0x3234657830203130ull,
0x7830203038373431ull,0x3130303030303066ull,0x3030303065783020ull,0x3009090a20323030ull,
0x3065666631363878ull,0x3030303078302033ull,0x6178302030303030ull,0x2033303037393130ull,
0x3030303030307830ull,0x783009090a203030ull,0x3330303739313031ull,0x3030303030783020ull,
0x3064783020303031ull,0x3020393038663035ull,0x3837303030303278ull,0x31783009090a2030ull,
0x2064313030303038ull,0x3763303034347830ull,0x3038307830203038ull,0x7830203930306332ull,
0x3038373030323063ull,0x3832783009090a20ull,0x3020643136663030ull,0x3837633132343078ull,
0x6633303278302030ull,0x3078302031326538ull,0x2066666666666666ull,0x303064783009090aull,
0x7830206466663038ull,0x3864373030303430ull,0x3334313030783020ull,0x3465783020313065ull,
0x0a20303837633132ull,0x3831303178300909ull,0x3078302033303034ull,0x2030383231303030ull,
0x3033393130317830ull,0x3030307830203330ull,0x090a203038373030ull,0x3030303061783009ull,
0x3434783020643165ull,0x3020303837343130ull,0x6666303038306278ull,0x3035303678302064ull,
0x09090a2038643734ull,0x6530303030617830ull,0x3134637830203532ull,0x7830203038373430ull,
0x6431653036383063ull,0x3130343030783020ull,0x3009090a20303836ull,0x3265303030303178ull,
0x3034343278302031ull,0x3178302030383664ull,0x2031323866303030ull,0x3164333034307830ull,
0x783009090a203030ull,0x6431653037313033ull,0x3030316365783020ull,0x3064783020303837ull,
0x3020643165303138ull,0x3837303034343078ull,0x33783009090a2030ull,0x2064666630313830ull,
0x3738303434367830ull,0x3430327830203864ull,0x7830206431653030ull,0x3038373032303430ull,
0x3062783009090a20ull,0x3020646633316337ull,0x3531393030303678ull,0x3230303278302038ull,
0x3078302064316538ull,0x2062666666666666ull,0x303031783009090aull,0x7830203132303831ull,
0x3330303030303030ull,0x6630303031783020ull,0x3430783020643138ull,0x0a20303836643330ull,
0x3730303378300909ull,0x6378302064313031ull,0x2030383730303034ull,0x3034343130307830ull,
0x3234657830203130ull,0x090a203038376331ull,0x3831303031783009ull,0x3030783020643130ull,
0x3020333030303030ull,0x3034343431303078ull,0x6633346578302031ull,0x09090a2030383730ull,
0x3234343130307830ull,0x3234657830203130ull,0x7830203038376331ull,0x3130303030303066ull,
0x3030303065783020ull,0x3009090a20323030ull,0x3065666631363878ull,0x3030303078302033ull,
0x3278302030303030ull,0x2064313431303030ull,0x3730303034307830ull,0x783009090a203038ull,
0x3930653032303030ull,0x3030303063783020ull,0x3430783020303837ull,0x3020313038333030ull,
0x3837306633346578ull,0x30783009090a2030ull,0x2031303833303038ull,0x3730663334657830ull,
0x3136387830203038ull,0x7830203330656666ull,0x3030303030303030ull,0x3031783009090a20ull,
0x3020333030333430ull,0x3837303030303078ull,0x3035306478302030ull,0x3278302035303866ull,
0x2030383730303030ull,0x303433783009090aull,0x7830206466316330ull,0x3863376330323436ull,
0x3030303033783020ull,0x3030783020333030ull,0x0a20303832303030ull,0x3035306478300909ull,
0x3278302035303066ull,0x2030383730303030ull,0x3030323030307830ull,0x3030637830203930ull,
0x090a203038373030ull,0x6330303432783009ull,0x3430783020313030ull,0x3020303837303032ull,
0x3030653033386478ull,0x3030303278302035ull,0x09090a2030383730ull,0x3030323030337830ull,
0x3134637830203530ull,0x7830203038373030ull,0x3130303030303431ull,0x6330303434783020ull,
0x3009090a20303837ull,0x3063653030303278ull,0x3032343078302039ull,0x6478302030383734ull,
0x2035303065303238ull,0x3730303030327830ull,0x783009090a203038ull,0x3130343065303064ull,
0x3030633061783020ull,0x3431783020303837ull,0x3020313030303030ull,0x3837633030343478ull,
0x32783009090a2030ull,0x2035303066303030ull,0x3734303234307830ull,0x3030647830203038ull,
0x7830203130323065ull,0x3138373030633061ull,0x000a7d0a7d090a20ull
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
0x2f20676e696c6970ull,0x78706d742f706d74ull,0x30303030305f7466ull,0x303030305f306265ull,
0x5f36352d30303030ull,0x6c5f746365736962ull,0x7070632e65677261ull,0x6d742f2820692e33ull,
0x2e23494263632f70ull,0x0a29474236457535ull,0x2d2d2d2d2d2f2f09ull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x0a0a2d2d2d2d2d2dull,0x2d2d2d2d2d2f2f09ull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x090a2d2d2d2d2d2dull,0x6f6974704f202f2full,0x2d2f2f090a3a736eull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x20202f2f090a2d2dull,
0x703a746567726154ull,0x3a415349202c7874ull,0x45202c33315f6d73ull,0x696c3a6e6169646eull,
0x6f50202c656c7474ull,0x6953207265746e69ull,0x2f090a34363a657aull,0x2809334f2d20202full,
0x617a696d6974704full,0x76656c206e6f6974ull,0x202f2f090a296c65ull,0x6544280930672d20ull,
0x6576656c20677562ull,0x20202f2f090a296cull,0x7065522809326d2dull,0x697664612074726full,
0x0a29736569726f73ull,0x2d2d2d2d2d2f2f09ull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x0a0a2d2d2d2d2d2dull,0x3109656c69662e09ull,0x616d6d6f633c2209ull,0x3e656e696c2d646eull,
0x656c69662e090a22ull,0x706d742f22093209ull,0x5f746678706d742full,0x3062653030303030ull,
0x303030303030305full,0x7369625f35352d30ull,0x6772616c5f746365ull,0x6566616475632e65ull,
0x090a227570672e32ull,0x093309656c69662eull,0x696c2f7273752f22ull,0x38782f6363672f62ull,
0x6e696c2d34365f36ull,0x342f756e672d7875ull,0x636e692f332e332eull,0x6474732f6564756cull,
0x090a22682e666564ull,0x093409656c69662eull,0x672f656d6f682f22ull,0x742f736f6d616964ull,
0x616475632f706d65ull,0x2e2e2f2f6e69622full,0x6564756c636e692full,0x7665642f7472632full,
0x746e75725f656369ull,0x090a22682e656d69ull,0x093509656c69662eull,0x672f656d6f682f22ull,
0x742f736f6d616964ull,0x616475632f706d65ull,0x2e2e2f2f6e69622full,0x6564756c636e692full,
0x65645f74736f682full,0x22682e73656e6966ull,0x09656c69662e090aull,0x656d6f682f220936ull,
0x736f6d616964672full,0x75632f706d65742full,0x2f2f6e69622f6164ull,0x756c636e692f2e2eull,
0x746c6975622f6564ull,0x73657079745f6e69ull,0x69662e090a22682eull,0x682f22093709656cull,
0x616964672f656d6full,0x706d65742f736f6dull,0x69622f616475632full,0x6e692f2e2e2f2f6eull,
0x65642f6564756c63ull,0x7079745f65636976ull,0x2e090a22682e7365ull,0x22093809656c6966ull,
0x64672f656d6f682full,0x65742f736f6d6169ull,0x2f616475632f706dull,0x2f2e2e2f2f6e6962ull,
0x2f6564756c636e69ull,0x745f726576697264ull,0x0a22682e73657079ull,0x3909656c69662e09ull,
0x2f656d6f682f2209ull,0x2f736f6d61696467ull,0x6475632f706d6574ull,0x2e2f2f6e69622f61ull,
0x64756c636e692f2eull,0x7275747865742f65ull,0x2e73657079745f65ull,0x6c69662e090a2268ull,
0x682f220930310965ull,0x616964672f656d6full,0x706d65742f736f6dull,0x69622f616475632full,
0x6e692f2e2e2f2f6eull,0x65762f6564756c63ull,0x7079745f726f7463ull,0x2e090a22682e7365ull,
0x09313109656c6966ull,0x672f656d6f682f22ull,0x742f736f6d616964ull,0x616475632f706d65ull,
0x2e2e2f2f6e69622full,0x6564756c636e692full,0x5f6563697665642full,0x705f68636e75616cull,
0x726574656d617261ull,0x662e090a22682e73ull,0x2209323109656c69ull,0x64672f656d6f682full,
0x65742f736f6d6169ull,0x2f616475632f706dull,0x2f2e2e2f2f6e6962ull,0x2f6564756c636e69ull,
0x726f74732f747263ull,0x73616c635f656761ull,0x662e090a22682e73ull,0x2209333109656c69ull,
0x636e692f7273752full,0x7469622f6564756cull,0x2e73657079742f73ull,0x6c69662e090a2268ull,
0x752f220934310965ull,0x756c636e692f7273ull,0x2e656d69742f6564ull,0x6c69662e090a2268ull,
0x6962220935310965ull,0x6974755f74636573ull,0x2e090a2275632e6cull,0x09363109656c6966ull,
0x5f74636573696222ull,0x6c5f6c656e72656bull,0x2275632e65677261ull,0x09656c69662e090aull,
0x6573696222093731ull,0x656e72656b5f7463ull,0x5f656772616c5f6cull,0x2275632e69656e6full,
0x09656c69662e090aull,0x6573696222093831ull,0x656e72656b5f7463ull,0x5f656772616c5f6cull,
0x75632e69746c756dull,0x656c69662e090a22ull,0x73752f2209393109ull,0x64756c636e692f72ull,
0x2e342f2b2b632f65ull,0x226874616d632f33ull,0x09656c69662e090aull,0x6d6f682f22093032ull,
0x6f6d616964672f65ull,0x632f706d65742f73ull,0x2f6e69622f616475ull,0x6c636e692f2e2e2full,
0x6d6d6f632f656475ull,0x74636e75665f6e6full,0x0a22682e736e6f69ull,0x3209656c69662e09ull,
0x656d6f682f220931ull,0x736f6d616964672full,0x75632f706d65742full,0x2f2f6e69622f6164ull,
0x756c636e692f2e2eull,0x662f7472632f6564ull,0x7263616d5f636e75ull,0x662e090a22682e6full,
0x2209323209656c69ull,0x64672f656d6f682full,0x65742f736f6d6169ull,0x2f616475632f706dull,
0x2f2e2e2f2f6e6962ull,0x2f6564756c636e69ull,0x6e75665f6874616dull,0x682e736e6f697463ull,
0x656c69662e090a22ull,0x6f682f2209333209ull,0x6d616964672f656dull,0x2f706d65742f736full,
0x6e69622f61647563ull,0x636e692f2e2e2f2full,0x7665642f6564756cull,0x636e75665f656369ull,
0x22682e736e6f6974ull,0x09656c69662e090aull,0x6d6f682f22093432ull,0x6f6d616964672f65ull,
0x632f706d65742f73ull,0x2f6e69622f616475ull,0x6c636e692f2e2e2full,0x6874616d2f656475ull,
0x6e6174736e6f635full,0x2e090a22682e7374ull,0x09353209656c6966ull,0x672f656d6f682f22ull,
0x742f736f6d616964ull,0x616475632f706d65ull,0x2e2e2f2f6e69622full,0x6564756c636e692full,
0x615f31315f6d732full,0x75665f63696d6f74ull,0x2e736e6f6974636eull,0x6c69662e090a2268ull,
0x682f220936320965ull,0x616964672f656d6full,0x706d65742f736f6dull,0x69622f616475632full,
0x6e692f2e2e2f2f6eull,0x6d732f6564756c63ull,0x6d6f74615f32315full,0x74636e75665f6369ull,
0x0a22682e736e6f69ull,0x3209656c69662e09ull,0x656d6f682f220937ull,0x736f6d616964672full,
0x75632f706d65742full,0x2f2f6e69622f6164ull,0x756c636e692f2e2eull,0x33315f6d732f6564ull,
0x5f656c62756f645full,0x6e6f6974636e7566ull,0x662e090a22682e73ull,0x2209383209656c69ull,
0x64672f656d6f682full,0x65742f736f6d6169ull,0x2f616475632f706dull,0x2f2e2e2f2f6e6962ull,
0x2f6564756c636e69ull,0x5f65727574786574ull,0x75665f6863746566ull,0x2e736e6f6974636eull,
0x6c69662e090a2268ull,0x682f220939320965ull,0x616964672f656d6full,0x706d65742f736f6dull,
0x69622f616475632full,0x6e692f2e2e2f2f6eull,0x616d2f6564756c63ull,0x74636e75665f6874ull,
0x6c62645f736e6f69ull,0x22682e337874705full,0x746e652e090a0a0aull,0x6237315a5f207972ull,
0x72654b7463657369ull,0x656772614c6c656eull,0x6a66666a5f536650ull,0x535f30536a50666aull,
0x5f535f30535f535full,0x5f30535f30535f53ull,0x090a5f30535f3053ull,0x206765722e090a7bull,
0x687225203631752eull,0x2e090a3b3e34363cull,0x3233752e20676572ull,0x3e3233323c722520ull,
0x206765722e090a3bull,0x647225203436752eull,0x090a3b3e3032323cull,0x33662e206765722eull,
0x3e33393c66252032ull,0x206765722e090a3bull,0x646625203436662eull,0x2e090a3b3e34313cull,
0x6572702e20676572ull,0x3e38383c70252064ull,0x617261702e090a3bull,0x5f203436752e206dull,
0x726170616475635full,0x696237315a5f5f6dull,0x6e72654b74636573ull,0x50656772614c6c65ull,
0x6a6a66666a5f5366ull,0x5f535f30536a5066ull,0x535f535f30535f53ull,0x535f30535f30535full,
0x5f675f5f30535f30ull,0x7261702e090a3b64ull,0x203436752e206d61ull,0x6170616475635f5full,
0x6237315a5f5f6d72ull,0x72654b7463657369ull,0x656772614c6c656eull,0x6a66666a5f536650ull,
0x535f30536a50666aull,0x5f535f30535f535full,0x5f30535f30535f53ull,0x675f5f30535f3053ull,
0x61702e090a3b735full,0x3233752e206d6172ull,0x70616475635f5f20ull,0x37315a5f5f6d7261ull,
0x654b746365736962ull,0x6772614c6c656e72ull,0x66666a5f53665065ull,0x5f30536a50666a6aull,
0x535f30535f535f53ull,0x30535f30535f535full,0x5f5f30535f30535full,0x7261702e090a3b6eull,
0x203233662e206d61ull,0x6170616475635f5full,0x6237315a5f5f6d72ull,0x72654b7463657369ull,
0x656772614c6c656eull,0x6a66666a5f536650ull,0x535f30536a50666aull,0x5f535f30535f535full,
0x5f30535f30535f53ull,0x6c5f5f30535f3053ull,0x7261702e090a3b67ull,0x203233662e206d61ull,
0x6170616475635f5full,0x6237315a5f5f6d72ull,0x72654b7463657369ull,0x656772614c6c656eull,
0x6a66666a5f536650ull,0x535f30536a50666aull,0x5f535f30535f535full,0x5f30535f30535f53ull,
0x755f5f30535f3053ull,0x7261702e090a3b67ull,0x203233752e206d61ull,0x6170616475635f5full,
0x6237315a5f5f6d72ull,0x72654b7463657369ull,0x656772614c6c656eull,0x6a66666a5f536650ull,
0x535f30536a50666aull,0x5f535f30535f535full,0x5f30535f30535f53ull,0x6c5f5f30535f3053ull,
0x6f635f6769655f67ull,0x702e090a3b746e75ull,0x33752e206d617261ull,0x616475635f5f2032ull,
0x315a5f5f6d726170ull,0x4b74636573696237ull,0x72614c6c656e7265ull,0x666a5f5366506567ull,
0x30536a50666a6a66ull,0x5f30535f535f535full,0x535f30535f535f53ull,0x5f30535f30535f30ull,
0x5f6769655f67755full,0x090a3b746e756f63ull,0x2e206d617261702eull,0x75635f5f20323366ull,
0x5f5f6d7261706164ull,0x636573696237315aull,0x4c6c656e72654b74ull,0x5f53665065677261ull,
0x6a50666a6a66666aull,0x535f535f535f3053ull,0x30535f535f535f30ull,0x535f30535f30535full,
0x6c697370655f5f30ull,0x61702e090a3b6e6full,0x3436752e206d6172ull,0x70616475635f5f20ull,
0x37315a5f5f6d7261ull,0x654b746365736962ull,0x6772614c6c656e72ull,0x66666a5f53665065ull,
0x5f30536a50666a6aull,0x535f30535f535f53ull,0x30535f30535f535full,0x5f5f30535f30535full,
0x6e6f5f6d756e5f67ull,0x7261702e090a3b65ull,0x203436752e206d61ull,0x6170616475635f5full,
0x6237315a5f5f6d72ull,0x72654b7463657369ull,0x656772614c6c656eull,0x6a66666a5f536650ull,
0x535f30536a50666aull,0x5f535f30535f535full,0x5f30535f30535f53ull,0x675f5f30535f3053ull,
0x6f6c625f6d756e5full,0x746c756d5f736b63ull,0x617261702e090a3bull,0x5f203436752e206dull,
0x726170616475635full,0x696237315a5f5f6dull,0x6e72654b74636573ull,0x50656772614c6c65ull,
0x6a6a66666a5f5366ull,0x5f535f30536a5066ull,0x535f535f30535f53ull,0x535f30535f30535full,
0x5f675f5f30535f30ull,0x656e6f5f7466656cull,0x617261702e090a3bull,0x5f203436752e206dull,
0x726170616475635full,0x696237315a5f5f6dull,0x6e72654b74636573ull,0x50656772614c6c65ull,
0x6a6a66666a5f5366ull,0x5f535f30536a5066ull,0x535f535f30535f53ull,0x535f30535f30535full,
0x5f675f5f30535f30ull,0x6e6f5f7468676972ull,0x7261702e090a3b65ull,0x203436752e206d61ull,
0x6170616475635f5full,0x6237315a5f5f6d72ull,0x72654b7463657369ull,0x656772614c6c656eull,
0x6a66666a5f536650ull,0x535f30536a50666aull,0x5f535f30535f535full,0x5f30535f30535f53ull,
0x675f5f30535f3053ull,0x656e6f5f736f705full,0x617261702e090a3bull,0x5f203436752e206dull,
0x726170616475635full,0x696237315a5f5f6dull,0x6e72654b74636573ull,0x50656772614c6c65ull,
0x6a6a66666a5f5366ull,0x5f535f30536a5066ull,0x535f535f30535f53ull,0x535f30535f30535full,
0x5f675f5f30535f30ull,0x6c756d5f7466656cull,0x7261702e090a3b74ull,0x203436752e206d61ull,
0x6170616475635f5full,0x6237315a5f5f6d72ull,0x72654b7463657369ull,0x656772614c6c656eull,
0x6a66666a5f536650ull,0x535f30536a50666aull,0x5f535f30535f535full,0x5f30535f30535f53ull,
0x675f5f30535f3053ull,0x6d5f74686769725full,0x702e090a3b746c75ull,0x36752e206d617261ull,
0x616475635f5f2034ull,0x315a5f5f6d726170ull,0x4b74636573696237ull,0x72614c6c656e7265ull,
0x666a5f5366506567ull,0x30536a50666a6a66ull,0x5f30535f535f535full,0x535f30535f535f53ull,
0x5f30535f30535f30ull,0x5f7466656c5f675full,0x756d5f746e756f63ull,0x61702e090a3b746cull,
0x3436752e206d6172ull,0x70616475635f5f20ull,0x37315a5f5f6d7261ull,0x654b746365736962ull,
0x6772614c6c656e72ull,0x66666a5f53665065ull,0x5f30536a50666a6aull,0x535f30535f535f53ull,
0x30535f30535f535full,0x5f5f30535f30535full,0x5f74686769725f67ull,0x756d5f746e756f63ull,
0x61702e090a3b746cull,0x3436752e206d6172ull,0x70616475635f5f20ull,0x37315a5f5f6d7261ull,
0x654b746365736962ull,0x6772614c6c656e72ull,0x66666a5f53665065ull,0x5f30536a50666a6aull,
0x535f30535f535f53ull,0x30535f30535f535full,0x5f5f30535f30535full,0x736b636f6c625f67ull,
0x090a3b746c756d5full,0x2e206d617261702eull,0x75635f5f20343675ull,0x5f5f6d7261706164ull,
0x636573696237315aull,0x4c6c656e72654b74ull,0x5f53665065677261ull,0x6a50666a6a66666aull,
0x535f535f535f3053ull,0x30535f535f535f30ull,0x535f30535f30535full,0x6f6c625f675f5f30ull,
0x746c756d5f736b63ull,0x2e090a3b6d75735full,0x2e20646572616873ull,0x2034206e67696c61ull,
0x75635f5f2038622eull,0x66656c5f735f6164ull,0x3530325b38323174ull,0x68732e090a3b5d32ull,
0x6c612e2064657261ull,0x622e2032206e6769ull,0x616475635f5f2038ull,0x5f7466656c5f735full,
0x383132746e756f63ull,0x3b5d363230315b30ull,0x65726168732e090aull,0x6e67696c612e2064ull,
0x5f2038622e203220ull,0x5f735f616475635full,0x69746361706d6f63ull,0x337473696c5f6e6full,
0x363230315b363032ull,0x6168732e090a3b5dull,0x696c612e20646572ull,0x38622e2034206e67ull,
0x5f616475635f5f20ull,0x3474686769725f73ull,0x323530325b323332ull,0x6168732e090a3b5dull,
0x696c612e20646572ull,0x38622e2032206e67ull,0x5f616475635f5f20ull,0x5f74686769725f73ull,
0x383236746e756f63ull,0x3b5d363230315b34ull,0x65726168732e090aull,0x6e67696c612e2064ull,
0x5f2038622e203220ull,0x5f735f616475635full,0x65706c65685f6c63ull,0x30315b3031333772ull,
0x732e090a3b5d3632ull,0x752e206465726168ull,0x61706d6f63203233ull,0x6e6f6365735f7463ull,
0x3b6b6e7568635f64ull,0x65726168732e090aull,0x6e203233752e2064ull,0x61657268745f6d75ull,
0x76697463615f7364ull,0x6168732e090a3b65ull,0x3233752e20646572ull,0x7268745f6d756e20ull,
0x6d6f635f73646165ull,0x3b6e6f6974636170ull,0x65726168732e090aull,0x61203233752e2064ull,
0x61657268745f6c6cull,0x65766e6f635f7364ull,0x2e090a3b64656772ull,0x2e20646572616873ull,
0x5f6d756e20323375ull,0x6d5f736b636f6c62ull,0x732e090a3b746c75ull,0x752e206465726168ull,
0x657366666f203233ull,0x6c5f746c756d5f74ull,0x090a3b6164626d61ull,0x206465726168732eull,
0x6d756e203233752eull,0x090a3b746c756d5full,0x5f7466656c202f2full,0x203d20746e756f63ull,
0x6972202f2f090a30ull,0x6e756f635f746867ull,0x2f090a34203d2074ull,0x635f7466656c202full,
0x3d20325f746e756full,0x72202f2f090a3820ull,0x756f635f74686769ull,0x31203d20325f746eull,
0x656c202f2f090a32ull,0x31203d20325f7466ull,0x6972202f2f090a36ull,0x203d20325f746867ull,
0x636f6c2e090a3032ull,0x0937373109363109ull,0x5f3142424c240a30ull,0x6573696237315a5full,
0x6c656e72654b7463ull,0x536650656772614cull,0x50666a6a66666a5full,0x5f535f535f30536aull,
0x535f535f535f3053ull,0x5f30535f30535f30ull,0x6f6d090a3a5f3053ull,0x2509203436752e76ull,
0x635f5f202c316472ull,0x656c5f735f616475ull,0x2f093b3832317466ull,0x2e766f6d090a202full,
0x6472250920343675ull,0x6475635f5f202c32ull,0x7466656c5f735f61ull,0x3132746e756f635full,
0x0a202f2f093b3038ull,0x3436752e766f6d09ull,0x202c336472250920ull,0x735f616475635f5full,
0x746361706d6f635full,0x7473696c5f6e6f69ull,0x2f2f093b36303233ull,0x752e766f6d090a20ull,
0x3464722509203436ull,0x616475635f5f202cull,0x74686769725f735full,0x2f2f093b32333234ull,
0x752e766f6d090a20ull,0x3564722509203436ull,0x616475635f5f202cull,0x74686769725f735full,
0x3236746e756f635full,0x0a202f2f093b3438ull,0x363109636f6c2e09ull,0x090a300936313209ull,
0x203233752e766f6dull,0x3b30202c31722509ull,0x2020202020202020ull,0x2f09202020202020ull,
0x2e766f6d090a202full,0x3272250920323373ull,0x20203b317225202cull,0x2020202020202020ull,
0x090a202f2f092020ull,0x09363109636f6c2eull,0x6d090a3009373132ull,0x09203233752e766full,
0x203b30202c337225ull,0x2020202020202020ull,0x2f2f092020202020ull,0x732e766f6d090a20ull,
0x2c34722509203233ull,0x2020203b33722520ull,0x2020202020202020ull,0x2e090a202f2f0920ull,
0x3209363109636f6cull,0x7663090a30093632ull,0x31752e3233752e74ull,0x202c357225092036ull,
0x203b782e64697425ull,0x202f2f0920202020ull,0x36752e747663090aull,0x2509203233752e34ull,
0x357225202c366472ull,0x202020202020203bull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,
0x202c376472250920ull,0x3b32202c36647225ull,0x202f2f0920202020ull,0x36752e646461090aull,
0x2c38647225092034ull,0x25202c3764722520ull,0x202020203b336472ull,0x6f6d090a202f2f09ull,
0x2509203631752e76ull,0x203b30202c316872ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x6168732e7473090aull,0x203631752e646572ull,0x302b386472255b09ull,0x3b31687225202c5dull,
0x313a6469202f2f09ull,0x75635f5f20363232ull,0x6d6f635f735f6164ull,0x5f6e6f6974636170ull,
0x363032337473696cull,0x6c2e090a3078302bull,0x323209363109636full,0x6c756d090a300937ull,
0x203436752e6f6c2eull,0x25202c3964722509ull,0x203b34202c366472ull,0x0a202f2f09202020ull,
0x3436752e64646109ull,0x2c30316472250920ull,0x25202c3964722520ull,0x092020203b316472ull,
0x766f6d090a202f2full,0x662509203233662eull,0x3030306630202c31ull,0x20203b3030303030ull,
0x30202f2f09202020ull,0x6168732e7473090aull,0x203233662e646572ull,0x2b30316472255b09ull,
0x3b316625202c5d30ull,0x313a6469202f2f09ull,0x75635f5f20373232ull,0x66656c5f735f6164ull,
0x3078302b38323174ull,0x3109636f6c2e090aull,0x0a30093832320936ull,0x3436752e64646109ull,
0x2c31316472250920ull,0x25202c3964722520ull,0x092020203b346472ull,0x766f6d090a202f2full,
0x662509203233662eull,0x3030306630202c32ull,0x20203b3030303030ull,0x30202f2f09202020ull,
0x6168732e7473090aull,0x203233662e646572ull,0x2b31316472255b09ull,0x3b326625202c5d30ull,
0x313a6469202f2f09ull,0x75635f5f20383232ull,0x6769725f735f6164ull,0x302b323332347468ull,
0x636f6c2e090a3078ull,0x0939323209363109ull,0x752e646461090a30ull,0x3164722509203436ull,
0x2c37647225202c32ull,0x20203b3264722520ull,0x6d090a202f2f0920ull,0x09203631752e766full,
0x3b30202c32687225ull,0x2020202020202020ull,0x2f2f092020202020ull,0x68732e7473090a20ull,
0x3631752e64657261ull,0x32316472255b0920ull,0x687225202c5d302bull,0x6469202f2f093b32ull,
0x5f5f20393232313aull,0x6c5f735f61647563ull,0x6e756f635f746665ull,0x78302b3038313274ull,
0x09636f6c2e090a30ull,0x3009303332093631ull,0x36752e646461090aull,0x3331647225092034ull,
0x202c37647225202cull,0x2020203b35647225ull,0x6f6d090a202f2f09ull,0x2509203631752e76ull,
0x203b30202c336872ull,0x2020202020202020ull,0x202f2f0920202020ull,0x6168732e7473090aull,
0x203631752e646572ull,0x2b33316472255b09ull,0x33687225202c5d30ull,0x3a6469202f2f093bull,
0x635f5f2030333231ull,0x69725f735f616475ull,0x6e756f635f746867ull,0x78302b3438323674ull,
0x09636f6c2e090a30ull,0x3009323332093631ull,0x79732e726162090aull,0x20203b300920636eull,
0x2020202020202020ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233752e76ull,
0x20203b30202c3672ull,0x2020202020202020ull,0x202f2f0920202020ull,0x652e70746573090aull,
0x2509203233752e71ull,0x2c357225202c3170ull,0x2020203b36722520ull,0x2140090a202f2f09ull,
0x2061726220317025ull,0x325f305f744c2409ull,0x20202020203b3237ull,0x202f2f0920202020ull,
0x3109636f6c2e090aull,0x0a30093733320936ull,0x617261702e646c09ull,0x2509203233662e6dull,
0x635f5f5b202c3366ull,0x5f6d726170616475ull,0x6573696237315a5full,0x6c656e72654b7463ull,
0x536650656772614cull,0x50666a6a66666a5full,0x5f535f535f30536aull,0x535f535f535f3053ull,
0x5f30535f30535f30ull,0x3b5d676c5f5f3053ull,0x313a6469202f2f09ull,0x75635f5f20313332ull,
0x5f5f6d7261706164ull,0x636573696237315aull,0x4c6c656e72654b74ull,0x5f53665065677261ull,
0x6a50666a6a66666aull,0x535f535f535f3053ull,0x30535f535f535f30ull,0x535f30535f30535full,
0x78302b676c5f5f30ull,0x68732e7473090a30ull,0x3233662e64657261ull,0x6475635f5f5b0920ull,
0x7466656c5f735f61ull,0x202c5d302b383231ull,0x202f2f093b336625ull,0x20323332313a6469ull,
0x735f616475635f5full,0x3832317466656c5full,0x6c2e090a3078302bull,0x333209363109636full,
0x2e646c090a300938ull,0x33662e6d61726170ull,0x202c346625092032ull,0x70616475635f5f5bull,
0x37315a5f5f6d7261ull,0x654b746365736962ull,0x6772614c6c656e72ull,0x66666a5f53665065ull,
0x5f30536a50666a6aull,0x535f30535f535f53ull,0x30535f30535f535full,0x5f5f30535f30535full,
0x202f2f093b5d6775ull,0x20333332313a6469ull,0x6170616475635f5full,0x6237315a5f5f6d72ull,
0x72654b7463657369ull,0x656772614c6c656eull,0x6a66666a5f536650ull,0x535f30536a50666aull,
0x5f535f30535f535full,0x5f30535f30535f53ull,0x755f5f30535f3053ull,0x73090a3078302b67ull,
0x6465726168732e74ull,0x5f5b09203233662eull,0x5f735f616475635full,0x3332347468676972ull,
0x6625202c5d302b32ull,0x6469202f2f093b34ull,0x5f5f20343332313aull,0x725f735f61647563ull,
0x3233323474686769ull,0x6c2e090a3078302bull,0x333209363109636full,0x2e646c090a300939ull,
0x33752e6d61726170ull,0x202c377225092032ull,0x70616475635f5f5bull,0x37315a5f5f6d7261ull,
0x654b746365736962ull,0x6772614c6c656e72ull,0x66666a5f53665065ull,0x5f30536a50666a6aull,
0x535f30535f535f53ull,0x30535f30535f535full,0x5f5f30535f30535full,0x635f6769655f676cull,
0x2f093b5d746e756full,0x3332313a6469202full,0x616475635f5f2035ull,0x315a5f5f6d726170ull,
0x4b74636573696237ull,0x72614c6c656e7265ull,0x666a5f5366506567ull,0x30536a50666a6a66ull,
0x5f30535f535f535full,0x535f30535f535f53ull,0x5f30535f30535f30ull,0x5f6769655f676c5full,
0x78302b746e756f63ull,0x68732e7473090a30ull,0x3631752e64657261ull,0x6475635f5f5b0920ull,
0x7466656c5f735f61ull,0x3132746e756f635full,0x25202c5d302b3038ull,0x69202f2f093b3772ull,
0x5f20363332313a64ull,0x5f735f616475635full,0x756f635f7466656cull,0x302b30383132746eull,
0x636f6c2e090a3078ull,0x0930343209363109ull,0x61702e646c090a30ull,0x203233752e6d6172ull,
0x5f5b202c38722509ull,0x726170616475635full,0x696237315a5f5f6dull,0x6e72654b74636573ull,
0x50656772614c6c65ull,0x6a6a66666a5f5366ull,0x5f535f30536a5066ull,0x535f535f30535f53ull,
0x535f30535f30535full,0x67755f5f30535f30ull,0x756f635f6769655full,0x202f2f093b5d746eull,
0x20373332313a6469ull,0x6170616475635f5full,0x6237315a5f5f6d72ull,0x72654b7463657369ull,
0x656772614c6c656eull,0x6a66666a5f536650ull,0x535f30536a50666aull,0x5f535f30535f535full,
0x5f30535f30535f53ull,0x755f5f30535f3053ull,0x6f635f6769655f67ull,0x0a3078302b746e75ull,
0x726168732e747309ull,0x09203631752e6465ull,0x5f616475635f5f5bull,0x5f74686769725f73ull,
0x383236746e756f63ull,0x7225202c5d302b34ull,0x6469202f2f093b38ull,0x5f5f20383332313aull,
0x725f735f61647563ull,0x756f635f74686769ull,0x302b34383236746eull,0x636f6c2e090a3078ull,
0x0932343209363109ull,0x752e766f6d090a30ull,0x2c39722509203233ull,0x20202020203b3020ull,
0x2020202020202020ull,0x73090a202f2f0920ull,0x6465726168732e74ull,0x635b09203233752eull,
0x735f746361706d6full,0x68635f646e6f6365ull,0x7225202c5d6b6e75ull,0x6469202f2f093b39ull,
0x6f6320393332313aull,0x65735f746361706dull,0x7568635f646e6f63ull,0x090a3078302b6b6eull,
0x09363109636f6c2eull,0x6d090a3009333432ull,0x09203233752e766full,0x3b31202c30317225ull,
0x2020202020202020ull,0x2f2f092020202020ull,0x68732e7473090a20ull,0x3233752e64657261ull,
0x745f6d756e5b0920ull,0x615f736461657268ull,0x202c5d6576697463ull,0x2f2f093b30317225ull,
0x383132313a646920ull,0x7268745f6d756e20ull,0x7463615f73646165ull,0x0a3078302b657669ull,
0x363109636f6c2e09ull,0x090a300935343209ull,0x203233752e766f6dull,0x31202c3131722509ull,
0x202020202020203bull,0x2f09202020202020ull,0x732e7473090a202full,0x33752e6465726168ull,
0x5f6d756e5b092032ull,0x5f73646165726874ull,0x69746361706d6f63ull,0x317225202c5d6e6full,
0x6469202f2f093b31ull,0x756e20303432313aull,0x6461657268745f6dull,0x6361706d6f635f73ull,
0x3078302b6e6f6974ull,0x3109636f6c2e090aull,0x0a30093734320936ull,0x3233752e766f6d09ull,
0x202c323172250920ull,0x2020202020203b31ull,0x0920202020202020ull,0x2e7473090a202f2full,
0x752e646572616873ull,0x6c6c615b09203233ull,0x736461657268745full,0x677265766e6f635full,
0x317225202c5d6465ull,0x6469202f2f093b32ull,0x6c6120313432313aull,0x6461657268745f6cull,
0x7265766e6f635f73ull,0x0a3078302b646567ull,0x37325f305f744c24ull,0x636f6c2e090a3a32ull,
0x0930353209363109ull,0x732e726162090a30ull,0x203b300920636e79ull,0x2020202020202020ull,
0x2020202020202020ull,0x63090a202f2f0920ull,0x752e3233752e7476ull,0x3331722509203631ull,
0x2e6469746e25202cull,0x2f2f092020203b78ull,0x752e766f6d090a20ull,0x3431722509203233ull,
0x202020203b30202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,0x09203233662e766full,
0x306630202c356625ull,0x3b30303030303030ull,0x2f2f092020202020ull,0x2e766f6d090a3020ull,
0x3666250920323366ull,0x303030306630202cull,0x2020203b30303030ull,0x0a30202f2f092020ull,
0x3233662e766f6d09ull,0x30202c3766250920ull,0x3030303030303066ull,0x0920202020203b30ull,
0x744c240a30202f2full,0x0a3a3737315f305full,0x706f6f6c3c2f2f20ull,0x6220706f6f4c203eull,
0x656e696c2079646full,0x6c2e090a36353220ull,0x353209363109636full,0x2e646c090a300936ull,
0x732e646572616873ull,0x3531722509203233ull,0x745f6d756e5b202cull,0x615f736461657268ull,
0x093b5d6576697463ull,0x32313a6469202f2full,0x745f6d756e203831ull,0x615f736461657268ull,
0x78302b6576697463ull,0x2e70746573090a30ull,0x09203233752e656cull,0x317225202c327025ull,
0x203b357225202c35ull,0x40090a202f2f0920ull,0x2061726220327025ull,0x325f305f744c2409ull,
0x20202020203b3038ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c36353220656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x090a3737315f305full,0x09353109636f6c2eull,0x6c090a3009333935ull,
0x6465726168732e64ull,0x662509203233662eull,0x316472255b202c37ull,0x2f2f093b5d302b30ull,
0x323432313a646920ull,0x5f616475635f5f20ull,0x32317466656c5f73ull,0x2e090a3078302b38ull,
0x3509353109636f6cull,0x646c090a30093439ull,0x2e6465726168732eull,0x3666250920323366ull,
0x31316472255b202cull,0x202f2f093b5d302bull,0x20333432313a6469ull,0x735f616475635f5full,
0x323474686769725full,0x090a3078302b3233ull,0x09353109636f6c2eull,0x6c090a3009353935ull,
0x6465726168732e64ull,0x722509203631752eull,0x316472255b202c31ull,0x2f2f093b5d302b32ull,
0x343432313a646920ull,0x5f616475635f5f20ull,0x635f7466656c5f73ull,0x30383132746e756full,
0x6f6d090a3078302bull,0x2509203233732e76ull,0x3b317225202c3272ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x3109636f6c2e090aull,0x0a30093639350935ull,0x726168732e646c09ull,
0x09203631752e6465ull,0x72255b202c337225ull,0x093b5d302b333164ull,0x32313a6469202f2full,
0x6475635f5f203534ull,0x686769725f735f61ull,0x36746e756f635f74ull,0x0a3078302b343832ull,
0x3233732e766f6d09ull,0x25202c3472250920ull,0x20202020203b3372ull,0x0920202020202020ull,
0x746573090a202f2full,0x33662e75656e2e70ull,0x202c337025092032ull,0x376625202c366625ull,
0x0a202f2f0920203bull,0x6220337025214009ull,0x5f744c2409206172ull,0x20203b3737325f30ull,
0x0920202020202020ull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x36353220656e696cull,0x6c2064616568202cull,0x242064656c656261ull,
0x3737315f305f744cull,0x3109636f6c2e090aull,0x0a30093130360935ull,0x3233662e766f6d09ull,
0x30202c3866250920ull,0x3030303030303066ull,0x0920202020203b30ull,0x6c2e090a30202f2full,
0x393509353109636full,0x2e646c090a300933ull,0x662e646572616873ull,0x2c37662509203233ull,
0x2b30316472255b20ull,0x0a202f2f093b5d30ull,0x353109636f6c2e09ull,0x090a300931303609ull,
0x2e746c2e70746573ull,0x3470250920323366ull,0x25202c376625202cull,0x2f092020203b3866ull,
0x2e766f6d090a202full,0x3966250920323366ull,0x303030306630202cull,0x2020203b30303030ull,
0x0a30202f2f092020ull,0x353109636f6c2e09ull,0x090a300934393509ull,0x65726168732e646cull,
0x2509203233662e64ull,0x6472255b202c3666ull,0x2f093b5d302b3131ull,0x636f6c2e090a202full,
0x0931303609353109ull,0x2e70746573090a30ull,0x09203233662e746cull,0x366625202c357025ull,
0x20203b396625202cull,0x40090a202f2f0920ull,0x6172622035702521ull,0x5f305f744c240920ull,
0x202020203b393732ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c36353220656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x090a3737315f305full,0x09353109636f6c2eull,0x6573090a30093239ull,
0x09203233732e706cull,0x2c31202c36317225ull,0x3b347025202c3020ull,0x202f2f0920202020ull,
0x6e752e617262090aull,0x305f744c24092069ull,0x2020203b3837325full,0x2020202020202020ull,
0x744c240a202f2f09ull,0x0a3a3937325f305full,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c36353220ull,0x6c6562616c206461ull,
0x305f744c24206465ull,0x6573090a3737315full,0x09203233732e706cull,0x2c30202c36317225ull,
0x3b347025202c3120ull,0x202f2f0920202020ull,0x325f305f744c240aull,0x3c2f2f200a3a3837ull,
0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,0x36353220656e696cull,
0x6c2064616568202cull,0x242064656c656261ull,0x3737315f305f744cull,0x3109636f6c2e090aull,
0x0a30093130360935ull,0x3233662e62757309ull,0x202c303166250920ull,0x376625202c366625ull,
0x092020202020203bull,0x766f6d090a202f2full,0x662509203233662eull,0x66336630202c3131ull,
0x203b303030303030ull,0x30202f2f09202020ull,0x2e64616d090a352eull,0x3166250920323366ull,
0x2c30316625202c32ull,0x25202c3131662520ull,0x0a202f2f093b3766ull,0x3233662e64646109ull,
0x202c333166250920ull,0x376625202c366625ull,0x092020202020203bull,0x766f6d090a202f2full,
0x662509203233662eull,0x66336630202c3431ull,0x203b303030303030ull,0x30202f2f09202020ull,
0x2e6c756d090a352eull,0x3166250920323366ull,0x2c33316625202c35ull,0x20203b3431662520ull,
0x090a202f2f092020ull,0x203233732e67656eull,0x25202c3731722509ull,0x202020203b363172ull,
0x2f09202020202020ull,0x74636c73090a202full,0x3233732e3233662eull,0x25202c3566250920ull,
0x316625202c353166ull,0x3b37317225202c32ull,0x6c2e090a202f2f09ull,0x303609353109636full,
0x766f6d090a300932ull,0x722509203233752eull,0x20203b30202c3831ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x726168732e747309ull,0x09203233752e6465ull,0x7268745f6c6c615bull,
0x6e6f635f73646165ull,0x2c5d646567726576ull,0x2f093b3831722520ull,0x3432313a6469202full,
0x68745f6c6c612031ull,0x6f635f7364616572ull,0x2b6465677265766eull,0x617262090a307830ull,
0x4c240920696e752eull,0x3b3038325f305f74ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x37325f305f744c24ull,0x6c3c2f2f200a3a37ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c36353220656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x0a3737315f305f74ull,0x353109636f6c2e09ull,0x090a300936393509ull,0x65726168732e646cull,
0x2509203631752e64ull,0x6472255b202c3372ull,0x2f093b5d302b3331ull,0x636f6c2e090a202full,
0x0935393509353109ull,0x68732e646c090a30ull,0x3631752e64657261ull,0x5b202c3172250920ull,
0x5d302b3231647225ull,0x2e090a202f2f093bull,0x3609353109636f6cull,0x7573090a30093230ull,
0x2509203233752e62ull,0x337225202c393172ull,0x20203b317225202cull,0x202f2f0920202020ull,
0x33752e766f6d090aull,0x2c30327225092032ull,0x20202020203b3120ull,0x2020202020202020ull,
0x6573090a202f2f09ull,0x33752e656c2e7074ull,0x202c367025092032ull,0x7225202c39317225ull,
0x202f2f09203b3032ull,0x622036702540090aull,0x5f744c2409206172ull,0x20203b3038325f30ull,
0x2020202020202020ull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x353220656e696c20ull,0x2064616568202c36ull,0x2064656c6562616cull,
0x37315f305f744c24ull,0x09636f6c2e090a37ull,0x3009373036093531ull,0x33752e766f6d090aull,
0x2c31327225092032ull,0x20202020203b3020ull,0x2020202020202020ull,0x7473090a202f2f09ull,
0x2e6465726168732eull,0x6c615b0920323375ull,0x6461657268745f6cull,0x7265766e6f635f73ull,
0x7225202c5d646567ull,0x69202f2f093b3132ull,0x6120313432313a64ull,0x61657268745f6c6cull,
0x65766e6f635f7364ull,0x3078302b64656772ull,0x325f305f744c240aull,0x5f744c240a3a3038ull,
0x240a3a3637325f30ull,0x3437325f305f744cull,0x6f6c3c2f2f200a3aull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c36353220656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x090a3737315f305full,0x09363109636f6c2eull,0x62090a3009313632ull,
0x20636e79732e7261ull,0x20202020203b3009ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x68732e646c090a20ull,0x3233752e64657261ull,0x202c323272250920ull,0x7268745f6c6c615bull,
0x6e6f635f73646165ull,0x3b5d646567726576ull,0x313a6469202f2f09ull,0x5f6c6c6120313432ull,
0x5f73646165726874ull,0x65677265766e6f63ull,0x6d090a3078302b64ull,0x09203233752e766full,
0x3b31202c33327225ull,0x2020202020202020ull,0x2f2f092020202020ull,0x2e70746573090a20ull,
0x09203233752e656eull,0x327225202c377025ull,0x3b33327225202c32ull,0x40090a202f2f0920ull,
0x2061726220377025ull,0x325f305f744c2409ull,0x20202020203b3238ull,0x2f2f092020202020ull,
0x752e617262090a20ull,0x5f744c240920696eull,0x202020203b315f30ull,0x2020202020202020ull,
0x4c240a202f2f0920ull,0x3a3238325f305f74ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3635322065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x2e090a3737315f30ull,0x3209363109636f6cull,0x646c090a30093337ull,
0x2e6465726168732eull,0x3272250920323375ull,0x5f6d756e5b202c34ull,0x5f73646165726874ull,
0x3b5d657669746361ull,0x313a6469202f2f09ull,0x5f6d756e20383132ull,0x5f73646165726874ull,
0x302b657669746361ull,0x636f6c2e090a3078ull,0x0938333209353109ull,0x61702e646c090a30ull,
0x203233752e6d6172ull,0x5b202c3532722509ull,0x6170616475635f5full,0x6237315a5f5f6d72ull,
0x72654b7463657369ull,0x656772614c6c656eull,0x6a66666a5f536650ull,0x535f30536a50666aull,
0x5f535f30535f535full,0x5f30535f30535f53ull,0x6e5f5f30535f3053ull,0x6469202f2f093b5dull,
0x5f5f20353132313aull,0x6d72617061647563ull,0x73696237315a5f5full,0x656e72654b746365ull,
0x6650656772614c6cull,0x666a6a66666a5f53ull,0x535f535f30536a50ull,0x5f535f535f30535full,
0x30535f30535f3053ull,0x302b6e5f5f30535full,0x2e766f6d090a3078ull,0x3272250920323373ull,
0x3b35327225202c36ull,0x2020202020202020ull,0x090a202f2f092020ull,0x203233752e766f6dull,
0x30202c3732722509ull,0x202020202020203bull,0x2f09202020202020ull,0x70746573090a202full,
0x203233752e71652eull,0x7225202c38702509ull,0x37327225202c3532ull,0x090a202f2f09203bull,
0x203233752e766f6dull,0x30202c3832722509ull,0x202020202020203bull,0x2f09202020202020ull,
0x38702540090a202full,0x4c24092061726220ull,0x3b3233345f305f74ull,0x2020202020202020ull,
0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c363532ull,0x656c6562616c2064ull,0x5f305f744c242064ull,
0x6f6c2e090a373731ull,0x3337320936310963ull,0x732e646c090a3009ull,0x33752e6465726168ull,
0x2c34327225092032ull,0x68745f6d756e5b20ull,0x63615f7364616572ull,0x2f093b5d65766974ull,
0x636f6c2e090a202full,0x0938333209353109ull,0x2e70746573090a30ull,0x09203233752e7467ull,
0x327225202c397025ull,0x203b357225202c34ull,0x6d090a202f2f0920ull,0x09203233752e766full,
0x3b30202c39327225ull,0x2020202020202020ull,0x2f2f092020202020ull,0x662e766f6d090a20ull,
0x3631662509203233ull,0x303866336630202cull,0x2020203b30303030ull,0x240a31202f2f0920ull,
0x3638325f305f744cull,0x6f6c3c2f2f200a3aull,0x706f6f4c203e706full,0x696c2079646f6220ull,
0x202c38333220656eull,0x20676e697473656eull,0x31203a6874706564ull,0x616d69747365202cull,
0x7265746920646574ull,0x203a736e6f697461ull,0x0a6e776f6e6b6e75ull,0x353109636f6c2e09ull,
0x090a300933343209ull,0x636e79732e726162ull,0x202020203b300920ull,0x2020202020202020ull,
0x2f09202020202020ull,0x2e646461090a202full,0x3372250920323375ull,0x2c39327225202c30ull,
0x2020203b35722520ull,0x090a202f2f092020ull,0x2e656c2e70746573ull,0x3170250920323375ull,
0x2c35327225202c30ull,0x2f093b3033722520ull,0x31702540090a202full,0x2409206172622030ull,
0x3738325f305f744cull,0x202020202020203bull,0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c383332ull,
0x656c6562616c2064ull,0x5f305f744c242064ull,0x6f6c2e090a363832ull,0x3834320935310963ull,
0x2e747663090a3009ull,0x203233752e343675ull,0x202c343164722509ull,0x2020203b39327225ull,
0x090a202f2f092020ull,0x203436752e646461ull,0x202c353164722509ull,0x25202c3431647225ull,
0x2f0920203b366472ull,0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3631647225ull,
0x3b34202c35316472ull,0x090a202f2f092020ull,0x6d617261702e646cull,0x722509203436752eull,
0x5f5f5b202c373164ull,0x6d72617061647563ull,0x73696237315a5f5full,0x656e72654b746365ull,
0x6650656772614c6cull,0x666a6a66666a5f53ull,0x535f535f30536a50ull,0x5f535f535f30535full,
0x30535f30535f3053ull,0x645f675f5f30535full,0x6469202f2f093b5dull,0x5f5f20363432313aull,
0x6d72617061647563ull,0x73696237315a5f5full,0x656e72654b746365ull,0x6650656772614c6cull,
0x666a6a66666a5f53ull,0x535f535f30536a50ull,0x5f535f535f30535full,0x30535f30535f3053ull,
0x645f675f5f30535full,0x6461090a3078302bull,0x2509203436752e64ull,0x7225202c38316472ull,
0x647225202c373164ull,0x202f2f09203b3631ull,0x6f6c672e646c090aull,0x203233662e6c6162ull,
0x5b202c3731662509ull,0x5d302b3831647225ull,0x3a6469202f2f093bull,0x7473090a37343231ull,
0x2e6465726168732eull,0x72255b0920323366ull,0x202c5d302b303164ull,0x2f2f093b37316625ull,
0x383432313a646920ull,0x5f616475635f5f20ull,0x32317466656c5f73ull,0x2e090a3078302b38ull,
0x3209353109636f6cull,0x646c090a30093934ull,0x752e6d617261702eull,0x3164722509203436ull,
0x75635f5f5b202c39ull,0x5f5f6d7261706164ull,0x636573696237315aull,0x4c6c656e72654b74ull,
0x5f53665065677261ull,0x6a50666a6a66666aull,0x535f535f535f3053ull,0x30535f535f535f30ull,
0x535f30535f30535full,0x3b5d735f675f5f30ull,0x313a6469202f2f09ull,0x75635f5f20393432ull,
0x5f5f6d7261706164ull,0x636573696237315aull,0x4c6c656e72654b74ull,0x5f53665065677261ull,
0x6a50666a6a66666aull,0x535f535f535f3053ull,0x30535f535f535f30ull,0x535f30535f30535full,
0x302b735f675f5f30ull,0x2e646461090a3078ull,0x6472250920343675ull,0x31647225202c3032ull,
0x3631647225202c39ull,0x090a202f2f09203bull,0x61626f6c672e646cull,0x2509203233662e6cull,
0x72255b202c383166ull,0x3b5d342d2b303264ull,0x313a6469202f2f09ull,0x2e7473090a303532ull,
0x662e646572616873ull,0x6472255b09203233ull,0x25202c5d302b3131ull,0x202f2f093b383166ull,
0x20313532313a6469ull,0x735f616475635f5full,0x323474686769725full,0x240a3078302b3233ull,
0x3738325f305f744cull,0x6f6c3c2f2f200a3aull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x202c38333220656eull,0x62616c2064616568ull,0x744c242064656c65ull,
0x090a3638325f305full,0x09353109636f6c2eull,0x62090a3009323532ull,0x20636e79732e7261ull,
0x20202020203b3009ull,0x2020202020202020ull,0x2f2f092020202020ull,0x3970252140090a20ull,
0x4c24092061726220ull,0x3b3139325f305f74ull,0x2020202020202020ull,0x2f200a202f2f0920ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3220656e696c2079ull,
0x64616568202c3833ull,0x64656c6562616c20ull,0x325f305f744c2420ull,0x636f6c2e090a3638ull,
0x0939353209353109ull,0x752e6e696d090a30ull,0x3133722509203233ull,0x202c36327225202cull,
0x2020203b33317225ull,0x6d090a202f2f0920ull,0x09203233752e766full,0x3b30202c32337225ull,
0x2020202020202020ull,0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233752e7165ull,
0x7225202c31317025ull,0x32337225202c3133ull,0x40090a202f2f093bull,0x6172622031317025ull,
0x5f305f744c240920ull,0x202020203b313932ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c38333220656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x090a3638325f305full,0x203233732e766f6dull,
0x25202c3333722509ull,0x202020203b313372ull,0x2f09202020202020ull,0x2e766f6d090a202full,
0x6472250920343673ull,0x34647225202c3132ull,0x202020202020203bull,0x090a202f2f092020ull,
0x203436732e766f6dull,0x202c323264722509ull,0x2020203b31647225ull,0x2f09202020202020ull,
0x2e766f6d090a202full,0x3372250920323375ull,0x2020203b30202c34ull,0x2020202020202020ull,
0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c383332ull,0x656c6562616c2064ull,0x5f305f744c242064ull,
0x766f6d090a363832ull,0x722509203233732eull,0x33337225202c3533ull,0x202020202020203bull,
0x0a202f2f09202020ull,0x39325f305f744c24ull,0x6c3c2f2f200a3a33ull,0x6f6f4c203e706f6full,
0x6c2079646f622070ull,0x2c39353220656e69ull,0x676e697473656e20ull,0x203a687470656420ull,
0x6d69747365202c32ull,0x6574692064657461ull,0x3a736e6f69746172ull,0x6e776f6e6b6e7520ull,
0x3209636f6c2e090aull,0x3009383233310933ull,0x6168732e646c090aull,0x203233662e646572ull,
0x5b202c3931662509ull,0x5d302b3132647225ull,0x3a6469202f2f093bull,0x635f5f2032353231ull,
0x69725f735f616475ull,0x2b32333234746867ull,0x6c756d090a307830ull,0x662509203233662eull,
0x39316625202c3032ull,0x203b39316625202cull,0x0a202f2f09202020ull,0x3233662e766f6d09ull,
0x202c313266250920ull,0x2020203b36316625ull,0x0920202020202020ull,0x766f6d090a202f2full,
0x662509203233662eull,0x31326625202c3232ull,0x202020202020203bull,0x0a202f2f09202020ull,
0x333209636f6c2e09ull,0x0a30093035323109ull,0x3233662e73626109ull,0x202c333266250920ull,
0x2020203b31326625ull,0x0920202020202020ull,0x766f6d090a202f2full,0x662509203233662eull,
0x65376630202c3432ull,0x203b303030303038ull,0x38202f2f09202020ull,0x2b6536303730352eull,
0x70746573090a3733ull,0x203233662e74672eull,0x25202c3231702509ull,0x326625202c333266ull,
0x090a202f2f093b34ull,0x6220323170252140ull,0x5f744c2409206172ull,0x20203b3439325f30ull,
0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c39353220656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x0a3339325f305f74ull,0x333209636f6c2e09ull,0x0a30093135323109ull,0x3233662e766f6d09ull,
0x202c353266250920ull,0x3030303865336630ull,0x09202020203b3030ull,0x0a35322e30202f2full,
0x3233662e6c756d09ull,0x202c303266250920ull,0x6625202c30326625ull,0x09202020203b3532ull,
0x6f6c2e090a202f2full,0x3532310933320963ull,0x766f6d090a300932ull,0x662509203233662eull,
0x65336630202c3632ull,0x203b303030303038ull,0x30202f2f09202020ull,0x6c756d090a35322eull,
0x662509203233662eull,0x31326625202c3232ull,0x203b36326625202cull,0x0a202f2f09202020ull,
0x39325f305f744c24ull,0x6c3c2f2f200a3a34ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c39353220656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x0a3339325f305f74ull,0x353109636f6c2e09ull,0x090a300930363209ull,0x65726168732e646cull,
0x2509203233662e64ull,0x72255b202c373266ull,0x093b5d302b323264ull,0x32313a6469202f2full,
0x6475635f5f203335ull,0x7466656c5f735f61ull,0x0a3078302b383231ull,0x3233662e62757309ull,
0x202c383266250920ull,0x6625202c37326625ull,0x0920202020203b35ull,0x766964090a202f2full,
0x662509203233662eull,0x30326625202c3932ull,0x203b32326625202cull,0x0a202f2f09202020ull,
0x3233662e62757309ull,0x202c363166250920ull,0x6625202c38326625ull,0x09202020203b3932ull,
0x6f6c2e090a202f2full,0x3236320935310963ull,0x2e766f6d090a3009ull,0x3366250920323366ull,
0x3030306630202c30ull,0x20203b3030303030ull,0x0a30202f2f092020ull,0x2e746c2e74657309ull,
0x203233662e323375ull,0x25202c3633722509ull,0x336625202c363166ull,0x090a202f2f093b30ull,
0x203233732e67656eull,0x25202c3733722509ull,0x202020203b363372ull,0x2f09202020202020ull,
0x2e646461090a202full,0x3272250920323375ull,0x2c38327225202c38ull,0x20203b3733722520ull,
0x090a202f2f092020ull,0x09353109636f6c2eull,0x61090a3009393532ull,0x09203233752e6464ull,
0x7225202c34337225ull,0x20203b31202c3433ull,0x2f2f092020202020ull,0x752e646461090a20ull,
0x3264722509203436ull,0x3232647225202c32ull,0x202020203b34202cull,0x61090a202f2f0920ull,
0x09203436752e6464ull,0x25202c3132647225ull,0x3b34202c31326472ull,0x2f2f092020202020ull,
0x2e70746573090a20ull,0x09203233752e656eull,0x7225202c33317025ull,0x34337225202c3133ull,
0x40090a202f2f093bull,0x6172622033317025ull,0x5f305f744c240920ull,0x202020203b333932ull,
0x2f2f092020202020ull,0x5f305f744c240a20ull,0x744c240a3a313932ull,0x0a3a3938325f305full,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c38333220ull,0x6c6562616c206461ull,0x305f744c24206465ull,0x6c2e090a3638325full,
0x363209353109636full,0x627573090a300937ull,0x722509203233752eull,0x36327225202c3632ull,
0x203b33317225202cull,0x0a202f2f09202020ull,0x3233752e64646109ull,0x202c393272250920ull,
0x7225202c33317225ull,0x09202020203b3932ull,0x746573090a202f2full,0x3233752e746c2e70ull,
0x202c343170250920ull,0x7225202c39327225ull,0x0a202f2f093b3532ull,0x6220343170254009ull,
0x5f744c2409206172ull,0x20203b3638325f30ull,0x0920202020202020ull,0x3c2f2f200a202f2full,
0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,0x36353220656e696cull,
0x6c2064616568202cull,0x242064656c656261ull,0x3737315f305f744cull,0x6e752e617262090aull,
0x305f744c24092069ull,0x2020203b3438325full,0x2020202020202020ull,0x744c240a202f2f09ull,
0x0a3a3233345f305full,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,
0x656e696c2079646full,0x6568202c36353220ull,0x6c6562616c206461ull,0x305f744c24206465ull,
0x744c240a3737315full,0x0a3a3438325f305full,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c36353220ull,0x6c6562616c206461ull,
0x305f744c24206465ull,0x6c2e090a3737315full,0x383209363109636full,0x726162090a300937ull,
0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x726168732e646c09ull,0x09203233752e6465ull,0x6e5b202c38337225ull,0x61657268745f6d75ull,
0x76697463615f7364ull,0x69202f2f093b5d65ull,0x6e20383132313a64ull,0x61657268745f6d75ull,
0x76697463615f7364ull,0x73090a3078302b65ull,0x752e656c2e707465ull,0x3531702509203233ull,
0x202c38337225202cull,0x2f2f09203b357225ull,0x3531702540090a20ull,0x4c24092061726220ull,
0x3b3030335f305f74ull,0x2020202020202020ull,0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3220656e696c2079ull,0x64616568202c3635ull,
0x64656c6562616c20ull,0x315f305f744c2420ull,0x70746573090a3737ull,0x3233662e75656e2eull,
0x202c363170250920ull,0x376625202c366625ull,0x090a202f2f09203bull,0x6220363170252140ull,
0x5f744c2409206172ull,0x20203b3130335f30ull,0x2f09202020202020ull,0x6c3c2f2f200a202full,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c36353220656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x0a3737315f305f74ull,0x363109636f6c2e09ull,
0x090a300934303309ull,0x2e3631752e747663ull,0x3372250920323375ull,0x3b38327225202c39ull,
0x2f09202020202020ull,0x2e747663090a202full,0x203233752e363175ull,0x25202c3034722509ull,
0x20202020203b3372ull,0x090a202f2f092020ull,0x2e3631752e747663ull,0x3472250920323375ull,
0x203b317225202c31ull,0x2f09202020202020ull,0x2e736261090a202full,0x3366250920323366ull,
0x203b356625202c31ull,0x2020202020202020ull,0x090a202f2f092020ull,0x2e656e2e70746573ull,
0x3170250920323375ull,0x2c39337225202c37ull,0x2f093b3134722520ull,0x702e646c090a202full,
0x3233662e6d617261ull,0x202c323366250920ull,0x70616475635f5f5bull,0x37315a5f5f6d7261ull,
0x654b746365736962ull,0x6772614c6c656e72ull,0x66666a5f53665065ull,0x5f30536a50666a6aull,
0x535f30535f535f53ull,0x30535f30535f535full,0x5f5f30535f30535full,0x5d6e6f6c69737065ull,
0x3a6469202f2f093bull,0x635f5f2039303231ull,0x5f6d726170616475ull,0x6573696237315a5full,
0x6c656e72654b7463ull,0x536650656772614cull,0x50666a6a66666a5full,0x5f535f535f30536aull,
0x535f535f535f3053ull,0x5f30535f30535f30ull,0x697370655f5f3053ull,0x0a3078302b6e6f6cull,
0x33732e706c657309ull,0x2c32347225092032ull,0x25202c30202c3120ull,0x092020203b373170ull,
0x746573090a202f2full,0x2e3233752e656e2eull,0x3472250920323375ull,0x2c39337225202c33ull,
0x2f093b3034722520ull,0x2e67656e090a202full,0x3472250920323373ull,0x3b33347225202c34ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x203233622e646e61ull,0x25202c3534722509ull,
0x347225202c323472ull,0x2f09202020203b34ull,0x2e766f6d090a202full,0x3472250920323375ull,
0x2020203b30202c36ull,0x2020202020202020ull,0x090a202f2f092020ull,0x2e71652e70746573ull,
0x3170250920323373ull,0x2c35347225202c38ull,0x2f093b3634722520ull,0x31702540090a202full,
0x2409206172622038ull,0x3330335f305f744cull,0x202020202020203bull,0x200a202f2f092020ull,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x616568202c363532ull,0x656c6562616c2064ull,0x5f305f744c242064ull,0x6f6c2e090a373731ull,
0x3732310935310963ull,0x732e7473090a3009ull,0x31752e6465726168ull,0x316472255b092036ull,
0x7225202c5d302b32ull,0x69202f2f093b3134ull,0x5f20343532313a64ull,0x5f735f616475635full,
0x756f635f7466656cull,0x302b30383132746eull,0x636f6c2e090a3078ull,0x0938323109353109ull,
0x68732e7473090a30ull,0x3631752e64657261ull,0x33316472255b0920ull,0x337225202c5d302bull,
0x6469202f2f093b39ull,0x5f5f20353532313aull,0x725f735f61647563ull,0x756f635f74686769ull,
0x302b34383236746eull,0x636f6c2e090a3078ull,0x0933333109353109ull,0x662e627573090a30ull,
0x3333662509203233ull,0x25202c356625202cull,0x20202020203b3766ull,0x61090a202f2f0920ull,
0x09203233662e7362ull,0x6625202c34336625ull,0x20202020203b3333ull,0x2f2f092020202020ull,
0x662e747663090a20ull,0x09203233662e3436ull,0x6625202c31646625ull,0x20202020203b3433ull,
0x61090a202f2f0920ull,0x09203233662e7362ull,0x6625202c35336625ull,0x2020202020203b37ull,
0x2f2f092020202020ull,0x662e78616d090a20ull,0x3633662509203233ull,0x202c31336625202cull,
0x2020203b35336625ull,0x6d090a202f2f0920ull,0x09203233662e6c75ull,0x6625202c37336625ull,
0x36336625202c3233ull,0x2f2f09202020203bull,0x662e747663090a20ull,0x09203233662e3436ull,
0x6625202c32646625ull,0x20202020203b3733ull,0x6d090a202f2f0920ull,0x09203436662e766full,
0x6430202c33646625ull,0x3438343435363833ull,0x3237653264323339ull,0x2d6535202f2f093bull,
0x2e78616d090a3733ull,0x6466250920343666ull,0x2c32646625202c34ull,0x20203b3364662520ull,
0x090a202f2f092020ull,0x2e656c2e70746573ull,0x3170250920343666ull,0x2c31646625202c39ull,
0x2f093b3464662520ull,0x70252140090a202full,0x0920617262203931ull,0x30335f305f744c24ull,
0x2020202020203b35ull,0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c363532ull,0x656c6562616c2064ull,
0x5f305f744c242064ull,0x6f6c2e090a373731ull,0x3633310935310963ull,0x2e766f6d090a3009ull,
0x3366250920323366ull,0x3030306630202c38ull,0x20203b3030303030ull,0x0a30202f2f092020ull,
0x746c2e7074657309ull,0x702509203233662eull,0x2c376625202c3032ull,0x09203b3833662520ull,
0x766f6d090a202f2full,0x250920646572702eull,0x30327025202c3470ull,0x202020202020203bull,
0x0a202f2f09202020ull,0x6572702e766f6d09ull,0x2c31327025092064ull,0x20203b3232702520ull,
0x0920202020202020ull,0x766f6d090a202f2full,0x662509203233662eull,0x30306630202c3933ull,
0x203b303030303030ull,0x30202f2f09202020ull,0x6c2e70746573090aull,0x2509203233662e74ull,
0x356625202c333270ull,0x203b39336625202cull,0x2140090a202f2f09ull,0x6172622033327025ull,
0x5f305f744c240920ull,0x202020203b373033ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3635322065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x2e090a3737315f30ull,0x3909353109636f6cull,
0x6c6573090a300932ull,0x2509203233732e70ull,0x202c31202c373472ull,0x203b347025202c30ull,
0x0a202f2f09202020ull,0x696e752e61726209ull,0x5f305f744c240920ull,0x202020203b363033ull,
0x0920202020202020ull,0x5f744c240a202f2full,0x200a3a3730335f30ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c363532ull,
0x656c6562616c2064ull,0x5f305f744c242064ull,0x6c6573090a373731ull,0x2509203233732e70ull,
0x202c30202c373472ull,0x3b30327025202c31ull,0x0a202f2f09202020ull,0x30335f305f744c24ull,
0x6c3c2f2f200a3a36ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c36353220656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x0a3737315f305f74ull,
0x353109636f6c2e09ull,0x090a300939333109ull,0x203233662e646461ull,0x25202c3034662509ull,
0x3b376625202c3566ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3466250920323366ull,
0x3066336630202c31ull,0x20203b3030303030ull,0x2e30202f2f092020ull,0x662e6c756d090a35ull,
0x3234662509203233ull,0x202c33336625202cull,0x2020203b31346625ull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x6630202c33346625ull,0x3030303030306633ull,0x2f2f09202020203bull,
0x756d090a352e3020ull,0x2509203233662e6cull,0x346625202c343466ull,0x3b33346625202c30ull,
0x202f2f0920202020ull,0x33662e646461090aull,0x2c35346625092032ull,0x25202c3234662520ull,
0x20202020203b3766ull,0x656e090a202f2f09ull,0x2509203233732e67ull,0x347225202c383472ull,
0x2020202020203b37ull,0x202f2f0920202020ull,0x662e74636c73090aull,0x09203233732e3233ull,
0x6625202c36346625ull,0x35346625202c3434ull,0x093b38347225202cull,0x2e7473090a202f2full,
0x662e646572616873ull,0x6472255b09203233ull,0x25202c5d302b3031ull,0x202f2f093b363466ull,
0x20363532313a6469ull,0x735f616475635f5full,0x3832317466656c5full,0x6c2e090a3078302bull,
0x343109353109636full,0x2e7473090a300930ull,0x662e646572616873ull,0x6472255b09203233ull,
0x25202c5d302b3131ull,0x202f2f093b363466ull,0x20373532313a6469ull,0x735f616475635f5full,
0x323474686769725full,0x090a3078302b3233ull,0x20696e752e617262ull,0x335f305f744c2409ull,
0x20202020203b3430ull,0x2f09202020202020ull,0x305f744c240a202full,0x2f200a3a3530335full,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3220656e696c2079ull,
0x64616568202c3635ull,0x64656c6562616c20ull,0x315f305f744c2420ull,0x636f6c2e090a3737ull,
0x0935343109353109ull,0x68732e7473090a30ull,0x3233662e64657261ull,0x30316472255b0920ull,
0x376625202c5d302bull,0x3a6469202f2f093bull,0x635f5f2038353231ull,0x656c5f735f616475ull,
0x78302b3832317466ull,0x09636f6c2e090a30ull,0x3009363431093531ull,0x6168732e7473090aull,
0x203233662e646572ull,0x2b31316472255b09ull,0x3b356625202c5d30ull,0x313a6469202f2f09ull,
0x75635f5f20393532ull,0x6769725f735f6164ull,0x302b323332347468ull,0x305f744c240a3078ull,
0x2f200a3a3430335full,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3220656e696c2079ull,0x64616568202c3635ull,0x64656c6562616c20ull,0x315f305f744c2420ull,
0x636f6c2e090a3737ull,0x0935313909363109ull,0x752e766f6d090a30ull,0x3468722509203631ull,
0x202020203b31202cull,0x2020202020202020ull,0x73090a202f2f0920ull,0x6465726168732e74ull,
0x255b09203631752eull,0x202c5d322b386472ull,0x2f2f093b34687225ull,0x303632313a646920ull,
0x5f616475635f5f20ull,0x6361706d6f635f73ull,0x73696c5f6e6f6974ull,0x78302b3630323374ull,
0x09636f6c2e090a30ull,0x3009363139093631ull,0x33752e766f6d090aull,0x2c39347225092032ull,
0x20202020203b3120ull,0x2020202020202020ull,0x7473090a202f2f09ull,0x2e6465726168732eull,
0x6f635b0920323375ull,0x65735f746361706dull,0x7568635f646e6f63ull,0x347225202c5d6b6eull,
0x6469202f2f093b39ull,0x6f6320393332313aull,0x65735f746361706dull,0x7568635f646e6f63ull,
0x090a3078302b6b6eull,0x203233752e766f6dull,0x31202c3431722509ull,0x202020202020203bull,
0x2f09202020202020ull,0x2e617262090a202full,0x744c240920696e75ull,0x203b3030335f305full,
0x2020202020202020ull,0x240a202f2f092020ull,0x3330335f305f744cull,0x6f6c3c2f2f200a3aull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c36353220656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x090a3737315f305full,0x09363109636f6c2eull,
0x6d090a3009343239ull,0x09203631752e766full,0x3b30202c35687225ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x68732e7473090a20ull,0x3631752e64657261ull,0x2b386472255b0920ull,
0x35687225202c5d32ull,0x3a6469202f2f093bull,0x635f5f2031363231ull,0x6f635f735f616475ull,
0x6e6f69746361706dull,0x3032337473696c5full,0x40090a3078302b36ull,0x7262203731702521ull,
0x305f744c24092061ull,0x2020203b3930335full,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c36353220656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x090a3737315f305full,0x09353109636f6c2eull,
0x73090a3009373231ull,0x6465726168732e74ull,0x255b09203631752eull,0x2c5d302b32316472ull,
0x2f093b3134722520ull,0x3632313a6469202full,0x616475635f5f2032ull,0x5f7466656c5f735full,
0x383132746e756f63ull,0x2e090a3078302b30ull,0x3109353109636f6cull,0x7473090a30093832ull,
0x2e6465726168732eull,0x72255b0920363175ull,0x202c5d302b333164ull,0x2f2f093b39337225ull,
0x333632313a646920ull,0x5f616475635f5f20ull,0x5f74686769725f73ull,0x383236746e756f63ull,
0x2e090a3078302b34ull,0x3109353109636f6cull,0x7573090a30093333ull,0x2509203233662e62ull,
0x356625202c333366ull,0x20203b376625202cull,0x202f2f0920202020ull,0x33662e736261090aull,
0x2c37346625092032ull,0x20203b3333662520ull,0x2020202020202020ull,0x7663090a202f2f09ull,
0x33662e3436662e74ull,0x2c35646625092032ull,0x20203b3734662520ull,0x202f2f0920202020ull,
0x33662e736261090aull,0x2c38346625092032ull,0x2020203b37662520ull,0x2020202020202020ull,
0x616d090a202f2f09ull,0x2509203233662e78ull,0x336625202c393466ull,0x3b38346625202c31ull,
0x202f2f0920202020ull,0x33662e6c756d090aull,0x2c30356625092032ull,0x25202c3233662520ull,
0x202020203b393466ull,0x7663090a202f2f09ull,0x33662e3436662e74ull,0x2c36646625092032ull,
0x20203b3035662520ull,0x202f2f0920202020ull,0x36662e766f6d090aull,0x2c37646625092034ull,
0x3435363833643020ull,0x3264323339343834ull,0x202f2f093b323765ull,0x6d090a37332d6535ull,
0x09203436662e7861ull,0x6625202c38646625ull,0x37646625202c3664ull,0x2f2f09202020203bull,
0x2e70746573090a20ull,0x09203436662e656cull,0x6625202c34327025ull,0x38646625202c3564ull,
0x40090a202f2f093bull,0x7262203432702521ull,0x305f744c24092061ull,0x2020203b3131335full,
0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x202c36353220656eull,0x62616c2064616568ull,0x744c242064656c65ull,
0x090a3737315f305full,0x09353109636f6c2eull,0x6d090a3009363331ull,0x09203233662e766full,
0x6630202c31356625ull,0x3030303030303030ull,0x2f2f09202020203bull,0x70746573090a3020ull,
0x203233662e746c2eull,0x25202c3032702509ull,0x31356625202c3766ull,0x090a202f2f09203bull,
0x646572702e766f6dull,0x25202c3470250920ull,0x202020203b303270ull,0x2f09202020202020ull,
0x2e766f6d090a202full,0x7025092064657270ull,0x32327025202c3532ull,0x202020202020203bull,
0x090a202f2f092020ull,0x203233662e766f6dull,0x30202c3235662509ull,0x3030303030303066ull,
0x2f09202020203b30ull,0x746573090a30202full,0x3233662e746c2e70ull,0x202c363270250920ull,
0x356625202c356625ull,0x0a202f2f09203b32ull,0x2036327025214009ull,0x744c240920617262ull,
0x203b3331335f305full,0x0920202020202020ull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x36353220656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3737315f305f744cull,0x3109636f6c2e090aull,0x090a300932390935ull,
0x3233732e706c6573ull,0x202c303572250920ull,0x7025202c30202c31ull,0x2f09202020203b34ull,
0x2e617262090a202full,0x744c240920696e75ull,0x203b3231335f305full,0x2020202020202020ull,
0x240a202f2f092020ull,0x3331335f305f744cull,0x6f6c3c2f2f200a3aull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c36353220656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x090a3737315f305full,0x3233732e706c6573ull,0x202c303572250920ull,
0x7025202c31202c30ull,0x2f092020203b3032ull,0x305f744c240a202full,0x2f200a3a3231335full,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3220656e696c2079ull,
0x64616568202c3635ull,0x64656c6562616c20ull,0x315f305f744c2420ull,0x636f6c2e090a3737ull,
0x0939333109353109ull,0x662e646461090a30ull,0x3335662509203233ull,0x25202c356625202cull,
0x20202020203b3766ull,0x6d090a202f2f0920ull,0x09203233662e766full,0x6630202c34356625ull,
0x3030303030306633ull,0x2f2f09202020203bull,0x756d090a352e3020ull,0x2509203233662e6cull,
0x336625202c353566ull,0x3b34356625202c33ull,0x202f2f0920202020ull,0x33662e766f6d090aull,
0x2c36356625092032ull,0x3030306633663020ull,0x202020203b303030ull,0x0a352e30202f2f09ull,
0x3233662e6c756d09ull,0x202c373566250920ull,0x6625202c33356625ull,0x09202020203b3635ull,
0x646461090a202f2full,0x662509203233662eull,0x35356625202c3835ull,0x20203b376625202cull,
0x0a202f2f09202020ull,0x3233732e67656e09ull,0x202c313572250920ull,0x2020203b30357225ull,
0x0920202020202020ull,0x636c73090a202f2full,0x33732e3233662e74ull,0x2c39356625092032ull,
0x25202c3735662520ull,0x357225202c383566ull,0x090a202f2f093b31ull,0x65726168732e7473ull,
0x5b09203233662e64ull,0x5d302b3031647225ull,0x093b39356625202cull,0x32313a6469202f2full,
0x6475635f5f203436ull,0x7466656c5f735f61ull,0x0a3078302b383231ull,0x353109636f6c2e09ull,
0x090a300930343109ull,0x65726168732e7473ull,0x5b09203233662e64ull,0x5d302b3131647225ull,
0x093b39356625202cull,0x32313a6469202f2full,0x6475635f5f203536ull,0x686769725f735f61ull,
0x78302b3233323474ull,0x752e617262090a30ull,0x5f744c240920696eull,0x20203b3431335f30ull,
0x2020202020202020ull,0x4c240a202f2f0920ull,0x3a3131335f305f74ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3635322065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x2e090a3737315f30ull,0x3109353109636f6cull,
0x7473090a30093534ull,0x2e6465726168732eull,0x72255b0920323366ull,0x202c5d302b303164ull,
0x202f2f093b376625ull,0x20363632313a6469ull,0x735f616475635f5full,0x3832317466656c5full,
0x6c2e090a3078302bull,0x343109353109636full,0x2e7473090a300936ull,0x662e646572616873ull,
0x6472255b09203233ull,0x25202c5d302b3131ull,0x69202f2f093b3566ull,0x5f20373632313a64ull,
0x5f735f616475635full,0x3332347468676972ull,0x62090a3078302b32ull,0x0920696e752e6172ull,
0x31335f305f744c24ull,0x2020202020203b34ull,0x2f2f092020202020ull,0x5f305f744c240a20ull,
0x2f2f200a3a393033ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x353220656e696c20ull,0x2064616568202c36ull,0x2064656c6562616cull,0x37315f305f744c24ull,
0x09636f6c2e090a37ull,0x3009373231093531ull,0x6168732e7473090aull,0x203631752e646572ull,
0x2b32316472255b09ull,0x39337225202c5d30ull,0x3a6469202f2f093bull,0x635f5f2038363231ull,
0x656c5f735f616475ull,0x746e756f635f7466ull,0x3078302b30383132ull,0x3109636f6c2e090aull,
0x0a30093832310935ull,0x726168732e747309ull,0x09203631752e6465ull,0x302b33316472255bull,
0x3b30347225202c5dull,0x313a6469202f2f09ull,0x75635f5f20393632ull,0x6769725f735f6164ull,
0x746e756f635f7468ull,0x3078302b34383236ull,0x3109636f6c2e090aull,0x0a30093333310935ull,
0x3233662e62757309ull,0x202c303666250920ull,0x356625202c366625ull,0x092020202020203bull,
0x736261090a202f2full,0x662509203233662eull,0x30366625202c3136ull,0x202020202020203bull,
0x0a202f2f09202020ull,0x3436662e74766309ull,0x662509203233662eull,0x31366625202c3964ull,
0x092020202020203bull,0x736261090a202f2full,0x662509203233662eull,0x3b366625202c3236ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x3233662e78616d09ull,0x202c333666250920ull,
0x6625202c31336625ull,0x09202020203b3236ull,0x6c756d090a202f2full,0x662509203233662eull,
0x32336625202c3436ull,0x203b33366625202cull,0x0a202f2f09202020ull,0x3436662e74766309ull,
0x662509203233662eull,0x366625202c303164ull,0x0920202020203b34ull,0x766f6d090a202f2full,
0x662509203436662eull,0x336430202c313164ull,0x3934383434353638ull,0x3b32376532643233ull,
0x332d6535202f2f09ull,0x662e78616d090a37ull,0x3164662509203436ull,0x3031646625202c32ull,
0x3b3131646625202cull,0x73090a202f2f0920ull,0x662e656c2e707465ull,0x3732702509203436ull,
0x202c39646625202cull,0x2f093b3231646625ull,0x70252140090a202full,0x0920617262203732ull,
0x31335f305f744c24ull,0x2020202020203b35ull,0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c363532ull,
0x656c6562616c2064ull,0x5f305f744c242064ull,0x6f6c2e090a373731ull,0x3633310935310963ull,
0x2e766f6d090a3009ull,0x3666250920323366ull,0x3030306630202c35ull,0x20203b3030303030ull,
0x0a30202f2f092020ull,0x746c2e7074657309ull,0x702509203233662eull,0x2c356625202c3832ull,
0x09203b3536662520ull,0x766f6d090a202f2full,0x250920646572702eull,0x327025202c393270ull,
0x2020202020203b38ull,0x0a202f2f09202020ull,0x6572702e766f6d09ull,0x2c30337025092064ull,
0x20203b3133702520ull,0x0920202020202020ull,0x766f6d090a202f2full,0x662509203233662eull,
0x30306630202c3636ull,0x203b303030303030ull,0x30202f2f09202020ull,0x6c2e70746573090aull,
0x2509203233662e74ull,0x366625202c323370ull,0x203b36366625202cull,0x2140090a202f2f09ull,
0x6172622032337025ull,0x5f305f744c240920ull,0x202020203b373133ull,0x202f2f0920202020ull,
0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,
0x68202c3635322065ull,0x6562616c20646165ull,0x5f744c242064656cull,0x2e090a3737315f30ull,
0x3909353109636f6cull,0x6c6573090a300932ull,0x2509203233732e70ull,0x202c31202c323572ull,
0x3b39327025202c30ull,0x0a202f2f09202020ull,0x696e752e61726209ull,0x5f305f744c240920ull,
0x202020203b363133ull,0x0920202020202020ull,0x5f744c240a202f2full,0x200a3a3731335f30ull,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x616568202c363532ull,0x656c6562616c2064ull,0x5f305f744c242064ull,0x6c6573090a373731ull,
0x2509203233732e70ull,0x202c30202c323572ull,0x3b38327025202c31ull,0x0a202f2f09202020ull,
0x31335f305f744c24ull,0x6c3c2f2f200a3a36ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c36353220656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x0a3737315f305f74ull,0x353109636f6c2e09ull,0x090a300939333109ull,0x203233662e646461ull,
0x25202c3736662509ull,0x3b366625202c3566ull,0x2f09202020202020ull,0x2e766f6d090a202full,
0x3666250920323366ull,0x3066336630202c38ull,0x20203b3030303030ull,0x2e30202f2f092020ull,
0x662e6c756d090a35ull,0x3936662509203233ull,0x202c30366625202cull,0x2020203b38366625ull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x6630202c30376625ull,0x3030303030306633ull,
0x2f2f09202020203bull,0x756d090a352e3020ull,0x2509203233662e6cull,0x366625202c313766ull,
0x3b30376625202c37ull,0x202f2f0920202020ull,0x33662e646461090aull,0x2c32376625092032ull,
0x25202c3936662520ull,0x20202020203b3566ull,0x656e090a202f2f09ull,0x2509203233732e67ull,
0x357225202c333572ull,0x2020202020203b32ull,0x202f2f0920202020ull,0x662e74636c73090aull,
0x09203233732e3233ull,0x6625202c33376625ull,0x32376625202c3137ull,0x093b33357225202cull,
0x2e7473090a202f2full,0x662e646572616873ull,0x6472255b09203233ull,0x25202c5d302b3031ull,
0x202f2f093b333766ull,0x20303732313a6469ull,0x735f616475635f5full,0x3832317466656c5full,
0x6c2e090a3078302bull,0x343109353109636full,0x2e7473090a300930ull,0x662e646572616873ull,
0x6472255b09203233ull,0x25202c5d302b3131ull,0x202f2f093b333766ull,0x20313732313a6469ull,
0x735f616475635f5full,0x323474686769725full,0x090a3078302b3233ull,0x20696e752e617262ull,
0x335f305f744c2409ull,0x20202020203b3431ull,0x2f09202020202020ull,0x305f744c240a202full,
0x2f200a3a3531335full,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3220656e696c2079ull,0x64616568202c3635ull,0x64656c6562616c20ull,0x315f305f744c2420ull,
0x636f6c2e090a3737ull,0x0935343109353109ull,0x68732e7473090a30ull,0x3233662e64657261ull,
0x30316472255b0920ull,0x356625202c5d302bull,0x3a6469202f2f093bull,0x635f5f2032373231ull,
0x656c5f735f616475ull,0x78302b3832317466ull,0x09636f6c2e090a30ull,0x3009363431093531ull,
0x6168732e7473090aull,0x203233662e646572ull,0x2b31316472255b09ull,0x3b366625202c5d30ull,
0x313a6469202f2f09ull,0x75635f5f20333732ull,0x6769725f735f6164ull,0x302b323332347468ull,
0x305f744c240a3078ull,0x4c240a3a3431335full,0x3a3830335f305f74ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3635322065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x2e090a3737315f30ull,0x3909363109636f6cull,
0x6f6d090a30093233ull,0x2509203233752e76ull,0x203b30202c343172ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x6e752e617262090aull,0x305f744c24092069ull,0x2020203b3030335full,
0x2020202020202020ull,0x744c240a202f2f09ull,0x0a3a3130335f305full,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c36353220ull,
0x6c6562616c206461ull,0x305f744c24206465ull,0x6c2e090a3737315full,0x313309363109636full,
0x2e7473090a300938ull,0x662e646572616873ull,0x6472255b09203233ull,0x25202c5d302b3031ull,
0x69202f2f093b3766ull,0x5f20343732313a64ull,0x5f735f616475635full,0x2b3832317466656cull,
0x6f6c2e090a307830ull,0x3931330936310963ull,0x732e7473090a3009ull,0x33662e6465726168ull,
0x316472255b092032ull,0x6625202c5d302b31ull,0x6469202f2f093b37ull,0x5f5f20353732313aull,
0x725f735f61647563ull,0x3233323474686769ull,0x6c2e090a3078302bull,0x323309363109636full,
0x2e7473090a300930ull,0x752e646572616873ull,0x6472255b09203631ull,0x25202c5d302b3231ull,
0x69202f2f093b3172ull,0x5f20363732313a64ull,0x5f735f616475635full,0x756f635f7466656cull,
0x302b30383132746eull,0x636f6c2e090a3078ull,0x0931323309363109ull,0x68732e7473090a30ull,
0x3631752e64657261ull,0x33316472255b0920ull,0x337225202c5d302bull,0x3a6469202f2f093bull,
0x635f5f2037373231ull,0x69725f735f616475ull,0x6e756f635f746867ull,0x78302b3438323674ull,
0x09636f6c2e090a30ull,0x3009333233093631ull,0x33752e766f6d090aull,0x2c34317225092032ull,
0x20202020203b3020ull,0x2020202020202020ull,0x744c240a202f2f09ull,0x0a3a3030335f305full,
0x39325f305f744c24ull,0x6c3c2f2f200a3a38ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c36353220656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x0a3737315f305f74ull,0x363109636f6c2e09ull,0x090a300938323309ull,0x636e79732e726162ull,
0x202020203b300920ull,0x2020202020202020ull,0x2f09202020202020ull,0x732e646c090a202full,
0x33752e6465726168ull,0x2c34357225092032ull,0x6361706d6f635b20ull,0x646e6f6365735f74ull,
0x3b5d6b6e7568635full,0x313a6469202f2f09ull,0x706d6f6320393332ull,0x6f6365735f746361ull,
0x6b6e7568635f646eull,0x6f6d090a3078302bull,0x2509203233752e76ull,0x203b30202c353572ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x652e70746573090aull,0x2509203233752e71ull,
0x357225202c333370ull,0x3b35357225202c34ull,0x2540090a202f2f09ull,0x2061726220333370ull,
0x335f305f744c2409ull,0x20202020203b3233ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3635322065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x2e090a3737315f30ull,0x3309363109636f6cull,
0x646c090a30093633ull,0x2e6465726168732eull,0x3572250920323375ull,0x5f6d756e5b202c36ull,
0x5f73646165726874ull,0x69746361706d6f63ull,0x202f2f093b5d6e6full,0x20303432313a6469ull,
0x657268745f6d756eull,0x706d6f635f736461ull,0x302b6e6f69746361ull,0x636f6c2e090a3078ull,
0x0937363309353109ull,0x752e726873090a30ull,0x3735722509203233ull,0x202c36357225202cull,
0x2020202020203b31ull,0x6d090a202f2f0920ull,0x09203233732e766full,0x7225202c38357225ull,
0x20202020203b3735ull,0x2f2f092020202020ull,0x752e766f6d090a20ull,0x3935722509203233ull,
0x202020203b30202cull,0x2020202020202020ull,0x73090a202f2f0920ull,0x732e656c2e707465ull,
0x3433702509203233ull,0x202c37357225202cull,0x2f2f093b39357225ull,0x752e766f6d090a20ull,
0x3036722509203233ull,0x202020203b31202cull,0x2020202020202020ull,0x40090a202f2f0920ull,
0x6172622034337025ull,0x5f305f744c240920ull,0x202020203b343334ull,0x2f2f092020202020ull,
0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,
0x202c36353220656eull,0x62616c2064616568ull,0x744c242064656c65ull,0x090a3737315f305full,
0x203436752e646461ull,0x202c333264722509ull,0x3b32202c33647225ull,0x2f09202020202020ull,
0x305f744c240a202full,0x2f200a3a3232335full,0x203e706f6f6c3c2full,0x646f6220706f6f4cull,
0x3320656e696c2079ull,0x636f6c2e090a3936ull,0x0939363309353109ull,0x732e726162090a30ull,
0x203b300920636e79ull,0x2020202020202020ull,0x2020202020202020ull,0x73090a202f2f0920ull,
0x752e656c2e707465ull,0x3533702509203233ull,0x202c38357225202cull,0x2f2f09203b357225ull,
0x3533702540090a20ull,0x4c24092061726220ull,0x3b3332335f305f74ull,0x2020202020202020ull,
0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3320656e696c2079ull,0x64616568202c3936ull,0x64656c6562616c20ull,0x335f305f744c2420ull,
0x636f6c2e090a3232ull,0x0936373309353109ull,0x34326c756d090a30ull,0x203233752e6f6c2eull,
0x25202c3136722509ull,0x20203b32202c3572ull,0x61090a202f2f0920ull,0x09203233752e6464ull,
0x7225202c32367225ull,0x20203b32202c3136ull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,
0x2509203233752e6full,0x367225202c333672ull,0x3b30367225202c32ull,0x63090a202f2f0920ull,
0x752e3436752e7476ull,0x3264722509203233ull,0x3b33367225202c34ull,0x2f2f092020202020ull,
0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c35326472ull,0x203b32202c343264ull,
0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3632647225ull,0x647225202c336472ull,
0x2f2f0920203b3532ull,0x752e646461090a20ull,0x3264722509203436ull,0x3632647225202c37ull,
0x333939383538202cull,0x2f2f093b32393534ull,0x68732e646c090a20ull,0x3631752e64657261ull,
0x202c366872250920ull,0x302b37326472255bull,0x6469202f2f093b5dull,0x5f5f20393732313aull,
0x635f735f61647563ull,0x6f69746361706d6full,0x32337473696c5f6eull,0x090a3078302b3630ull,
0x203233752e646461ull,0x25202c3436722509ull,0x203b31202c313672ull,0x2f09202020202020ull,
0x2e6c756d090a202full,0x09203233752e6f6cull,0x7225202c35367225ull,0x34367225202c3036ull,
0x090a202f2f09203bull,0x2e3436752e747663ull,0x6472250920323375ull,0x35367225202c3832ull,
0x2f0920202020203bull,0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3932647225ull,
0x3b32202c38326472ull,0x090a202f2f092020ull,0x203436752e646461ull,0x202c303364722509ull,
0x7225202c33647225ull,0x2f0920203b393264ull,0x2e646461090a202full,0x6472250920343675ull,
0x33647225202c3133ull,0x3939383538202c30ull,0x2f093b3239353433ull,0x732e646c090a202full,
0x31752e6465726168ull,0x2c37687225092036ull,0x2b31336472255b20ull,0x69202f2f093b5d30ull,
0x5f20383732313a64ull,0x5f735f616475635full,0x69746361706d6f63ull,0x337473696c5f6e6full,
0x0a3078302b363032ull,0x3631752e64646109ull,0x202c386872250920ull,0x7225202c36687225ull,
0x09202020203b3768ull,0x2e7473090a202f2full,0x752e646572616873ull,0x6472255b09203631ull,
0x25202c5d302b3732ull,0x202f2f093b386872ull,0x20303832313a6469ull,0x735f616475635f5full,
0x746361706d6f635full,0x7473696c5f6e6f69ull,0x3078302b36303233ull,0x335f305f744c240aull,
0x3c2f2f200a3a3332ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x39363320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,0x3232335f305f744cull,
0x3109636f6c2e090aull,0x0a30093038330935ull,0x3233622e6c687309ull,0x202c303672250920ull,
0x3b31202c30367225ull,0x0920202020202020ull,0x6f6c2e090a202f2full,0x3736330935310963ull,
0x2e726873090a3009ull,0x3572250920323373ull,0x2c38357225202c38ull,0x20202020203b3120ull,
0x090a202f2f092020ull,0x203233752e766f6dull,0x30202c3636722509ull,0x202020202020203bull,
0x2f09202020202020ull,0x70746573090a202full,0x203233732e74672eull,0x25202c3633702509ull,
0x367225202c383572ull,0x090a202f2f093b36ull,0x7262203633702540ull,0x305f744c24092061ull,
0x2020203b3232335full,0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c36353220656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x0a3737315f305f74ull,0x696e752e61726209ull,0x5f305f744c240920ull,
0x202020203b303233ull,0x0920202020202020ull,0x5f744c240a202f2full,0x200a3a3433345f30ull,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x616568202c363532ull,0x656c6562616c2064ull,0x5f305f744c242064ull,0x5f744c240a373731ull,
0x200a3a3032335f30ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c363532ull,0x656c6562616c2064ull,0x5f305f744c242064ull,
0x766f6d090a373731ull,0x722509203233752eull,0x20203b32202c3736ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x656c2e7074657309ull,0x702509203233752eull,0x36357225202c3733ull,
0x093b37367225202cull,0x702540090a202f2full,0x0920617262203733ull,0x32335f305f744c24ull,
0x2020202020203b36ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c36353220ull,0x6c6562616c206461ull,
0x305f744c24206465ull,0x6461090a3737315full,0x2509203436752e64ull,0x7225202c33326472ull,
0x20203b32202c3364ull,0x202f2f0920202020ull,0x33732e766f6d090aull,0x2c38367225092032ull,
0x20202020203b3220ull,0x2020202020202020ull,0x744c240a202f2f09ull,0x0a3a3832335f305full,
0x706f6f6c3c2f2f20ull,0x6220706f6f4c203eull,0x656e696c2079646full,0x656e202c37363320ull,
0x656420676e697473ull,0x202c31203a687470ull,0x6574616d69747365ull,0x7461726574692064ull,
0x6e75203a736e6f69ull,0x2e090a6e776f6e6bull,0x3309353109636f6cull,0x6873090a30093638ull,
0x2509203233752e72ull,0x367225202c303672ull,0x2020203b31202c30ull,0x202f2f0920202020ull,
0x3109636f6c2e090aull,0x0a30093738330935ull,0x6e79732e72616209ull,0x2020203b30092063ull,
0x2020202020202020ull,0x0920202020202020ull,0x627573090a202f2full,0x722509203233752eull,
0x38367225202c3936ull,0x202020203b31202cull,0x0a202f2f09202020ull,0x65672e7074657309ull,
0x702509203233752eull,0x2c357225202c3833ull,0x09203b3936722520ull,0x702540090a202f2full,
0x0920617262203833ull,0x32335f305f744c24ull,0x2020202020203b39ull,0x0a202f2f09202020ull,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c37363320ull,0x6c6562616c206461ull,0x305f744c24206465ull,0x6c2e090a3832335full,
0x393309353109636full,0x726873090a300934ull,0x722509203233752eull,0x30367225202c3037ull,
0x202020203b31202cull,0x0a202f2f09202020ull,0x3233752e64646109ull,0x202c313772250920ull,
0x203b31202c357225ull,0x0920202020202020ull,0x6c756d090a202f2full,0x203233752e6f6c2eull,
0x25202c3237722509ull,0x367225202c313772ull,0x0a202f2f09203b30ull,0x3233752e64646109ull,
0x202c333772250920ull,0x7225202c30377225ull,0x09202020203b3237ull,0x747663090a202f2full,
0x3233752e3436752eull,0x2c32336472250920ull,0x20203b3337722520ull,0x0a202f2f09202020ull,
0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x33647225202c3333ull,0x0920203b32202c32ull,
0x646461090a202f2full,0x722509203436752eull,0x647225202c343364ull,0x3333647225202c33ull,
0x0a202f2f0920203bull,0x3436752e64646109ull,0x2c35336472250920ull,0x202c343364722520ull,
0x3534333939383538ull,0x0a202f2f093b3239ull,0x726168732e646c09ull,0x09203631752e6465ull,
0x255b202c39687225ull,0x3b5d302b35336472ull,0x313a6469202f2f09ull,0x75635f5f20313832ull,
0x6d6f635f735f6164ull,0x5f6e6f6974636170ull,0x363032337473696cull,0x7663090a3078302bull,
0x33752e3436752e74ull,0x3633647225092032ull,0x203b32377225202cull,0x202f2f0920202020ull,
0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c373364ull,0x20203b32202c3633ull,
0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c38336472ull,0x33647225202c3364ull,
0x202f2f0920203b37ull,0x36752e646461090aull,0x3933647225092034ull,0x2c3833647225202cull,
0x3433393938353820ull,0x202f2f093b323935ull,0x6168732e646c090aull,0x203631752e646572ull,
0x202c303168722509ull,0x302b39336472255bull,0x6469202f2f093b5dull,0x5f5f20323832313aull,
0x635f735f61647563ull,0x6f69746361706d6full,0x32337473696c5f6eull,0x090a3078302b3630ull,
0x203631752e646461ull,0x202c313168722509ull,0x7225202c39687225ull,0x2f0920203b303168ull,
0x732e7473090a202full,0x31752e6465726168ull,0x336472255b092036ull,0x7225202c5d302b35ull,
0x202f2f093b313168ull,0x20333832313a6469ull,0x735f616475635f5full,0x746361706d6f635full,
0x7473696c5f6e6f69ull,0x3078302b36303233ull,0x335f305f744c240aull,0x3c2f2f200a3a3932ull,
0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,0x37363320656e696cull,
0x6c2064616568202cull,0x242064656c656261ull,0x3832335f305f744cull,0x3109636f6c2e090aull,
0x0a30093438330935ull,0x3233622e6c687309ull,0x202c383672250920ull,0x3b31202c38367225ull,
0x0920202020202020ull,0x746573090a202f2full,0x3233752e746c2e70ull,0x202c393370250920ull,
0x7225202c38367225ull,0x0a202f2f093b3635ull,0x6220393370254009ull,0x5f744c2409206172ull,
0x20203b3832335f30ull,0x0920202020202020ull,0x5f744c240a202f2full,0x200a3a3632335f30ull,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x616568202c363532ull,0x656c6562616c2064ull,0x5f305f744c242064ull,0x6f6c2e090a373731ull,
0x3939330935310963ull,0x2e726162090a3009ull,0x3b300920636e7973ull,0x2020202020202020ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x09363109636f6c2eull,0x6c090a3009383333ull,
0x6465726168732e64ull,0x722509203233752eull,0x6d756e5b202c3437ull,0x736461657268745full,
0x5d6576697463615full,0x3a6469202f2f093bull,0x6d756e2038313231ull,0x736461657268745full,
0x2b6576697463615full,0x766f6d090a307830ull,0x722509203233752eull,0x20203b31202c3537ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x2e71652e74657309ull,0x203233752e323375ull,
0x25202c3637722509ull,0x377225202c343172ull,0x090a202f2f093b35ull,0x203233732e67656eull,
0x25202c3737722509ull,0x202020203b363772ull,0x2f09202020202020ull,0x2e746573090a202full,
0x752e3233752e7467ull,0x3837722509203233ull,0x202c34377225202cull,0x202f2f093b357225ull,
0x33732e67656e090aull,0x2c39377225092032ull,0x20203b3837722520ull,0x2020202020202020ull,
0x6e61090a202f2f09ull,0x2509203233622e64ull,0x377225202c303872ull,0x3b39377225202c37ull,
0x202f2f0920202020ull,0x33752e766f6d090aull,0x2c31387225092032ull,0x20202020203b3020ull,
0x2020202020202020ull,0x6573090a202f2f09ull,0x33732e71652e7074ull,0x2c30347025092032ull,
0x25202c3038722520ull,0x202f2f093b313872ull,0x203034702540090aull,0x744c240920617262ull,
0x203b3233335f305full,0x2020202020202020ull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x353220656e696c20ull,0x2064616568202c36ull,
0x2064656c6562616cull,0x37315f305f744c24ull,0x09636f6c2e090a37ull,0x3009373334093531ull,
0x6168732e646c090aull,0x203631752e646572ull,0x5b202c3238722509ull,0x3b5d302b38647225ull,
0x313a6469202f2f09ull,0x75635f5f20343832ull,0x6d6f635f735f6164ull,0x5f6e6f6974636170ull,
0x363032337473696cull,0x6c2e090a3078302bull,0x333309363109636full,0x2e646c090a300938ull,
0x752e646572616873ull,0x3437722509203233ull,0x745f6d756e5b202cull,0x615f736461657268ull,
0x093b5d6576697463ull,0x6f6c2e090a202f2full,0x3733340935310963ull,0x2e646461090a3009ull,
0x3872250920323375ull,0x2c34377225202c33ull,0x20203b3238722520ull,0x090a202f2f092020ull,
0x09353109636f6c2eull,0x63090a3009393334ull,0x752e3436752e7476ull,0x3464722509203233ull,
0x3b33387225202c30ull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,
0x7225202c31346472ull,0x203b34202c303464ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x25202c3234647225ull,0x7225202c31346472ull,0x2f2f0920203b3164ull,0x68732e7473090a20ull,
0x3233662e64657261ull,0x32346472255b0920ull,0x356625202c5d302bull,0x3a6469202f2f093bull,
0x635f5f2035383231ull,0x656c5f735f616475ull,0x78302b3832317466ull,0x09636f6c2e090a30ull,
0x3009303434093531ull,0x36752e646461090aull,0x3334647225092034ull,0x2c3134647225202cull,
0x20203b3464722520ull,0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,
0x202c5d302b333464ull,0x202f2f093b366625ull,0x20363832313a6469ull,0x735f616475635f5full,
0x323474686769725full,0x090a3078302b3233ull,0x09353109636f6c2eull,0x6d090a3009313434ull,
0x36752e6f6c2e6c75ull,0x3434647225092034ull,0x2c3034647225202cull,0x2f2f0920203b3220ull,
0x752e646461090a20ull,0x3464722509203436ull,0x3434647225202c35ull,0x203b32647225202cull,
0x73090a202f2f0920ull,0x6465726168732e74ull,0x255b09203631752eull,0x2c5d302b35346472ull,
0x2f093b3832722520ull,0x3832313a6469202full,0x616475635f5f2037ull,0x5f7466656c5f735full,
0x383132746e756f63ull,0x2e090a3078302b30ull,0x3409353109636f6cull,0x6461090a30093234ull,
0x2509203436752e64ull,0x7225202c36346472ull,0x647225202c343464ull,0x202f2f0920203b35ull,
0x6168732e7473090aull,0x203631752e646572ull,0x2b36346472255b09ull,0x3b337225202c5d30ull,
0x313a6469202f2f09ull,0x75635f5f20383832ull,0x6769725f735f6164ull,0x746e756f635f7468ull,
0x3078302b34383236ull,0x335f305f744c240aull,0x5f744c240a3a3233ull,0x200a3a3831335f30ull,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x616568202c363532ull,0x656c6562616c2064ull,0x5f305f744c242064ull,0x6f6c2e090a373731ull,
0x3434330936310963ull,0x2e726162090a3009ull,0x3b300920636e7973ull,0x2020202020202020ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x7262203170252140ull,0x305f744c24092061ull,
0x2020203b3433335full,0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c36353220656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x0a3737315f305f74ull,0x363109636f6c2e09ull,0x090a300930353309ull,
0x65726168732e646cull,0x2509203233752e64ull,0x756e5b202c343772ull,0x6461657268745f6dull,
0x6576697463615f73ull,0x6469202f2f093b5dull,0x756e20383132313aull,0x6461657268745f6dull,
0x6576697463615f73ull,0x7663090a3078302bull,0x33752e3436752e74ull,0x3734647225092032ull,
0x203b34377225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,
0x647225202c383464ull,0x20203b32202c3734ull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x7225202c39346472ull,0x34647225202c3364ull,0x202f2f0920203b38ull,0x6168732e646c090aull,
0x203631752e646572ull,0x5b202c3438722509ull,0x5d302b3934647225ull,0x3a6469202f2f093bull,
0x635f5f2039383231ull,0x6f635f735f616475ull,0x6e6f69746361706dull,0x3032337473696c5full,
0x61090a3078302b36ull,0x09203233752e6464ull,0x7225202c34377225ull,0x34387225202c3437ull,
0x2f2f09202020203bull,0x68732e7473090a20ull,0x3233752e64657261ull,0x745f6d756e5b0920ull,
0x615f736461657268ull,0x202c5d6576697463ull,0x2f2f093b34377225ull,0x383132313a646920ull,
0x7268745f6d756e20ull,0x7463615f73646165ull,0x0a3078302b657669ull,0x363109636f6c2e09ull,
0x090a300931353309ull,0x203233732e627573ull,0x25202c3538722509ull,0x203b31202c343772ull,
0x2f09202020202020ull,0x2e646e61090a202full,0x3872250920323362ull,0x2c34377225202c36ull,
0x20203b3538722520ull,0x090a202f2f092020ull,0x203233752e766f6dull,0x30202c3738722509ull,
0x202020202020203bull,0x2f09202020202020ull,0x70746573090a202full,0x203233732e656e2eull,
0x25202c3134702509ull,0x387225202c363872ull,0x090a202f2f093b37ull,0x7262203134702540ull,
0x305f744c24092061ull,0x2020203b3633335full,0x2f09202020202020ull,0x6c3c2f2f200a202full,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c36353220656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x0a3737315f305f74ull,0x3233732e766f6d09ull,
0x202c383872250920ull,0x2020203b34377225ull,0x0920202020202020ull,0x617262090a202f2full,
0x4c240920696e752eull,0x20203b325f305f74ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x33335f305f744c24ull,0x6c3c2f2f200a3a36ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c36353220656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x0a3737315f305f74ull,0x393109636f6c2e09ull,0x090a300930393209ull,0x662e6e722e747663ull,
0x09203233732e3233ull,0x7225202c34376625ull,0x2f092020203b3437ull,0x2e766f6d090a202full,
0x3766250920323366ull,0x3b34376625202c35ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x09323209636f6c2eull,0x090a300932383332ull,0x203233662e736261ull,0x25202c3637662509ull,
0x202020203b343766ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3766250920323366ull,
0x3830306630202c37ull,0x20203b3030303030ull,0x2e31202f2f092020ull,0x332d653934353731ull,
0x2e70746573090a38ull,0x09203233662e746cull,0x6625202c32347025ull,0x37376625202c3637ull,
0x40090a202f2f093bull,0x7262203234702521ull,0x305f744c24092061ull,0x2020203b3933335full,
0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x202c36353220656eull,0x62616c2064616568ull,0x744c242064656c65ull,
0x090a3737315f305full,0x09323209636f6c2eull,0x090a300937383332ull,0x203233662e766f6dull,
0x30202c3837662509ull,0x3030303038623466ull,0x2f09202020203b30ull,0x373737362e31202full,
0x6d090a37302b6532ull,0x09203233662e6c75ull,0x6625202c35376625ull,0x38376625202c3437ull,
0x2f2f09202020203bull,0x752e766f6d090a20ull,0x3938722509203233ull,0x2020203b3432202cull,
0x2020202020202020ull,0x62090a202f2f0920ull,0x0920696e752e6172ull,0x33335f305f744c24ull,
0x2020202020203b38ull,0x2f2f092020202020ull,0x5f305f744c240a20ull,0x2f2f200a3a393333ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x353220656e696c20ull,
0x2064616568202c36ull,0x2064656c6562616cull,0x37315f305f744c24ull,0x09636f6c2e090a37ull,
0x0930393332093232ull,0x752e766f6d090a30ull,0x3938722509203233ull,0x202020203b30202cull,
0x2020202020202020ull,0x4c240a202f2f0920ull,0x3a3833335f305f74ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3635322065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x2e090a3737315f30ull,0x3709353109636f6cull,
0x766f6d090a300937ull,0x722509203233622eull,0x35376625202c3039ull,0x202020202020203bull,
0x0a202f2f09202020ull,0x3233732e72687309ull,0x202c313972250920ull,0x3332202c30397225ull,
0x092020202020203bull,0x646e61090a202f2full,0x722509203233622eull,0x31397225202c3239ull,
0x20203b353532202cull,0x0a202f2f09202020ull,0x3233752e766f6d09ull,0x202c333972250920ull,
0x2020202020203b30ull,0x0920202020202020ull,0x627573090a202f2full,0x722509203233752eull,
0x32397225202c3439ull,0x203b39387225202cull,0x0a202f2f09202020ull,0x3233752e62757309ull,
0x202c353972250920ull,0x3231202c34397225ull,0x0920202020203b36ull,0x766f6d090a202f2full,
0x722509203233752eull,0x3b353532202c3639ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x2e71652e74657309ull,0x203233752e323375ull,0x25202c3739722509ull,0x397225202c323972ull,
0x090a202f2f093b36ull,0x203233732e67656eull,0x25202c3839722509ull,0x202020203b373972ull,
0x2f09202020202020ull,0x2e766f6d090a202full,0x3766250920323366ull,0x3030306630202c39ull,
0x20203b3030303030ull,0x0a30202f2f092020ull,0x2e71652e74657309ull,0x203233662e323375ull,
0x25202c3939722509ull,0x376625202c363766ull,0x090a202f2f093b39ull,0x203233732e67656eull,
0x202c303031722509ull,0x2020203b39397225ull,0x2f09202020202020ull,0x622e726f090a202full,
0x3031722509203233ull,0x2c38397225202c31ull,0x203b303031722520ull,0x090a202f2f092020ull,
0x203233732e67656eull,0x202c323031722509ull,0x20203b3130317225ull,0x2f09202020202020ull,
0x74636c73090a202full,0x3233732e3233752eull,0x2c33303172250920ull,0x25202c3539722520ull,
0x317225202c333972ull,0x0a202f2f093b3230ull,0x3233622e6c687309ull,0x202c383872250920ull,
0x3330317225202c31ull,0x092020202020203bull,0x5f744c240a202f2full,0x2f2f200a3a325f30ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x353220656e696c20ull,
0x2064616568202c36ull,0x2064656c6562616cull,0x37315f305f744c24ull,0x09636f6c2e090a37ull,
0x3009313533093631ull,0x6168732e7473090aull,0x203233752e646572ull,0x68745f6d756e5b09ull,
0x6f635f7364616572ull,0x6e6f69746361706dull,0x3b38387225202c5dull,0x313a6469202f2f09ull,
0x5f6d756e20303432ull,0x5f73646165726874ull,0x69746361706d6f63ull,0x090a3078302b6e6full,
0x09363109636f6c2eull,0x6d090a3009333533ull,0x09203233752e766full,0x30202c3430317225ull,
0x202020202020203bull,0x2f2f092020202020ull,0x68732e7473090a20ull,0x3233752e64657261ull,
0x61706d6f635b0920ull,0x6e6f6365735f7463ull,0x5d6b6e7568635f64ull,0x3b3430317225202cull,
0x313a6469202f2f09ull,0x706d6f6320393332ull,0x6f6365735f746361ull,0x6b6e7568635f646eull,
0x6c2e090a3078302bull,0x353309363109636full,0x766f6d090a300934ull,0x722509203233752eull,
0x203b31202c353031ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x726168732e747309ull,
0x09203233752e6465ull,0x7268745f6c6c615bull,0x6e6f635f73646165ull,0x2c5d646567726576ull,
0x093b353031722520ull,0x32313a6469202f2full,0x745f6c6c61203134ull,0x635f736461657268ull,
0x6465677265766e6full,0x744c240a3078302bull,0x0a3a3433335f305full,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c36353220ull,
0x6c6562616c206461ull,0x305f744c24206465ull,0x6c2e090a3737315full,0x353309363109636full,
0x726162090a300937ull,0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x726168732e646c09ull,0x09203233752e6465ull,0x5b202c3630317225ull,
0x657268745f6d756eull,0x706d6f635f736461ull,0x3b5d6e6f69746361ull,0x313a6469202f2f09ull,
0x5f6d756e20303432ull,0x5f73646165726874ull,0x69746361706d6f63ull,0x090a3078302b6e6full,
0x2e656c2e70746573ull,0x3470250920323375ull,0x3630317225202c33ull,0x093b33317225202cull,
0x702540090a202f2full,0x0920617262203334ull,0x37315f305f744c24ull,0x2020202020203b37ull,
0x0a202f2f09202020ull,0x3a315f305f744c24ull,0x3109636f6c2e090aull,0x0a30093436330936ull,
0x6e79732e72616209ull,0x2020203b30092063ull,0x2020202020202020ull,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x3937330936310963ull,0x732e646c090a3009ull,0x31752e6465726168ull,
0x202c317225092036ull,0x302b32316472255bull,0x6469202f2f093b5dull,0x5f5f20303932313aull,
0x6c5f735f61647563ull,0x6e756f635f746665ull,0x78302b3038313274ull,0x09636f6c2e090a30ull,
0x3009303833093631ull,0x6168732e646c090aull,0x203631752e646572ull,0x255b202c33722509ull,
0x3b5d302b33316472ull,0x313a6469202f2f09ull,0x75635f5f20313932ull,0x6769725f735f6164ull,
0x746e756f635f7468ull,0x3078302b34383236ull,0x33752e646461090aull,0x3730317225092032ull,
0x202c33317225202cull,0x202020203b357225ull,0x7663090a202f2f09ull,0x33752e3436752e74ull,
0x3035647225092032ull,0x3b3730317225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,
0x722509203436752eull,0x647225202c313564ull,0x20203b32202c3035ull,0x646c090a202f2f09ull,
0x2e6465726168732eull,0x3172250920323375ull,0x6d756e5b202c3830ull,0x736461657268745full,
0x5d6576697463615full,0x3a6469202f2f093bull,0x6d756e2038313231ull,0x736461657268745full,
0x2b6576697463615full,0x746573090a307830ull,0x3233752e656c2e70ull,0x202c343470250920ull,
0x25202c3830317225ull,0x2f2f093b37303172ull,0x3434702540090a20ull,0x4c24092061726220ull,
0x3b3234335f305f74ull,0x2020202020202020ull,0x2e090a202f2f0920ull,0x3309363109636f6cull,
0x6461090a30093438ull,0x2509203436752e64ull,0x7225202c32356472ull,0x647225202c313564ull,
0x202f2f0920203b32ull,0x6168732e646c090aull,0x203631752e646572ull,0x202c393031722509ull,
0x302b32356472255bull,0x6469202f2f093b5dull,0x5f5f20323932313aull,0x6c5f735f61647563ull,
0x6e756f635f746665ull,0x78302b3038313274ull,0x732e766f6d090a30ull,0x3131722509203233ull,
0x3930317225202c30ull,0x202020202020203bull,0x2e090a202f2f0920ull,0x3309363109636f6cull,
0x6461090a30093538ull,0x2509203436752e64ull,0x7225202c33356472ull,0x647225202c313564ull,
0x202f2f0920203b35ull,0x6168732e646c090aull,0x203631752e646572ull,0x202c313131722509ull,
0x302b33356472255bull,0x6469202f2f093b5dull,0x5f5f20343932313aull,0x725f735f61647563ull,
0x756f635f74686769ull,0x302b34383236746eull,0x2e766f6d090a3078ull,0x3172250920323373ull,
0x31317225202c3231ull,0x2020202020203b31ull,0x240a202f2f092020ull,0x3234335f305f744cull,
0x3170252140090a3aull,0x4c24092061726220ull,0x3b3434335f305f74ull,0x2020202020202020ull,
0x2e090a202f2f0920ull,0x3409363109636f6cull,0x6f6d090a30093130ull,0x2509203631752e76ull,
0x3b30202c32316872ull,0x2020202020202020ull,0x202f2f0920202020ull,0x6168732e7473090aull,
0x203631752e646572ull,0x616475635f5f5b09ull,0x5f7466656c5f735full,0x383132746e756f63ull,
0x7225202c5d302b30ull,0x202f2f093b323168ull,0x20363332313a6469ull,0x735f616475635f5full,
0x6f635f7466656c5full,0x2b30383132746e75ull,0x6f6c2e090a307830ull,0x3230340936310963ull,
0x2e766f6d090a3009ull,0x6872250920363175ull,0x20203b30202c3331ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203631752e64ull,0x735f616475635f5full,
0x635f74686769725full,0x34383236746e756full,0x687225202c5d302bull,0x69202f2f093b3331ull,
0x5f20383332313a64ull,0x5f735f616475635full,0x6f635f7468676972ull,0x2b34383236746e75ull,
0x5f744c240a307830ull,0x090a3a3434335f30ull,0x09363109636f6c2eull,0x62090a3009353034ull,
0x20636e79732e7261ull,0x20202020203b3009ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x752e766f6d090a20ull,0x3564722509203436ull,0x6475635f5f202c34ull,0x685f6c635f735f61ull,
0x3133377265706c65ull,0x090a202f2f093b30ull,0x09363109636f6c2eull,0x73090a3009353134ull,
0x09203233752e6275ull,0x25202c3331317225ull,0x3b317225202c3372ull,0x2f2f092020202020ull,
0x752e766f6d090a20ull,0x3131722509203233ull,0x2020203b31202c34ull,0x2020202020202020ull,
0x73090a202f2f0920ull,0x752e71652e707465ull,0x3534702509203233ull,0x2c3331317225202cull,
0x093b343131722520ull,0x6c6573090a202f2full,0x2509203233732e70ull,0x2c31202c35313172ull,
0x35347025202c3020ull,0x0a202f2f0920203bull,0x726168732e747309ull,0x09203631752e6465ull,
0x322b32316472255bull,0x3531317225202c5dull,0x3a6469202f2f093bull,0x635f5f2036393231ull,
0x656c5f735f616475ull,0x746e756f635f7466ull,0x3078302b30383132ull,0x3109636f6c2e090aull,
0x0a30093631340936ull,0x3233752e766f6d09ull,0x2c36313172250920ull,0x20202020203b3120ull,
0x0920202020202020ull,0x746573090a202f2full,0x3233752e656e2e70ull,0x202c363470250920ull,
0x25202c3331317225ull,0x2f2f093b36313172ull,0x2e706c6573090a20ull,0x3172250920323373ull,
0x30202c31202c3731ull,0x203b36347025202cull,0x73090a202f2f0920ull,0x6465726168732e74ull,
0x255b09203631752eull,0x2c5d322b33316472ull,0x093b373131722520ull,0x32313a6469202f2full,
0x6475635f5f203739ull,0x686769725f735f61ull,0x36746e756f635f74ull,0x0a3078302b343832ull,
0x363109636f6c2e09ull,0x090a300939313409ull,0x203233752e766f6dull,0x202c383131722509ull,
0x2020202020203b30ull,0x2f09202020202020ull,0x706c6573090a202full,0x722509203233752eull,
0x317225202c393131ull,0x31317225202c3331ull,0x3b36347025202c38ull,0x7473090a202f2f09ull,
0x2e6465726168732eull,0x72255b0920363175ull,0x25202c5d322b3864ull,0x2f2f093b39313172ull,
0x383932313a646920ull,0x5f616475635f5f20ull,0x6361706d6f635f73ull,0x73696c5f6e6f6974ull,
0x78302b3630323374ull,0x09636f6c2e090a30ull,0x3009303234093631ull,0x36752e646461090aull,
0x3535647225092034ull,0x202c37647225202cull,0x20203b3435647225ull,0x6f6d090a202f2f09ull,
0x2509203631752e76ull,0x3b30202c34316872ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x6168732e7473090aull,0x203631752e646572ull,0x2b35356472255b09ull,0x31687225202c5d30ull,
0x6469202f2f093b34ull,0x5f5f20393932313aull,0x635f735f61647563ull,0x7265706c65685f6cull,
0x3078302b30313337ull,0x36752e646461090aull,0x3635647225092034ull,0x2c3135647225202cull,
0x203b343564722520ull,0x646c090a202f2f09ull,0x2e6465726168732eull,0x3172250920323375ull,
0x6d756e5b202c3032ull,0x736461657268745full,0x5d6576697463615full,0x3a6469202f2f093bull,
0x6d756e2038313231ull,0x736461657268745full,0x2b6576697463615full,0x746573090a307830ull,
0x3233752e656c2e70ull,0x202c373470250920ull,0x25202c3032317225ull,0x2f2f093b37303172ull,
0x3734702540090a20ull,0x4c24092061726220ull,0x3b3734335f305f74ull,0x2020202020202020ull,
0x2e090a202f2f0920ull,0x3409363109636f6cull,0x6f6d090a30093532ull,0x2509203233732e76ull,
0x7225202c31323172ull,0x202020203b323131ull,0x202f2f0920202020ull,0x33732e766f6d090aull,
0x3232317225092032ull,0x3b3031317225202cull,0x2020202020202020ull,0x7573090a202f2f09ull,
0x2509203233752e62ull,0x7225202c33323172ull,0x317225202c313231ull,0x202f2f09203b3232ull,
0x33752e766f6d090aull,0x3432317225092032ull,0x202020203b31202cull,0x2020202020202020ull,
0x6573090a202f2f09ull,0x33752e71652e7074ull,0x2c38347025092032ull,0x202c333231722520ull,
0x2f093b3432317225ull,0x706c6573090a202full,0x722509203233732eull,0x202c31202c353231ull,
0x3b38347025202c30ull,0x090a202f2f092020ull,0x203233732e766f6dull,0x202c363231722509ull,
0x20203b3532317225ull,0x2f09202020202020ull,0x636f6c2e090a202full,0x0937323409363109ull,
0x752e646461090a30ull,0x3564722509203436ull,0x3135647225202c37ull,0x203b32647225202cull,
0x73090a202f2f0920ull,0x6465726168732e74ull,0x255b09203631752eull,0x2c5d322b37356472ull,
0x093b353231722520ull,0x33313a6469202f2full,0x6475635f5f203030ull,0x7466656c5f735f61ull,
0x3132746e756f635full,0x090a3078302b3038ull,0x09363109636f6c2eull,0x6d090a3009383234ull,
0x09203233752e766full,0x31202c3732317225ull,0x202020202020203bull,0x2f2f092020202020ull,
0x2e70746573090a20ull,0x09203233752e656eull,0x7225202c39347025ull,0x317225202c333231ull,
0x0a202f2f093b3732ull,0x33732e706c657309ull,0x3832317225092032ull,0x202c30202c31202cull,
0x0920203b39347025ull,0x646461090a202f2full,0x722509203436752eull,0x647225202c383564ull,
0x35647225202c3135ull,0x0a202f2f0920203bull,0x726168732e747309ull,0x09203631752e6465ull,
0x322b38356472255bull,0x3832317225202c5dull,0x3a6469202f2f093bull,0x635f5f2031303331ull,
0x69725f735f616475ull,0x6e756f635f746867ull,0x78302b3438323674ull,0x09636f6c2e090a30ull,
0x3009313334093631ull,0x33752e766f6d090aull,0x3932317225092032ull,0x202020203b30202cull,
0x2020202020202020ull,0x6573090a202f2f09ull,0x09203233752e706cull,0x25202c3033317225ull,
0x7225202c33323172ull,0x347025202c393231ull,0x090a202f2f093b39ull,0x203436752e646461ull,
0x202c393564722509ull,0x25202c3135647225ull,0x2f0920203b336472ull,0x732e7473090a202full,
0x31752e6465726168ull,0x356472255b092036ull,0x7225202c5d322b39ull,0x202f2f093b303331ull,
0x20323033313a6469ull,0x735f616475635f5full,0x746361706d6f635full,0x7473696c5f6e6f69ull,
0x3078302b36303233ull,0x3109636f6c2e090aull,0x0a30093233340936ull,0x3631752e766f6d09ull,
0x2c35316872250920ull,0x20202020203b3020ull,0x0920202020202020ull,0x2e7473090a202f2full,
0x752e646572616873ull,0x6472255b09203631ull,0x25202c5d302b3635ull,0x2f2f093b35316872ull,
0x333033313a646920ull,0x5f616475635f5f20ull,0x6c65685f6c635f73ull,0x2b30313337726570ull,
0x617262090a307830ull,0x4c240920696e752eull,0x3b3634335f305f74ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x34335f305f744c24ull,0x2e766f6d090a3a37ull,0x3172250920323375ull,
0x3b323135202c3133ull,0x2020202020202020ull,0x090a202f2f092020ull,0x2e74672e70746573ull,
0x3570250920323375ull,0x3730317225202c30ull,0x3b3133317225202cull,0x2540090a202f2f09ull,
0x2061726220303570ull,0x335f305f744c2409ull,0x20202020203b3834ull,0x202f2f0920202020ull,
0x3109636f6c2e090aull,0x0a30093733340936ull,0x3631752e766f6d09ull,0x2c36316872250920ull,
0x20202020203b3020ull,0x0920202020202020ull,0x646461090a202f2full,0x722509203436752eull,
0x647225202c303664ull,0x33647225202c3135ull,0x0a202f2f0920203bull,0x726168732e747309ull,
0x09203631752e6465ull,0x322b30366472255bull,0x3631687225202c5dull,0x3a6469202f2f093bull,
0x635f5f2034303331ull,0x6f635f735f616475ull,0x6e6f69746361706dull,0x3032337473696c5full,
0x2e090a3078302b36ull,0x3409363109636f6cull,0x6f6d090a30093833ull,0x2509203631752e76ull,
0x3b30202c37316872ull,0x2020202020202020ull,0x202f2f0920202020ull,0x6168732e7473090aull,
0x203631752e646572ull,0x2b36356472255b09ull,0x31687225202c5d30ull,0x6469202f2f093b37ull,
0x5f5f20353033313aull,0x635f735f61647563ull,0x7265706c65685f6cull,0x3078302b30313337ull,
0x335f305f744c240aull,0x766f6d090a3a3834ull,0x722509203233752eull,0x203b30202c363231ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x34335f305f744c24ull,0x636f6c2e090a3a36ull,
0x0932343409363109ull,0x68732e646c090a30ull,0x3233752e64657261ull,0x2c32333172250920ull,
0x68745f6d756e5b20ull,0x6f635f7364616572ull,0x6e6f69746361706dull,0x6469202f2f093b5dull,
0x756e20303432313aull,0x6461657268745f6dull,0x6361706d6f635f73ull,0x3078302b6e6f6974ull,
0x3109636f6c2e090aull,0x0a30093631380936ull,0x3233752e72687309ull,0x202c373572250920ull,
0x31202c3233317225ull,0x092020202020203bull,0x766f6d090a202f2full,0x722509203233732eull,
0x357225202c333331ull,0x2020202020203b37ull,0x0a202f2f09202020ull,0x3233752e766f6d09ull,
0x2c34333172250920ull,0x20202020203b3020ull,0x0920202020202020ull,0x746573090a202f2full,
0x3233732e656c2e70ull,0x202c313570250920ull,0x7225202c37357225ull,0x202f2f093b343331ull,
0x33752e766f6d090aull,0x3533317225092032ull,0x202020203b31202cull,0x2020202020202020ull,
0x2540090a202f2f09ull,0x2061726220313570ull,0x345f305f744c2409ull,0x20202020203b3633ull,
0x202f2f0920202020ull,0x36752e646461090aull,0x3136647225092034ull,0x202c32647225202cull,
0x2020202020203b32ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c32366472ull,
0x20203b32202c3564ull,0x202f2f0920202020ull,0x36752e646461090aull,0x3332647225092034ull,
0x202c33647225202cull,0x2020202020203b32ull,0x744c240a202f2f09ull,0x0a3a3235335f305full,
0x706f6f6c3c2f2f20ull,0x6220706f6f4c203eull,0x656e696c2079646full,0x6c2e090a38313820ull,
0x313809363109636full,0x726162090a300938ull,0x300920636e79732eull,0x202020202020203bull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x656c2e7074657309ull,0x702509203233752eull,
0x33317225202c3235ull,0x093b357225202c33ull,0x702540090a202f2full,0x0920617262203235ull,
0x35335f305f744c24ull,0x2020202020203b39ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c38313820ull,
0x6c6562616c206461ull,0x305f744c24206465ull,0x6c2e090a3235335full,0x323809363109636full,
0x6c756d090a300935ull,0x33752e6f6c2e3432ull,0x2c31367225092032ull,0x3b32202c35722520ull,
0x0a202f2f09202020ull,0x3233752e64646109ull,0x2c36333172250920ull,0x31202c3136722520ull,
0x092020202020203bull,0x646461090a202f2full,0x722509203233752eull,0x31367225202c3236ull,
0x202020203b32202cull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,0x3172250920323375ull,
0x33317225202c3733ull,0x3533317225202c36ull,0x63090a202f2f093bull,0x752e3436752e7476ull,
0x3664722509203233ull,0x3733317225202c33ull,0x2f2f09202020203bull,0x6c2e6c756d090a20ull,
0x2509203436752e6full,0x7225202c34366472ull,0x203b32202c333664ull,0x6d090a202f2f0920ull,
0x33752e6f6c2e6c75ull,0x3833317225092032ull,0x202c32367225202cull,0x2f093b3533317225ull,
0x2e747663090a202full,0x203233752e343675ull,0x202c353664722509ull,0x20203b3833317225ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3664722509203436ull,0x3536647225202c36ull,
0x2f0920203b32202cull,0x2e646461090a202full,0x6472250920343675ull,0x36647225202c3736ull,
0x3b32647225202c36ull,0x090a202f2f092020ull,0x203436752e646461ull,0x202c383664722509ull,
0x38202c3736647225ull,0x3935343339393835ull,0x090a202f2f093b32ull,0x65726168732e646cull,
0x2509203631752e64ull,0x255b202c38316872ull,0x3b5d302b38366472ull,0x313a6469202f2f09ull,
0x75635f5f20363033ull,0x66656c5f735f6164ull,0x32746e756f635f74ull,0x0a3078302b303831ull,
0x3436752e64646109ull,0x2c39366472250920ull,0x202c343664722520ull,0x0920203b32647225ull,
0x2e646c090a202f2full,0x752e646572616873ull,0x3168722509203631ull,0x366472255b202c39ull,
0x2f2f093b5d302b39ull,0x373033313a646920ull,0x5f616475635f5f20ull,0x635f7466656c5f73ull,
0x30383132746e756full,0x6461090a3078302bull,0x2509203631752e64ull,0x7225202c30326872ull,
0x687225202c383168ull,0x202f2f09203b3931ull,0x6168732e7473090aull,0x203631752e646572ull,
0x2b38366472255b09ull,0x32687225202c5d30ull,0x6469202f2f093b30ull,0x5f5f20383033313aull,
0x6c5f735f61647563ull,0x6e756f635f746665ull,0x78302b3038313274ull,0x09636f6c2e090a30ull,
0x3009363238093631ull,0x36752e646461090aull,0x3037647225092034ull,0x2c3636647225202cull,
0x20203b3564722520ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c31376472ull,
0x383538202c303764ull,0x3b32393534333939ull,0x646c090a202f2f09ull,0x2e6465726168732eull,
0x6872250920363175ull,0x6472255b202c3132ull,0x2f093b5d302b3137ull,0x3033313a6469202full,
0x616475635f5f2039ull,0x74686769725f735full,0x3236746e756f635full,0x090a3078302b3438ull,
0x203436752e646461ull,0x202c323764722509ull,0x25202c3436647225ull,0x2f0920203b356472ull,
0x732e646c090a202full,0x31752e6465726168ull,0x3232687225092036ull,0x32376472255b202cull,
0x202f2f093b5d302bull,0x20303133313a6469ull,0x735f616475635f5full,0x635f74686769725full,
0x34383236746e756full,0x6461090a3078302bull,0x2509203631752e64ull,0x7225202c33326872ull,
0x687225202c313268ull,0x202f2f09203b3232ull,0x6168732e7473090aull,0x203631752e646572ull,
0x2b31376472255b09ull,0x32687225202c5d30ull,0x6469202f2f093b33ull,0x5f5f20313133313aull,
0x725f735f61647563ull,0x756f635f74686769ull,0x302b34383236746eull,0x636f6c2e090a3078ull,
0x0932323809363109ull,0x752e646461090a30ull,0x3764722509203436ull,0x3436647225202c33ull,
0x3b3435647225202cull,0x6c090a202f2f0920ull,0x6465726168732e64ull,0x722509203631752eull,
0x72255b202c343268ull,0x3b5d322d2b333764ull,0x313a6469202f2f09ull,0x75635f5f20323133ull,
0x5f6c635f735f6164ull,0x33377265706c6568ull,0x090a3078302b3031ull,0x203436752e646461ull,
0x202c343764722509ull,0x25202c3636647225ull,0x2f09203b34356472ull,0x2e646461090a202full,
0x6472250920343675ull,0x37647225202c3537ull,0x3939383538202c34ull,0x2f093b3239353433ull,
0x2e766f6d090a202full,0x6872250920363175ull,0x20203b31202c3532ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x2e656e2e70746573ull,0x3570250920363175ull,0x3432687225202c33ull,
0x3b3532687225202cull,0x2540090a202f2f09ull,0x2061726220333570ull,0x37325f305f4c2409ull,
0x2020202020203b31ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3831382065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x6c090a3235335f30ull,0x6465726168732e64ull,0x722509203631752eull,
0x72255b202c363268ull,0x3b5d322d2b353764ull,0x313a6469202f2f09ull,0x75635f5f20333133ull,
0x5f6c635f735f6164ull,0x33377265706c6568ull,0x090a3078302b3031ull,0x203631752e766f6dull,
0x202c373268722509ull,0x2020202020203b31ull,0x2f09202020202020ull,0x70746573090a202full,
0x203631752e71652eull,0x25202c3435702509ull,0x7225202c36326872ull,0x202f2f093b373268ull,
0x203435702540090aull,0x744c240920617262ull,0x203b3935335f305full,0x2020202020202020ull,
0x5f4c240a202f2f09ull,0x200a3a3137325f30ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c383138ull,0x656c6562616c2064ull,
0x5f305f744c242064ull,0x766f6d090a323533ull,0x722509203631752eull,0x203b31202c383268ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x656e2e7074657309ull,0x702509203631752eull,
0x32687225202c3535ull,0x3832687225202c34ull,0x40090a202f2f093bull,0x6172622035357025ull,
0x5f305f744c240920ull,0x202020203b363533ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c38313820656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x090a3235335f305full,0x09363109636f6c2eull,
0x6d090a3009393338ull,0x09203631752e766full,0x31202c3932687225ull,0x202020202020203bull,
0x2f2f092020202020ull,0x68732e7473090a20ull,0x3631752e64657261ull,0x35376472255b0920ull,
0x7225202c5d322d2bull,0x202f2f093b393268ull,0x20343133313a6469ull,0x735f616475635f5full,
0x706c65685f6c635full,0x302b303133377265ull,0x2e617262090a3078ull,0x744c240920696e75ull,
0x203b3935335f305full,0x2020202020202020ull,0x240a202f2f092020ull,0x3635335f305f744cull,
0x6f6c3c2f2f200a3aull,0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,
0x202c38313820656eull,0x62616c2064616568ull,0x744c242064656c65ull,0x090a3235335f305full,
0x65726168732e646cull,0x2509203631752e64ull,0x255b202c30336872ull,0x5d322d2b35376472ull,
0x3a6469202f2f093bull,0x635f5f2033313331ull,0x6c635f735f616475ull,0x377265706c65685full,
0x0a3078302b303133ull,0x3631752e766f6d09ull,0x2c31336872250920ull,0x20202020203b3120ull,
0x0920202020202020ull,0x746573090a202f2full,0x3631752e656e2e70ull,0x202c363570250920ull,
0x25202c3033687225ull,0x2f2f093b31336872ull,0x3635702540090a20ull,0x4c24092061726220ull,
0x3b3835335f305f74ull,0x2020202020202020ull,0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3820656e696c2079ull,0x64616568202c3831ull,
0x64656c6562616c20ull,0x335f305f744c2420ull,0x636f6c2e090a3235ull,0x0933343809363109ull,
0x752e766f6d090a30ull,0x3368722509203631ull,0x2020203b31202c32ull,0x2020202020202020ull,
0x73090a202f2f0920ull,0x6465726168732e74ull,0x255b09203631752eull,0x5d322d2b33376472ull,
0x3b3233687225202cull,0x313a6469202f2f09ull,0x75635f5f20353133ull,0x5f6c635f735f6164ull,
0x33377265706c6568ull,0x090a3078302b3031ull,0x20696e752e617262ull,0x335f305f744c2409ull,
0x20202020203b3935ull,0x2f09202020202020ull,0x305f744c240a202full,0x2f200a3a3835335full,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3820656e696c2079ull,
0x64616568202c3831ull,0x64656c6562616c20ull,0x335f305f744c2420ull,0x636f6c2e090a3235ull,
0x0937343809363109ull,0x752e646461090a30ull,0x3764722509203436ull,0x3436647225202c36ull,
0x203b33647225202cull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3737647225ull,
0x7225202c36366472ull,0x2f2f0920203b3364ull,0x752e646461090a20ull,0x3764722509203436ull,
0x3737647225202c38ull,0x333939383538202cull,0x2f2f093b32393534ull,0x68732e646c090a20ull,
0x3631752e64657261ull,0x2c39333172250920ull,0x2b36376472255b20ull,0x69202f2f093b5d30ull,
0x5f20373133313a64ull,0x5f735f616475635full,0x69746361706d6f63ull,0x337473696c5f6e6full,
0x0a3078302b363032ull,0x726168732e646c09ull,0x09203631752e6465ull,0x5b202c3034317225ull,
0x5d302b3837647225ull,0x3a6469202f2f093bull,0x635f5f2036313331ull,0x6f635f735f616475ull,
0x6e6f69746361706dull,0x3032337473696c5full,0x61090a3078302b36ull,0x09203233732e6464ull,
0x25202c3134317225ull,0x7225202c39333172ull,0x2f2f09203b303431ull,0x752e766f6d090a20ull,
0x3431722509203233ull,0x203b363532202c32ull,0x2020202020202020ull,0x73090a202f2f0920ull,
0x752e656c2e707465ull,0x3735702509203233ull,0x2c3134317225202cull,0x093b323431722520ull,
0x702540090a202f2full,0x0920617262203735ull,0x36335f305f744c24ull,0x2020202020203b30ull,
0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,
0x656e696c2079646full,0x6568202c38313820ull,0x6c6562616c206461ull,0x305f744c24206465ull,
0x6c2e090a3235335full,0x353809363109636full,0x766f6d090a300931ull,0x722509203631752eull,
0x203b31202c333368ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x726168732e747309ull,
0x09203631752e6465ull,0x2d2b33376472255bull,0x33687225202c5d32ull,0x6469202f2f093b33ull,
0x5f5f20383133313aull,0x635f735f61647563ull,0x7265706c65685f6cull,0x3078302b30313337ull,
0x3109636f6c2e090aull,0x0a30093235380936ull,0x3631752e766f6d09ull,0x2c34336872250920ull,
0x20202020203b3120ull,0x0920202020202020ull,0x2e7473090a202f2full,0x752e646572616873ull,
0x6472255b09203631ull,0x202c5d322d2b3537ull,0x2f093b3433687225ull,0x3133313a6469202full,
0x616475635f5f2039ull,0x65685f6c635f735full,0x303133377265706cull,0x7262090a3078302bull,
0x240920696e752e61ull,0x3935335f305f744cull,0x202020202020203bull,0x202f2f0920202020ull,
0x335f305f744c240aull,0x3c2f2f200a3a3036ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x38313820656e696cull,0x6c2064616568202cull,0x242064656c656261ull,
0x3235335f305f744cull,0x3109636f6c2e090aull,0x0a30093635380936ull,0x726168732e747309ull,
0x09203631752e6465ull,0x302b38376472255bull,0x3134317225202c5dull,0x3a6469202f2f093bull,
0x635f5f2030323331ull,0x6f635f735f616475ull,0x6e6f69746361706dull,0x3032337473696c5full,
0x2e090a3078302b36ull,0x3809363109636f6cull,0x6f6d090a30093735ull,0x2509203631752e76ull,
0x3b30202c35336872ull,0x2020202020202020ull,0x202f2f0920202020ull,0x6168732e7473090aull,
0x203631752e646572ull,0x2b36376472255b09ull,0x33687225202c5d30ull,0x6469202f2f093b35ull,
0x5f5f20313233313aull,0x635f735f61647563ull,0x6f69746361706d6full,0x32337473696c5f6eull,
0x240a3078302b3630ull,0x3935335f305f744cull,0x5f305f744c240a3aull,0x744c240a3a373533ull,
0x0a3a3535335f305full,0x3037325f305f4c24ull,0x5f305f744c240a3aull,0x2f2f200a3a333533ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x313820656e696c20ull,
0x2064616568202c38ull,0x2064656c6562616cull,0x35335f305f744c24ull,0x09636f6c2e090a32ull,
0x3009343638093631ull,0x33622e6c6873090aull,0x3533317225092032ull,0x2c3533317225202cull,
0x20202020203b3120ull,0x6c2e090a202f2f09ull,0x313809363109636full,0x726873090a300936ull,
0x722509203233732eull,0x317225202c333331ull,0x20203b31202c3333ull,0x0a202f2f09202020ull,
0x3233752e766f6d09ull,0x2c33343172250920ull,0x20202020203b3020ull,0x0920202020202020ull,
0x746573090a202f2full,0x3233732e74672e70ull,0x202c383570250920ull,0x25202c3333317225ull,
0x2f2f093b33343172ull,0x3835702540090a20ull,0x4c24092061726220ull,0x3b3235335f305f74ull,
0x2020202020202020ull,0x62090a202f2f0920ull,0x0920696e752e6172ull,0x35335f305f744c24ull,
0x2020202020203b30ull,0x2f2f092020202020ull,0x5f305f744c240a20ull,0x744c240a3a363334ull,
0x0a3a3035335f305full,0x3233752e766f6d09ull,0x2c34343172250920ull,0x20202020203b3220ull,
0x0920202020202020ull,0x746573090a202f2full,0x3233752e656c2e70ull,0x202c393570250920ull,
0x25202c3233317225ull,0x2f2f093b34343172ull,0x3935702540090a20ull,0x4c24092061726220ull,
0x3b3236335f305f74ull,0x2020202020202020ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x25202c3937647225ull,0x203b32202c326472ull,0x2f2f092020202020ull,0x752e646461090a20ull,
0x3864722509203436ull,0x2c35647225202c30ull,0x20202020203b3220ull,0x6d090a202f2f0920ull,
0x09203233732e766full,0x32202c3534317225ull,0x202020202020203bull,0x2f2f092020202020ull,
0x5f305f744c240a20ull,0x2f2f200a3a343633ull,0x4c203e706f6f6c3cull,0x79646f6220706f6full,
0x313820656e696c20ull,0x697473656e202c36ull,0x687470656420676eull,0x747365202c31203aull,
0x6920646574616d69ull,0x6e6f697461726574ull,0x6f6e6b6e75203a73ull,0x636f6c2e090a6e77ull,
0x0932373809363109ull,0x752e726873090a30ull,0x3331722509203233ull,0x3533317225202c35ull,
0x202020203b31202cull,0x2e090a202f2f0920ull,0x3809363109636f6cull,0x6162090a30093337ull,
0x0920636e79732e72ull,0x2020202020203b30ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x33752e627573090aull,0x3634317225092032ull,0x2c3534317225202cull,0x20202020203b3120ull,
0x6573090a202f2f09ull,0x33752e65672e7074ull,0x2c30367025092032ull,0x7225202c35722520ull,
0x202f2f093b363431ull,0x203036702540090aull,0x744c240920617262ull,0x203b3536335f305full,
0x2020202020202020ull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x313820656e696c20ull,0x2064616568202c36ull,0x2064656c6562616cull,
0x36335f305f744c24ull,0x09636f6c2e090a34ull,0x3009313838093631ull,0x33752e646461090aull,
0x2c31377225092032ull,0x3b31202c35722520ull,0x2020202020202020ull,0x6873090a202f2f09ull,
0x2509203233752e72ull,0x7225202c37343172ull,0x203b31202c353331ull,0x202f2f0920202020ull,
0x6f6c2e6c756d090aull,0x722509203233752eull,0x377225202c383431ull,0x3533317225202c31ull,
0x63090a202f2f093bull,0x752e3436752e7476ull,0x3864722509203233ull,0x3834317225202c31ull,
0x2f2f09202020203bull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c32386472ull,
0x203b32202c313864ull,0x61090a202f2f0920ull,0x09203233752e6464ull,0x25202c3934317225ull,
0x7225202c37343172ull,0x2f2f09203b383431ull,0x752e747663090a20ull,0x09203233752e3436ull,
0x25202c3338647225ull,0x2020203b39343172ull,0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,
0x3438647225092034ull,0x2c3338647225202cull,0x2f2f0920203b3220ull,0x752e646461090a20ull,
0x3864722509203436ull,0x3438647225202c35ull,0x203b32647225202cull,0x61090a202f2f0920ull,
0x09203436752e6464ull,0x25202c3638647225ull,0x3538202c35386472ull,0x3239353433393938ull,
0x6c090a202f2f093bull,0x6465726168732e64ull,0x722509203631752eull,0x72255b202c363368ull,
0x093b5d302b363864ull,0x33313a6469202f2full,0x6475635f5f203232ull,0x7466656c5f735f61ull,
0x3132746e756f635full,0x090a3078302b3038ull,0x203436752e646461ull,0x202c373864722509ull,
0x25202c3238647225ull,0x2f0920203b326472ull,0x2e646461090a202full,0x6472250920343675ull,
0x38647225202c3838ull,0x3939383538202c37ull,0x2f093b3239353433ull,0x732e646c090a202full,
0x31752e6465726168ull,0x3733687225092036ull,0x38386472255b202cull,0x202f2f093b5d302bull,
0x20333233313a6469ull,0x735f616475635f5full,0x6f635f7466656c5full,0x2b30383132746e75ull,
0x646461090a307830ull,0x722509203631752eull,0x687225202c383368ull,0x33687225202c3633ull,
0x0a202f2f09203b37ull,0x726168732e747309ull,0x09203631752e6465ull,0x302b36386472255bull,
0x3833687225202c5dull,0x3a6469202f2f093bull,0x635f5f2034323331ull,0x656c5f735f616475ull,
0x746e756f635f7466ull,0x3078302b30383132ull,0x3109636f6c2e090aull,0x0a30093238380936ull,
0x3436752e64646109ull,0x2c39386472250920ull,0x202c343864722520ull,0x0920203b35647225ull,
0x646461090a202f2full,0x722509203436752eull,0x647225202c303964ull,0x39383538202c3938ull,
0x093b323935343339ull,0x2e646c090a202f2full,0x752e646572616873ull,0x3368722509203631ull,
0x396472255b202c39ull,0x2f2f093b5d302b30ull,0x353233313a646920ull,0x5f616475635f5f20ull,
0x5f74686769725f73ull,0x383236746e756f63ull,0x61090a3078302b34ull,0x09203436752e6464ull,
0x25202c3139647225ull,0x7225202c32386472ull,0x2f2f0920203b3564ull,0x752e646461090a20ull,
0x3964722509203436ull,0x3139647225202c32ull,0x333939383538202cull,0x2f2f093b32393534ull,
0x68732e646c090a20ull,0x3631752e64657261ull,0x2c30346872250920ull,0x2b32396472255b20ull,
0x69202f2f093b5d30ull,0x5f20363233313a64ull,0x5f735f616475635full,0x6f635f7468676972ull,
0x2b34383236746e75ull,0x646461090a307830ull,0x722509203631752eull,0x687225202c313468ull,
0x34687225202c3933ull,0x0a202f2f09203b30ull,0x726168732e747309ull,0x09203631752e6465ull,
0x302b30396472255bull,0x3134687225202c5dull,0x3a6469202f2f093bull,0x635f5f2037323331ull,
0x69725f735f616475ull,0x6e756f635f746867ull,0x78302b3438323674ull,0x5f305f744c240a30ull,
0x2f2f200a3a353633ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x313820656e696c20ull,0x2064616568202c36ull,0x2064656c6562616cull,0x36335f305f744c24ull,
0x09636f6c2e090a34ull,0x3009303738093631ull,0x33622e6c6873090aull,0x3534317225092032ull,
0x2c3534317225202cull,0x20202020203b3120ull,0x6573090a202f2f09ull,0x33752e746c2e7074ull,
0x2c31367025092032ull,0x202c353431722520ull,0x2f093b3233317225ull,0x36702540090a202full,
0x2409206172622031ull,0x3436335f305f744cull,0x202020202020203bull,0x240a202f2f092020ull,
0x3236335f305f744cull,0x09636f6c2e090a3aull,0x3009353434093631ull,0x6168732e646c090aull,
0x203233732e646572ull,0x202c303531722509ull,0x7268745f6d756e5bull,0x7463615f73646165ull,
0x2f2f093b5d657669ull,0x383132313a646920ull,0x7268745f6d756e20ull,0x7463615f73646165ull,
0x0a3078302b657669ull,0x726168732e646c09ull,0x09203233732e6465ull,0x5b202c3135317225ull,
0x657268745f6d756eull,0x706d6f635f736461ull,0x3b5d6e6f69746361ull,0x313a6469202f2f09ull,
0x5f6d756e20303432ull,0x5f73646165726874ull,0x69746361706d6f63ull,0x090a3078302b6e6full,
0x09363109636f6c2eull,0x73090a3009393437ull,0x09203233752e7268ull,0x7225202c37357225ull,
0x203b31202c313531ull,0x2f2f092020202020ull,0x732e766f6d090a20ull,0x3531722509203233ull,
0x3b37357225202c32ull,0x2020202020202020ull,0x6d090a202f2f0920ull,0x09203233752e766full,
0x30202c3335317225ull,0x202020202020203bull,0x2f2f092020202020ull,0x2e70746573090a20ull,
0x09203233732e656cull,0x7225202c32367025ull,0x35317225202c3735ull,0x090a202f2f093b33ull,
0x203233752e766f6dull,0x202c343531722509ull,0x2020202020203b31ull,0x2f09202020202020ull,
0x36702540090a202full,0x2409206172622032ull,0x3034345f305f744cull,0x202020202020203bull,
0x090a202f2f092020ull,0x203436752e646461ull,0x202c333264722509ull,0x3b32202c33647225ull,
0x2f09202020202020ull,0x305f744c240a202full,0x2f200a3a3037335full,0x203e706f6f6c3c2full,
0x646f6220706f6f4cull,0x3720656e696c2079ull,0x636f6c2e090a3135ull,0x0931353709363109ull,
0x732e726162090a30ull,0x203b300920636e79ull,0x2020202020202020ull,0x2020202020202020ull,
0x73090a202f2f0920ull,0x752e656c2e707465ull,0x3336702509203233ull,0x2c3235317225202cull,
0x2f2f093b35722520ull,0x3336702540090a20ull,0x4c24092061726220ull,0x3b3137335f305f74ull,
0x2020202020202020ull,0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3720656e696c2079ull,0x64616568202c3135ull,0x64656c6562616c20ull,
0x335f305f744c2420ull,0x636f6c2e090a3037ull,0x0938353709363109ull,0x34326c756d090a30ull,
0x203233752e6f6c2eull,0x25202c3136722509ull,0x20203b32202c3572ull,0x61090a202f2f0920ull,
0x09203233752e6464ull,0x7225202c32367225ull,0x20203b32202c3136ull,0x2f2f092020202020ull,
0x6c2e6c756d090a20ull,0x2509203233752e6full,0x7225202c35353172ull,0x35317225202c3236ull,
0x090a202f2f093b34ull,0x2e3436752e747663ull,0x6472250920323375ull,0x35317225202c3339ull,
0x2f09202020203b35ull,0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3439647225ull,
0x3b32202c33396472ull,0x090a202f2f092020ull,0x203436752e646461ull,0x202c353964722509ull,
0x7225202c33647225ull,0x2f0920203b343964ull,0x2e646461090a202full,0x6472250920343675ull,
0x39647225202c3639ull,0x3939383538202c35ull,0x2f093b3239353433ull,0x732e646c090a202full,
0x31752e6465726168ull,0x3234687225092036ull,0x36396472255b202cull,0x202f2f093b5d302bull,
0x20393233313a6469ull,0x735f616475635f5full,0x746361706d6f635full,0x7473696c5f6e6f69ull,
0x3078302b36303233ull,0x33752e646461090aull,0x3635317225092032ull,0x202c31367225202cull,
0x2020202020203b31ull,0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,0x2c37353172250920ull,
0x202c343531722520ull,0x2f093b3635317225ull,0x2e747663090a202full,0x203233752e343675ull,
0x202c373964722509ull,0x20203b3735317225ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,
0x3964722509203436ull,0x3739647225202c38ull,0x2f0920203b32202cull,0x2e646461090a202full,
0x6472250920343675ull,0x33647225202c3939ull,0x3b3839647225202cull,0x090a202f2f092020ull,
0x203436752e646461ull,0x2c30303164722509ull,0x202c393964722520ull,0x3534333939383538ull,
0x0a202f2f093b3239ull,0x726168732e646c09ull,0x09203631752e6465ull,0x5b202c3334687225ull,
0x302b303031647225ull,0x6469202f2f093b5dull,0x5f5f20383233313aull,0x635f735f61647563ull,
0x6f69746361706d6full,0x32337473696c5f6eull,0x090a3078302b3630ull,0x203631752e646461ull,
0x202c343468722509ull,0x25202c3234687225ull,0x2f09203b33346872ull,0x732e7473090a202full,
0x31752e6465726168ull,0x396472255b092036ull,0x7225202c5d302b36ull,0x202f2f093b343468ull,
0x20303333313a6469ull,0x735f616475635f5full,0x746361706d6f635full,0x7473696c5f6e6f69ull,
0x3078302b36303233ull,0x335f305f744c240aull,0x3c2f2f200a3a3137ull,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x31353720656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3037335f305f744cull,0x3109636f6c2e090aull,0x0a30093136370936ull,
0x2e6f6c2e6c756d09ull,0x3172250920323375ull,0x35317225202c3435ull,0x0920203b32202c34ull,
0x6f6c2e090a202f2full,0x3934370936310963ull,0x2e726873090a3009ull,0x3172250920323373ull,
0x35317225202c3235ull,0x2020203b31202c32ull,0x090a202f2f092020ull,0x203233752e766f6dull,
0x202c383531722509ull,0x2020202020203b30ull,0x2f09202020202020ull,0x70746573090a202full,
0x203233732e74672eull,0x25202c3436702509ull,0x7225202c32353172ull,0x202f2f093b383531ull,
0x203436702540090aull,0x744c240920617262ull,0x203b3037335f305full,0x2020202020202020ull,
0x7262090a202f2f09ull,0x240920696e752e61ull,0x3836335f305f744cull,0x202020202020203bull,
0x202f2f0920202020ull,0x345f305f744c240aull,0x5f744c240a3a3034ull,0x090a3a3836335f30ull,
0x203233752e627573ull,0x202c393531722509ull,0x31202c3135317225ull,0x2f0920202020203bull,
0x2e766f6d090a202full,0x3172250920323375ull,0x20203b32202c3036ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x2e656c2e70746573ull,0x3670250920323375ull,0x3935317225202c35ull,
0x3b3036317225202cull,0x2540090a202f2f09ull,0x2061726220353670ull,0x335f305f744c2409ull,
0x20202020203b3437ull,0x202f2f0920202020ull,0x36752e646461090aull,0x3332647225092034ull,
0x202c33647225202cull,0x2020202020203b32ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,
0x3b32202c31363172ull,0x2020202020202020ull,0x202f2f0920202020ull,0x335f305f744c240aull,
0x3c2f2f200a3a3637ull,0x6f4c203e706f6f6cull,0x2079646f6220706full,0x39343720656e696cull,
0x6e697473656e202cull,0x3a68747065642067ull,0x69747365202c3120ull,0x746920646574616dull,
0x736e6f6974617265ull,0x776f6e6b6e75203aull,0x09636f6c2e090a6eull,0x3009383637093631ull,
0x33752e726873090aull,0x3435317225092032ull,0x2c3435317225202cull,0x20202020203b3120ull,
0x6c2e090a202f2f09ull,0x363709363109636full,0x726162090a300939ull,0x300920636e79732eull,
0x202020202020203bull,0x2020202020202020ull,0x0a202f2f09202020ull,0x3233752e62757309ull,
0x2c32363172250920ull,0x202c313631722520ull,0x0920202020203b31ull,0x746573090a202f2full,
0x3233752e65672e70ull,0x202c363670250920ull,0x317225202c357225ull,0x0a202f2f093b3236ull,
0x6220363670254009ull,0x5f744c2409206172ull,0x20203b3737335f30ull,0x0920202020202020ull,
0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x39343720656e696cull,0x6c2064616568202cull,0x242064656c656261ull,0x3637335f305f744cull,
0x3109636f6c2e090aull,0x0a30093637370936ull,0x3233752e64646109ull,0x202c313772250920ull,
0x203b31202c357225ull,0x0920202020202020ull,0x726873090a202f2full,0x722509203233752eull,
0x317225202c333631ull,0x20203b31202c3435ull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,
0x3172250920323375ull,0x31377225202c3436ull,0x3b3435317225202cull,0x6461090a202f2f09ull,
0x2509203233752e64ull,0x7225202c35363172ull,0x317225202c333631ull,0x202f2f09203b3436ull,
0x36752e747663090aull,0x2509203233752e34ull,0x25202c3130316472ull,0x2020203b35363172ull,
0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x3230316472250920ull,0x313031647225202cull,
0x202f2f093b32202cull,0x36752e646461090aull,0x3031647225092034ull,0x2c33647225202c33ull,
0x3b32303164722520ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x25202c3430316472ull,
0x38202c3330316472ull,0x3935343339393835ull,0x090a202f2f093b32ull,0x65726168732e646cull,
0x2509203631752e64ull,0x255b202c35346872ull,0x5d302b3430316472ull,0x3a6469202f2f093bull,
0x635f5f2031333331ull,0x6f635f735f616475ull,0x6e6f69746361706dull,0x3032337473696c5full,
0x63090a3078302b36ull,0x752e3436752e7476ull,0x3164722509203233ull,0x36317225202c3530ull,
0x2f2f092020203b34ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x25202c3630316472ull,
0x32202c3530316472ull,0x61090a202f2f093bull,0x09203436752e6464ull,0x202c373031647225ull,
0x7225202c33647225ull,0x2f2f093b36303164ull,0x752e646461090a20ull,0x3164722509203436ull,
0x31647225202c3830ull,0x39383538202c3730ull,0x093b323935343339ull,0x2e646c090a202f2full,
0x752e646572616873ull,0x3468722509203631ull,0x316472255b202c36ull,0x2f093b5d302b3830ull,
0x3333313a6469202full,0x616475635f5f2032ull,0x61706d6f635f735full,0x696c5f6e6f697463ull,
0x302b363032337473ull,0x2e646461090a3078ull,0x6872250920363175ull,0x34687225202c3734ull,
0x3634687225202c35ull,0x090a202f2f09203bull,0x65726168732e7473ull,0x5b09203631752e64ull,
0x302b343031647225ull,0x3734687225202c5dull,0x3a6469202f2f093bull,0x635f5f2033333331ull,
0x6f635f735f616475ull,0x6e6f69746361706dull,0x3032337473696c5full,0x4c240a3078302b36ull,
0x3a3737335f305f74ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,
0x6e696c2079646f62ull,0x68202c3934372065ull,0x6562616c20646165ull,0x5f744c242064656cull,
0x2e090a3637335f30ull,0x3709363109636f6cull,0x6873090a30093636ull,0x2509203233622e6cull,
0x7225202c31363172ull,0x203b31202c313631ull,0x202f2f0920202020ull,0x6c2e70746573090aull,
0x2509203233752e74ull,0x317225202c373670ull,0x35317225202c3136ull,0x090a202f2f093b39ull,
0x7262203736702540ull,0x305f744c24092061ull,0x2020203b3637335full,0x2f09202020202020ull,
0x305f744c240a202full,0x2e090a3a3437335full,0x3709363109636f6cull,0x6162090a30093038ull,
0x0920636e79732e72ull,0x2020202020203b30ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x203170252140090aull,0x744c240920617262ull,0x203b3038335f305full,0x2020202020202020ull,
0x6c2e090a202f2f09ull,0x383709363109636full,0x747663090a300937ull,0x3233752e3436752eull,
0x3930316472250920ull,0x3b3135317225202cull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,
0x6472250920343675ull,0x647225202c303131ull,0x093b32202c393031ull,0x747663090a202f2full,
0x3233752e3436752eull,0x3131316472250920ull,0x3b3035317225202cull,0x0a202f2f09202020ull,
0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x647225202c323131ull,0x093b32202c313131ull,
0x646461090a202f2full,0x722509203436752eull,0x7225202c33313164ull,0x7225202c30313164ull,
0x202f2f093b343564ull,0x6168732e646c090aull,0x203631752e646572ull,0x202c383468722509ull,
0x2b3331316472255bull,0x202f2f093b5d322dull,0x20343333313a6469ull,0x735f616475635f5full,
0x706c65685f6c635full,0x302b303133377265ull,0x2e646461090a3078ull,0x6472250920343675ull,
0x647225202c343131ull,0x647225202c323131ull,0x0a202f2f093b3435ull,0x726168732e747309ull,
0x09203631752e6465ull,0x2b3431316472255bull,0x687225202c5d322dull,0x69202f2f093b3834ull,
0x5f20353333313a64ull,0x5f735f616475635full,0x65706c65685f6c63ull,0x78302b3031333772ull,
0x09636f6c2e090a30ull,0x3009393837093631ull,0x36752e646461090aull,0x3131647225092034ull,
0x3131647225202c35ull,0x3b33647225202c30ull,0x646c090a202f2f09ull,0x2e6465726168732eull,
0x6872250920363175ull,0x6472255b202c3934ull,0x093b5d302b353131ull,0x33313a6469202f2full,
0x6475635f5f203633ull,0x706d6f635f735f61ull,0x6c5f6e6f69746361ull,0x2b36303233747369ull,
0x646461090a307830ull,0x722509203436752eull,0x7225202c36313164ull,0x7225202c32313164ull,
0x0a202f2f093b3364ull,0x726168732e747309ull,0x09203631752e6465ull,0x2b3631316472255bull,
0x34687225202c5d30ull,0x6469202f2f093b39ull,0x5f5f20373333313aull,0x635f735f61647563ull,
0x6f69746361706d6full,0x32337473696c5f6eull,0x240a3078302b3630ull,0x3038335f305f744cull,
0x09636f6c2e090a3aull,0x3009393434093631ull,0x79732e726162090aull,0x20203b300920636eull,
0x2020202020202020ull,0x2020202020202020ull,0x646c090a202f2f09ull,0x2e6465726168732eull,
0x6872250920363175ull,0x6472255b202c3035ull,0x2f093b5d302b3535ull,0x3333313a6469202full,
0x616475635f5f2038ull,0x65685f6c635f735full,0x303133377265706cull,0x6f6d090a3078302bull,
0x2509203631752e76ull,0x3b31202c31356872ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x6e2e70746573090aull,0x2509203631752e65ull,0x687225202c383670ull,0x35687225202c3035ull,
0x090a202f2f093b31ull,0x7262203836702540ull,0x305f744c24092061ull,0x2020203b3338335full,
0x2f09202020202020ull,0x636f6c2e090a202full,0x0933363409363109ull,0x68732e646c090a30ull,
0x3631752e64657261ull,0x2c36363172250920ull,0x2b33316472255b20ull,0x69202f2f093b5d32ull,
0x5f20393333313a64ull,0x5f735f616475635full,0x6f635f7468676972ull,0x2b34383236746e75ull,
0x646461090a307830ull,0x722509203233752eull,0x317225202c373631ull,0x20203b31202c3636ull,
0x0a202f2f09202020ull,0x363109636f6c2e09ull,0x090a300934363409ull,0x65726168732e646cull,
0x2509203631752e64ull,0x255b202c32356872ull,0x093b5d322b386472ull,0x33313a6469202f2full,
0x6475635f5f203034ull,0x706d6f635f735f61ull,0x6c5f6e6f69746361ull,0x2b36303233747369ull,
0x617262090a307830ull,0x4c240920696e752eull,0x3b3238335f305f74ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x38335f305f744c24ull,0x2e766f6d090a3a33ull,0x6872250920363175ull,
0x20203b30202c3235ull,0x2020202020202020ull,0x090a202f2f092020ull,0x203233752e766f6dull,
0x202c373631722509ull,0x2020202020203b30ull,0x2f09202020202020ull,0x305f744c240a202full,
0x6c090a3a3238335full,0x6465726168732e64ull,0x722509203631752eull,0x72255b202c333568ull,
0x093b5d302b363564ull,0x33313a6469202f2full,0x6475635f5f203134ull,0x685f6c635f735f61ull,
0x3133377265706c65ull,0x6d090a3078302b30ull,0x09203631752e766full,0x31202c3435687225ull,
0x202020202020203bull,0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203631752e656eull,
0x7225202c39367025ull,0x687225202c333568ull,0x0a202f2f093b3435ull,0x6220393670254009ull,
0x5f744c2409206172ull,0x20203b3538335f30ull,0x0920202020202020ull,0x6f6c2e090a202f2full,
0x3936340936310963ull,0x2e646461090a3009ull,0x6472250920343675ull,0x647225202c373131ull,
0x35647225202c3135ull,0x090a202f2f09203bull,0x65726168732e646cull,0x2509203631752e64ull,
0x255b202c38363172ull,0x5d322b3731316472ull,0x3a6469202f2f093bull,0x635f5f2032343331ull,
0x69725f735f616475ull,0x6e756f635f746867ull,0x78302b3438323674ull,0x752e646461090a30ull,
0x3631722509203233ull,0x3836317225202c39ull,0x202020203b31202cull,0x2e090a202f2f0920ull,
0x3409363109636f6cull,0x6461090a30093037ull,0x2509203436752e64ull,0x25202c3831316472ull,
0x7225202c31356472ull,0x202f2f09203b3364ull,0x6168732e646c090aull,0x203631752e646572ull,
0x202c353568722509ull,0x2b3831316472255bull,0x69202f2f093b5d32ull,0x5f20333433313a64ull,
0x5f735f616475635full,0x69746361706d6f63ull,0x337473696c5f6e6full,0x0a3078302b363032ull,
0x696e752e61726209ull,0x5f305f744c240920ull,0x202020203b343833ull,0x0920202020202020ull,
0x5f744c240a202f2full,0x090a3a3538335f30ull,0x203631752e766f6dull,0x202c353568722509ull,
0x2020202020203b30ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3172250920323375ull,
0x20203b30202c3936ull,0x2020202020202020ull,0x240a202f2f092020ull,0x3438335f305f744cull,
0x09636f6c2e090a3aull,0x3009333734093631ull,0x6168732e646c090aull,0x203233752e646572ull,
0x202c303731722509ull,0x7268745f6d756e5bull,0x6d6f635f73646165ull,0x5d6e6f6974636170ull,
0x3a6469202f2f093bull,0x6d756e2030343231ull,0x736461657268745full,0x746361706d6f635full,
0x0a3078302b6e6f69ull,0x363109636f6c2e09ull,0x090a300939343409ull,0x65726168732e646cull,
0x2509203631752e64ull,0x255b202c30356872ull,0x3b5d302b35356472ull,0x6c2e090a202f2f09ull,
0x383609363109636full,0x2e7473090a300938ull,0x752e646572616873ull,0x6472255b09203631ull,
0x7225202c5d322b38ull,0x202f2f093b303568ull,0x20343433313a6469ull,0x735f616475635f5full,
0x746361706d6f635full,0x7473696c5f6e6f69ull,0x3078302b36303233ull,0x672e70746573090aull,
0x2509203233752e65ull,0x317225202c303770ull,0x37317225202c3730ull,0x090a202f2f093b30ull,
0x7262203037702540ull,0x305f744c24092061ull,0x2020203b3638335full,0x2f09202020202020ull,
0x636f6c2e090a202full,0x0930393609363109ull,0x752e646461090a30ull,0x3164722509203436ull,
0x35647225202c3931ull,0x3b33647225202c31ull,0x2e090a202f2f0920ull,0x3409363109636f6cull,
0x646c090a30093436ull,0x2e6465726168732eull,0x6872250920363175ull,0x6472255b202c3335ull,
0x2f093b5d302b3635ull,0x636f6c2e090a202full,0x0930393609363109ull,0x68732e7473090a30ull,
0x3631752e64657261ull,0x31316472255b0920ull,0x7225202c5d322b39ull,0x202f2f093b333568ull,
0x20353433313a6469ull,0x735f616475635f5full,0x746361706d6f635full,0x7473696c5f6e6f69ull,
0x3078302b36303233ull,0x335f305f744c240aull,0x6f6c2e090a3a3638ull,0x3339360936310963ull,
0x2e726162090a3009ull,0x3b300920636e7973ull,0x2020202020202020ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x09363109636f6c2eull,0x73090a3009333037ull,0x09203233752e7268ull,
0x25202c3137317225ull,0x3b31202c30373172ull,0x2f2f092020202020ull,0x732e766f6d090a20ull,
0x3731722509203233ull,0x3137317225202c32ull,0x202020202020203bull,0x6d090a202f2f0920ull,
0x09203233752e766full,0x30202c3337317225ull,0x202020202020203bull,0x2f2f092020202020ull,
0x2e70746573090a20ull,0x09203233732e656cull,0x7225202c31377025ull,0x317225202c313731ull,
0x0a202f2f093b3337ull,0x3233752e766f6d09ull,0x2c34373172250920ull,0x20202020203b3120ull,
0x0920202020202020ull,0x702540090a202f2full,0x0920617262203137ull,0x34345f305f744c24ull,
0x2020202020203b32ull,0x0a202f2f09202020ull,0x3436752e64646109ull,0x2c33326472250920ull,
0x32202c3364722520ull,0x092020202020203bull,0x5f744c240a202f2full,0x200a3a3039335f30ull,
0x3e706f6f6c3c2f2full,0x6f6220706f6f4c20ull,0x20656e696c207964ull,0x6f6c2e090a353037ull,
0x3530370936310963ull,0x2e726162090a3009ull,0x3b300920636e7973ull,0x2020202020202020ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x2e656c2e70746573ull,0x3770250920323375ull,
0x3237317225202c32ull,0x2f093b357225202cull,0x37702540090a202full,0x2409206172622032ull,
0x3139335f305f744cull,0x202020202020203bull,0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c353037ull,
0x656c6562616c2064ull,0x5f305f744c242064ull,0x6f6c2e090a303933ull,0x3131370936310963ull,
0x326c756d090a3009ull,0x3233752e6f6c2e34ull,0x202c313672250920ull,0x203b32202c357225ull,
0x090a202f2f092020ull,0x203233752e646461ull,0x25202c3236722509ull,0x203b32202c313672ull,
0x2f09202020202020ull,0x2e6c756d090a202full,0x09203233752e6f6cull,0x25202c3537317225ull,
0x317225202c323672ull,0x0a202f2f093b3437ull,0x3436752e74766309ull,0x722509203233752eull,
0x7225202c30323164ull,0x092020203b353731ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,
0x2c31323164722509ull,0x2c30323164722520ull,0x0a202f2f093b3220ull,0x3436752e64646109ull,
0x3232316472250920ull,0x202c33647225202cull,0x093b313231647225ull,0x646461090a202f2full,
0x722509203436752eull,0x7225202c33323164ull,0x3538202c32323164ull,0x3239353433393938ull,
0x6c090a202f2f093bull,0x6465726168732e64ull,0x722509203631752eull,0x72255b202c363568ull,
0x3b5d302b33323164ull,0x313a6469202f2f09ull,0x75635f5f20373433ull,0x6d6f635f735f6164ull,
0x5f6e6f6974636170ull,0x363032337473696cull,0x6461090a3078302bull,0x2509203233752e64ull,
0x7225202c36373172ull,0x20203b31202c3136ull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,
0x722509203233752eull,0x317225202c373731ull,0x37317225202c3437ull,0x090a202f2f093b36ull,
0x2e3436752e747663ull,0x6472250920323375ull,0x317225202c343231ull,0x2f092020203b3737ull,
0x2e6c756d090a202full,0x09203436752e6f6cull,0x202c353231647225ull,0x202c343231647225ull,
0x090a202f2f093b32ull,0x203436752e646461ull,0x2c36323164722509ull,0x25202c3364722520ull,
0x2f093b3532316472ull,0x2e646461090a202full,0x6472250920343675ull,0x647225202c373231ull,
0x383538202c363231ull,0x3b32393534333939ull,0x646c090a202f2f09ull,0x2e6465726168732eull,
0x6872250920363175ull,0x6472255b202c3735ull,0x093b5d302b373231ull,0x33313a6469202f2full,
0x6475635f5f203634ull,0x706d6f635f735f61ull,0x6c5f6e6f69746361ull,0x2b36303233747369ull,
0x646461090a307830ull,0x722509203631752eull,0x687225202c383568ull,0x35687225202c3635ull,
0x0a202f2f09203b37ull,0x726168732e747309ull,0x09203631752e6465ull,0x2b3332316472255bull,
0x35687225202c5d30ull,0x6469202f2f093b38ull,0x5f5f20383433313aull,0x635f735f61647563ull,
0x6f69746361706d6full,0x32337473696c5f6eull,0x240a3078302b3630ull,0x3139335f305f744cull,
0x6f6c3c2f2f200a3aull,0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,
0x202c35303720656eull,0x62616c2064616568ull,0x744c242064656c65ull,0x090a3039335f305full,
0x09363109636f6c2eull,0x73090a3009343137ull,0x09203233622e6c68ull,0x25202c3437317225ull,
0x3b31202c34373172ull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x3009333037093631ull,
0x33732e726873090aull,0x3237317225092032ull,0x2c3237317225202cull,0x20202020203b3120ull,
0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x3b30202c38373172ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x672e70746573090aull,0x2509203233732e74ull,0x317225202c333770ull,
0x37317225202c3237ull,0x090a202f2f093b38ull,0x7262203337702540ull,0x305f744c24092061ull,
0x2020203b3039335full,0x2f09202020202020ull,0x2e617262090a202full,0x744c240920696e75ull,
0x203b3838335f305full,0x2020202020202020ull,0x240a202f2f092020ull,0x3234345f305f744cull,
0x5f305f744c240a3aull,0x6f6d090a3a383833ull,0x2509203233752e76ull,0x3b32202c39373172ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x6c2e70746573090aull,0x2509203233752e65ull,
0x317225202c343770ull,0x37317225202c3037ull,0x090a202f2f093b39ull,0x7262203437702540ull,
0x305f744c24092061ull,0x2020203b3439335full,0x2f09202020202020ull,0x2e646461090a202full,
0x6472250920343675ull,0x33647225202c3332ull,0x202020203b32202cull,0x090a202f2f092020ull,
0x203233732e766f6dull,0x202c303831722509ull,0x2020202020203b32ull,0x2f09202020202020ull,
0x305f744c240a202full,0x2f200a3a3639335full,0x203e706f6f6c3c2full,0x646f6220706f6f4cull,
0x3720656e696c2079ull,0x7473656e202c3330ull,0x7470656420676e69ull,0x7365202c31203a68ull,
0x20646574616d6974ull,0x6f69746172657469ull,0x6e6b6e75203a736eull,0x6f6c2e090a6e776full,
0x3032370936310963ull,0x2e726873090a3009ull,0x3172250920323375ull,0x37317225202c3437ull,
0x2020203b31202c34ull,0x090a202f2f092020ull,0x09363109636f6c2eull,0x62090a3009313237ull,
0x20636e79732e7261ull,0x20202020203b3009ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x752e627573090a20ull,0x3831722509203233ull,0x3038317225202c31ull,0x202020203b31202cull,
0x73090a202f2f0920ull,0x752e65672e707465ull,0x3537702509203233ull,0x25202c357225202cull,
0x2f2f093b31383172ull,0x3537702540090a20ull,0x4c24092061726220ull,0x3b3739335f305f74ull,
0x2020202020202020ull,0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3720656e696c2079ull,0x64616568202c3330ull,0x64656c6562616c20ull,
0x335f305f744c2420ull,0x636f6c2e090a3639ull,0x0938323709363109ull,0x752e646461090a30ull,
0x3137722509203233ull,0x31202c357225202cull,0x202020202020203bull,0x73090a202f2f0920ull,
0x09203233752e7268ull,0x25202c3238317225ull,0x3b31202c34373172ull,0x2f2f092020202020ull,
0x6c2e6c756d090a20ull,0x2509203233752e6full,0x7225202c33383172ull,0x37317225202c3137ull,
0x090a202f2f093b34ull,0x203233752e646461ull,0x202c343831722509ull,0x25202c3238317225ull,
0x2f09203b33383172ull,0x2e747663090a202full,0x203233752e343675ull,0x2c38323164722509ull,
0x203b343831722520ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3164722509203436ull,
0x31647225202c3932ull,0x2f093b32202c3832ull,0x2e646461090a202full,0x6472250920343675ull,
0x647225202c303331ull,0x3231647225202c33ull,0x090a202f2f093b39ull,0x203436752e646461ull,
0x2c31333164722509ull,0x2c30333164722520ull,0x3433393938353820ull,0x202f2f093b323935ull,
0x6168732e646c090aull,0x203631752e646572ull,0x202c393568722509ull,0x2b3133316472255bull,
0x69202f2f093b5d30ull,0x5f20393433313a64ull,0x5f735f616475635full,0x69746361706d6f63ull,
0x337473696c5f6e6full,0x0a3078302b363032ull,0x3436752e74766309ull,0x722509203233752eull,
0x7225202c32333164ull,0x092020203b333831ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,
0x2c33333164722509ull,0x2c32333164722520ull,0x0a202f2f093b3220ull,0x3436752e64646109ull,
0x3433316472250920ull,0x202c33647225202cull,0x093b333331647225ull,0x646461090a202f2full,
0x722509203436752eull,0x7225202c35333164ull,0x3538202c34333164ull,0x3239353433393938ull,
0x6c090a202f2f093bull,0x6465726168732e64ull,0x722509203631752eull,0x72255b202c303668ull,
0x3b5d302b35333164ull,0x313a6469202f2f09ull,0x75635f5f20303533ull,0x6d6f635f735f6164ull,
0x5f6e6f6974636170ull,0x363032337473696cull,0x6461090a3078302bull,0x2509203631752e64ull,
0x7225202c31366872ull,0x687225202c393568ull,0x202f2f09203b3036ull,0x6168732e7473090aull,
0x203631752e646572ull,0x3133316472255b09ull,0x687225202c5d302bull,0x69202f2f093b3136ull,
0x5f20313533313a64ull,0x5f735f616475635full,0x69746361706d6f63ull,0x337473696c5f6e6full,
0x0a3078302b363032ull,0x39335f305f744c24ull,0x6c3c2f2f200a3a37ull,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c33303720656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x0a3639335f305f74ull,0x363109636f6c2e09ull,0x090a300938313709ull,
0x203233622e6c6873ull,0x202c303831722509ull,0x31202c3038317225ull,0x2f0920202020203bull,
0x70746573090a202full,0x203233752e746c2eull,0x25202c3637702509ull,0x7225202c30383172ull,
0x202f2f093b303731ull,0x203637702540090aull,0x744c240920617262ull,0x203b3639335f305full,
0x2020202020202020ull,0x744c240a202f2f09ull,0x0a3a3439335f305full,0x363109636f6c2e09ull,
0x090a300938373409ull,0x636e79732e726162ull,0x202020203b300920ull,0x2020202020202020ull,
0x2f09202020202020ull,0x70252140090a202full,0x2409206172622031ull,0x3030345f305f744cull,
0x202020202020203bull,0x090a202f2f092020ull,0x09363109636f6c2eull,0x6c090a3009363834ull,
0x6465726168732e64ull,0x722509203233752eull,0x756e5b202c353831ull,0x6461657268745f6dull,
0x6576697463615f73ull,0x6469202f2f093b5dull,0x756e20383132313aull,0x6461657268745f6dull,
0x6576697463615f73ull,0x7663090a3078302bull,0x33752e3436752e74ull,0x3331647225092032ull,
0x3538317225202c36ull,0x202f2f092020203bull,0x6f6c2e6c756d090aull,0x722509203436752eull,
0x7225202c37333164ull,0x3b32202c36333164ull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x25202c3833316472ull,0x25202c3733316472ull,0x202f2f093b336472ull,0x6168732e646c090aull,
0x203631752e646572ull,0x202c363831722509ull,0x2b3833316472255bull,0x69202f2f093b5d30ull,
0x5f20323533313a64ull,0x5f735f616475635full,0x69746361706d6f63ull,0x337473696c5f6e6full,
0x0a3078302b363032ull,0x726168732e747309ull,0x09203233752e6465ull,0x6f6c625f6d756e5bull,
0x746c756d5f736b63ull,0x3638317225202c5dull,0x3a6469202f2f093bull,0x6d756e2032393131ull,
0x5f736b636f6c625full,0x3078302b746c756dull,0x3109636f6c2e090aull,0x0a30093738340936ull,
0x3436752e64646109ull,0x3933316472250920ull,0x373331647225202cull,0x093b32647225202cull,
0x2e646c090a202f2full,0x752e646572616873ull,0x3831722509203631ull,0x316472255b202c37ull,
0x2f093b5d302b3933ull,0x3533313a6469202full,0x616475635f5f2033ull,0x5f7466656c5f735full,
0x383132746e756f63ull,0x73090a3078302b30ull,0x6465726168732e74ull,0x6f5b09203233752eull,
0x756d5f7465736666ull,0x64626d616c5f746cull,0x38317225202c5d61ull,0x6469202f2f093b37ull,
0x666f20333931313aull,0x6c756d5f74657366ull,0x6164626d616c5f74ull,0x6c2e090a3078302bull,
0x383409363109636full,0x646461090a300938ull,0x722509203436752eull,0x7225202c30343164ull,
0x7225202c37333164ull,0x0a202f2f093b3564ull,0x726168732e646c09ull,0x09203631752e6465ull,
0x5b202c3838317225ull,0x302b303431647225ull,0x6469202f2f093b5dull,0x5f5f20343533313aull,
0x725f735f61647563ull,0x756f635f74686769ull,0x302b34383236746eull,0x732e7473090a3078ull,
0x33752e6465726168ull,0x5f6d756e5b092032ull,0x25202c5d746c756dull,0x2f2f093b38383172ull,
0x353533313a646920ull,0x6c756d5f6d756e20ull,0x2e090a3078302b74ull,0x3409363109636f6cull,
0x646c090a30093039ull,0x752e6d617261702eull,0x3164722509203436ull,0x635f5f5b202c3134ull,
0x5f6d726170616475ull,0x6573696237315a5full,0x6c656e72654b7463ull,0x536650656772614cull,
0x50666a6a66666a5full,0x5f535f535f30536aull,0x535f535f535f3053ull,0x5f30535f30535f30ull,
0x756e5f675f5f3053ull,0x093b5d656e6f5f6dull,0x33313a6469202f2full,0x6475635f5f203635ull,
0x5a5f5f6d72617061ull,0x7463657369623731ull,0x614c6c656e72654bull,0x6a5f536650656772ull,
0x536a50666a6a6666ull,0x30535f535f535f30ull,0x5f30535f535f535full,0x30535f30535f3053ull,
0x5f6d756e5f675f5full,0x0a3078302b656e6full,0x626f6c672e747309ull,0x09203233752e6c61ull,
0x2b3134316472255bull,0x38317225202c5d30ull,0x6469202f2f093b37ull,0x2e090a373533313aull,
0x3409363109636f6cull,0x646c090a30093139ull,0x752e6d617261702eull,0x3164722509203436ull,
0x635f5f5b202c3234ull,0x5f6d726170616475ull,0x6573696237315a5full,0x6c656e72654b7463ull,
0x536650656772614cull,0x50666a6a66666a5full,0x5f535f535f30536aull,0x535f535f535f3053ull,
0x5f30535f30535f30ull,0x756e5f675f5f3053ull,0x736b636f6c625f6dull,0x093b5d746c756d5full,
0x33313a6469202f2full,0x6475635f5f203835ull,0x5a5f5f6d72617061ull,0x7463657369623731ull,
0x614c6c656e72654bull,0x6a5f536650656772ull,0x536a50666a6a6666ull,0x30535f535f535f30ull,
0x5f30535f535f535full,0x30535f30535f3053ull,0x5f6d756e5f675f5full,0x6d5f736b636f6c62ull,
0x0a3078302b746c75ull,0x626f6c672e747309ull,0x09203233752e6c61ull,0x2b3234316472255bull,
0x38317225202c5d30ull,0x6469202f2f093b36ull,0x4c240a393533313aull,0x3a3030345f305f74ull,
0x3109636f6c2e090aull,0x0a30093339340936ull,0x6e79732e72616209ull,0x2020203b30092063ull,
0x2020202020202020ull,0x0920202020202020ull,0x6f6c2e090a202f2full,0x3231360936310963ull,
0x732e646c090a3009ull,0x33662e6465726168ull,0x202c376625092032ull,0x302b30316472255bull,
0x6469202f2f093b5dull,0x5f5f20303633313aull,0x6c5f735f61647563ull,0x302b383231746665ull,
0x636f6c2e090a3078ull,0x0933313609363109ull,0x68732e646c090a30ull,0x3233662e64657261ull,
0x5b202c3666250920ull,0x5d302b3131647225ull,0x3a6469202f2f093bull,0x635f5f2031363331ull,
0x69725f735f616475ull,0x2b32333234746867ull,0x2e646c090a307830ull,0x752e646572616873ull,
0x3831722509203233ull,0x5f6d756e5b202c39ull,0x5f73646165726874ull,0x3b5d657669746361ull,
0x313a6469202f2f09ull,0x5f6d756e20383132ull,0x5f73646165726874ull,0x302b657669746361ull,
0x70746573090a3078ull,0x203233752e74672eull,0x25202c3737702509ull,0x7225202c39383172ull,
0x202f2f093b373031ull,0x373770252140090aull,0x4c24092061726220ull,0x3b3230345f305f74ull,
0x2020202020202020ull,0x6c2e090a202f2f09ull,0x313609363109636full,0x6c756d090a300937ull,
0x203436752e6f6c2eull,0x2c33343164722509ull,0x202c303564722520ull,0x0a202f2f09203b34ull,
0x3436752e64646109ull,0x3434316472250920ull,0x333431647225202cull,0x093b31647225202cull,
0x2e646c090a202f2full,0x662e646572616873ull,0x3038662509203233ull,0x34316472255b202cull,
0x2f2f093b5d302b34ull,0x323633313a646920ull,0x5f616475635f5f20ull,0x32317466656c5f73ull,
0x6d090a3078302b38ull,0x09203233662e766full,0x6625202c31386625ull,0x20202020203b3038ull,
0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x3009383136093631ull,0x36752e646461090aull,
0x3431647225092034ull,0x3431647225202c35ull,0x3b34647225202c33ull,0x646c090a202f2f09ull,
0x2e6465726168732eull,0x3866250920323366ull,0x316472255b202c32ull,0x2f093b5d302b3534ull,
0x3633313a6469202full,0x616475635f5f2034ull,0x74686769725f735full,0x3078302b32333234ull,
0x33662e766f6d090aull,0x2c33386625092032ull,0x20203b3238662520ull,0x2020202020202020ull,
0x744c240a202f2f09ull,0x0a3a3230345f305full,0x363109636f6c2e09ull,0x090a300931323609ull,
0x636e79732e726162ull,0x202020203b300920ull,0x2020202020202020ull,0x2f09202020202020ull,
0x70252140090a202full,0x0920617262203534ull,0x30345f305f744c24ull,0x2020202020203b35ull,
0x090a202f2f092020ull,0x09363109636f6c2eull,0x6c090a3009343336ull,0x6465726168732e64ull,
0x722509203631752eull,0x72255b202c303931ull,0x093b5d302b323164ull,0x33313a6469202f2full,
0x6475635f5f203636ull,0x7466656c5f735f61ull,0x3132746e756f635full,0x090a3078302b3038ull,
0x20696e752e617262ull,0x345f305f744c2409ull,0x20202020203b3430ull,0x2f09202020202020ull,
0x305f744c240a202full,0x6c090a3a3530345full,0x6465726168732e64ull,0x722509203631752eull,
0x72255b202c313931ull,0x093b5d302b333164ull,0x33313a6469202f2full,0x6475635f5f203736ull,
0x686769725f735f61ull,0x36746e756f635f74ull,0x0a3078302b343832ull,0x726168732e646c09ull,
0x09203233752e6465ull,0x5b202c3239317225ull,0x6d5f74657366666full,0x626d616c5f746c75ull,
0x202f2f093b5d6164ull,0x20333931313a6469ull,0x6d5f74657366666full,0x626d616c5f746c75ull,
0x090a3078302b6164ull,0x203233752e646461ull,0x202c303931722509ull,0x25202c3139317225ull,
0x2f09203b32393172ull,0x305f744c240a202full,0x6d090a3a3430345full,0x09203233752e766full,
0x30202c3339317225ull,0x202020202020203bull,0x2f2f092020202020ull,0x2e70746573090a20ull,
0x09203233752e656eull,0x7225202c38377025ull,0x317225202c373631ull,0x0a202f2f093b3339ull,
0x2038377025214009ull,0x744c240920617262ull,0x203b3730345f305full,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x3733360936310963ull,0x732e646c090a3009ull,0x31752e6465726168ull,
0x3439317225092036ull,0x2b386472255b202cull,0x69202f2f093b5d30ull,0x5f20383633313a64ull,
0x5f735f616475635full,0x69746361706d6f63ull,0x337473696c5f6e6full,0x0a3078302b363032ull,
0x696e752e61726209ull,0x5f305f744c240920ull,0x202020203b363034ull,0x0920202020202020ull,
0x5f744c240a202f2full,0x090a3a3730345f30ull,0x203233752e766f6dull,0x202c343931722509ull,
0x2020202020203b30ull,0x2f09202020202020ull,0x305f744c240a202full,0x40090a3a3630345full,
0x7262203737702521ull,0x305f744c24092061ull,0x2020203b3930345full,0x2f2f092020202020ull,
0x752e766f6d090a20ull,0x3931722509203233ull,0x2020203b31202c35ull,0x2020202020202020ull,
0x73090a202f2f0920ull,0x752e656e2e707465ull,0x3937702509203233ull,0x2c3632317225202cull,
0x093b353931722520ull,0x702540090a202f2full,0x0920617262203937ull,0x31345f305f744c24ull,
0x2020202020203b31ull,0x0a202f2f09202020ull,0x363109636f6c2e09ull,0x090a300931343609ull,
0x203436752e646461ull,0x2c36343164722509ull,0x202c313564722520ull,0x2f09203b32647225ull,
0x732e646c090a202full,0x31752e6465726168ull,0x3639317225092036ull,0x34316472255b202cull,
0x2f2f093b5d302b36ull,0x393633313a646920ull,0x5f616475635f5f20ull,0x635f7466656c5f73ull,
0x30383132746e756full,0x7262090a3078302bull,0x240920696e752e61ull,0x3031345f305f744cull,
0x202020202020203bull,0x202f2f0920202020ull,0x345f305f744c240aull,0x646461090a3a3131ull,
0x722509203436752eull,0x7225202c37343164ull,0x647225202c313564ull,0x0a202f2f09203b35ull,
0x726168732e646c09ull,0x09203631752e6465ull,0x5b202c3739317225ull,0x302b373431647225ull,
0x6469202f2f093b5dull,0x5f5f20303733313aull,0x725f735f61647563ull,0x756f635f74686769ull,
0x302b34383236746eull,0x732e646c090a3078ull,0x33752e6465726168ull,0x3839317225092032ull,
0x657366666f5b202cull,0x6c5f746c756d5f74ull,0x093b5d6164626d61ull,0x31313a6469202f2full,
0x657366666f203339ull,0x6c5f746c756d5f74ull,0x78302b6164626d61ull,0x752e646461090a30ull,
0x3931722509203233ull,0x3739317225202c36ull,0x3b3839317225202cull,0x4c240a202f2f0920ull,
0x3a3031345f305f74ull,0x33732e766f6d090aull,0x3939317225092032ull,0x3b3639317225202cull,
0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x3b30202c30303272ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x652e70746573090aull,0x2509203233752e71ull,
0x317225202c303870ull,0x30327225202c3936ull,0x090a202f2f093b30ull,0x7262203038702540ull,
0x305f744c24092061ull,0x2020203b3331345full,0x2f09202020202020ull,0x636f6c2e090a202full,
0x0934343609363109ull,0x752e646461090a30ull,0x3164722509203436ull,0x35647225202c3834ull,
0x3b33647225202c31ull,0x6c090a202f2f0920ull,0x6465726168732e64ull,0x722509203631752eull,
0x72255b202c313032ull,0x3b5d302b38343164ull,0x313a6469202f2f09ull,0x75635f5f20313733ull,
0x6d6f635f735f6164ull,0x5f6e6f6974636170ull,0x363032337473696cull,0x7262090a3078302bull,
0x240920696e752e61ull,0x3830345f305f744cull,0x202020202020203bull,0x202f2f0920202020ull,
0x345f305f744c240aull,0x766f6d090a3a3331ull,0x722509203233752eull,0x203b30202c313032ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x696e752e61726209ull,0x5f305f744c240920ull,
0x202020203b383034ull,0x0920202020202020ull,0x5f744c240a202f2full,0x090a3a3930345f30ull,
0x203233752e766f6dull,0x202c313032722509ull,0x2020202020203b30ull,0x2f09202020202020ull,
0x2e766f6d090a202full,0x3172250920323375ull,0x20203b30202c3939ull,0x2020202020202020ull,
0x240a202f2f092020ull,0x3830345f305f744cull,0x09636f6c2e090a3aull,0x3009383436093631ull,
0x79732e726162090aull,0x20203b300920636eull,0x2020202020202020ull,0x2020202020202020ull,
0x6c2e090a202f2f09ull,0x353609363109636full,0x747663090a300931ull,0x3233752e3436752eull,
0x3934316472250920ull,0x3b3039317225202cull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,
0x6472250920343675ull,0x647225202c303531ull,0x093b34202c393431ull,0x646461090a202f2full,
0x722509203436752eull,0x7225202c31353164ull,0x7225202c30353164ull,0x0a202f2f093b3164ull,
0x726168732e747309ull,0x09203233662e6465ull,0x2b3135316472255bull,0x3b376625202c5d30ull,
0x313a6469202f2f09ull,0x75635f5f20323733ull,0x66656c5f735f6164ull,0x3078302b38323174ull,
0x3109636f6c2e090aull,0x0a30093235360936ull,0x3436752e64646109ull,0x3235316472250920ull,
0x303531647225202cull,0x093b34647225202cull,0x2e7473090a202f2full,0x662e646572616873ull,
0x6472255b09203233ull,0x202c5d302b323531ull,0x202f2f093b366625ull,0x20333733313a6469ull,
0x735f616475635f5full,0x323474686769725full,0x090a3078302b3233ull,0x09363109636f6c2eull,
0x6d090a3009333536ull,0x36752e6f6c2e6c75ull,0x3531647225092034ull,0x3431647225202c33ull,
0x2f2f093b32202c39ull,0x622e6c6873090a20ull,0x3032722509203233ull,0x202c317225202c32ull,
0x20202020203b3631ull,0x73090a202f2f0920ull,0x09203233752e7268ull,0x25202c3330327225ull,
0x3631202c32303272ull,0x2f2f09202020203bull,0x752e646461090a20ull,0x3164722509203436ull,
0x31647225202c3435ull,0x32647225202c3335ull,0x73090a202f2f093bull,0x6465726168732e74ull,
0x255b09203631752eull,0x5d302b3435316472ull,0x3b3330327225202cull,0x313a6469202f2f09ull,
0x75635f5f20343733ull,0x66656c5f735f6164ull,0x32746e756f635f74ull,0x0a3078302b303831ull,
0x363109636f6c2e09ull,0x090a300934353609ull,0x203233622e6c6873ull,0x202c343032722509ull,
0x3b3631202c337225ull,0x2f09202020202020ull,0x2e726873090a202full,0x3272250920323375ull,
0x30327225202c3530ull,0x20203b3631202c34ull,0x090a202f2f092020ull,0x203436752e646461ull,
0x2c35353164722509ull,0x2c33353164722520ull,0x2f093b3564722520ull,0x732e7473090a202full,
0x31752e6465726168ull,0x316472255b092036ull,0x25202c5d302b3535ull,0x2f2f093b35303272ull,
0x353733313a646920ull,0x5f616475635f5f20ull,0x5f74686769725f73ull,0x383236746e756f63ull,
0x40090a3078302b34ull,0x7262203837702521ull,0x305f744c24092061ull,0x2020203b3431345full,
0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x3009363536093631ull,0x36752e747663090aull,
0x2509203233752e34ull,0x25202c3635316472ull,0x2020203b34393172ull,0x756d090a202f2f09ull,
0x3436752e6f6c2e6cull,0x3735316472250920ull,0x363531647225202cull,0x202f2f093b32202cull,
0x33752e627573090aull,0x3630327225092032ull,0x2c3736317225202cull,0x20202020203b3120ull,
0x6461090a202f2f09ull,0x2509203436752e64ull,0x25202c3835316472ull,0x25202c3735316472ull,
0x202f2f093b336472ull,0x6168732e7473090aull,0x203631752e646572ull,0x3835316472255b09ull,
0x327225202c5d322bull,0x69202f2f093b3630ull,0x5f20363733313a64ull,0x5f735f616475635full,
0x69746361706d6f63ull,0x337473696c5f6e6full,0x0a3078302b363032ull,0x363109636f6c2e09ull,
0x090a300937353609ull,0x203436752e646461ull,0x2c39353164722509ull,0x2c37353164722520ull,
0x093b343564722520ull,0x2e7473090a202f2full,0x752e646572616873ull,0x6472255b09203631ull,
0x202c5d322b393531ull,0x2f093b3235687225ull,0x3733313a6469202full,0x616475635f5f2037ull,
0x65685f6c635f735full,0x303133377265706cull,0x744c240a3078302bull,0x0a3a3431345f305full,
0x2037377025214009ull,0x744c240920617262ull,0x203b3831345f305full,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x3336360936310963ull,0x2e747663090a3009ull,0x203233752e343675ull,
0x2c30363164722509ull,0x203b393931722520ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,
0x3164722509203436ull,0x31647225202c3136ull,0x2f093b34202c3036ull,0x2e766f6d090a202full,
0x3866250920323366ull,0x3b31386625202c34ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x203436752e646461ull,0x2c32363164722509ull,0x2c31363164722520ull,0x2f093b3164722520ull,
0x732e7473090a202full,0x33662e6465726168ull,0x316472255b092032ull,0x25202c5d302b3236ull,
0x202f2f093b343866ull,0x20383733313a6469ull,0x735f616475635f5full,0x3832317466656c5full,
0x6c2e090a3078302bull,0x363609363109636full,0x766f6d090a300934ull,0x662509203233662eull,
0x33386625202c3538ull,0x202020202020203bull,0x0a202f2f09202020ull,0x3436752e64646109ull,
0x3336316472250920ull,0x313631647225202cull,0x093b34647225202cull,0x2e7473090a202f2full,
0x662e646572616873ull,0x6472255b09203233ull,0x202c5d302b333631ull,0x2f2f093b35386625ull,
0x393733313a646920ull,0x5f616475635f5f20ull,0x3474686769725f73ull,0x0a3078302b323332ull,
0x363109636f6c2e09ull,0x090a300935363609ull,0x752e6f6c2e6c756dull,0x3164722509203436ull,
0x31647225202c3436ull,0x2f093b32202c3036ull,0x2e766f6d090a202full,0x3272250920323373ull,
0x31317225202c3730ull,0x2020202020203b30ull,0x090a202f2f092020ull,0x203233622e6c6873ull,
0x202c383032722509ull,0x31202c3730327225ull,0x2f09202020203b36ull,0x2e726873090a202full,
0x3272250920323375ull,0x30327225202c3930ull,0x20203b3631202c38ull,0x090a202f2f092020ull,
0x203436752e646461ull,0x2c35363164722509ull,0x2c34363164722520ull,0x2f093b3264722520ull,
0x732e7473090a202full,0x31752e6465726168ull,0x316472255b092036ull,0x25202c5d302b3536ull,
0x2f2f093b39303272ull,0x303833313a646920ull,0x5f616475635f5f20ull,0x635f7466656c5f73ull,
0x30383132746e756full,0x6c2e090a3078302bull,0x363609363109636full,0x766f6d090a300936ull,
0x722509203233732eull,0x317225202c303132ull,0x20202020203b3231ull,0x0a202f2f09202020ull,
0x3233622e6c687309ull,0x2c31313272250920ull,0x202c303132722520ull,0x09202020203b3631ull,
0x726873090a202f2full,0x722509203233752eull,0x327225202c323132ull,0x203b3631202c3131ull,
0x0a202f2f09202020ull,0x3436752e64646109ull,0x3636316472250920ull,0x343631647225202cull,
0x093b35647225202cull,0x2e7473090a202f2full,0x752e646572616873ull,0x6472255b09203631ull,
0x202c5d302b363631ull,0x2f093b3231327225ull,0x3833313a6469202full,0x616475635f5f2031ull,
0x74686769725f735full,0x3236746e756f635full,0x090a3078302b3438ull,0x203233752e766f6dull,
0x202c333132722509ull,0x2020202020203b30ull,0x2f09202020202020ull,0x70746573090a202full,
0x203233752e71652eull,0x25202c3138702509ull,0x7225202c39363172ull,0x202f2f093b333132ull,
0x203138702540090aull,0x744c240920617262ull,0x203b3831345f305full,0x2020202020202020ull,
0x6c2e090a202f2f09ull,0x363609363109636full,0x747663090a300938ull,0x3233752e3436752eull,
0x3736316472250920ull,0x3b3130327225202cull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,
0x6472250920343675ull,0x647225202c383631ull,0x093b32202c373631ull,0x627573090a202f2full,
0x722509203233752eull,0x317225202c343132ull,0x20203b31202c3936ull,0x0a202f2f09202020ull,
0x3436752e64646109ull,0x3936316472250920ull,0x383631647225202cull,0x093b33647225202cull,
0x2e7473090a202f2full,0x752e646572616873ull,0x6472255b09203631ull,0x202c5d322b393631ull,
0x2f093b3431327225ull,0x3833313a6469202full,0x616475635f5f2032ull,0x61706d6f635f735full,
0x696c5f6e6f697463ull,0x302b363032337473ull,0x636f6c2e090a3078ull,0x0939363609363109ull,
0x752e646461090a30ull,0x3164722509203436ull,0x31647225202c3037ull,0x35647225202c3836ull,
0x090a202f2f093b34ull,0x65726168732e7473ull,0x5b09203631752e64ull,0x322b303731647225ull,
0x3535687225202c5dull,0x3a6469202f2f093bull,0x635f5f2033383331ull,0x6c635f735f616475ull,
0x377265706c65685full,0x0a3078302b303133ull,0x31345f305f744c24ull,0x305f744c240a3a38ull,
0x2e090a3a3631345full,0x3509363109636f6cull,0x6162090a30093530ull,0x0920636e79732e72ull,
0x2020202020203b30ull,0x2020202020202020ull,0x202f2f0920202020ull,0x203170252140090aull,
0x744c240920617262ull,0x203b3032345f305full,0x2020202020202020ull,0x6c2e090a202f2f09ull,
0x303509363109636full,0x2e646c090a300939ull,0x752e646572616873ull,0x3132722509203233ull,
0x5f6d756e5b202c35ull,0x2f093b5d746c756dull,0x3533313a6469202full,0x756d5f6d756e2035ull,
0x090a3078302b746cull,0x65726168732e646cull,0x2509203233752e64ull,0x6e5b202c36313272ull,
0x6b636f6c625f6d75ull,0x3b5d746c756d5f73ull,0x313a6469202f2f09ull,0x5f6d756e20323931ull,
0x6d5f736b636f6c62ull,0x0a3078302b746c75ull,0x3436752e74766309ull,0x722509203233752eull,
0x7225202c31373164ull,0x092020203b363132ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,
0x2c32373164722509ull,0x2c31373164722520ull,0x0a202f2f093b3220ull,0x3436752e64646109ull,
0x3337316472250920ull,0x202c33647225202cull,0x093b323731647225ull,0x2e7473090a202f2full,
0x752e646572616873ull,0x6472255b09203631ull,0x202c5d302b333731ull,0x2f093b3531327225ull,
0x3833313a6469202full,0x616475635f5f2034ull,0x61706d6f635f735full,0x696c5f6e6f697463ull,
0x302b363032337473ull,0x636f6c2e090a3078ull,0x0930313509363109ull,0x752e766f6d090a30ull,
0x3668722509203631ull,0x2020203b30202c32ull,0x2020202020202020ull,0x73090a202f2f0920ull,
0x6465726168732e74ull,0x5f5b09203631752eull,0x5f735f616475635full,0x65706c65685f6c63ull,
0x5d302b3031333772ull,0x3b3236687225202cull,0x313a6469202f2f09ull,0x75635f5f20353833ull,
0x5f6c635f735f6164ull,0x33377265706c6568ull,0x240a3078302b3031ull,0x3032345f305f744cull,
0x09636f6c2e090a3aull,0x3009333135093631ull,0x79732e726162090aull,0x20203b300920636eull,
0x2020202020202020ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,0x313509363109636full,
0x2e646c090a300936ull,0x752e646572616873ull,0x3132722509203233ull,0x7366666f5b202c37ull,
0x5f746c756d5f7465ull,0x3b5d6164626d616cull,0x313a6469202f2f09ull,0x7366666f20333931ull,
0x5f746c756d5f7465ull,0x302b6164626d616cull,0x732e646c090a3078ull,0x33662e6465726168ull,
0x2c36386625092032ull,0x2b30316472255b20ull,0x69202f2f093b5d30ull,0x5f20363833313a64ull,
0x5f735f616475635full,0x2b3832317466656cull,0x746573090a307830ull,0x3233752e656c2e70ull,
0x202c323870250920ull,0x25202c3731327225ull,0x0a202f2f093b3572ull,0x6220323870254009ull,
0x5f744c2409206172ull,0x20203b3332345f30ull,0x0920202020202020ull,0x6f6c2e090a202f2full,
0x3734350936310963ull,0x702e646c090a3009ull,0x3436752e6d617261ull,0x3437316472250920ull,
0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x7463657369623731ull,0x614c6c656e72654bull,
0x6a5f536650656772ull,0x536a50666a6a6666ull,0x30535f535f535f30ull,0x5f30535f535f535full,
0x30535f30535f3053ull,0x7466656c5f675f5full,0x2f093b5d656e6f5full,0x3833313a6469202full,
0x616475635f5f2037ull,0x315a5f5f6d726170ull,0x4b74636573696237ull,0x72614c6c656e7265ull,
0x666a5f5366506567ull,0x30536a50666a6a66ull,0x5f30535f535f535full,0x535f30535f535f53ull,
0x5f30535f30535f30ull,0x5f7466656c5f675full,0x0a3078302b656e6full,0x3436752e64646109ull,
0x3537316472250920ull,0x343731647225202cull,0x093b39647225202cull,0x6f6c2e090a202f2full,
0x3631350936310963ull,0x732e646c090a3009ull,0x33662e6465726168ull,0x2c36386625092032ull,
0x2b30316472255b20ull,0x0a202f2f093b5d30ull,0x363109636f6c2e09ull,0x090a300937343509ull,
0x61626f6c672e7473ull,0x5b09203233662e6cull,0x302b353731647225ull,0x3b36386625202c5dull,
0x313a6469202f2f09ull,0x6f6c2e090a383833ull,0x3834350936310963ull,0x732e646c090a3009ull,
0x33662e6465726168ull,0x2c37386625092032ull,0x2b31316472255b20ull,0x69202f2f093b5d30ull,
0x5f20393833313a64ull,0x5f735f616475635full,0x3332347468676972ull,0x6c090a3078302b32ull,
0x2e6d617261702e64ull,0x6472250920343675ull,0x5f5f5b202c363731ull,0x6d72617061647563ull,
0x73696237315a5f5full,0x656e72654b746365ull,0x6650656772614c6cull,0x666a6a66666a5f53ull,
0x535f535f30536a50ull,0x5f535f535f30535full,0x30535f30535f3053ull,0x725f675f5f30535full,
0x656e6f5f74686769ull,0x6469202f2f093b5dull,0x5f5f20303933313aull,0x6d72617061647563ull,
0x73696237315a5f5full,0x656e72654b746365ull,0x6650656772614c6cull,0x666a6a66666a5f53ull,
0x535f535f30536a50ull,0x5f535f535f30535full,0x30535f30535f3053ull,0x725f675f5f30535full,
0x656e6f5f74686769ull,0x6461090a3078302bull,0x2509203436752e64ull,0x25202c3737316472ull,
0x25202c3637316472ull,0x202f2f093b396472ull,0x6f6c672e7473090aull,0x203233662e6c6162ull,
0x3737316472255b09ull,0x386625202c5d302bull,0x6469202f2f093b37ull,0x2e090a313933313aull,
0x3509363109636f6cull,0x646c090a30093035ull,0x2e6465726168732eull,0x3272250920363175ull,
0x6472255b202c3831ull,0x2f093b5d302b3331ull,0x3933313a6469202full,0x616475635f5f2032ull,
0x74686769725f735full,0x3236746e756f635full,0x090a3078302b3438ull,0x6d617261702e646cull,
0x722509203436752eull,0x5f5b202c38373164ull,0x726170616475635full,0x696237315a5f5f6dull,
0x6e72654b74636573ull,0x50656772614c6c65ull,0x6a6a66666a5f5366ull,0x5f535f30536a5066ull,
0x535f535f30535f53ull,0x535f30535f30535full,0x5f675f5f30535f30ull,0x5d656e6f5f736f70ull,
0x3a6469202f2f093bull,0x635f5f2033393331ull,0x5f6d726170616475ull,0x6573696237315a5full,
0x6c656e72654b7463ull,0x536650656772614cull,0x50666a6a66666a5full,0x5f535f535f30536aull,
0x535f535f535f3053ull,0x5f30535f30535f30ull,0x6f705f675f5f3053ull,0x78302b656e6f5f73ull,
0x752e646461090a30ull,0x3164722509203436ull,0x31647225202c3937ull,0x39647225202c3837ull,
0x73090a202f2f093bull,0x6c61626f6c672e74ull,0x255b09203233752eull,0x5d302b3937316472ull,
0x3b3831327225202cull,0x313a6469202f2f09ull,0x617262090a343933ull,0x4c240920696e752eull,
0x3b3232345f305f74ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x32345f305f744c24ull,
0x636f6c2e090a3a33ull,0x0936313509363109ull,0x68732e646c090a30ull,0x3233752e64657261ull,
0x2c37313272250920ull,0x74657366666f5b20ull,0x616c5f746c756d5full,0x2f093b5d6164626dull,
0x636f6c2e090a202full,0x0934353509363109ull,0x752e627573090a30ull,0x3132722509203233ull,
0x202c357225202c39ull,0x20203b3731327225ull,0x63090a202f2f0920ull,0x752e3436752e7476ull,
0x3164722509203233ull,0x31327225202c3038ull,0x2f2f092020203b39ull,0x6c2e6c756d090a20ull,
0x2509203436752e6full,0x25202c3138316472ull,0x34202c3038316472ull,0x6c090a202f2f093bull,
0x2e6d617261702e64ull,0x6472250920343675ull,0x5f5f5b202c323831ull,0x6d72617061647563ull,
0x73696237315a5f5full,0x656e72654b746365ull,0x6650656772614c6cull,0x666a6a66666a5f53ull,
0x535f535f30536a50ull,0x5f535f535f30535full,0x30535f30535f3053ull,0x6c5f675f5f30535full,
0x746c756d5f746665ull,0x6469202f2f093b5dull,0x5f5f20353933313aull,0x6d72617061647563ull,
0x73696237315a5f5full,0x656e72654b746365ull,0x6650656772614c6cull,0x666a6a66666a5f53ull,
0x535f535f30536a50ull,0x5f535f535f30535full,0x30535f30535f3053ull,0x6c5f675f5f30535full,
0x746c756d5f746665ull,0x6461090a3078302bull,0x2509203436752e64ull,0x25202c3338316472ull,
0x25202c3238316472ull,0x2f093b3138316472ull,0x636f6c2e090a202full,0x0936313509363109ull,
0x68732e646c090a30ull,0x3233662e64657261ull,0x202c363866250920ull,0x302b30316472255bull,
0x090a202f2f093b5dull,0x09363109636f6c2eull,0x73090a3009343535ull,0x6c61626f6c672e74ull,
0x255b09203233662eull,0x5d302b3338316472ull,0x093b36386625202cull,0x33313a6469202f2full,
0x636f6c2e090a3639ull,0x0935353509363109ull,0x68732e646c090a30ull,0x3233662e64657261ull,
0x202c383866250920ull,0x302b31316472255bull,0x6469202f2f093b5dull,0x5f5f20373933313aull,
0x725f735f61647563ull,0x3233323474686769ull,0x646c090a3078302bull,0x752e6d617261702eull,
0x3164722509203436ull,0x635f5f5b202c3438ull,0x5f6d726170616475ull,0x6573696237315a5full,
0x6c656e72654b7463ull,0x536650656772614cull,0x50666a6a66666a5full,0x5f535f535f30536aull,
0x535f535f535f3053ull,0x5f30535f30535f30ull,0x69725f675f5f3053ull,0x746c756d5f746867ull,
0x6469202f2f093b5dull,0x5f5f20383933313aull,0x6d72617061647563ull,0x73696237315a5f5full,
0x656e72654b746365ull,0x6650656772614c6cull,0x666a6a66666a5f53ull,0x535f535f30536a50ull,
0x5f535f535f30535full,0x30535f30535f3053ull,0x725f675f5f30535full,0x6c756d5f74686769ull,
0x61090a3078302b74ull,0x09203436752e6464ull,0x202c353831647225ull,0x202c343831647225ull,
0x093b313831647225ull,0x2e7473090a202f2full,0x662e6c61626f6c67ull,0x6472255b09203233ull,
0x202c5d302b353831ull,0x2f2f093b38386625ull,0x393933313a646920ull,0x3109636f6c2e090aull,
0x0a30093635350936ull,0x726168732e646c09ull,0x09203631752e6465ull,0x5b202c3032327225ull,
0x5d302b3231647225ull,0x3a6469202f2f093bull,0x635f5f2030303431ull,0x656c5f735f616475ull,
0x746e756f635f7466ull,0x3078302b30383132ull,0x7261702e646c090aull,0x09203436752e6d61ull,
0x202c363831647225ull,0x70616475635f5f5bull,0x37315a5f5f6d7261ull,0x654b746365736962ull,
0x6772614c6c656e72ull,0x66666a5f53665065ull,0x5f30536a50666a6aull,0x535f30535f535f53ull,
0x30535f30535f535full,0x5f5f30535f30535full,0x635f7466656c5f67ull,0x6c756d5f746e756full,
0x69202f2f093b5d74ull,0x5f20313034313a64ull,0x726170616475635full,0x696237315a5f5f6dull,
0x6e72654b74636573ull,0x50656772614c6c65ull,0x6a6a66666a5f5366ull,0x5f535f30536a5066ull,
0x535f535f30535f53ull,0x535f30535f30535full,0x5f675f5f30535f30ull,0x756f635f7466656cull,
0x2b746c756d5f746eull,0x646461090a307830ull,0x722509203436752eull,0x7225202c37383164ull,
0x7225202c36383164ull,0x2f2f093b31383164ull,0x6c672e7473090a20ull,0x3233752e6c61626full,
0x38316472255b0920ull,0x7225202c5d302b37ull,0x202f2f093b303232ull,0x0a323034313a6469ull,
0x363109636f6c2e09ull,0x090a300937353509ull,0x65726168732e646cull,0x2509203631752e64ull,
0x255b202c31323272ull,0x3b5d302b33316472ull,0x313a6469202f2f09ull,0x75635f5f20333034ull,
0x6769725f735f6164ull,0x746e756f635f7468ull,0x3078302b34383236ull,0x7261702e646c090aull,
0x09203436752e6d61ull,0x202c383831647225ull,0x70616475635f5f5bull,0x37315a5f5f6d7261ull,
0x654b746365736962ull,0x6772614c6c656e72ull,0x66666a5f53665065ull,0x5f30536a50666a6aull,
0x535f30535f535f53ull,0x30535f30535f535full,0x5f5f30535f30535full,0x5f74686769725f67ull,
0x756d5f746e756f63ull,0x202f2f093b5d746cull,0x20343034313a6469ull,0x6170616475635f5full,
0x6237315a5f5f6d72ull,0x72654b7463657369ull,0x656772614c6c656eull,0x6a66666a5f536650ull,
0x535f30536a50666aull,0x5f535f30535f535full,0x5f30535f30535f53ull,0x675f5f30535f3053ull,
0x635f74686769725full,0x6c756d5f746e756full,0x61090a3078302b74ull,0x09203436752e6464ull,
0x202c393831647225ull,0x202c383831647225ull,0x093b313831647225ull,0x2e7473090a202f2full,
0x752e6c61626f6c67ull,0x6472255b09203233ull,0x202c5d302b393831ull,0x2f093b3132327225ull,
0x3034313a6469202full,0x5f305f744c240a35ull,0x646c090a3a323234ull,0x2e6465726168732eull,
0x3272250920323375ull,0x6d756e5b202c3232ull,0x736461657268745full,0x5d6576697463615full,
0x3a6469202f2f093bull,0x6d756e2038313231ull,0x736461657268745full,0x2b6576697463615full,
0x746573090a307830ull,0x3233752e656c2e70ull,0x202c333870250920ull,0x25202c3232327225ull,
0x2f2f093b37303172ull,0x3338702540090a20ull,0x4c24092061726220ull,0x3b3632345f305f74ull,
0x2020202020202020ull,0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3431647225092034ull,
0x3035647225202c33ull,0x2f2f09203b34202cull,0x752e646461090a20ull,0x3164722509203436ull,
0x35647225202c3039ull,0x3b35647225202c31ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x202c313931647225ull,0x202c333431647225ull,0x2f2f093b31647225ull,0x752e646461090a20ull,
0x3164722509203436ull,0x31647225202c3239ull,0x34647225202c3334ull,0x6c090a202f2f093bull,
0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3938ull,0x093b5d302b313931ull,
0x34313a6469202f2full,0x6475635f5f203630ull,0x7466656c5f735f61ull,0x0a3078302b383231ull,
0x363109636f6c2e09ull,0x090a300936313509ull,0x65726168732e646cull,0x2509203233752e64ull,
0x6f5b202c37313272ull,0x756d5f7465736666ull,0x64626d616c5f746cull,0x0a202f2f093b5d61ull,
0x363109636f6c2e09ull,0x090a300937353509ull,0x2e65672e70746573ull,0x3870250920323375ull,
0x3730317225202c34ull,0x3b3731327225202cull,0x2540090a202f2f09ull,0x2061726220343870ull,
0x345f305f744c2409ull,0x20202020203b3732ull,0x202f2f0920202020ull,0x3109636f6c2e090aull,
0x0a30093436350936ull,0x617261702e646c09ull,0x2509203436752e6dull,0x5b202c3339316472ull,
0x6170616475635f5full,0x6237315a5f5f6d72ull,0x72654b7463657369ull,0x656772614c6c656eull,
0x6a66666a5f536650ull,0x535f30536a50666aull,0x5f535f30535f535full,0x5f30535f30535f53ull,
0x675f5f30535f3053ull,0x6e6f5f7466656c5full,0x69202f2f093b5d65ull,0x5f20373833313a64ull,
0x726170616475635full,0x696237315a5f5f6dull,0x6e72654b74636573ull,0x50656772614c6c65ull,
0x6a6a66666a5f5366ull,0x5f535f30536a5066ull,0x535f535f30535f53ull,0x535f30535f30535full,
0x5f675f5f30535f30ull,0x656e6f5f7466656cull,0x6461090a3078302bull,0x2509203436752e64ull,
0x25202c3439316472ull,0x25202c3339316472ull,0x2f093b3334316472ull,0x636f6c2e090a202full,
0x0937353509363109ull,0x68732e646c090a30ull,0x3233662e64657261ull,0x202c393866250920ull,
0x2b3139316472255bull,0x0a202f2f093b5d30ull,0x363109636f6c2e09ull,0x090a300934363509ull,
0x61626f6c672e7473ull,0x5b09203233662e6cull,0x302b343931647225ull,0x3b39386625202c5dull,
0x313a6469202f2f09ull,0x6f6c2e090a373034ull,0x3536350936310963ull,0x732e646c090a3009ull,
0x33662e6465726168ull,0x2c30396625092032ull,0x3239316472255b20ull,0x202f2f093b5d302bull,
0x20383034313a6469ull,0x735f616475635f5full,0x323474686769725full,0x090a3078302b3233ull,
0x6d617261702e646cull,0x722509203436752eull,0x5f5b202c35393164ull,0x726170616475635full,
0x696237315a5f5f6dull,0x6e72654b74636573ull,0x50656772614c6c65ull,0x6a6a66666a5f5366ull,
0x5f535f30536a5066ull,0x535f535f30535f53ull,0x535f30535f30535full,0x5f675f5f30535f30ull,
0x6e6f5f7468676972ull,0x69202f2f093b5d65ull,0x5f20303933313a64ull,0x726170616475635full,
0x696237315a5f5f6dull,0x6e72654b74636573ull,0x50656772614c6c65ull,0x6a6a66666a5f5366ull,
0x5f535f30536a5066ull,0x535f535f30535f53ull,0x535f30535f30535full,0x5f675f5f30535f30ull,
0x6e6f5f7468676972ull,0x61090a3078302b65ull,0x09203436752e6464ull,0x202c363931647225ull,
0x202c353931647225ull,0x093b333431647225ull,0x2e7473090a202f2full,0x662e6c61626f6c67ull,
0x6472255b09203233ull,0x202c5d302b363931ull,0x2f2f093b30396625ull,0x393034313a646920ull,
0x3109636f6c2e090aull,0x0a30093736350936ull,0x726168732e646c09ull,0x09203631752e6465ull,
0x5b202c3332327225ull,0x302b303931647225ull,0x6469202f2f093b5dull,0x5f5f20303134313aull,
0x725f735f61647563ull,0x756f635f74686769ull,0x302b34383236746eull,0x702e646c090a3078ull,
0x3436752e6d617261ull,0x3739316472250920ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,
0x7463657369623731ull,0x614c6c656e72654bull,0x6a5f536650656772ull,0x536a50666a6a6666ull,
0x30535f535f535f30ull,0x5f30535f535f535full,0x30535f30535f3053ull,0x5f736f705f675f5full,
0x2f2f093b5d656e6full,0x333933313a646920ull,0x70616475635f5f20ull,0x37315a5f5f6d7261ull,
0x654b746365736962ull,0x6772614c6c656e72ull,0x66666a5f53665065ull,0x5f30536a50666a6aull,
0x535f30535f535f53ull,0x30535f30535f535full,0x5f5f30535f30535full,0x6e6f5f736f705f67ull,
0x61090a3078302b65ull,0x09203436752e6464ull,0x202c383931647225ull,0x202c373931647225ull,
0x093b333431647225ull,0x2e7473090a202f2full,0x752e6c61626f6c67ull,0x6472255b09203233ull,
0x202c5d302b383931ull,0x2f093b3332327225ull,0x3134313a6469202full,0x752e617262090a31ull,
0x5f744c240920696eull,0x20203b3632345f30ull,0x2020202020202020ull,0x4c240a202f2f0920ull,
0x3a3732345f305f74ull,0x3109636f6c2e090aull,0x0a30093631350936ull,0x726168732e646c09ull,
0x09203233752e6465ull,0x5b202c3731327225ull,0x6d5f74657366666full,0x626d616c5f746c75ull,
0x202f2f093b5d6164ull,0x3109636f6c2e090aull,0x0a30093137350936ull,0x3233752e62757309ull,
0x2c34323272250920ull,0x202c373031722520ull,0x09203b3731327225ull,0x747663090a202f2full,
0x3233752e3436752eull,0x3939316472250920ull,0x3b3432327225202cull,0x0a202f2f09202020ull,
0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x647225202c303032ull,0x093b34202c393931ull,
0x2e646c090a202f2full,0x36752e6d61726170ull,0x3032647225092034ull,0x75635f5f5b202c31ull,
0x5f5f6d7261706164ull,0x636573696237315aull,0x4c6c656e72654b74ull,0x5f53665065677261ull,
0x6a50666a6a66666aull,0x535f535f535f3053ull,0x30535f535f535f30ull,0x535f30535f30535full,
0x66656c5f675f5f30ull,0x3b5d746c756d5f74ull,0x313a6469202f2f09ull,0x75635f5f20353933ull,
0x5f5f6d7261706164ull,0x636573696237315aull,0x4c6c656e72654b74ull,0x5f53665065677261ull,
0x6a50666a6a66666aull,0x535f535f535f3053ull,0x30535f535f535f30ull,0x535f30535f30535full,
0x66656c5f675f5f30ull,0x302b746c756d5f74ull,0x2e646461090a3078ull,0x6472250920343675ull,
0x647225202c323032ull,0x647225202c313032ull,0x202f2f093b303032ull,0x3109636f6c2e090aull,
0x0a30093735350936ull,0x726168732e646c09ull,0x09203233662e6465ull,0x255b202c39386625ull,
0x5d302b3139316472ull,0x2e090a202f2f093bull,0x3509363109636f6cull,0x7473090a30093137ull,
0x2e6c61626f6c672eull,0x72255b0920323366ull,0x2c5d302b32303264ull,0x2f093b3938662520ull,
0x3134313a6469202full,0x09636f6c2e090a32ull,0x3009323735093631ull,0x6168732e646c090aull,
0x203233662e646572ull,0x5b202c3139662509ull,0x302b323931647225ull,0x6469202f2f093b5dull,
0x5f5f20333134313aull,0x725f735f61647563ull,0x3233323474686769ull,0x646c090a3078302bull,
0x752e6d617261702eull,0x3264722509203436ull,0x635f5f5b202c3330ull,0x5f6d726170616475ull,
0x6573696237315a5full,0x6c656e72654b7463ull,0x536650656772614cull,0x50666a6a66666a5full,
0x5f535f535f30536aull,0x535f535f535f3053ull,0x5f30535f30535f30ull,0x69725f675f5f3053ull,
0x746c756d5f746867ull,0x6469202f2f093b5dull,0x5f5f20383933313aull,0x6d72617061647563ull,
0x73696237315a5f5full,0x656e72654b746365ull,0x6650656772614c6cull,0x666a6a66666a5f53ull,
0x535f535f30536a50ull,0x5f535f535f30535full,0x30535f30535f3053ull,0x725f675f5f30535full,
0x6c756d5f74686769ull,0x61090a3078302b74ull,0x09203436752e6464ull,0x202c343032647225ull,
0x202c333032647225ull,0x093b303032647225ull,0x2e7473090a202f2full,0x662e6c61626f6c67ull,
0x6472255b09203233ull,0x202c5d302b343032ull,0x2f2f093b31396625ull,0x343134313a646920ull,
0x3109636f6c2e090aull,0x0a30093337350936ull,0x3436752e64646109ull,0x3530326472250920ull,
0x2c3135647225202cull,0x09203b3264722520ull,0x2e646c090a202f2full,0x752e646572616873ull,
0x3232722509203631ull,0x326472255b202c35ull,0x2f093b5d302b3530ull,0x3134313a6469202full,
0x616475635f5f2035ull,0x5f7466656c5f735full,0x383132746e756f63ull,0x6c090a3078302b30ull,
0x2e6d617261702e64ull,0x6472250920343675ull,0x5f5f5b202c363032ull,0x6d72617061647563ull,
0x73696237315a5f5full,0x656e72654b746365ull,0x6650656772614c6cull,0x666a6a66666a5f53ull,
0x535f535f30536a50ull,0x5f535f535f30535full,0x30535f30535f3053ull,0x6c5f675f5f30535full,
0x6e756f635f746665ull,0x3b5d746c756d5f74ull,0x313a6469202f2f09ull,0x75635f5f20313034ull,
0x5f5f6d7261706164ull,0x636573696237315aull,0x4c6c656e72654b74ull,0x5f53665065677261ull,
0x6a50666a6a66666aull,0x535f535f535f3053ull,0x30535f535f535f30ull,0x535f30535f30535full,
0x66656c5f675f5f30ull,0x5f746e756f635f74ull,0x3078302b746c756dull,0x36752e646461090aull,
0x3032647225092034ull,0x3032647225202c37ull,0x3032647225202c36ull,0x090a202f2f093b30ull,
0x61626f6c672e7473ull,0x5b09203233752e6cull,0x302b373032647225ull,0x3532327225202c5dull,
0x3a6469202f2f093bull,0x6c2e090a36313431ull,0x373509363109636full,0x2e646c090a300934ull,
0x752e646572616873ull,0x3232722509203631ull,0x316472255b202c36ull,0x2f093b5d302b3039ull,
0x3134313a6469202full,0x616475635f5f2037ull,0x74686769725f735full,0x3236746e756f635full,
0x090a3078302b3438ull,0x6d617261702e646cull,0x722509203436752eull,0x5f5b202c38303264ull,
0x726170616475635full,0x696237315a5f5f6dull,0x6e72654b74636573ull,0x50656772614c6c65ull,
0x6a6a66666a5f5366ull,0x5f535f30536a5066ull,0x535f535f30535f53ull,0x535f30535f30535full,
0x5f675f5f30535f30ull,0x6f635f7468676972ull,0x746c756d5f746e75ull,0x6469202f2f093b5dull,
0x5f5f20343034313aull,0x6d72617061647563ull,0x73696237315a5f5full,0x656e72654b746365ull,
0x6650656772614c6cull,0x666a6a66666a5f53ull,0x535f535f30536a50ull,0x5f535f535f30535full,
0x30535f30535f3053ull,0x725f675f5f30535full,0x756f635f74686769ull,0x2b746c756d5f746eull,
0x646461090a307830ull,0x722509203436752eull,0x7225202c39303264ull,0x7225202c38303264ull,
0x2f2f093b30303264ull,0x6c672e7473090a20ull,0x3233752e6c61626full,0x30326472255b0920ull,
0x7225202c5d302b39ull,0x202f2f093b363232ull,0x0a383134313a6469ull,0x32345f305f744c24ull,
0x305f744c240a3a36ull,0x6c090a3a3432345full,0x6465726168732e64ull,0x722509203233752eull,
0x756e5b202c363831ull,0x736b636f6c625f6dull,0x093b5d746c756d5full,0x31313a6469202f2full,
0x625f6d756e203239ull,0x756d5f736b636f6cull,0x090a3078302b746cull,0x2e746c2e70746573ull,
0x3870250920323375ull,0x3638317225202c35ull,0x2f093b357225202cull,0x38702540090a202full,
0x2409206172622035ull,0x3832345f305f744cull,0x202020202020203bull,0x090a202f2f092020ull,
0x09363109636f6c2eull,0x6c090a3009323835ull,0x6465726168732e64ull,0x722509203631752eull,
0x72255b202c373232ull,0x2f093b5d302b3864ull,0x3134313a6469202full,0x616475635f5f2039ull,
0x61706d6f635f735full,0x696c5f6e6f697463ull,0x302b363032337473ull,0x702e646c090a3078ull,
0x3436752e6d617261ull,0x3031326472250920ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,
0x7463657369623731ull,0x614c6c656e72654bull,0x6a5f536650656772ull,0x536a50666a6a6666ull,
0x30535f535f535f30ull,0x5f30535f535f535full,0x30535f30535f3053ull,0x636f6c625f675f5full,
0x5d746c756d5f736bull,0x3a6469202f2f093bull,0x635f5f2030323431ull,0x5f6d726170616475ull,
0x6573696237315a5full,0x6c656e72654b7463ull,0x536650656772614cull,0x50666a6a66666a5full,
0x5f535f535f30536aull,0x535f535f535f3053ull,0x5f30535f30535f30ull,0x6c625f675f5f3053ull,
0x6c756d5f736b636full,0x61090a3078302b74ull,0x09203436752e6464ull,0x202c313132647225ull,
0x202c303132647225ull,0x2f2f093b39647225ull,0x6c672e7473090a20ull,0x3233752e6c61626full,
0x31326472255b0920ull,0x7225202c5d302b31ull,0x202f2f093b373232ull,0x0a313234313a6469ull,
0x363109636f6c2e09ull,0x090a300933383509ull,0x65726168732e646cull,0x2509203631752e64ull,
0x255b202c38323272ull,0x3b5d302b35356472ull,0x313a6469202f2f09ull,0x75635f5f20323234ull,
0x5f6c635f735f6164ull,0x33377265706c6568ull,0x090a3078302b3031ull,0x6d617261702e646cull,
0x722509203436752eull,0x5f5b202c32313264ull,0x726170616475635full,0x696237315a5f5f6dull,
0x6e72654b74636573ull,0x50656772614c6c65ull,0x6a6a66666a5f5366ull,0x5f535f30536a5066ull,
0x535f535f30535f53ull,0x535f30535f30535full,0x5f675f5f30535f30ull,0x6d5f736b636f6c62ull,
0x5d6d75735f746c75ull,0x3a6469202f2f093bull,0x635f5f2033323431ull,0x5f6d726170616475ull,
0x6573696237315a5full,0x6c656e72654b7463ull,0x536650656772614cull,0x50666a6a66666a5full,
0x5f535f535f30536aull,0x535f535f535f3053ull,0x5f30535f30535f30ull,0x6c625f675f5f3053ull,
0x6c756d5f736b636full,0x78302b6d75735f74ull,0x752e646461090a30ull,0x3264722509203436ull,
0x32647225202c3331ull,0x39647225202c3231ull,0x73090a202f2f093bull,0x6c61626f6c672e74ull,
0x255b09203233752eull,0x5d302b3331326472ull,0x3b3832327225202cull,0x313a6469202f2f09ull,
0x5f744c240a343234ull,0x090a3a3832345f30ull,0x2e74672e70746573ull,0x3870250920323375ull,
0x3730317225202c36ull,0x3b3638317225202cull,0x2540090a202f2f09ull,0x2061726220363870ull,
0x345f305f744c2409ull,0x20202020203b3033ull,0x202f2f0920202020ull,0x3109636f6c2e090aull,
0x0a30093638350936ull,0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x647225202c333431ull,
0x09203b34202c3035ull,0x646461090a202f2full,0x722509203436752eull,0x7225202c34313264ull,
0x647225202c313564ull,0x0a202f2f09203b33ull,0x726168732e646c09ull,0x09203631752e6465ull,
0x5b202c3932327225ull,0x302b343132647225ull,0x6469202f2f093b5dull,0x5f5f20353234313aull,
0x635f735f61647563ull,0x6f69746361706d6full,0x32337473696c5f6eull,0x090a3078302b3630ull,
0x6d617261702e646cull,0x722509203436752eull,0x5f5b202c35313264ull,0x726170616475635full,
0x696237315a5f5f6dull,0x6e72654b74636573ull,0x50656772614c6c65ull,0x6a6a66666a5f5366ull,
0x5f535f30536a5066ull,0x535f535f30535f53ull,0x535f30535f30535full,0x5f675f5f30535f30ull,
0x6d5f736b636f6c62ull,0x2f2f093b5d746c75ull,0x303234313a646920ull,0x70616475635f5f20ull,
0x37315a5f5f6d7261ull,0x654b746365736962ull,0x6772614c6c656e72ull,0x66666a5f53665065ull,
0x5f30536a50666a6aull,0x535f30535f535f53ull,0x30535f30535f535full,0x5f5f30535f30535full,
0x736b636f6c625f67ull,0x78302b746c756d5full,0x752e646461090a30ull,0x3264722509203436ull,
0x32647225202c3631ull,0x31647225202c3531ull,0x0a202f2f093b3334ull,0x626f6c672e747309ull,
0x09203233752e6c61ull,0x2b3631326472255bull,0x32327225202c5d30ull,0x6469202f2f093b39ull,
0x2e090a363234313aull,0x3509363109636f6cull,0x646c090a30093738ull,0x2e6465726168732eull,
0x3272250920363175ull,0x6472255b202c3033ull,0x2f093b5d302b3635ull,0x3234313a6469202full,
0x616475635f5f2037ull,0x65685f6c635f735full,0x303133377265706cull,0x646c090a3078302bull,
0x752e6d617261702eull,0x3264722509203436ull,0x635f5f5b202c3731ull,0x5f6d726170616475ull,
0x6573696237315a5full,0x6c656e72654b7463ull,0x536650656772614cull,0x50666a6a66666a5full,
0x5f535f535f30536aull,0x535f535f535f3053ull,0x5f30535f30535f30ull,0x6c625f675f5f3053ull,
0x6c756d5f736b636full,0x093b5d6d75735f74ull,0x34313a6469202f2full,0x6475635f5f203332ull,
0x5a5f5f6d72617061ull,0x7463657369623731ull,0x614c6c656e72654bull,0x6a5f536650656772ull,
0x536a50666a6a6666ull,0x30535f535f535f30ull,0x5f30535f535f535full,0x30535f30535f3053ull,
0x636f6c625f675f5full,0x5f746c756d5f736bull,0x0a3078302b6d7573ull,0x3436752e64646109ull,
0x3831326472250920ull,0x373132647225202cull,0x333431647225202cull,0x73090a202f2f093bull,
0x6c61626f6c672e74ull,0x255b09203233752eull,0x5d302b3831326472ull,0x3b3033327225202cull,
0x313a6469202f2f09ull,0x5f744c240a383234ull,0x090a3a3033345f30ull,0x09363109636f6c2eull,
0x65090a3009323235ull,0x202020203b746978ull,0x2020202020202020ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x6e6557444c240a20ull,0x696237315a5f5f64ull,0x6e72654b74636573ull,
0x50656772614c6c65ull,0x6a6a66666a5f5366ull,0x5f535f30536a5066ull,0x535f535f30535f53ull,
0x535f30535f30535full,0x090a3a5f30535f30ull,0x315a5f202f2f207dull,0x4b74636573696237ull,
0x72614c6c656e7265ull,0x666a5f5366506567ull,0x30536a50666a6a66ull,0x5f30535f535f535full,
0x535f30535f535f53ull,0x5f30535f30535f30ull,0x72746e652e090a0aull,0x696230335a5f2079ull,
0x6e72654b74636573ull,0x5f656772614c6c65ull,0x7265746e49656e4full,0x5f536650736c6176ull,
0x6a505f535f536a6aull,0x722e090a7b090a66ull,0x203631752e206765ull,0x0a3b3e343c687225ull,
0x752e206765722e09ull,0x39333c7225203233ull,0x6765722e090a3b3eull,0x7225203436752e20ull,
0x090a3b3e39323c64ull,0x33662e206765722eull,0x3e39343c66252032ull,0x206765722e090a3bull,
0x702520646572702eull,0x2e090a3b3e39313cull,0x752e206d61726170ull,0x6475635f5f203436ull,
0x5a5f5f6d72617061ull,0x7463657369623033ull,0x614c6c656e72654bull,0x49656e4f5f656772ull,
0x736c61767265746eull,0x5f536a6a5f536650ull,0x5f675f666a505f53ull,0x7261702e090a3b64ull,
0x203436752e206d61ull,0x6170616475635f5full,0x6230335a5f5f6d72ull,0x72654b7463657369ull,
0x656772614c6c656eull,0x65746e49656e4f5full,0x536650736c617672ull,0x505f535f536a6a5full,
0x0a3b735f675f666aull,0x206d617261702e09ull,0x635f5f203233752eull,0x5f6d726170616475ull,
0x6573696230335a5full,0x6c656e72654b7463ull,0x6e4f5f656772614cull,0x61767265746e4965ull,
0x6a6a5f536650736cull,0x5f666a505f535f53ull,0x7261702e090a3b6eull,0x203233752e206d61ull,
0x6170616475635f5full,0x6230335a5f5f6d72ull,0x72654b7463657369ull,0x656772614c6c656eull,
0x65746e49656e4f5full,0x536650736c617672ull,0x505f535f536a6a5full,0x695f6d756e5f666aull,
0x736c61767265746eull,0x617261702e090a3bull,0x5f203436752e206dull,0x726170616475635full,
0x696230335a5f5f6dull,0x6e72654b74636573ull,0x5f656772614c6c65ull,0x7265746e49656e4full,
0x5f536650736c6176ull,0x6a505f535f536a6aull,0x7466656c5f675f66ull,0x617261702e090a3bull,
0x5f203436752e206dull,0x726170616475635full,0x696230335a5f5f6dull,0x6e72654b74636573ull,
0x5f656772614c6c65ull,0x7265746e49656e4full,0x5f536650736c6176ull,0x6a505f535f536a6aull,
0x686769725f675f66ull,0x7261702e090a3b74ull,0x203436752e206d61ull,0x6170616475635f5full,
0x6230335a5f5f6d72ull,0x72654b7463657369ull,0x656772614c6c656eull,0x65746e49656e4f5full,
0x536650736c617672ull,0x505f535f536a6a5full,0x736f705f675f666aull,0x617261702e090a3bull,
0x5f203233662e206dull,0x726170616475635full,0x696230335a5f5f6dull,0x6e72654b74636573ull,
0x5f656772614c6c65ull,0x7265746e49656e4full,0x5f536650736c6176ull,0x6a505f535f536a6aull,
0x7369636572705f66ull,0x732e090a3b6e6f69ull,0x612e206465726168ull,0x2e2034206e67696cull,
0x6475635f5f203862ull,0x7466656c5f735f61ull,0x686374617263735full,0x3230315b38383338ull,
0x68732e090a3b5d34ull,0x6c612e2064657261ull,0x622e2034206e6769ull,0x616475635f5f2038ull,
0x74686769725f735full,0x686374617263735full,0x3230315b32313439ull,0x68732e090a3b5d34ull,
0x33752e2064657261ull,0x7265766e6f632032ull,0x5f6c6c615f646567ull,0x3b73646165726874ull,
0x66656c202f2f090aull,0x2f090a30203d2074ull,0x207468676972202full,0x202f2f090a34203dull,
0x6f635f7468676972ull,0x0a38203d20746e75ull,0x373109636f6c2e09ull,0x4c240a3009303709ull,
0x30335a5f5f314242ull,0x654b746365736962ull,0x6772614c6c656e72ull,0x746e49656e4f5f65ull,
0x6650736c61767265ull,0x5f535f536a6a5f53ull,0x7663090a3a666a50ull,0x31752e3233752e74ull,
0x202c317225092036ull,0x3b782e6469746e25ull,0x202f2f0920202020ull,0x33752e747663090aull,
0x2509203631752e32ull,0x61746325202c3272ull,0x2020203b782e6469ull,0x756d090a202f2f09ull,
0x3233752e6f6c2e6cull,0x25202c3372250920ull,0x3b317225202c3272ull,0x202f2f0920202020ull,
0x33752e747663090aull,0x2509203631752e32ull,0x64697425202c3472ull,0x20202020203b782eull,
0x6461090a202f2f09ull,0x2509203233752e64ull,0x2c337225202c3572ull,0x2020203b34722520ull,
0x202f2f0920202020ull,0x7261702e646c090aull,0x09203233752e6d61ull,0x5f5f5b202c367225ull,
0x6d72617061647563ull,0x73696230335a5f5full,0x656e72654b746365ull,0x4f5f656772614c6cull,
0x767265746e49656eull,0x6a5f536650736c61ull,0x666a505f535f536aull,0x746e695f6d756e5full,
0x3b5d736c61767265ull,0x323a6469202f2f09ull,0x6475635f5f203033ull,0x5a5f5f6d72617061ull,
0x7463657369623033ull,0x614c6c656e72654bull,0x49656e4f5f656772ull,0x736c61767265746eull,
0x5f536a6a5f536650ull,0x756e5f666a505f53ull,0x767265746e695f6dull,0x0a3078302b736c61ull,
0x74672e7074657309ull,0x702509203233752eull,0x202c367225202c31ull,0x092020203b357225ull,
0x252140090a202f2full,0x0920617262203170ull,0x39365f315f744c24ull,0x202020202020203bull,
0x0a202f2f09202020ull,0x373109636f6c2e09ull,0x63090a3009323909ull,0x752e3436752e7476ull,
0x3164722509203233ull,0x20203b357225202cull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,
0x2509203436752e6full,0x647225202c326472ull,0x2020203b34202c31ull,0x6c090a202f2f0920ull,
0x2e6d617261702e64ull,0x6472250920343675ull,0x75635f5f5b202c33ull,0x5f5f6d7261706164ull,
0x636573696230335aull,0x4c6c656e72654b74ull,0x656e4f5f65677261ull,0x6c61767265746e49ull,
0x536a6a5f53665073ull,0x675f666a505f535full,0x093b5d7466656c5full,0x33323a6469202f2full,
0x616475635f5f2031ull,0x335a5f5f6d726170ull,0x4b74636573696230ull,0x72614c6c656e7265ull,
0x6e49656e4f5f6567ull,0x50736c6176726574ull,0x535f536a6a5f5366ull,0x6c5f675f666a505full,
0x0a3078302b746665ull,0x3436752e64646109ull,0x202c346472250920ull,0x7225202c33647225ull,
0x09202020203b3264ull,0x2e646c090a202f2full,0x662e6c61626f6c67ull,0x2c31662509203233ull,
0x302b346472255b20ull,0x69202f2f09203b5dull,0x6d090a3233323a64ull,0x09203233662e766full,
0x316625202c326625ull,0x202020202020203bull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,
0x0a30093339093731ull,0x617261702e646c09ull,0x2509203436752e6dull,0x5f5f5b202c356472ull,
0x6d72617061647563ull,0x73696230335a5f5full,0x656e72654b746365ull,0x4f5f656772614c6cull,
0x767265746e49656eull,0x6a5f536650736c61ull,0x666a505f535f536aull,0x74686769725f675full,
0x6469202f2f093b5dull,0x635f5f203333323aull,0x5f6d726170616475ull,0x6573696230335a5full,
0x6c656e72654b7463ull,0x6e4f5f656772614cull,0x61767265746e4965ull,0x6a6a5f536650736cull,
0x5f666a505f535f53ull,0x2b74686769725f67ull,0x646461090a307830ull,0x722509203436752eull,
0x35647225202c3664ull,0x203b32647225202cull,0x0a202f2f09202020ull,0x626f6c672e646c09ull,
0x09203233662e6c61ull,0x72255b202c336625ull,0x09203b5d302b3664ull,0x33323a6469202f2full,
0x662e766f6d090a34ull,0x2c34662509203233ull,0x2020203b33662520ull,0x2020202020202020ull,
0x2e090a202f2f0920ull,0x3909373109636f6cull,0x2e646c090a300934ull,0x36752e6d61726170ull,
0x2c37647225092034ull,0x616475635f5f5b20ull,0x335a5f5f6d726170ull,0x4b74636573696230ull,
0x72614c6c656e7265ull,0x6e49656e4f5f6567ull,0x50736c6176726574ull,0x535f536a6a5f5366ull,
0x705f675f666a505full,0x202f2f093b5d736full,0x5f203533323a6469ull,0x726170616475635full,
0x696230335a5f5f6dull,0x6e72654b74636573ull,0x5f656772614c6c65ull,0x7265746e49656e4full,
0x5f536650736c6176ull,0x6a505f535f536a6aull,0x2b736f705f675f66ull,0x646461090a307830ull,
0x722509203436752eull,0x37647225202c3864ull,0x203b32647225202cull,0x0a202f2f09202020ull,
0x626f6c672e646c09ull,0x09203233752e6c61ull,0x72255b202c377225ull,0x09203b5d302b3864ull,
0x33323a6469202f2full,0x732e766f6d090a36ull,0x2c38722509203233ull,0x2020203b37722520ull,
0x2020202020202020ull,0x4c240a202f2f0920ull,0x0a3a39365f315f74ull,0x3233752e766f6d09ull,
0x30202c3972250920ull,0x202020202020203bull,0x0920202020202020ull,0x746573090a202f2full,
0x3233752e656e2e70ull,0x25202c3270250920ull,0x3b397225202c3472ull,0x0a202f2f09202020ull,
0x7262203270254009ull,0x315f744c24092061ull,0x202020203b31375full,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x3330310937310963ull,0x2e766f6d090a3009ull,0x3172250920323375ull,
0x2020203b30202c30ull,0x2020202020202020ull,0x090a202f2f092020ull,0x65726168732e7473ull,
0x5b09203233752e64ull,0x65677265766e6f63ull,0x68745f6c6c615f64ull,0x202c5d7364616572ull,
0x2f2f093b30317225ull,0x203833323a646920ull,0x65677265766e6f63ull,0x68745f6c6c615f64ull,
0x78302b7364616572ull,0x5f315f744c240a30ull,0x6f6c2e090a3a3137ull,0x3530310937310963ull,
0x2e726162090a3009ull,0x3b300920636e7973ull,0x2020202020202020ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x6d617261702e646cull,0x722509203233752eull,0x635f5f5b202c3131ull,
0x5f6d726170616475ull,0x6573696230335a5full,0x6c656e72654b7463ull,0x6e4f5f656772614cull,
0x61767265746e4965ull,0x6a6a5f536650736cull,0x5f666a505f535f53ull,0x69202f2f093b5d6eull,
0x5f5f203432323a64ull,0x6d72617061647563ull,0x73696230335a5f5full,0x656e72654b746365ull,
0x4f5f656772614c6cull,0x767265746e49656eull,0x6a5f536650736c61ull,0x666a505f535f536aull,
0x090a3078302b6e5full,0x203233752e766f6dull,0x30202c3231722509ull,0x202020202020203bull,
0x2f09202020202020ull,0x70746573090a202full,0x203233752e74672eull,0x7225202c33702509ull,
0x32317225202c3131ull,0x090a202f2f09203bull,0x3233732e706c6573ull,0x202c333172250920ull,
0x7025202c30202c31ull,0x2f09202020203b31ull,0x2e766f6d090a202full,0x3566250920323366ull,
0x303030306630202cull,0x2020203b30303030ull,0x0a30202f2f092020ull,0x3631752e766f6d09ull,
0x202c316872250920ull,0x2020202020203b30ull,0x0920202020202020ull,0x766f6d090a202f2full,
0x722509203436752eull,0x75635f5f202c3964ull,0x66656c5f735f6164ull,0x6374617263735f74ull,
0x2f093b3838333868ull,0x2e766f6d090a202full,0x6472250920343675ull,0x75635f5f202c3031ull,
0x6769725f735f6164ull,0x74617263735f7468ull,0x093b323134396863ull,0x5f744c240a202f2full,
0x2f200a3a38345f31ull,0x203e706f6f6c3c2full,0x646f6220706f6f4cull,0x3120656e696c2079ull,
0x636f6c2e090a3131ull,0x0931313109373109ull,0x752e766f6d090a30ull,0x3431722509203233ull,
0x202020203b31202cull,0x2020202020202020ull,0x73090a202f2f0920ull,0x6465726168732e74ull,
0x635b09203233752eull,0x6465677265766e6full,0x7268745f6c6c615full,0x25202c5d73646165ull,
0x202f2f093b343172ull,0x63203833323a6469ull,0x6465677265766e6full,0x7268745f6c6c615full,
0x3078302b73646165ull,0x31752e766f6d090aull,0x2c32687225092036ull,0x20202020203b3020ull,
0x2020202020202020ull,0x6573090a202f2f09ull,0x31752e71652e7074ull,0x202c347025092036ull,
0x7225202c31687225ull,0x202f2f09203b3268ull,0x732e706c6573090aull,0x3531722509203233ull,
0x202c30202c31202cull,0x202020203b347025ull,0x6e61090a202f2f09ull,0x2509203233622e64ull,
0x317225202c363172ull,0x3b33317225202c35ull,0x202f2f0920202020ull,0x33752e766f6d090aull,
0x2c37317225092032ull,0x20202020203b3020ull,0x2020202020202020ull,0x6573090a202f2f09ull,
0x33732e71652e7074ull,0x202c357025092032ull,0x7225202c36317225ull,0x202f2f09203b3731ull,
0x622035702540090aull,0x5f744c2409206172ull,0x2020203b33375f31ull,0x2020202020202020ull,
0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x313120656e696c20ull,0x2064616568202c31ull,0x2064656c6562616cull,0x38345f315f744c24ull,
0x3109636f6c2e090aull,0x0a30093631310937ull,0x3233662e766f6d09ull,0x25202c3666250920ull,
0x20202020203b3266ull,0x0920202020202020ull,0x766f6d090a202f2full,0x662509203233662eull,
0x3030306630202c37ull,0x20203b3030303030ull,0x30202f2f09202020ull,0x6c2e70746573090aull,
0x2509203233662e74ull,0x2c366625202c3670ull,0x2020203b37662520ull,0x6f6d090a202f2f09ull,
0x2509203233662e76ull,0x3b346625202c3866ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x33662e766f6d090aull,0x202c396625092032ull,0x3030303030306630ull,0x20202020203b3030ull,
0x73090a30202f2f09ull,0x662e746c2e707465ull,0x2c37702509203233ull,0x6625202c38662520ull,
0x2f2f092020203b39ull,0x3770252140090a20ull,0x4c24092061726220ull,0x203b36375f315f74ull,
0x2020202020202020ull,0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3120656e696c2079ull,0x64616568202c3131ull,0x64656c6562616c20ull,
0x345f315f744c2420ull,0x09636f6c2e090a38ull,0x0a30093239093531ull,0x33732e706c657309ull,
0x2c38317225092032ull,0x25202c30202c3120ull,0x09202020203b3670ull,0x617262090a202f2full,
0x4c240920696e752eull,0x203b35375f315f74ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x36375f315f744c24ull,0x6f6c3c2f2f200a3aull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x202c31313120656eull,0x62616c2064616568ull,0x744c242064656c65ull,
0x73090a38345f315full,0x203233732e706c65ull,0x30202c3831722509ull,0x367025202c31202cull,
0x2f2f09202020203bull,0x5f315f744c240a20ull,0x3c2f2f200a3a3537ull,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x31313120656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x0a38345f315f744cull,0x373109636f6c2e09ull,0x090a300936313109ull,
0x203233662e627573ull,0x25202c3031662509ull,0x3b366625202c3866ull,0x2f09202020202020ull,
0x2e766f6d090a202full,0x3166250920323366ull,0x3066336630202c31ull,0x20203b3030303030ull,
0x2e30202f2f092020ull,0x662e64616d090a35ull,0x3231662509203233ull,0x202c30316625202cull,
0x6625202c31316625ull,0x090a202f2f093b36ull,0x203233662e646461ull,0x25202c3331662509ull,
0x3b366625202c3866ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3166250920323366ull,
0x3066336630202c34ull,0x20203b3030303030ull,0x2e30202f2f092020ull,0x662e6c756d090a35ull,
0x3531662509203233ull,0x202c33316625202cull,0x2020203b34316625ull,0x6e090a202f2f0920ull,
0x09203233732e6765ull,0x7225202c39317225ull,0x20202020203b3831ull,0x2f2f092020202020ull,
0x2e74636c73090a20ull,0x203233732e323366ull,0x6625202c35662509ull,0x32316625202c3531ull,
0x093b39317225202cull,0x5f744c240a202f2full,0x2f200a3a33375f31ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3120656e696c2079ull,0x64616568202c3131ull,
0x64656c6562616c20ull,0x345f315f744c2420ull,0x09636f6c2e090a38ull,0x3009383332093531ull,
0x33732e766f6d090aull,0x2c30327225092032ull,0x20203b3131722520ull,0x2020202020202020ull,
0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x203b30202c313272ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x203370252140090aull,0x744c240920617262ull,0x203b3330315f315full,
0x2020202020202020ull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x313120656e696c20ull,0x2064616568202c31ull,0x2064656c6562616cull,
0x38345f315f744c24ull,0x33752e766f6d090aull,0x2c32327225092032ull,0x20202020203b3020ull,
0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x336630202c363166ull,
0x3b30303030303866ull,0x202f2f0920202020ull,0x5f315f744c240a31ull,0x3c2f2f200a3a3937ull,
0x6f4c203e706f6f6cull,0x2079646f6220706full,0x38333220656e696cull,0x6e697473656e202cull,
0x3a68747065642067ull,0x69747365202c3120ull,0x746920646574616dull,0x736e6f6974617265ull,
0x776f6e6b6e75203aull,0x09636f6c2e090a6eull,0x3009333432093531ull,0x79732e726162090aull,
0x20203b300920636eull,0x2020202020202020ull,0x2020202020202020ull,0x6461090a202f2f09ull,
0x2509203233752e64ull,0x327225202c333272ull,0x203b347225202c32ull,0x202f2f0920202020ull,
0x6c2e70746573090aull,0x2509203233752e65ull,0x31317225202c3870ull,0x203b33327225202cull,
0x2540090a202f2f09ull,0x0920617262203870ull,0x30385f315f744c24ull,0x202020202020203bull,
0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,
0x6e696c2079646f62ull,0x68202c3833322065ull,0x6562616c20646165ull,0x5f744c242064656cull,
0x6c2e090a39375f31ull,0x343209353109636full,0x747663090a300938ull,0x3233752e3436752eull,
0x2c31316472250920ull,0x2020203b34722520ull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,
0x6472250920343675ull,0x31647225202c3231ull,0x0920203b34202c31ull,0x747663090a202f2full,
0x3233752e3436752eull,0x2c33316472250920ull,0x20203b3232722520ull,0x0a202f2f09202020ull,
0x3436752e64646109ull,0x2c34316472250920ull,0x202c333164722520ull,0x09203b3131647225ull,
0x6c756d090a202f2full,0x203436752e6f6c2eull,0x202c353164722509ull,0x34202c3431647225ull,
0x0a202f2f0920203bull,0x617261702e646c09ull,0x2509203436752e6dull,0x5f5b202c36316472ull,
0x726170616475635full,0x696230335a5f5f6dull,0x6e72654b74636573ull,0x5f656772614c6c65ull,
0x7265746e49656e4full,0x5f536650736c6176ull,0x6a505f535f536a6aull,0x093b5d645f675f66ull,
0x33323a6469202f2full,0x616475635f5f2039ull,0x335a5f5f6d726170ull,0x4b74636573696230ull,
0x72614c6c656e7265ull,0x6e49656e4f5f6567ull,0x50736c6176726574ull,0x535f536a6a5f5366ull,
0x645f675f666a505full,0x6461090a3078302bull,0x2509203436752e64ull,0x7225202c37316472ull,
0x647225202c363164ull,0x202f2f09203b3531ull,0x6f6c672e646c090aull,0x203233662e6c6162ull,
0x5b202c3731662509ull,0x5d302b3731647225ull,0x3a6469202f2f093bull,0x646461090a303432ull,
0x722509203436752eull,0x647225202c383164ull,0x39647225202c3231ull,0x0a202f2f0920203bull,
0x726168732e747309ull,0x09203233662e6465ull,0x302b38316472255bull,0x3b37316625202c5dull,
0x323a6469202f2f09ull,0x6475635f5f203134ull,0x7466656c5f735f61ull,0x686374617263735full,
0x3078302b38383338ull,0x3109636f6c2e090aull,0x0a30093934320935ull,0x617261702e646c09ull,
0x2509203436752e6dull,0x5f5b202c39316472ull,0x726170616475635full,0x696230335a5f5f6dull,
0x6e72654b74636573ull,0x5f656772614c6c65ull,0x7265746e49656e4full,0x5f536650736c6176ull,
0x6a505f535f536a6aull,0x093b5d735f675f66ull,0x34323a6469202f2full,0x616475635f5f2032ull,
0x335a5f5f6d726170ull,0x4b74636573696230ull,0x72614c6c656e7265ull,0x6e49656e4f5f6567ull,
0x50736c6176726574ull,0x535f536a6a5f5366ull,0x735f675f666a505full,0x6461090a3078302bull,
0x2509203436752e64ull,0x7225202c30326472ull,0x647225202c393164ull,0x202f2f09203b3531ull,
0x6f6c672e646c090aull,0x203233662e6c6162ull,0x5b202c3831662509ull,0x342d2b3032647225ull,
0x6469202f2f093b5dull,0x6461090a3334323aull,0x2509203436752e64ull,0x7225202c31326472ull,
0x647225202c323164ull,0x202f2f09203b3031ull,0x6168732e7473090aull,0x203233662e646572ull,
0x2b31326472255b09ull,0x38316625202c5d30ull,0x3a6469202f2f093bull,0x75635f5f20343432ull,
0x6769725f735f6164ull,0x74617263735f7468ull,0x302b323134396863ull,0x315f744c240a3078ull,
0x2f2f200a3a30385full,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x333220656e696c20ull,0x2064616568202c38ull,0x2064656c6562616cull,0x39375f315f744c24ull,
0x3109636f6c2e090aull,0x0a30093235320935ull,0x6e79732e72616209ull,0x2020203b30092063ull,
0x2020202020202020ull,0x0920202020202020ull,0x252140090a202f2full,0x0920617262203170ull,
0x34385f315f744c24ull,0x202020202020203bull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c38333220ull,
0x6c6562616c206461ull,0x315f744c24206465ull,0x6f6c2e090a39375full,0x3935320935310963ull,
0x2e6e696d090a3009ull,0x3272250920323375ull,0x2c30327225202c34ull,0x2020203b31722520ull,
0x090a202f2f092020ull,0x203233752e766f6dull,0x30202c3532722509ull,0x202020202020203bull,
0x2f09202020202020ull,0x70746573090a202full,0x203233752e71652eull,0x7225202c39702509ull,
0x35327225202c3432ull,0x090a202f2f09203bull,0x6172622039702540ull,0x5f315f744c240920ull,
0x20202020203b3438ull,0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c38333220656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x090a39375f315f74ull,0x203233732e766f6dull,0x25202c3632722509ull,
0x202020203b343272ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x6472250920343673ull,
0x31647225202c3232ull,0x2020202020203b30ull,0x090a202f2f092020ull,0x203436732e766f6dull,
0x202c333264722509ull,0x2020203b39647225ull,0x2f09202020202020ull,0x2e766f6d090a202full,
0x3272250920323375ull,0x2020203b30202c37ull,0x2020202020202020ull,0x200a202f2f092020ull,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x616568202c383332ull,0x656c6562616c2064ull,0x5f315f744c242064ull,0x2e766f6d090a3937ull,
0x3272250920323373ull,0x3b36327225202c38ull,0x2020202020202020ull,0x240a202f2f092020ull,
0x3a36385f315f744cull,0x6f6f6c3c2f2f200aull,0x20706f6f4c203e70ull,0x6e696c2079646f62ull,
0x6e202c3935322065ull,0x6420676e69747365ull,0x2c32203a68747065ull,0x74616d6974736520ull,
0x6172657469206465ull,0x75203a736e6f6974ull,0x090a6e776f6e6b6eull,0x09333209636f6c2eull,
0x090a300938323331ull,0x65726168732e646cull,0x2509203233662e64ull,0x72255b202c393166ull,
0x093b5d302b323264ull,0x34323a6469202f2full,0x616475635f5f2035ull,0x74686769725f735full,
0x686374617263735full,0x3078302b32313439ull,0x33662e6c756d090aull,0x2c30326625092032ull,
0x25202c3931662520ull,0x202020203b393166ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,
0x316625202c313266ull,0x2020202020203b36ull,0x202f2f0920202020ull,0x33662e766f6d090aull,
0x2c32326625092032ull,0x20203b3132662520ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,
0x323109333209636full,0x6261090a30093035ull,0x2509203233662e73ull,0x326625202c333266ull,
0x2020202020203b31ull,0x202f2f0920202020ull,0x33662e766f6d090aull,0x2c34326625092032ull,
0x3030386537663020ull,0x202020203b303030ull,0x30352e38202f2f09ull,0x0a37332b65363037ull,
0x74672e7074657309ull,0x702509203233662eull,0x33326625202c3031ull,0x093b34326625202cull,
0x252140090a202f2full,0x2061726220303170ull,0x385f315f744c2409ull,0x2020202020203b37ull,
0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,
0x656e696c2079646full,0x6568202c39353220ull,0x6c6562616c206461ull,0x315f744c24206465ull,
0x6f6c2e090a36385full,0x3532310933320963ull,0x766f6d090a300931ull,0x662509203233662eull,
0x65336630202c3532ull,0x203b303030303038ull,0x30202f2f09202020ull,0x6c756d090a35322eull,
0x662509203233662eull,0x30326625202c3032ull,0x203b35326625202cull,0x0a202f2f09202020ull,
0x333209636f6c2e09ull,0x0a30093235323109ull,0x3233662e766f6d09ull,0x202c363266250920ull,
0x3030303865336630ull,0x09202020203b3030ull,0x0a35322e30202f2full,0x3233662e6c756d09ull,
0x202c323266250920ull,0x6625202c31326625ull,0x09202020203b3632ull,0x5f744c240a202f2full,
0x2f200a3a37385f31ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3220656e696c2079ull,0x64616568202c3935ull,0x64656c6562616c20ull,0x385f315f744c2420ull,
0x09636f6c2e090a36ull,0x3009303632093531ull,0x6168732e646c090aull,0x203233662e646572ull,
0x5b202c3732662509ull,0x5d302b3332647225ull,0x3a6469202f2f093bull,0x75635f5f20363432ull,
0x66656c5f735f6164ull,0x6374617263735f74ull,0x78302b3838333868ull,0x662e627573090a30ull,
0x3832662509203233ull,0x202c37326625202cull,0x202020203b356625ull,0x64090a202f2f0920ull,
0x09203233662e7669ull,0x6625202c39326625ull,0x32326625202c3032ull,0x2f2f09202020203bull,
0x662e627573090a20ull,0x3631662509203233ull,0x202c38326625202cull,0x2020203b39326625ull,
0x2e090a202f2f0920ull,0x3209353109636f6cull,0x6f6d090a30093236ull,0x2509203233662e76ull,
0x306630202c303366ull,0x3b30303030303030ull,0x202f2f0920202020ull,0x6c2e746573090a30ull,
0x33662e3233752e74ull,0x2c39327225092032ull,0x25202c3631662520ull,0x202f2f093b303366ull,
0x33732e67656e090aull,0x2c30337225092032ull,0x20203b3932722520ull,0x2020202020202020ull,
0x6461090a202f2f09ull,0x2509203233752e64ull,0x327225202c313272ull,0x3b30337225202c31ull,
0x202f2f0920202020ull,0x3109636f6c2e090aull,0x0a30093935320935ull,0x3233752e64646109ull,
0x202c373272250920ull,0x3b31202c37327225ull,0x0920202020202020ull,0x646461090a202f2full,
0x722509203436752eull,0x647225202c333264ull,0x20203b34202c3332ull,0x0a202f2f09202020ull,
0x3436752e64646109ull,0x2c32326472250920ull,0x202c323264722520ull,0x0920202020203b34ull,
0x746573090a202f2full,0x3233752e656e2e70ull,0x202c313170250920ull,0x7225202c34327225ull,
0x0a202f2f093b3732ull,0x6220313170254009ull,0x5f744c2409206172ull,0x2020203b36385f31ull,
0x0920202020202020ull,0x5f744c240a202f2full,0x4c240a3a34385f31ull,0x0a3a32385f315f74ull,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c38333220ull,0x6c6562616c206461ull,0x315f744c24206465ull,0x6f6c2e090a39375full,
0x3736320935310963ull,0x2e627573090a3009ull,0x3272250920323375ull,0x2c30327225202c30ull,
0x2020203b31722520ull,0x090a202f2f092020ull,0x203233752e646461ull,0x25202c3232722509ull,
0x317225202c323272ull,0x2f0920202020203bull,0x70746573090a202full,0x203233752e746c2eull,
0x25202c3231702509ull,0x317225202c323272ull,0x090a202f2f093b31ull,0x7262203231702540ull,
0x315f744c24092061ull,0x202020203b39375full,0x2f09202020202020ull,0x6c3c2f2f200a202full,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c31313120656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x090a38345f315f74ull,0x20696e752e617262ull,
0x375f315f744c2409ull,0x2020202020203b37ull,0x2f09202020202020ull,0x315f744c240a202full,
0x2f200a3a3330315full,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3120656e696c2079ull,0x64616568202c3131ull,0x64656c6562616c20ull,0x345f315f744c2420ull,
0x5f315f744c240a38ull,0x3c2f2f200a3a3737ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x31313120656e696cull,0x6c2064616568202cull,0x242064656c656261ull,
0x0a38345f315f744cull,0x373109636f6c2e09ull,0x090a300936323109ull,0x636e79732e726162ull,
0x202020203b300920ull,0x2020202020202020ull,0x2f09202020202020ull,0x2e766f6d090a202full,
0x3372250920323375ull,0x2020203b30202c31ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x2e71652e70746573ull,0x3170250920323373ull,0x2c36317225202c33ull,0x2f093b3133722520ull,
0x31702540090a202full,0x2409206172622033ull,0x3b35395f315f744cull,0x2020202020202020ull,
0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c313131ull,0x656c6562616c2064ull,0x5f315f744c242064ull,
0x2e766f6d090a3834ull,0x3372250920323373ull,0x203b387225202c32ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x2e656e2e70746573ull,0x3170250920323375ull,0x2c32337225202c34ull,
0x2f093b3132722520ull,0x31702540090a202full,0x2409206172622034ull,0x3b34395f315f744cull,
0x2020202020202020ull,0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c313131ull,0x656c6562616c2064ull,
0x5f315f744c242064ull,0x636f6c2e090a3834ull,0x0933333109373109ull,0x662e766f6d090a30ull,
0x2c38662509203233ull,0x2020203b35662520ull,0x2020202020202020ull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x386625202c346625ull,0x202020202020203bull,0x2f2f092020202020ull,
0x662e766f6d090a20ull,0x2c36662509203233ull,0x2020203b32662520ull,0x2020202020202020ull,
0x62090a202f2f0920ull,0x0920696e752e6172ull,0x33395f315f744c24ull,0x202020202020203bull,
0x2f2f092020202020ull,0x5f315f744c240a20ull,0x3c2f2f200a3a3439ull,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x31313120656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x0a38345f315f744cull,0x373109636f6c2e09ull,0x090a300936333109ull,
0x203233662e766f6dull,0x6625202c36662509ull,0x2020202020203b35ull,0x2f09202020202020ull,
0x2e766f6d090a202full,0x3266250920323366ull,0x20203b366625202cull,0x2020202020202020ull,
0x090a202f2f092020ull,0x203233662e766f6dull,0x6625202c38662509ull,0x2020202020203b34ull,
0x2f09202020202020ull,0x315f744c240a202full,0x2f2f200a3a33395full,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x313120656e696c20ull,0x2064616568202c31ull,
0x2064656c6562616cull,0x38345f315f744c24ull,0x3109636f6c2e090aull,0x0a30093234310937ull,
0x3233662e62757309ull,0x202c313366250920ull,0x366625202c386625ull,0x092020202020203bull,
0x2e646c090a202f2full,0x33662e6d61726170ull,0x2c32336625092032ull,0x616475635f5f5b20ull,
0x335a5f5f6d726170ull,0x4b74636573696230ull,0x72614c6c656e7265ull,0x6e49656e4f5f6567ull,
0x50736c6176726574ull,0x535f536a6a5f5366ull,0x6572705f666a505full,0x3b5d6e6f69736963ull,
0x323a6469202f2f09ull,0x6475635f5f203831ull,0x5a5f5f6d72617061ull,0x7463657369623033ull,
0x614c6c656e72654bull,0x49656e4f5f656772ull,0x736c61767265746eull,0x5f536a6a5f536650ull,
0x72705f666a505f53ull,0x2b6e6f6973696365ull,0x736261090a307830ull,0x662509203233662eull,
0x3b386625202c3333ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x3233662e73626109ull,
0x202c343366250920ull,0x202020203b366625ull,0x0920202020202020ull,0x78616d090a202f2full,
0x662509203233662eull,0x33336625202c3533ull,0x203b34336625202cull,0x0a202f2f09202020ull,
0x3233662e6c756d09ull,0x202c363366250920ull,0x6625202c32336625ull,0x09202020203b3533ull,
0x6e696d090a202f2full,0x662509203233662eull,0x32336625202c3733ull,0x203b36336625202cull,
0x0a202f2f09202020ull,0x746c2e7074657309ull,0x702509203233662eull,0x31336625202c3531ull,
0x093b37336625202cull,0x252140090a202f2full,0x2061726220353170ull,0x395f315f744c2409ull,
0x2020202020203b36ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c31313120ull,0x6c6562616c206461ull,
0x315f744c24206465ull,0x6f6c2e090a38345full,0x3434310937310963ull,0x2e766f6d090a3009ull,
0x3366250920323366ull,0x3030306630202c38ull,0x20203b3030303030ull,0x0a30202f2f092020ull,
0x746c2e7074657309ull,0x702509203233662eull,0x202c366625202c36ull,0x0920203b38336625ull,
0x766f6d090a202f2full,0x662509203233662eull,0x30306630202c3933ull,0x203b303030303030ull,
0x30202f2f09202020ull,0x6c2e70746573090aull,0x2509203233662e74ull,0x386625202c363170ull,
0x203b39336625202cull,0x2140090a202f2f09ull,0x6172622036317025ull,0x5f315f744c240920ull,
0x20202020203b3839ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3131312065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x6c2e090a38345f31ull,0x323909353109636full,0x706c6573090a3009ull,
0x722509203233732eull,0x30202c31202c3333ull,0x20203b367025202cull,0x090a202f2f092020ull,
0x20696e752e617262ull,0x395f315f744c2409ull,0x2020202020203b37ull,0x2f09202020202020ull,
0x315f744c240a202full,0x2f2f200a3a38395full,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x313120656e696c20ull,0x2064616568202c31ull,0x2064656c6562616cull,
0x38345f315f744c24ull,0x732e706c6573090aull,0x3333722509203233ull,0x202c31202c30202cull,
0x202020203b367025ull,0x744c240a202f2f09ull,0x200a3a37395f315full,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c313131ull,
0x656c6562616c2064ull,0x5f315f744c242064ull,0x636f6c2e090a3834ull,0x0934343109373109ull,
0x662e646461090a30ull,0x3034662509203233ull,0x25202c386625202cull,0x20202020203b3666ull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x6630202c31346625ull,0x3030303030306633ull,
0x2f2f09202020203bull,0x756d090a352e3020ull,0x2509203233662e6cull,0x336625202c323466ull,
0x3b31346625202c31ull,0x202f2f0920202020ull,0x33662e766f6d090aull,0x2c33346625092032ull,
0x3030306633663020ull,0x202020203b303030ull,0x0a352e30202f2f09ull,0x3233662e6c756d09ull,
0x202c343466250920ull,0x6625202c30346625ull,0x09202020203b3334ull,0x646461090a202f2full,
0x662509203233662eull,0x32346625202c3534ull,0x20203b366625202cull,0x0a202f2f09202020ull,
0x3233732e67656e09ull,0x202c343372250920ull,0x2020203b33337225ull,0x0920202020202020ull,
0x636c73090a202f2full,0x33732e3233662e74ull,0x2c36346625092032ull,0x25202c3434662520ull,
0x337225202c353466ull,0x090a202f2f093b34ull,0x09373109636f6c2eull,0x6d090a3009353431ull,
0x09203233662e766full,0x346625202c326625ull,0x2020202020203b36ull,0x2f2f092020202020ull,
0x09636f6c2e090a20ull,0x3009363431093731ull,0x33662e766f6d090aull,0x202c346625092032ull,
0x2020203b36346625ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203631752e76ull,
0x203b31202c316872ull,0x2020202020202020ull,0x202f2f0920202020ull,0x6e752e617262090aull,
0x315f744c24092069ull,0x202020203b35395full,0x2020202020202020ull,0x744c240a202f2f09ull,
0x200a3a36395f315full,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c313131ull,0x656c6562616c2064ull,0x5f315f744c242064ull,
0x636f6c2e090a3834ull,0x0931353109373109ull,0x752e766f6d090a30ull,0x3533722509203233ull,
0x202020203b30202cull,0x2020202020202020ull,0x73090a202f2f0920ull,0x6465726168732e74ull,
0x635b09203233752eull,0x6465677265766e6full,0x7268745f6c6c615full,0x25202c5d73646165ull,
0x202f2f093b353372ull,0x63203833323a6469ull,0x6465677265766e6full,0x7268745f6c6c615full,
0x3078302b73646165ull,0x395f315f744c240aull,0x315f744c240a3a35ull,0x2f2f200a3a31395full,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x313120656e696c20ull,
0x2064616568202c31ull,0x2064656c6562616cull,0x38345f315f744c24ull,0x3109636f6c2e090aull,
0x0a30093535310937ull,0x6e79732e72616209ull,0x2020203b30092063ull,0x2020202020202020ull,
0x0920202020202020ull,0x2e646c090a202f2full,0x752e646572616873ull,0x3633722509203233ull,
0x65766e6f635b202cull,0x6c6c615f64656772ull,0x736461657268745full,0x6469202f2f093b5dull,
0x6e6f63203833323aull,0x615f646567726576ull,0x61657268745f6c6cull,0x090a3078302b7364ull,
0x203233752e766f6dull,0x31202c3733722509ull,0x202020202020203bull,0x2f09202020202020ull,
0x70746573090a202full,0x203233752e656e2eull,0x25202c3731702509ull,0x337225202c363372ull,
0x090a202f2f093b37ull,0x7262203731702540ull,0x315f744c24092061ull,0x202020203b39395full,
0x2f09202020202020ull,0x2e617262090a202full,0x744c240920696e75ull,0x2020203b315f315full,
0x2020202020202020ull,0x240a202f2f092020ull,0x3a39395f315f744cull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3131312065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x6c2e090a38345f31ull,0x363109373109636full,
0x726162090a300931ull,0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x696e752e61726209ull,0x5f315f744c240920ull,0x20202020203b3834ull,
0x0920202020202020ull,0x5f744c240a202f2full,0x6c2e090a3a315f31ull,0x363109373109636full,
0x726162090a300935ull,0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x6220317025214009ull,0x5f744c2409206172ull,0x20203b3130315f31ull,
0x0920202020202020ull,0x6f6c2e090a202f2full,0x3936310937310963ull,0x2e766f6d090a3009ull,
0x3466250920323366ull,0x203b326625202c37ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x6d617261702e646cull,0x722509203436752eull,0x5f5f5b202c343264ull,0x6d72617061647563ull,
0x73696230335a5f5full,0x656e72654b746365ull,0x4f5f656772614c6cull,0x767265746e49656eull,
0x6a5f536650736c61ull,0x666a505f535f536aull,0x5d7466656c5f675full,0x3a6469202f2f093bull,
0x75635f5f20313332ull,0x5f5f6d7261706164ull,0x636573696230335aull,0x4c6c656e72654b74ull,
0x656e4f5f65677261ull,0x6c61767265746e49ull,0x536a6a5f53665073ull,0x675f666a505f535full,
0x78302b7466656c5full,0x752e747663090a30ull,0x09203233752e3436ull,0x25202c3532647225ull,
0x20202020203b3572ull,0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3632647225092034ull,
0x2c3532647225202cull,0x2f2f0920203b3420ull,0x752e646461090a20ull,0x3264722509203436ull,
0x3432647225202c37ull,0x3b3632647225202cull,0x73090a202f2f0920ull,0x6c61626f6c672e74ull,
0x255b09203233662eull,0x2c5d302b37326472ull,0x2f093b3734662520ull,0x3734323a6469202full,
0x315f315f744c240aull,0x6f6c2e090a3a3130ull,0x3237310937310963ull,0x74697865090a3009ull,
0x202020202020203bull,0x2020202020202020ull,0x2020202020202020ull,0x240a202f2f092020ull,
0x5f5f646e6557444cull,0x636573696230335aull,0x4c6c656e72654b74ull,0x656e4f5f65677261ull,
0x6c61767265746e49ull,0x536a6a5f53665073ull,0x0a3a666a505f535full,0x5a5f202f2f207d09ull,
0x7463657369623033ull,0x614c6c656e72654bull,0x49656e4f5f656772ull,0x736c61767265746eull,
0x5f536a6a5f536650ull,0x090a0a666a505f53ull,0x5f207972746e652eull,0x636573696231335aull,
0x4c6c656e72654b74ull,0x6c754d5f65677261ull,0x61767265746e4974ull,0x506a5f536650736cull,
0x5f535f535f30536aull,0x5f535f30535f3053ull,0x0a7b090a665f3053ull,0x752e206765722e09ull,
0x35313c7225203233ull,0x65722e090a3b3e33ull,0x25203436752e2067ull,0x0a3b3e39383c6472ull,
0x662e206765722e09ull,0x38383c6625203233ull,0x6765722e090a3b3eull,0x6625203436662e20ull,
0x090a3b3e34313c64ull,0x72702e206765722eull,0x39343c7025206465ull,0x7261702e090a3b3eull,
0x203436752e206d61ull,0x6170616475635f5full,0x6231335a5f5f6d72ull,0x72654b7463657369ull,
0x656772614c6c656eull,0x746e49746c754d5full,0x6650736c61767265ull,0x5f30536a506a5f53ull,
0x535f30535f535f53ull,0x665f30535f535f30ull,0x2e090a3b645f675full,0x752e206d61726170ull,
0x6475635f5f203436ull,0x5a5f5f6d72617061ull,0x7463657369623133ull,0x614c6c656e72654bull,
0x746c754d5f656772ull,0x6c61767265746e49ull,0x6a506a5f53665073ull,0x535f535f535f3053ull,
0x535f535f30535f30ull,0x3b735f675f665f30ull,0x6d617261702e090aull,0x5f5f203233752e20ull,
0x6d72617061647563ull,0x73696231335a5f5full,0x656e72654b746365ull,0x4d5f656772614c6cull,
0x7265746e49746c75ull,0x5f536650736c6176ull,0x5f535f30536a506aull,0x5f30535f30535f53ull,
0x6e5f665f30535f53ull,0x617261702e090a3bull,0x5f203436752e206dull,0x726170616475635full,
0x696231335a5f5f6dull,0x6e72654b74636573ull,0x5f656772614c6c65ull,0x65746e49746c754dull,
0x536650736c617672ull,0x535f30536a506a5full,0x30535f30535f535full,0x5f665f30535f535full,
0x6d5f736b636f6c62ull,0x702e090a3b746c75ull,0x36752e206d617261ull,0x616475635f5f2034ull,
0x335a5f5f6d726170ull,0x4b74636573696231ull,0x72614c6c656e7265ull,0x49746c754d5f6567ull,
0x736c61767265746eull,0x536a506a5f536650ull,0x30535f535f535f30ull,0x30535f535f30535full,
0x6b636f6c625f665full,0x735f746c756d5f73ull,0x61702e090a3b6d75ull,0x3436752e206d6172ull,
0x70616475635f5f20ull,0x31335a5f5f6d7261ull,0x654b746365736962ull,0x6772614c6c656e72ull,
0x6e49746c754d5f65ull,0x50736c6176726574ull,0x30536a506a5f5366ull,0x5f30535f535f535full,
0x5f30535f535f3053ull,0x7466656c5f675f66ull,0x617261702e090a3bull,0x5f203436752e206dull,
0x726170616475635full,0x696231335a5f5f6dull,0x6e72654b74636573ull,0x5f656772614c6c65ull,
0x65746e49746c754dull,0x536650736c617672ull,0x535f30536a506a5full,0x30535f30535f535full,
0x5f665f30535f535full,0x3b74686769725f67ull,0x6d617261702e090aull,0x5f5f203436752e20ull,
0x6d72617061647563ull,0x73696231335a5f5full,0x656e72654b746365ull,0x4d5f656772614c6cull,
0x7265746e49746c75ull,0x5f536650736c6176ull,0x5f535f30536a506aull,0x5f30535f30535f53ull,
0x675f665f30535f53ull,0x6f635f7466656c5full,0x702e090a3b746e75ull,0x36752e206d617261ull,
0x616475635f5f2034ull,0x335a5f5f6d726170ull,0x4b74636573696231ull,0x72614c6c656e7265ull,
0x49746c754d5f6567ull,0x736c61767265746eull,0x536a506a5f536650ull,0x30535f535f535f30ull,
0x30535f535f30535full,0x6769725f675f665full,0x746e756f635f7468ull,0x617261702e090a3bull,
0x5f203436752e206dull,0x726170616475635full,0x696231335a5f5f6dull,0x6e72654b74636573ull,
0x5f656772614c6c65ull,0x65746e49746c754dull,0x536650736c617672ull,0x535f30536a506a5full,
0x30535f30535f535full,0x5f665f30535f535full,0x6164626d616c5f67ull,0x617261702e090a3bull,
0x5f203436752e206dull,0x726170616475635full,0x696231335a5f5f6dull,0x6e72654b74636573ull,
0x5f656772614c6c65ull,0x65746e49746c754dull,0x536650736c617672ull,0x535f30536a506a5full,
0x30535f30535f535full,0x5f665f30535f535full,0x090a3b736f705f67ull,0x2e206d617261702eull,
0x75635f5f20323366ull,0x5f5f6d7261706164ull,0x636573696231335aull,0x4c6c656e72654b74ull,
0x6c754d5f65677261ull,0x61767265746e4974ull,0x506a5f536650736cull,0x5f535f535f30536aull,
0x5f535f30535f3053ull,0x6572705f665f3053ull,0x0a3b6e6f69736963ull,0x6465726168732e09ull,
0x206e67696c612e20ull,0x5f5f2038622e2034ull,0x635f735f61647563ull,0x6f69746361706d6full,
0x30317473696c5f6eull,0x323530325b323335ull,0x6168732e090a3b5dull,0x696c612e20646572ull,
0x38622e2034206e67ull,0x5f616475635f5f20ull,0x3174686769725f73ull,0x3430325b34383532ull,
0x68732e090a3b5d38ull,0x6c612e2064657261ull,0x622e2034206e6769ull,0x616475635f5f2038ull,
0x74686769725f735full,0x3431746e756f635full,0x383430325b323336ull,0x6168732e090a3b5dull,
0x696c612e20646572ull,0x38622e2034206e67ull,0x5f616475635f5f20ull,0x36317466656c5f73ull,
0x383430325b303836ull,0x6168732e090a3b5dull,0x696c612e20646572ull,0x38622e2034206e67ull,
0x5f616475635f5f20ull,0x635f7466656c5f73ull,0x32373831746e756full,0x3b5d383430325b38ull,
0x65726168732e090aull,0x63203233752e2064ull,0x735f6b636f6c625full,0x2e090a3b74726174ull,
0x2e20646572616873ull,0x6c625f6320323375ull,0x3b646e655f6b636full,0x65726168732e090aull,
0x63203233752e2064ull,0x6f5f6b636f6c625full,0x756f5f7465736666ull,0x2e090a3b74757074ull,
0x2e20646572616873ull,0x5f6d756e20323375ull,0x5f73646165726874ull,0x0a3b657669746361ull,
0x6465726168732e09ull,0x756e203233752e20ull,0x6461657268745f6dull,0x6361706d6f635f73ull,
0x2e090a3b6e6f6974ull,0x2e20646572616873ull,0x5f6c6c6120323375ull,0x5f73646165726874ull,
0x65677265766e6f63ull,0x6168732e090a3b64ull,0x3233752e20646572ull,0x746361706d6f6320ull,
0x5f646e6f6365735full,0x090a3b6b6e756863ull,0x207466656c202f2full,0x202f2f090a30203dull,
0x203d207468676972ull,0x656c202f2f090a34ull,0x746e756f635f7466ull,0x2f2f090a38203d20ull,
0x635f746867697220ull,0x31203d20746e756full,0x09636f6c2e090a32ull,0x0a30093837093831ull,
0x5a5f5f3142424c24ull,0x7463657369623133ull,0x614c6c656e72654bull,0x746c754d5f656772ull,
0x6c61767265746e49ull,0x6a506a5f53665073ull,0x535f535f535f3053ull,0x535f535f30535f30ull,
0x7663090a3a665f30ull,0x31752e3233752e74ull,0x202c317225092036ull,0x203b782e64697425ull,
0x202f2f0920202020ull,0x33752e766f6d090aull,0x202c327225092032ull,0x2020202020203b30ull,
0x2020202020202020ull,0x6573090a202f2f09ull,0x33752e71652e7074ull,0x202c317025092032ull,
0x327225202c317225ull,0x202f2f092020203bull,0x203170252140090aull,0x744c240920617262ull,
0x203b3535315f325full,0x2020202020202020ull,0x6c2e090a202f2f09ull,0x323109383109636full,
0x747663090a300935ull,0x3631752e3233752eull,0x25202c3372250920ull,0x3b782e6469617463ull,
0x0a202f2f09202020ull,0x3436752e74766309ull,0x722509203233752eull,0x3b337225202c3164ull,
0x0920202020202020ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,0x25202c3264722509ull,
0x203b34202c316472ull,0x0a202f2f09202020ull,0x617261702e646c09ull,0x2509203436752e6dull,
0x5f5f5b202c336472ull,0x6d72617061647563ull,0x73696231335a5f5full,0x656e72654b746365ull,
0x4d5f656772614c6cull,0x7265746e49746c75ull,0x5f536650736c6176ull,0x5f535f30536a506aull,
0x5f30535f30535f53ull,0x625f665f30535f53ull,0x756d5f736b636f6cull,0x202f2f093b5d746cull,
0x5f203431373a6469ull,0x726170616475635full,0x696231335a5f5f6dull,0x6e72654b74636573ull,
0x5f656772614c6c65ull,0x65746e49746c754dull,0x536650736c617672ull,0x535f30536a506a5full,
0x30535f30535f535full,0x5f665f30535f535full,0x6d5f736b636f6c62ull,0x0a3078302b746c75ull,
0x3436752e64646109ull,0x202c346472250920ull,0x7225202c33647225ull,0x09202020203b3264ull,
0x2e646c090a202f2full,0x752e6c61626f6c67ull,0x2c34722509203233ull,0x302b346472255b20ull,
0x69202f2f09203b5dull,0x73090a3531373a64ull,0x6465726168732e74ull,0x635b09203233752eull,
0x735f6b636f6c625full,0x25202c5d74726174ull,0x69202f2f093b3472ull,0x5f63203439363a64ull,
0x74735f6b636f6c62ull,0x0a3078302b747261ull,0x383109636f6c2e09ull,0x090a300936323109ull,
0x61626f6c672e646cull,0x2509203233752e6cull,0x6472255b202c3572ull,0x2f09203b5d342b34ull,
0x3631373a6469202full,0x6168732e7473090aull,0x203233752e646572ull,0x636f6c625f635b09ull,
0x202c5d646e655f6bull,0x202f2f093b357225ull,0x63203339363a6469ull,0x655f6b636f6c625full,
0x090a3078302b646eull,0x09383109636f6c2eull,0x6c090a3009373231ull,0x2e6d617261702e64ull,
0x6472250920343675ull,0x75635f5f5b202c35ull,0x5f5f6d7261706164ull,0x636573696231335aull,
0x4c6c656e72654b74ull,0x6c754d5f65677261ull,0x61767265746e4974ull,0x506a5f536650736cull,
0x5f535f535f30536aull,0x5f535f30535f3053ull,0x6f6c625f665f3053ull,0x746c756d5f736b63ull,
0x2f093b5d6d75735full,0x3731373a6469202full,0x70616475635f5f20ull,0x31335a5f5f6d7261ull,
0x654b746365736962ull,0x6772614c6c656e72ull,0x6e49746c754d5f65ull,0x50736c6176726574ull,
0x30536a506a5f5366ull,0x5f30535f535f535full,0x5f30535f535f3053ull,0x736b636f6c625f66ull,
0x75735f746c756d5full,0x61090a3078302b6dull,0x09203436752e6464ull,0x7225202c36647225ull,
0x32647225202c3564ull,0x2f2f09202020203bull,0x6c672e646c090a20ull,0x3233752e6c61626full,
0x5b202c3672250920ull,0x3b5d302b36647225ull,0x3a6469202f2f0920ull,0x2e7473090a383137ull,
0x752e646572616873ull,0x625f635b09203233ull,0x66666f5f6b636f6cull,0x7074756f5f746573ull,
0x367225202c5d7475ull,0x3a6469202f2f093bull,0x6c625f6320393137ull,0x7366666f5f6b636full,
0x757074756f5f7465ull,0x2e090a3078302b74ull,0x3109383109636f6cull,0x7573090a30093932ull,
0x2509203233752e62ull,0x2c357225202c3772ull,0x2020203b34722520ull,0x202f2f0920202020ull,
0x6168732e7473090aull,0x203233752e646572ull,0x68745f6d756e5b09ull,0x63615f7364616572ull,
0x25202c5d65766974ull,0x69202f2f093b3772ull,0x756e203930373a64ull,0x6461657268745f6dull,
0x6576697463615f73ull,0x6c2e090a3078302bull,0x333109383109636full,0x766f6d090a300930ull,
0x722509203233752eull,0x2020203b30202c38ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x726168732e747309ull,0x09203233752e6465ull,0x5f616475635f5f5bull,0x6361706d6f635f73ull,
0x73696c5f6e6f6974ull,0x302b323335303174ull,0x093b387225202c5dull,0x32373a6469202f2full,
0x616475635f5f2030ull,0x61706d6f635f735full,0x696c5f6e6f697463ull,0x2b32333530317473ull,
0x6f6c2e090a307830ull,0x3133310938310963ull,0x2e627573090a3009ull,0x3972250920323373ull,
0x31202c377225202cull,0x202020202020203bull,0x090a202f2f092020ull,0x203233622e646e61ull,
0x25202c3031722509ull,0x3b397225202c3772ull,0x2f09202020202020ull,0x2e766f6d090a202full,
0x3172250920323375ull,0x2020203b30202c31ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x2e656e2e70746573ull,0x3270250920323373ull,0x202c30317225202cull,0x2f09203b31317225ull,
0x32702540090a202full,0x4c24092061726220ull,0x3b3735315f325f74ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x203233732e766f6dull,0x25202c3231722509ull,0x20202020203b3772ull,
0x2f09202020202020ull,0x2e617262090a202full,0x744c240920696e75ull,0x2020203b345f325full,
0x2020202020202020ull,0x240a202f2f092020ull,0x3735315f325f744cull,0x09636f6c2e090a3aull,
0x3009303932093931ull,0x6e722e747663090aull,0x3233732e3233662eull,0x25202c3166250920ull,
0x20202020203b3772ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x3b316625202c3266ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x3209636f6c2e090aull,0x3009323833320932ull,
0x33662e736261090aull,0x202c336625092032ull,0x202020203b316625ull,0x2020202020202020ull,
0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x30306630202c3466ull,0x203b303030303038ull,
0x202f2f0920202020ull,0x6539343537312e31ull,0x746573090a38332dull,0x3233662e746c2e70ull,
0x25202c3370250920ull,0x3b346625202c3366ull,0x0a202f2f09202020ull,0x6220337025214009ull,
0x5f744c2409206172ull,0x20203b3036315f32ull,0x0920202020202020ull,0x6f6c2e090a202f2full,
0x3833320932320963ull,0x766f6d090a300937ull,0x662509203233662eull,0x3862346630202c35ull,
0x20203b3030303030ull,0x31202f2f09202020ull,0x2b6532373737362eull,0x2e6c756d090a3730ull,
0x3266250920323366ull,0x25202c316625202cull,0x20202020203b3566ull,0x090a202f2f092020ull,
0x203233752e766f6dull,0x32202c3331722509ull,0x2020202020203b34ull,0x2f09202020202020ull,
0x2e617262090a202full,0x744c240920696e75ull,0x203b3935315f325full,0x2020202020202020ull,
0x240a202f2f092020ull,0x3036315f325f744cull,0x09636f6c2e090a3aull,0x0930393332093232ull,
0x752e766f6d090a30ull,0x3331722509203233ull,0x202020203b30202cull,0x2020202020202020ull,
0x4c240a202f2f0920ull,0x3a3935315f325f74ull,0x3109636f6c2e090aull,0x090a300937370935ull,
0x203233622e766f6dull,0x25202c3431722509ull,0x20202020203b3266ull,0x2f09202020202020ull,
0x2e726873090a202full,0x3172250920323373ull,0x2c34317225202c35ull,0x202020203b333220ull,
0x090a202f2f092020ull,0x203233622e646e61ull,0x25202c3631722509ull,0x353532202c353172ull,
0x2f0920202020203bull,0x2e766f6d090a202full,0x3172250920323375ull,0x2020203b30202c37ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x203233752e627573ull,0x25202c3831722509ull,
0x317225202c363172ull,0x2f09202020203b33ull,0x2e627573090a202full,0x3172250920323375ull,
0x2c38317225202c39ull,0x2020203b36323120ull,0x090a202f2f092020ull,0x203233752e766f6dull,
0x32202c3032722509ull,0x20202020203b3535ull,0x2f09202020202020ull,0x2e746573090a202full,
0x752e3233752e7165ull,0x3132722509203233ull,0x202c36317225202cull,0x2f2f093b30327225ull,
0x732e67656e090a20ull,0x3232722509203233ull,0x203b31327225202cull,0x2020202020202020ull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x306630202c366625ull,0x3b30303030303030ull,
0x2f2f092020202020ull,0x2e746573090a3020ull,0x662e3233752e7165ull,0x3332722509203233ull,
0x25202c336625202cull,0x0a202f2f093b3666ull,0x3233732e67656e09ull,0x202c343272250920ull,
0x2020203b33327225ull,0x0920202020202020ull,0x2e726f090a202f2full,0x3272250920323362ull,
0x2c32327225202c35ull,0x20203b3432722520ull,0x0a202f2f09202020ull,0x3233732e67656e09ull,
0x202c363272250920ull,0x2020203b35327225ull,0x0920202020202020ull,0x636c73090a202f2full,
0x33732e3233752e74ull,0x2c37327225092032ull,0x25202c3931722520ull,0x327225202c373172ull,
0x090a202f2f093b36ull,0x203233622e6c6873ull,0x31202c3231722509ull,0x203b37327225202cull,
0x2f09202020202020ull,0x325f744c240a202full,0x6f6c2e090a3a345full,0x3133310938310963ull,
0x732e7473090a3009ull,0x33752e6465726168ull,0x5f6d756e5b092032ull,0x5f73646165726874ull,
0x69746361706d6f63ull,0x317225202c5d6e6full,0x6469202f2f093b32ull,0x6d756e203132373aull,
0x736461657268745full,0x746361706d6f635full,0x0a3078302b6e6f69ull,0x383109636f6c2e09ull,
0x090a300933333109ull,0x203233752e766f6dull,0x31202c3832722509ull,0x202020202020203bull,
0x2f09202020202020ull,0x732e7473090a202full,0x33752e6465726168ull,0x5f6c6c615b092032ull,
0x5f73646165726874ull,0x65677265766e6f63ull,0x38327225202c5d64ull,0x3a6469202f2f093bull,
0x5f6c6c6120323237ull,0x5f73646165726874ull,0x65677265766e6f63ull,0x2e090a3078302b64ull,
0x3109383109636f6cull,0x6f6d090a30093433ull,0x2509203233752e76ull,0x203b30202c393272ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x6168732e7473090aull,0x203233752e646572ull,
0x6361706d6f635b09ull,0x646e6f6365735f74ull,0x2c5d6b6e7568635full,0x2f093b3932722520ull,
0x3332373a6469202full,0x746361706d6f6320ull,0x5f646e6f6365735full,0x78302b6b6e756863ull,
0x5f325f744c240a30ull,0x6c2e090a3a353531ull,0x333109383109636full,0x726162090a300937ull,
0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x726168732e646c09ull,0x09203233752e6465ull,0x6e5b202c30337225ull,0x61657268745f6d75ull,
0x76697463615f7364ull,0x69202f2f093b5d65ull,0x756e203930373a64ull,0x6461657268745f6dull,
0x6576697463615f73ull,0x6573090a3078302bull,0x33752e656c2e7074ull,0x202c347025092032ull,
0x7225202c30337225ull,0x202f2f0920203b31ull,0x622034702540090aull,0x5f744c2409206172ull,
0x20203b3136315f32ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,0x343109383109636full,
0x766f6d090a300932ull,0x722509203436752eull,0x75635f5f202c3764ull,0x6769725f735f6164ull,
0x3b34383532317468ull,0x6f6d090a202f2f09ull,0x2509203436752e76ull,0x635f5f202c386472ull,
0x69725f735f616475ull,0x6e756f635f746867ull,0x093b323336343174ull,0x766f6d090a202f2full,
0x722509203436752eull,0x75635f5f202c3964ull,0x66656c5f735f6164ull,0x093b303836363174ull,
0x766f6d090a202f2full,0x722509203436752eull,0x635f5f202c303164ull,0x656c5f735f616475ull,
0x746e756f635f7466ull,0x2f093b3832373831ull,0x2e747663090a202full,0x203233752e343675ull,
0x202c313164722509ull,0x202020203b317225ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,
0x3164722509203436ull,0x3131647225202c32ull,0x2f0920203b34202cull,0x732e646c090a202full,
0x33752e6465726168ull,0x2c31337225092032ull,0x636f6c625f635b20ull,0x5d74726174735f6bull,
0x3a6469202f2f093bull,0x6c625f6320343936ull,0x726174735f6b636full,0x61090a3078302b74ull,
0x09203233752e6464ull,0x7225202c32337225ull,0x3b317225202c3133ull,0x2f2f092020202020ull,
0x752e747663090a20ull,0x09203233752e3436ull,0x25202c3331647225ull,0x202020203b323372ull,
0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3431647225092034ull,0x2c3331647225202cull,
0x2f2f0920203b3420ull,0x61702e646c090a20ull,0x203436752e6d6172ull,0x202c353164722509ull,
0x70616475635f5f5bull,0x31335a5f5f6d7261ull,0x654b746365736962ull,0x6772614c6c656e72ull,
0x6e49746c754d5f65ull,0x50736c6176726574ull,0x30536a506a5f5366ull,0x5f30535f535f535full,
0x5f30535f535f3053ull,0x7466656c5f675f66ull,0x6469202f2f093b5dull,0x635f5f203432373aull,
0x5f6d726170616475ull,0x6573696231335a5full,0x6c656e72654b7463ull,0x754d5f656772614cull,
0x767265746e49746cull,0x6a5f536650736c61ull,0x535f535f30536a50ull,0x535f30535f30535full,
0x5f675f665f30535full,0x3078302b7466656cull,0x36752e646461090aull,0x3631647225092034ull,
0x2c3531647225202cull,0x203b343164722520ull,0x646c090a202f2f09ull,0x2e6c61626f6c672eull,
0x3766250920323366ull,0x36316472255b202cull,0x202f2f093b5d302bull,0x090a3532373a6469ull,
0x203436752e646461ull,0x202c373164722509ull,0x25202c3231647225ull,0x2f0920203b396472ull,
0x732e7473090a202full,0x33662e6465726168ull,0x316472255b092032ull,0x6625202c5d302b37ull,
0x6469202f2f093b37ull,0x635f5f203632373aull,0x656c5f735f616475ull,0x2b30383636317466ull,
0x6f6c2e090a307830ull,0x3334310938310963ull,0x702e646c090a3009ull,0x3436752e6d617261ull,
0x2c38316472250920ull,0x616475635f5f5b20ull,0x335a5f5f6d726170ull,0x4b74636573696231ull,
0x72614c6c656e7265ull,0x49746c754d5f6567ull,0x736c61767265746eull,0x536a506a5f536650ull,
0x30535f535f535f30ull,0x30535f535f30535full,0x6769725f675f665full,0x202f2f093b5d7468ull,
0x5f203732373a6469ull,0x726170616475635full,0x696231335a5f5f6dull,0x6e72654b74636573ull,
0x5f656772614c6c65ull,0x65746e49746c754dull,0x536650736c617672ull,0x535f30536a506a5full,
0x30535f30535f535full,0x5f665f30535f535full,0x2b74686769725f67ull,0x646461090a307830ull,
0x722509203436752eull,0x647225202c393164ull,0x31647225202c3831ull,0x0a202f2f09203b34ull,
0x626f6c672e646c09ull,0x09203233662e6c61ull,0x72255b202c386625ull,0x093b5d302b393164ull,
0x32373a6469202f2full,0x752e646461090a38ull,0x3264722509203436ull,0x3231647225202c30ull,
0x203b37647225202cull,0x73090a202f2f0920ull,0x6465726168732e74ull,0x255b09203233662eull,
0x2c5d302b30326472ull,0x2f2f093b38662520ull,0x203932373a646920ull,0x735f616475635f5full,
0x323174686769725full,0x0a3078302b343835ull,0x383109636f6c2e09ull,0x090a300934343109ull,
0x6d617261702e646cull,0x722509203436752eull,0x5f5f5b202c313264ull,0x6d72617061647563ull,
0x73696231335a5f5full,0x656e72654b746365ull,0x4d5f656772614c6cull,0x7265746e49746c75ull,
0x5f536650736c6176ull,0x5f535f30536a506aull,0x5f30535f30535f53ull,0x675f665f30535f53ull,
0x6f635f7466656c5full,0x2f2f093b5d746e75ull,0x203033373a646920ull,0x6170616475635f5full,
0x6231335a5f5f6d72ull,0x72654b7463657369ull,0x656772614c6c656eull,0x746e49746c754d5full,
0x6650736c61767265ull,0x5f30536a506a5f53ull,0x535f30535f535f53ull,0x665f30535f535f30ull,
0x5f7466656c5f675full,0x78302b746e756f63ull,0x752e646461090a30ull,0x3264722509203436ull,
0x3132647225202c32ull,0x3b3431647225202cull,0x6c090a202f2f0920ull,0x6c61626f6c672e64ull,
0x722509203233752eull,0x6472255b202c3333ull,0x2f093b5d302b3232ull,0x3133373a6469202full,
0x36752e646461090aull,0x3332647225092034ull,0x2c3231647225202cull,0x203b303164722520ull,
0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323375ull,0x202c5d302b333264ull,
0x2f2f093b33337225ull,0x203233373a646920ull,0x735f616475635f5full,0x6f635f7466656c5full,
0x3832373831746e75ull,0x6c2e090a3078302bull,0x343109383109636full,0x2e646c090a300935ull,
0x36752e6d61726170ull,0x3432647225092034ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,
0x7463657369623133ull,0x614c6c656e72654bull,0x746c754d5f656772ull,0x6c61767265746e49ull,
0x6a506a5f53665073ull,0x535f535f535f3053ull,0x535f535f30535f30ull,0x69725f675f665f30ull,
0x6e756f635f746867ull,0x69202f2f093b5d74ull,0x5f5f203333373a64ull,0x6d72617061647563ull,
0x73696231335a5f5full,0x656e72654b746365ull,0x4d5f656772614c6cull,0x7265746e49746c75ull,
0x5f536650736c6176ull,0x5f535f30536a506aull,0x5f30535f30535f53ull,0x675f665f30535f53ull,
0x635f74686769725full,0x3078302b746e756full,0x36752e646461090aull,0x3532647225092034ull,
0x2c3432647225202cull,0x203b343164722520ull,0x646c090a202f2f09ull,0x2e6c61626f6c672eull,
0x3372250920323375ull,0x326472255b202c34ull,0x2f2f093b5d302b35ull,0x0a3433373a646920ull,
0x3436752e64646109ull,0x2c36326472250920ull,0x202c323164722520ull,0x0920203b38647225ull,
0x2e7473090a202f2full,0x752e646572616873ull,0x6472255b09203233ull,0x25202c5d302b3632ull,
0x202f2f093b343372ull,0x5f203533373a6469ull,0x5f735f616475635full,0x6f635f7468676972ull,
0x3233363431746e75ull,0x744c240a3078302bull,0x0a3a3136315f325full,0x3436752e766f6d09ull,
0x202c376472250920ull,0x735f616475635f5full,0x323174686769725full,0x202f2f093b343835ull,
0x36752e766f6d090aull,0x2c38647225092034ull,0x5f616475635f5f20ull,0x5f74686769725f73ull,
0x363431746e756f63ull,0x0a202f2f093b3233ull,0x3436752e766f6d09ull,0x202c396472250920ull,
0x735f616475635f5full,0x3636317466656c5full,0x0a202f2f093b3038ull,0x3436752e766f6d09ull,
0x2c30316472250920ull,0x5f616475635f5f20ull,0x635f7466656c5f73ull,0x32373831746e756full,
0x090a202f2f093b38ull,0x09383109636f6c2eull,0x62090a3009383431ull,0x20636e79732e7261ull,
0x20202020203b3009ull,0x2020202020202020ull,0x2f2f092020202020ull,0x752e766f6d090a20ull,
0x3533722509203233ull,0x202020203b30202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x306630202c396625ull,0x3b30303030303030ull,0x2f2f092020202020ull,
0x2e766f6d090a3020ull,0x6472250920343675ull,0x75635f5f202c3732ull,0x6d6f635f735f6164ull,
0x5f6e6f6974636170ull,0x333530317473696cull,0x240a202f2f093b32ull,0x3930315f325f744cull,
0x6f6c3c2f2f200a3aull,0x706f6f4c203e706full,0x696c2079646f6220ull,0x090a35353120656eull,
0x09383109636f6c2eull,0x6c090a3009353531ull,0x6465726168732e64ull,0x722509203233732eull,
0x6d756e5b202c3633ull,0x736461657268745full,0x5d6576697463615full,0x3a6469202f2f093bull,
0x5f6d756e20393037ull,0x5f73646165726874ull,0x302b657669746361ull,0x70746573090a3078ull,
0x203233752e656c2eull,0x7225202c35702509ull,0x3b317225202c3633ull,0x090a202f2f092020ull,
0x6172622035702540ull,0x5f325f744c240920ull,0x202020203b393631ull,0x2f09202020202020ull,
0x6c3c2f2f200a202full,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c35353120656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x0a3930315f325f74ull,
0x353109636f6c2e09ull,0x090a300933393509ull,0x2e3436752e747663ull,0x6472250920323375ull,
0x3b317225202c3832ull,0x2f09202020202020ull,0x2e6c756d090a202full,0x09203436752e6f6cull,
0x25202c3231647225ull,0x3b34202c38326472ull,0x090a202f2f092020ull,0x203436752e646461ull,
0x202c393264722509ull,0x25202c3231647225ull,0x2f0920203b396472ull,0x732e646c090a202full,
0x33662e6465726168ull,0x2c30316625092032ull,0x2b39326472255b20ull,0x69202f2f093b5d30ull,
0x5f5f203633373a64ull,0x6c5f735f61647563ull,0x3038363631746665ull,0x6f6d090a3078302bull,
0x2509203233662e76ull,0x316625202c313166ull,0x2020202020203b30ull,0x202f2f0920202020ull,
0x3109636f6c2e090aull,0x0a30093439350935ull,0x3436752e64646109ull,0x2c30336472250920ull,
0x202c323164722520ull,0x0920203b37647225ull,0x2e646c090a202f2full,0x662e646572616873ull,
0x3231662509203233ull,0x30336472255b202cull,0x202f2f093b5d302bull,0x5f203733373a6469ull,
0x5f735f616475635full,0x3532317468676972ull,0x090a3078302b3438ull,0x203233662e766f6dull,
0x25202c3331662509ull,0x202020203b323166ull,0x2f09202020202020ull,0x636f6c2e090a202full,
0x0935393509353109ull,0x752e646461090a30ull,0x3364722509203436ull,0x3231647225202c31ull,
0x3b3031647225202cull,0x6c090a202f2f0920ull,0x6465726168732e64ull,0x722509203233752eull,
0x6472255b202c3733ull,0x2f093b5d302b3133ull,0x3833373a6469202full,0x5f616475635f5f20ull,
0x635f7466656c5f73ull,0x32373831746e756full,0x6d090a3078302b38ull,0x09203233732e766full,
0x7225202c38337225ull,0x20202020203b3733ull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,
0x3009363935093531ull,0x36752e646461090aull,0x3233647225092034ull,0x2c3231647225202cull,
0x20203b3864722520ull,0x646c090a202f2f09ull,0x2e6465726168732eull,0x3372250920323375ull,
0x336472255b202c39ull,0x2f2f093b5d302b32ull,0x203933373a646920ull,0x735f616475635f5full,
0x635f74686769725full,0x33363431746e756full,0x6d090a3078302b32ull,0x09203233732e766full,
0x7225202c30347225ull,0x20202020203b3933ull,0x2f2f092020202020ull,0x2e70746573090a20ull,
0x203233662e75656eull,0x6625202c36702509ull,0x32316625202c3031ull,0x40090a202f2f093bull,
0x6172622036702521ull,0x5f325f744c240920ull,0x202020203b363631ull,0x2f2f092020202020ull,
0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,
0x202c35353120656eull,0x62616c2064616568ull,0x744c242064656c65ull,0x090a3930315f325full,
0x09353109636f6c2eull,0x6d090a3009313036ull,0x09203233662e766full,0x6630202c34316625ull,
0x3030303030303030ull,0x2f2f09202020203bull,0x636f6c2e090a3020ull,0x0933393509353109ull,
0x68732e646c090a30ull,0x3233662e64657261ull,0x202c303166250920ull,0x302b39326472255bull,
0x090a202f2f093b5dull,0x09353109636f6c2eull,0x73090a3009313036ull,0x662e746c2e707465ull,
0x2c37702509203233ull,0x25202c3031662520ull,0x2f2f09203b343166ull,0x662e766f6d090a20ull,
0x3531662509203233ull,0x303030306630202cull,0x2020203b30303030ull,0x090a30202f2f0920ull,
0x09353109636f6c2eull,0x6c090a3009343935ull,0x6465726168732e64ull,0x662509203233662eull,
0x6472255b202c3231ull,0x2f093b5d302b3033ull,0x636f6c2e090a202full,0x0931303609353109ull,
0x2e70746573090a30ull,0x09203233662e746cull,0x316625202c387025ull,0x3b35316625202c32ull,
0x40090a202f2f0920ull,0x6172622038702521ull,0x5f325f744c240920ull,0x202020203b383631ull,
0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x202c35353120656eull,0x62616c2064616568ull,0x744c242064656c65ull,
0x090a3930315f325full,0x09353109636f6c2eull,0x6573090a30093239ull,0x09203233732e706cull,
0x2c31202c31347225ull,0x3b377025202c3020ull,0x202f2f0920202020ull,0x6e752e617262090aull,
0x325f744c24092069ull,0x2020203b3736315full,0x2020202020202020ull,0x744c240a202f2f09ull,
0x0a3a3836315f325full,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,
0x656e696c2079646full,0x6568202c35353120ull,0x6c6562616c206461ull,0x325f744c24206465ull,
0x6573090a3930315full,0x09203233732e706cull,0x2c30202c31347225ull,0x3b377025202c3120ull,
0x202f2f0920202020ull,0x315f325f744c240aull,0x3c2f2f200a3a3736ull,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x35353120656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3930315f325f744cull,0x3109636f6c2e090aull,0x0a30093130360935ull,
0x3233662e62757309ull,0x202c363166250920ull,0x6625202c32316625ull,0x09202020203b3031ull,
0x766f6d090a202f2full,0x662509203233662eull,0x66336630202c3731ull,0x203b303030303030ull,
0x30202f2f09202020ull,0x2e64616d090a352eull,0x3166250920323366ull,0x2c36316625202c38ull,
0x25202c3731662520ull,0x202f2f093b303166ull,0x33662e646461090aull,0x2c39316625092032ull,
0x25202c3031662520ull,0x202020203b323166ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,
0x336630202c303266ull,0x3b30303030303066ull,0x202f2f0920202020ull,0x6c756d090a352e30ull,
0x662509203233662eull,0x39316625202c3132ull,0x203b30326625202cull,0x0a202f2f09202020ull,
0x3233732e67656e09ull,0x202c323472250920ull,0x2020203b31347225ull,0x0920202020202020ull,
0x636c73090a202f2full,0x33732e3233662e74ull,0x202c396625092032ull,0x6625202c31326625ull,
0x32347225202c3831ull,0x2e090a202f2f093bull,0x3609353109636f6cull,0x6f6d090a30093230ull,
0x2509203233752e76ull,0x203b30202c333472ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x6168732e7473090aull,0x203233752e646572ull,0x68745f6c6c615b09ull,0x6f635f7364616572ull,
0x5d6465677265766eull,0x093b33347225202cull,0x32373a6469202f2full,0x68745f6c6c612032ull,
0x6f635f7364616572ull,0x2b6465677265766eull,0x617262090a307830ull,0x4c240920696e752eull,
0x3b3936315f325f74ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x36315f325f744c24ull,
0x6c3c2f2f200a3a36ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c35353120656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x0a3930315f325f74ull,
0x353109636f6c2e09ull,0x090a300936393509ull,0x65726168732e646cull,0x2509203233752e64ull,
0x72255b202c393372ull,0x093b5d302b323364ull,0x6f6c2e090a202f2full,0x3539350935310963ull,
0x732e646c090a3009ull,0x33752e6465726168ull,0x2c37337225092032ull,0x2b31336472255b20ull,
0x0a202f2f093b5d30ull,0x353109636f6c2e09ull,0x090a300932303609ull,0x203233752e627573ull,
0x25202c3434722509ull,0x337225202c393372ull,0x2f09202020203b37ull,0x2e766f6d090a202full,
0x3472250920323375ull,0x2020203b31202c35ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x2e656c2e70746573ull,0x3970250920323375ull,0x202c34347225202cull,0x2f09203b35347225ull,
0x39702540090a202full,0x4c24092061726220ull,0x3b3936315f325f74ull,0x2020202020202020ull,
0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c353531ull,0x656c6562616c2064ull,0x5f325f744c242064ull,
0x6f6c2e090a393031ull,0x3730360935310963ull,0x2e766f6d090a3009ull,0x3472250920323375ull,
0x2020203b30202c36ull,0x2020202020202020ull,0x090a202f2f092020ull,0x65726168732e7473ull,
0x5b09203233752e64ull,0x657268745f6c6c61ull,0x766e6f635f736461ull,0x202c5d6465677265ull,
0x2f2f093b36347225ull,0x203232373a646920ull,0x657268745f6c6c61ull,0x766e6f635f736461ull,
0x78302b6465677265ull,0x5f325f744c240a30ull,0x744c240a3a393631ull,0x0a3a3536315f325full,
0x36315f325f744c24ull,0x6c3c2f2f200a3a33ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c35353120656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x0a3930315f325f74ull,0x383109636f6c2e09ull,0x090a300931363109ull,0x636e79732e726162ull,
0x202020203b300920ull,0x2020202020202020ull,0x2f09202020202020ull,0x732e646c090a202full,
0x33752e6465726168ull,0x2c37347225092032ull,0x68745f6c6c615b20ull,0x6f635f7364616572ull,
0x5d6465677265766eull,0x3a6469202f2f093bull,0x5f6c6c6120323237ull,0x5f73646165726874ull,
0x65677265766e6f63ull,0x6d090a3078302b64ull,0x09203233752e766full,0x3b31202c38347225ull,
0x2020202020202020ull,0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233752e656eull,
0x7225202c30317025ull,0x38347225202c3734ull,0x40090a202f2f093bull,0x6172622030317025ull,
0x5f325f744c240920ull,0x202020203b313731ull,0x2f2f092020202020ull,0x752e617262090a20ull,
0x5f744c240920696eull,0x202020203b315f32ull,0x2020202020202020ull,0x4c240a202f2f0920ull,
0x3a3137315f325f74ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,
0x6e696c2079646f62ull,0x68202c3535312065ull,0x6562616c20646165ull,0x5f744c242064656cull,
0x2e090a3930315f32ull,0x3109383109636f6cull,0x646c090a30093237ull,0x2e6465726168732eull,
0x3472250920323375ull,0x5f6d756e5b202c39ull,0x5f73646165726874ull,0x3b5d657669746361ull,
0x373a6469202f2f09ull,0x745f6d756e203930ull,0x615f736461657268ull,0x78302b6576697463ull,
0x09636f6c2e090a30ull,0x3009383332093531ull,0x7261702e646c090aull,0x09203233752e6d61ull,
0x5f5b202c30357225ull,0x726170616475635full,0x696231335a5f5f6dull,0x6e72654b74636573ull,
0x5f656772614c6c65ull,0x65746e49746c754dull,0x536650736c617672ull,0x535f30536a506a5full,
0x30535f30535f535full,0x5f665f30535f535full,0x69202f2f093b5d6eull,0x5f5f203630373a64ull,
0x6d72617061647563ull,0x73696231335a5f5full,0x656e72654b746365ull,0x4d5f656772614c6cull,
0x7265746e49746c75ull,0x5f536650736c6176ull,0x5f535f30536a506aull,0x5f30535f30535f53ull,
0x6e5f665f30535f53ull,0x6f6d090a3078302bull,0x2509203233732e76ull,0x357225202c313572ull,
0x2020202020203b30ull,0x202f2f0920202020ull,0x33752e766f6d090aull,0x2c32357225092032ull,
0x20202020203b3020ull,0x2020202020202020ull,0x6573090a202f2f09ull,0x33752e71652e7074ull,
0x2c31317025092032ull,0x25202c3035722520ull,0x202f2f093b323572ull,0x33752e766f6d090aull,
0x2c33357225092032ull,0x20202020203b3020ull,0x2020202020202020ull,0x2540090a202f2f09ull,
0x2061726220313170ull,0x325f325f744c2409ull,0x20202020203b3333ull,0x202f2f0920202020ull,
0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,
0x68202c3535312065ull,0x6562616c20646165ull,0x5f744c242064656cull,0x63090a3930315f32ull,
0x752e3436752e7476ull,0x3164722509203233ull,0x203b317225202c31ull,0x2f2f092020202020ull,
0x09636f6c2e090a20ull,0x3009323731093831ull,0x6168732e646c090aull,0x203233752e646572ull,
0x5b202c3934722509ull,0x657268745f6d756eull,0x697463615f736461ull,0x202f2f093b5d6576ull,
0x3109636f6c2e090aull,0x0a30093833320935ull,0x74672e7074657309ull,0x702509203233752eull,
0x39347225202c3231ull,0x09203b317225202cull,0x6c756d090a202f2full,0x203436752e6f6c2eull,
0x202c323164722509ull,0x34202c3131647225ull,0x0a202f2f0920203bull,0x3233752e74766309ull,
0x722509203631752eull,0x69746e25202c3435ull,0x092020203b782e64ull,0x766f6d090a202f2full,
0x722509203233752eull,0x20203b30202c3535ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x3233662e766f6d09ull,0x202c323266250920ull,0x3030303866336630ull,0x09202020203b3030ull,
0x744c240a31202f2full,0x0a3a3537315f325full,0x706f6f6c3c2f2f20ull,0x6220706f6f4c203eull,
0x656e696c2079646full,0x656e202c38333220ull,0x656420676e697473ull,0x202c31203a687470ull,
0x6574616d69747365ull,0x7461726574692064ull,0x6e75203a736e6f69ull,0x2e090a6e776f6e6bull,
0x3209353109636f6cull,0x6162090a30093334ull,0x0920636e79732e72ull,0x2020202020203b30ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x33752e646461090aull,0x2c36357225092032ull,
0x25202c3535722520ull,0x20202020203b3172ull,0x6573090a202f2f09ull,0x33752e656c2e7074ull,
0x2c33317025092032ull,0x25202c3035722520ull,0x202f2f093b363572ull,0x203331702540090aull,
0x744c240920617262ull,0x203b3637315f325full,0x2020202020202020ull,0x2f2f200a202f2f09ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x333220656e696c20ull,
0x2064616568202c38ull,0x2064656c6562616cull,0x37315f325f744c24ull,0x09636f6c2e090a35ull,
0x3009383432093531ull,0x36752e747663090aull,0x2509203233752e34ull,0x7225202c33336472ull,
0x20202020203b3535ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c34336472ull,
0x647225202c333364ull,0x202f2f09203b3131ull,0x6f6c2e6c756d090aull,0x722509203436752eull,
0x647225202c353364ull,0x20203b34202c3433ull,0x646c090a202f2f09ull,0x752e6d617261702eull,
0x3364722509203436ull,0x75635f5f5b202c36ull,0x5f5f6d7261706164ull,0x636573696231335aull,
0x4c6c656e72654b74ull,0x6c754d5f65677261ull,0x61767265746e4974ull,0x506a5f536650736cull,
0x5f535f535f30536aull,0x5f535f30535f3053ull,0x645f675f665f3053ull,0x6469202f2f093b5dull,
0x635f5f203034373aull,0x5f6d726170616475ull,0x6573696231335a5full,0x6c656e72654b7463ull,
0x754d5f656772614cull,0x767265746e49746cull,0x6a5f536650736c61ull,0x535f535f30536a50ull,
0x535f30535f30535full,0x5f675f665f30535full,0x61090a3078302b64ull,0x09203436752e6464ull,
0x25202c3733647225ull,0x7225202c36336472ull,0x2f2f09203b353364ull,0x6c672e646c090a20ull,
0x3233662e6c61626full,0x202c333266250920ull,0x302b37336472255bull,0x6469202f2f093b5dull,
0x6461090a3134373aull,0x2509203436752e64ull,0x7225202c38336472ull,0x647225202c323164ull,
0x202f2f0920203b39ull,0x6168732e7473090aull,0x203233662e646572ull,0x2b38336472255b09ull,
0x33326625202c5d30ull,0x3a6469202f2f093bull,0x75635f5f20323437ull,0x66656c5f735f6164ull,
0x302b303836363174ull,0x636f6c2e090a3078ull,0x0939343209353109ull,0x61702e646c090a30ull,
0x203436752e6d6172ull,0x202c393364722509ull,0x70616475635f5f5bull,0x31335a5f5f6d7261ull,
0x654b746365736962ull,0x6772614c6c656e72ull,0x6e49746c754d5f65ull,0x50736c6176726574ull,
0x30536a506a5f5366ull,0x5f30535f535f535full,0x5f30535f535f3053ull,0x093b5d735f675f66ull,
0x34373a6469202f2full,0x616475635f5f2033ull,0x335a5f5f6d726170ull,0x4b74636573696231ull,
0x72614c6c656e7265ull,0x49746c754d5f6567ull,0x736c61767265746eull,0x536a506a5f536650ull,
0x30535f535f535f30ull,0x30535f535f30535full,0x302b735f675f665full,0x2e646461090a3078ull,
0x6472250920343675ull,0x33647225202c3034ull,0x3533647225202c39ull,0x090a202f2f09203bull,
0x61626f6c672e646cull,0x2509203233662e6cull,0x72255b202c343266ull,0x3b5d342d2b303464ull,
0x373a6469202f2f09ull,0x2e646461090a3434ull,0x6472250920343675ull,0x31647225202c3134ull,
0x3b37647225202c32ull,0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233662e64ull,
0x5d302b3134647225ull,0x093b34326625202cull,0x34373a6469202f2full,0x616475635f5f2035ull,
0x74686769725f735full,0x78302b3438353231ull,0x5f325f744c240a30ull,0x2f2f200a3a363731ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x333220656e696c20ull,
0x2064616568202c38ull,0x2064656c6562616cull,0x37315f325f744c24ull,0x09636f6c2e090a35ull,
0x3009323532093531ull,0x79732e726162090aull,0x20203b300920636eull,0x2020202020202020ull,
0x2020202020202020ull,0x2140090a202f2f09ull,0x6172622032317025ull,0x5f325f744c240920ull,
0x202020203b303831ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3833322065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x2e090a3537315f32ull,0x3209353109636f6cull,0x696d090a30093935ull,
0x2509203233752e6eull,0x357225202c373572ull,0x3b34357225202c31ull,0x202f2f0920202020ull,
0x33752e766f6d090aull,0x2c38357225092032ull,0x20202020203b3020ull,0x2020202020202020ull,
0x6573090a202f2f09ull,0x33752e71652e7074ull,0x2c34317025092032ull,0x25202c3735722520ull,
0x202f2f093b383572ull,0x203431702540090aull,0x744c240920617262ull,0x203b3038315f325full,
0x2020202020202020ull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x333220656e696c20ull,0x2064616568202c38ull,0x2064656c6562616cull,
0x37315f325f744c24ull,0x732e766f6d090a35ull,0x3935722509203233ull,0x203b37357225202cull,
0x2020202020202020ull,0x6d090a202f2f0920ull,0x09203436732e766full,0x25202c3234647225ull,
0x202020203b376472ull,0x2f2f092020202020ull,0x732e766f6d090a20ull,0x3464722509203436ull,
0x3b39647225202c33ull,0x2020202020202020ull,0x6d090a202f2f0920ull,0x09203233752e766full,
0x3b30202c30367225ull,0x2020202020202020ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c38333220656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x090a3537315f325full,0x203233732e766f6dull,
0x25202c3136722509ull,0x202020203b393572ull,0x2f09202020202020ull,0x325f744c240a202full,
0x2f200a3a3238315full,0x203e706f6f6c3c2full,0x646f6220706f6f4cull,0x3220656e696c2079ull,
0x7473656e202c3935ull,0x7470656420676e69ull,0x7365202c32203a68ull,0x20646574616d6974ull,
0x6f69746172657469ull,0x6e6b6e75203a736eull,0x6f6c2e090a6e776full,0x3233310933320963ull,
0x2e646c090a300938ull,0x662e646572616873ull,0x3532662509203233ull,0x32346472255b202cull,
0x202f2f093b5d302bull,0x5f203634373a6469ull,0x5f735f616475635full,0x3532317468676972ull,
0x090a3078302b3438ull,0x203233662e6c756dull,0x25202c3632662509ull,0x326625202c353266ull,
0x2f09202020203b35ull,0x2e766f6d090a202full,0x3266250920323366ull,0x3b32326625202c37ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x203233662e766f6dull,0x25202c3832662509ull,
0x202020203b373266ull,0x2f09202020202020ull,0x636f6c2e090a202full,0x3035323109333209ull,
0x2e736261090a3009ull,0x3266250920323366ull,0x3b37326625202c39ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x203233662e766f6dull,0x30202c3033662509ull,0x3030303038653766ull,
0x2f09202020203b30ull,0x303730352e38202full,0x73090a37332b6536ull,0x662e74672e707465ull,
0x3531702509203233ull,0x202c39326625202cull,0x2f2f093b30336625ull,0x3170252140090a20ull,
0x2409206172622035ull,0x3338315f325f744cull,0x202020202020203bull,0x2f200a202f2f0920ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3220656e696c2079ull,
0x64616568202c3935ull,0x64656c6562616c20ull,0x315f325f744c2420ull,0x636f6c2e090a3238ull,
0x3135323109333209ull,0x2e766f6d090a3009ull,0x3366250920323366ull,0x3865336630202c31ull,
0x20203b3030303030ull,0x2e30202f2f092020ull,0x2e6c756d090a3532ull,0x3266250920323366ull,
0x2c36326625202c36ull,0x20203b3133662520ull,0x090a202f2f092020ull,0x09333209636f6c2eull,
0x090a300932353231ull,0x203233662e766f6dull,0x30202c3233662509ull,0x3030303038653366ull,
0x2f09202020203b30ull,0x090a35322e30202full,0x203233662e6c756dull,0x25202c3832662509ull,
0x336625202c373266ull,0x2f09202020203b32ull,0x325f744c240a202full,0x2f200a3a3338315full,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3220656e696c2079ull,
0x64616568202c3935ull,0x64656c6562616c20ull,0x315f325f744c2420ull,0x636f6c2e090a3238ull,
0x0930363209353109ull,0x68732e646c090a30ull,0x3233662e64657261ull,0x202c333366250920ull,
0x302b33346472255bull,0x6469202f2f093b5dull,0x635f5f203734373aull,0x656c5f735f616475ull,
0x2b30383636317466ull,0x627573090a307830ull,0x662509203233662eull,0x33336625202c3433ull,
0x20203b396625202cull,0x0a202f2f09202020ull,0x3233662e76696409ull,0x202c353366250920ull,
0x6625202c36326625ull,0x09202020203b3832ull,0x627573090a202f2full,0x662509203233662eull,
0x34336625202c3232ull,0x203b35336625202cull,0x0a202f2f09202020ull,0x353109636f6c2e09ull,
0x090a300932363209ull,0x203233662e766f6dull,0x30202c3633662509ull,0x3030303030303066ull,
0x2f09202020203b30ull,0x746573090a30202full,0x2e3233752e746c2eull,0x3672250920323366ull,
0x2c32326625202c32ull,0x2f093b3633662520ull,0x2e67656e090a202full,0x3672250920323373ull,
0x3b32367225202c33ull,0x2020202020202020ull,0x090a202f2f092020ull,0x203233752e646461ull,
0x25202c3335722509ull,0x367225202c333572ull,0x2f09202020203b33ull,0x636f6c2e090a202full,
0x0939353209353109ull,0x752e646461090a30ull,0x3036722509203233ull,0x202c30367225202cull,
0x2020202020203b31ull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3334647225ull,
0x3b34202c33346472ull,0x2f2f092020202020ull,0x752e646461090a20ull,0x3464722509203436ull,
0x3234647225202c32ull,0x202020203b34202cull,0x73090a202f2f0920ull,0x752e656e2e707465ull,
0x3631702509203233ull,0x202c37357225202cull,0x2f2f093b30367225ull,0x3631702540090a20ull,
0x4c24092061726220ull,0x3b3238315f325f74ull,0x2020202020202020ull,0x4c240a202f2f0920ull,
0x3a3038315f325f74ull,0x315f325f744c240aull,0x3c2f2f200a3a3837ull,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x38333220656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3537315f325f744cull,0x3109636f6c2e090aull,0x0a30093736320935ull,
0x3233752e62757309ull,0x202c313572250920ull,0x7225202c31357225ull,0x09202020203b3435ull,
0x646461090a202f2full,0x722509203233752eull,0x34357225202c3535ull,0x203b35357225202cull,
0x0a202f2f09202020ull,0x746c2e7074657309ull,0x702509203233752eull,0x35357225202c3731ull,
0x093b30357225202cull,0x702540090a202f2full,0x0920617262203731ull,0x37315f325f744c24ull,
0x2020202020203b35ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c35353120ull,0x6c6562616c206461ull,
0x325f744c24206465ull,0x7262090a3930315full,0x240920696e752e61ull,0x3337315f325f744cull,
0x202020202020203bull,0x202f2f0920202020ull,0x325f325f744c240aull,0x3c2f2f200a3a3333ull,
0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,0x35353120656e696cull,
0x6c2064616568202cull,0x242064656c656261ull,0x3930315f325f744cull,0x36752e747663090aull,
0x2509203233752e34ull,0x7225202c34346472ull,0x2020202020203b31ull,0x756d090a202f2f09ull,
0x3436752e6f6c2e6cull,0x2c32316472250920ull,0x202c343464722520ull,0x202f2f0920203b34ull,
0x33752e747663090aull,0x2509203631752e32ull,0x746e25202c343572ull,0x2020203b782e6469ull,
0x744c240a202f2f09ull,0x0a3a3337315f325full,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c35353120ull,0x6c6562616c206461ull,
0x325f744c24206465ull,0x6c2e090a3930315full,0x373109383109636full,0x766f6d090a300932ull,
0x722509203233732eull,0x33357225202c3436ull,0x202020202020203bull,0x0a202f2f09202020ull,
0x383109636f6c2e09ull,0x090a300937373109ull,0x636e79732e726162ull,0x202020203b300920ull,
0x2020202020202020ull,0x2f09202020202020ull,0x2e646461090a202full,0x6472250920343675ull,
0x31647225202c3534ull,0x3732647225202c32ull,0x090a202f2f09203bull,0x65726168732e646cull,
0x2509203233752e64ull,0x756e5b202c353672ull,0x6461657268745f6dull,0x6576697463615f73ull,
0x6469202f2f093b5dull,0x6d756e203930373aull,0x736461657268745full,0x2b6576697463615full,
0x746573090a307830ull,0x3233752e656c2e70ull,0x202c383170250920ull,0x7225202c35367225ull,
0x0a202f2f09203b31ull,0x6220383170254009ull,0x5f744c2409206172ull,0x20203b3730325f32ull,
0x0920202020202020ull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x35353120656e696cull,0x6c2064616568202cull,0x242064656c656261ull,
0x3930315f325f744cull,0x36752e646461090aull,0x3634647225092034ull,0x2c3231647225202cull,
0x20203b3964722520ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c37346472ull,
0x647225202c323164ull,0x202f2f0920203b37ull,0x36752e646461090aull,0x3834647225092034ull,
0x2c3231647225202cull,0x203b303164722520ull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x7225202c39346472ull,0x647225202c323164ull,0x202f2f0920203b38ull,0x33732e766f6d090aull,
0x2c37337225092032ull,0x20203b3833722520ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,
0x2509203233662e76ull,0x316625202c303166ull,0x2020202020203b31ull,0x202f2f0920202020ull,
0x33732e766f6d090aull,0x2c39337225092032ull,0x20203b3034722520ull,0x2020202020202020ull,
0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x316625202c323166ull,0x2020202020203b33ull,
0x202f2f0920202020ull,0x6e2e70746573090aull,0x09203233662e7565ull,0x6625202c39317025ull,
0x32316625202c3031ull,0x40090a202f2f093bull,0x7262203931702521ull,0x325f744c24092061ull,
0x2020203b3039315full,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c35353120656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x090a3930315f325full,0x09383109636f6c2eull,0x73090a3009343831ull,
0x752e656e2e707465ull,0x3032702509203233ull,0x202c34367225202cull,0x2f2f093b37337225ull,
0x662e736261090a20ull,0x3733662509203233ull,0x20203b396625202cull,0x2020202020202020ull,
0x6c090a202f2f0920ull,0x2e6d617261702e64ull,0x3366250920323366ull,0x75635f5f5b202c38ull,
0x5f5f6d7261706164ull,0x636573696231335aull,0x4c6c656e72654b74ull,0x6c754d5f65677261ull,
0x61767265746e4974ull,0x506a5f536650736cull,0x5f535f535f30536aull,0x5f535f30535f3053ull,
0x6572705f665f3053ull,0x3b5d6e6f69736963ull,0x363a6469202f2f09ull,0x6475635f5f203639ull,
0x5a5f5f6d72617061ull,0x7463657369623133ull,0x614c6c656e72654bull,0x746c754d5f656772ull,
0x6c61767265746e49ull,0x6a506a5f53665073ull,0x535f535f535f3053ull,0x535f535f30535f30ull,
0x636572705f665f30ull,0x78302b6e6f697369ull,0x2e706c6573090a30ull,0x3672250920323373ull,
0x2c30202c31202c36ull,0x20203b3032702520ull,0x73090a202f2f0920ull,0x33752e656e2e7465ull,
0x2509203233752e32ull,0x367225202c373672ull,0x3b39337225202c34ull,0x656e090a202f2f09ull,
0x2509203233732e67ull,0x367225202c383672ull,0x2020202020203b37ull,0x202f2f0920202020ull,
0x33622e646e61090aull,0x2c39367225092032ull,0x25202c3636722520ull,0x202020203b383672ull,
0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x203b30202c303772ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x652e70746573090aull,0x2509203233732e71ull,0x367225202c313270ull,
0x3b30377225202c39ull,0x2540090a202f2f09ull,0x2061726220313270ull,0x315f325f744c2409ull,
0x20202020203b3239ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3535312065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x2e090a3930315f32ull,0x3109353109636f6cull,0x7473090a30093732ull,
0x2e6465726168732eull,0x72255b0920323375ull,0x202c5d302b383464ull,0x2f2f093b37337225ull,
0x203834373a646920ull,0x735f616475635f5full,0x6f635f7466656c5full,0x3832373831746e75ull,
0x6c2e090a3078302bull,0x323109353109636full,0x2e7473090a300938ull,0x752e646572616873ull,
0x6472255b09203233ull,0x25202c5d302b3934ull,0x202f2f093b343672ull,0x5f203934373a6469ull,
0x5f735f616475635full,0x6f635f7468676972ull,0x3233363431746e75ull,0x6c2e090a3078302bull,
0x333109353109636full,0x627573090a300933ull,0x662509203233662eull,0x2c396625202c3933ull,
0x20203b3031662520ull,0x0a202f2f09202020ull,0x3233662e73626109ull,0x202c303466250920ull,
0x2020203b39336625ull,0x0920202020202020ull,0x747663090a202f2full,0x3233662e3436662eull,
0x202c316466250920ull,0x2020203b30346625ull,0x0a202f2f09202020ull,0x3233662e73626109ull,
0x202c313466250920ull,0x2020203b30316625ull,0x0920202020202020ull,0x78616d090a202f2full,
0x662509203233662eull,0x37336625202c3234ull,0x203b31346625202cull,0x0a202f2f09202020ull,
0x3233662e6c756d09ull,0x202c333466250920ull,0x6625202c38336625ull,0x09202020203b3234ull,
0x747663090a202f2full,0x3233662e3436662eull,0x202c326466250920ull,0x2020203b33346625ull,
0x0a202f2f09202020ull,0x3436662e766f6d09ull,0x202c336466250920ull,0x3434353638336430ull,
0x6532643233393438ull,0x35202f2f093b3237ull,0x616d090a37332d65ull,0x2509203436662e78ull,
0x646625202c346466ull,0x3b33646625202c32ull,0x202f2f0920202020ull,0x6c2e70746573090aull,
0x2509203436662e65ull,0x646625202c323270ull,0x3b34646625202c31ull,0x2140090a202f2f09ull,
0x6172622032327025ull,0x5f325f744c240920ull,0x202020203b343931ull,0x202f2f0920202020ull,
0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,
0x68202c3535312065ull,0x6562616c20646165ull,0x5f744c242064656cull,0x2e090a3930315f32ull,
0x3109353109636f6cull,0x6f6d090a30093633ull,0x2509203233662e76ull,0x306630202c343466ull,
0x3b30303030303030ull,0x202f2f0920202020ull,0x2e70746573090a30ull,0x09203233662e746cull,
0x6625202c33327025ull,0x34346625202c3031ull,0x6d090a202f2f093bull,0x20646572702e766full,
0x7025202c37702509ull,0x20202020203b3332ull,0x2f2f092020202020ull,0x702e766f6d090a20ull,
0x3270250920646572ull,0x3b35327025202c34ull,0x2020202020202020ull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x6630202c35346625ull,0x3030303030303030ull,0x2f2f09202020203bull,
0x70746573090a3020ull,0x203233662e746c2eull,0x25202c3632702509ull,0x35346625202c3966ull,
0x090a202f2f09203bull,0x6220363270252140ull,0x5f744c2409206172ull,0x20203b3639315f32ull,
0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c35353120656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x0a3930315f325f74ull,0x353109636f6c2e09ull,0x73090a3009323909ull,0x203233732e706c65ull,
0x31202c3137722509ull,0x377025202c30202cull,0x2f2f09202020203bull,0x752e617262090a20ull,
0x5f744c240920696eull,0x20203b3539315f32ull,0x2020202020202020ull,0x4c240a202f2f0920ull,
0x3a3639315f325f74ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,
0x6e696c2079646f62ull,0x68202c3535312065ull,0x6562616c20646165ull,0x5f744c242064656cull,
0x73090a3930315f32ull,0x203233732e706c65ull,0x30202c3137722509ull,0x327025202c31202cull,
0x2f2f092020203b33ull,0x5f325f744c240a20ull,0x2f2f200a3a353931ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x353120656e696c20ull,0x2064616568202c35ull,
0x2064656c6562616cull,0x30315f325f744c24ull,0x09636f6c2e090a39ull,0x3009393331093531ull,
0x33662e646461090aull,0x2c36346625092032ull,0x25202c3031662520ull,0x20202020203b3966ull,
0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x336630202c373466ull,0x3b30303030303066ull,
0x202f2f0920202020ull,0x6c756d090a352e30ull,0x662509203233662eull,0x39336625202c3834ull,
0x203b37346625202cull,0x0a202f2f09202020ull,0x3233662e766f6d09ull,0x202c393466250920ull,
0x3030303066336630ull,0x09202020203b3030ull,0x090a352e30202f2full,0x203233662e6c756dull,
0x25202c3035662509ull,0x346625202c363466ull,0x2f09202020203b39ull,0x2e646461090a202full,
0x3566250920323366ull,0x2c38346625202c31ull,0x20203b3031662520ull,0x090a202f2f092020ull,
0x203233732e67656eull,0x25202c3237722509ull,0x202020203b313772ull,0x2f09202020202020ull,
0x74636c73090a202full,0x3233732e3233662eull,0x202c323566250920ull,0x6625202c30356625ull,
0x32377225202c3135ull,0x73090a202f2f093bull,0x6465726168732e74ull,0x255b09203233662eull,
0x2c5d302b36346472ull,0x2f093b3235662520ull,0x3035373a6469202full,0x5f616475635f5f20ull,
0x36317466656c5f73ull,0x0a3078302b303836ull,0x353109636f6c2e09ull,0x090a300930343109ull,
0x65726168732e7473ull,0x5b09203233662e64ull,0x5d302b3734647225ull,0x093b32356625202cull,
0x35373a6469202f2full,0x616475635f5f2031ull,0x74686769725f735full,0x78302b3438353231ull,
0x752e617262090a30ull,0x5f744c240920696eull,0x20203b3339315f32ull,0x2020202020202020ull,
0x4c240a202f2f0920ull,0x3a3439315f325f74ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3535312065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x2e090a3930315f32ull,0x3109353109636f6cull,0x7473090a30093534ull,
0x2e6465726168732eull,0x72255b0920323366ull,0x202c5d302b363464ull,0x2f2f093b30316625ull,
0x203235373a646920ull,0x735f616475635f5full,0x3636317466656c5full,0x090a3078302b3038ull,
0x09353109636f6c2eull,0x73090a3009363431ull,0x6465726168732e74ull,0x255b09203233662eull,
0x2c5d302b37346472ull,0x2f2f093b39662520ull,0x203335373a646920ull,0x735f616475635f5full,
0x323174686769725full,0x0a3078302b343835ull,0x39315f325f744c24ull,0x6c3c2f2f200a3a33ull,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c35353120656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x0a3930315f325f74ull,0x353109636f6c2e09ull,
0x090a300934323309ull,0x203233752e766f6dull,0x31202c3337722509ull,0x202020202020203bull,
0x2f09202020202020ull,0x732e7473090a202full,0x33752e6465726168ull,0x346472255b092032ull,
0x7225202c5d342b35ull,0x69202f2f093b3337ull,0x5f5f203435373a64ull,0x635f735f61647563ull,
0x6f69746361706d6full,0x30317473696c5f6eull,0x0a3078302b323335ull,0x353109636f6c2e09ull,
0x090a300935323309ull,0x203233752e766f6dull,0x31202c3437722509ull,0x202020202020203bull,
0x2f09202020202020ull,0x732e7473090a202full,0x33752e6465726168ull,0x706d6f635b092032ull,
0x6f6365735f746361ull,0x6b6e7568635f646eull,0x3b34377225202c5dull,0x373a6469202f2f09ull,
0x61706d6f63203332ull,0x6e6f6365735f7463ull,0x2b6b6e7568635f64ull,0x766f6d090a307830ull,
0x722509203233752eull,0x20203b31202c3533ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x696e752e61726209ull,0x5f325f744c240920ull,0x202020203b373032ull,0x0920202020202020ull,
0x5f744c240a202f2full,0x200a3a3239315f32ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c353531ull,0x656c6562616c2064ull,
0x5f325f744c242064ull,0x6f6c2e090a393031ull,0x3333330935310963ull,0x2e766f6d090a3009ull,
0x3772250920323375ull,0x2020203b30202c35ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x65726168732e7473ull,0x5b09203233752e64ull,0x5d342b3534647225ull,0x093b35377225202cull,
0x35373a6469202f2full,0x616475635f5f2035ull,0x61706d6f635f735full,0x696c5f6e6f697463ull,
0x2b32333530317473ull,0x252140090a307830ull,0x2061726220303270ull,0x315f325f744c2409ull,
0x20202020203b3839ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c35353120ull,0x6c6562616c206461ull,
0x325f744c24206465ull,0x6c2e090a3930315full,0x323109353109636full,0x2e7473090a300937ull,
0x752e646572616873ull,0x6472255b09203233ull,0x25202c5d302b3834ull,0x202f2f093b373372ull,
0x5f203635373a6469ull,0x5f735f616475635full,0x756f635f7466656cull,0x2b3832373831746eull,
0x6f6c2e090a307830ull,0x3832310935310963ull,0x732e7473090a3009ull,0x33752e6465726168ull,
0x346472255b092032ull,0x7225202c5d302b39ull,0x69202f2f093b3436ull,0x5f5f203735373a64ull,
0x725f735f61647563ull,0x756f635f74686769ull,0x2b3233363431746eull,0x6f6c2e090a307830ull,
0x3333310935310963ull,0x2e627573090a3009ull,0x3366250920323366ull,0x202c396625202c39ull,
0x2020203b30316625ull,0x090a202f2f092020ull,0x203233662e736261ull,0x25202c3335662509ull,
0x202020203b393366ull,0x2f09202020202020ull,0x2e747663090a202full,0x203233662e343666ull,
0x25202c3564662509ull,0x202020203b333566ull,0x090a202f2f092020ull,0x203233662e736261ull,
0x25202c3435662509ull,0x202020203b303166ull,0x2f09202020202020ull,0x2e78616d090a202full,
0x3566250920323366ull,0x2c37336625202c35ull,0x20203b3435662520ull,0x090a202f2f092020ull,
0x203233662e6c756dull,0x25202c3635662509ull,0x356625202c383366ull,0x2f09202020203b35ull,
0x2e747663090a202full,0x203233662e343666ull,0x25202c3664662509ull,0x202020203b363566ull,
0x090a202f2f092020ull,0x203436662e766f6dull,0x30202c3764662509ull,0x3834343536383364ull,
0x3765326432333934ull,0x6535202f2f093b32ull,0x78616d090a37332dull,0x662509203436662eull,
0x36646625202c3864ull,0x203b37646625202cull,0x0a202f2f09202020ull,0x656c2e7074657309ull,
0x702509203436662eull,0x35646625202c3732ull,0x093b38646625202cull,0x252140090a202f2full,
0x2061726220373270ull,0x325f325f744c2409ull,0x20202020203b3030ull,0x0a202f2f09202020ull,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c35353120ull,0x6c6562616c206461ull,0x325f744c24206465ull,0x6c2e090a3930315full,
0x333109353109636full,0x766f6d090a300936ull,0x662509203233662eull,0x30306630202c3735ull,
0x203b303030303030ull,0x30202f2f09202020ull,0x6c2e70746573090aull,0x2509203233662e74ull,
0x316625202c333270ull,0x3b37356625202c30ull,0x6f6d090a202f2f09ull,0x0920646572702e76ull,
0x327025202c377025ull,0x2020202020203b33ull,0x202f2f0920202020ull,0x72702e766f6d090aull,
0x3832702509206465ull,0x203b35327025202cull,0x2020202020202020ull,0x6f6d090a202f2f09ull,
0x2509203233662e76ull,0x306630202c383566ull,0x3b30303030303030ull,0x202f2f0920202020ull,
0x2e70746573090a30ull,0x09203233662e746cull,0x6625202c39327025ull,0x3b38356625202c39ull,
0x40090a202f2f0920ull,0x7262203932702521ull,0x325f744c24092061ull,0x2020203b3230325full,
0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x202c35353120656eull,0x62616c2064616568ull,0x744c242064656c65ull,
0x090a3930315f325full,0x09353109636f6c2eull,0x6573090a30093239ull,0x09203233732e706cull,
0x2c31202c36377225ull,0x3b377025202c3020ull,0x202f2f0920202020ull,0x6e752e617262090aull,
0x325f744c24092069ull,0x2020203b3130325full,0x2020202020202020ull,0x744c240a202f2f09ull,
0x0a3a3230325f325full,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,
0x656e696c2079646full,0x6568202c35353120ull,0x6c6562616c206461ull,0x325f744c24206465ull,
0x6573090a3930315full,0x09203233732e706cull,0x2c30202c36377225ull,0x33327025202c3120ull,
0x202f2f092020203bull,0x325f325f744c240aull,0x3c2f2f200a3a3130ull,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x35353120656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3930315f325f744cull,0x3109636f6c2e090aull,0x0a30093933310935ull,
0x3233662e64646109ull,0x202c393566250920ull,0x6625202c30316625ull,0x0920202020203b39ull,
0x766f6d090a202f2full,0x662509203233662eull,0x66336630202c3036ull,0x203b303030303030ull,
0x30202f2f09202020ull,0x2e6c756d090a352eull,0x3666250920323366ull,0x2c39336625202c31ull,
0x20203b3036662520ull,0x090a202f2f092020ull,0x203233662e766f6dull,0x30202c3236662509ull,
0x3030303030663366ull,0x2f09202020203b30ull,0x6d090a352e30202full,0x09203233662e6c75ull,
0x6625202c33366625ull,0x32366625202c3935ull,0x2f2f09202020203bull,0x662e646461090a20ull,
0x3436662509203233ull,0x202c31366625202cull,0x2020203b30316625ull,0x6e090a202f2f0920ull,
0x09203233732e6765ull,0x7225202c37377225ull,0x20202020203b3637ull,0x2f2f092020202020ull,
0x2e74636c73090a20ull,0x203233732e323366ull,0x25202c3536662509ull,0x366625202c333666ull,
0x3b37377225202c34ull,0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,
0x202c5d302b363464ull,0x2f2f093b35366625ull,0x203835373a646920ull,0x735f616475635f5full,
0x3636317466656c5full,0x090a3078302b3038ull,0x09353109636f6c2eull,0x73090a3009303431ull,
0x6465726168732e74ull,0x255b09203233662eull,0x2c5d302b37346472ull,0x2f093b3536662520ull,
0x3935373a6469202full,0x5f616475635f5f20ull,0x3174686769725f73ull,0x3078302b34383532ull,
0x6e752e617262090aull,0x325f744c24092069ull,0x2020203b3330325full,0x2020202020202020ull,
0x744c240a202f2f09ull,0x0a3a3030325f325full,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c35353120ull,0x6c6562616c206461ull,
0x325f744c24206465ull,0x6c2e090a3930315full,0x343109353109636full,0x2e7473090a300935ull,
0x662e646572616873ull,0x6472255b09203233ull,0x25202c5d302b3634ull,0x202f2f093b303166ull,
0x5f203036373a6469ull,0x5f735f616475635full,0x383636317466656cull,0x2e090a3078302b30ull,
0x3109353109636f6cull,0x7473090a30093634ull,0x2e6465726168732eull,0x72255b0920323366ull,
0x202c5d302b373464ull,0x202f2f093b396625ull,0x5f203136373a6469ull,0x5f735f616475635full,
0x3532317468676972ull,0x090a3078302b3438ull,0x20696e752e617262ull,0x325f325f744c2409ull,
0x20202020203b3330ull,0x2f09202020202020ull,0x325f744c240a202full,0x2f200a3a3839315full,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3120656e696c2079ull,
0x64616568202c3535ull,0x64656c6562616c20ull,0x315f325f744c2420ull,0x636f6c2e090a3930ull,
0x0937323109353109ull,0x68732e7473090a30ull,0x3233752e64657261ull,0x38346472255b0920ull,
0x367225202c5d302bull,0x6469202f2f093b34ull,0x635f5f203236373aull,0x656c5f735f616475ull,
0x746e756f635f7466ull,0x78302b3832373831ull,0x09636f6c2e090a30ull,0x3009383231093531ull,
0x6168732e7473090aull,0x203233752e646572ull,0x2b39346472255b09ull,0x39337225202c5d30ull,
0x3a6469202f2f093bull,0x75635f5f20333637ull,0x6769725f735f6164ull,0x746e756f635f7468ull,
0x78302b3233363431ull,0x09636f6c2e090a30ull,0x3009333331093531ull,0x33662e627573090aull,
0x2c36366625092032ull,0x25202c3231662520ull,0x20202020203b3966ull,0x6261090a202f2f09ull,
0x2509203233662e73ull,0x366625202c373666ull,0x2020202020203b36ull,0x202f2f0920202020ull,
0x36662e747663090aull,0x2509203233662e34ull,0x366625202c396466ull,0x2020202020203b37ull,
0x6261090a202f2f09ull,0x2509203233662e73ull,0x316625202c383666ull,0x2020202020203b32ull,
0x202f2f0920202020ull,0x33662e78616d090aull,0x2c39366625092032ull,0x25202c3733662520ull,
0x202020203b383666ull,0x756d090a202f2f09ull,0x2509203233662e6cull,0x336625202c303766ull,
0x3b39366625202c38ull,0x202f2f0920202020ull,0x36662e747663090aull,0x2509203233662e34ull,
0x6625202c30316466ull,0x20202020203b3037ull,0x6f6d090a202f2f09ull,0x2509203436662e76ull,
0x6430202c31316466ull,0x3438343435363833ull,0x3237653264323339ull,0x2d6535202f2f093bull,
0x2e78616d090a3733ull,0x6466250920343666ull,0x31646625202c3231ull,0x3131646625202c30ull,
0x090a202f2f09203bull,0x2e656c2e70746573ull,0x3370250920343666ull,0x2c39646625202c30ull,
0x093b323164662520ull,0x252140090a202f2full,0x2061726220303370ull,0x325f325f744c2409ull,
0x20202020203b3430ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c35353120ull,0x6c6562616c206461ull,
0x325f744c24206465ull,0x6c2e090a3930315full,0x333109353109636full,0x766f6d090a300936ull,
0x662509203233662eull,0x30306630202c3137ull,0x203b303030303030ull,0x30202f2f09202020ull,
0x6c2e70746573090aull,0x2509203233662e74ull,0x396625202c313370ull,0x203b31376625202cull,
0x6f6d090a202f2f09ull,0x0920646572702e76ull,0x7025202c32337025ull,0x20202020203b3133ull,
0x202f2f0920202020ull,0x72702e766f6d090aull,0x3333702509206465ull,0x203b34337025202cull,
0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x306630202c323766ull,
0x3b30303030303030ull,0x202f2f0920202020ull,0x2e70746573090a30ull,0x09203233662e746cull,
0x6625202c35337025ull,0x32376625202c3231ull,0x40090a202f2f093bull,0x7262203533702521ull,
0x325f744c24092061ull,0x2020203b3630325full,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c35353120656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x090a3930315f325full,0x09353109636f6c2eull,
0x6573090a30093239ull,0x09203233732e706cull,0x2c31202c38377225ull,0x32337025202c3020ull,
0x202f2f092020203bull,0x6e752e617262090aull,0x325f744c24092069ull,0x2020203b3530325full,
0x2020202020202020ull,0x744c240a202f2f09ull,0x0a3a3630325f325full,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c35353120ull,
0x6c6562616c206461ull,0x325f744c24206465ull,0x6573090a3930315full,0x09203233732e706cull,
0x2c30202c38377225ull,0x31337025202c3120ull,0x202f2f092020203bull,0x325f325f744c240aull,
0x3c2f2f200a3a3530ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x35353120656e696cull,0x6c2064616568202cull,0x242064656c656261ull,0x3930315f325f744cull,
0x3109636f6c2e090aull,0x0a30093933310935ull,0x3233662e64646109ull,0x202c333766250920ull,
0x6625202c32316625ull,0x0920202020203b39ull,0x766f6d090a202f2full,0x662509203233662eull,
0x66336630202c3437ull,0x203b303030303030ull,0x30202f2f09202020ull,0x2e6c756d090a352eull,
0x3766250920323366ull,0x2c36366625202c35ull,0x20203b3437662520ull,0x090a202f2f092020ull,
0x203233662e766f6dull,0x30202c3637662509ull,0x3030303030663366ull,0x2f09202020203b30ull,
0x6d090a352e30202full,0x09203233662e6c75ull,0x6625202c37376625ull,0x36376625202c3337ull,
0x2f2f09202020203bull,0x662e646461090a20ull,0x3837662509203233ull,0x202c35376625202cull,
0x202020203b396625ull,0x6e090a202f2f0920ull,0x09203233732e6765ull,0x7225202c39377225ull,
0x20202020203b3837ull,0x2f2f092020202020ull,0x2e74636c73090a20ull,0x203233732e323366ull,
0x25202c3937662509ull,0x376625202c373766ull,0x3b39377225202c38ull,0x7473090a202f2f09ull,
0x2e6465726168732eull,0x72255b0920323366ull,0x202c5d302b363464ull,0x2f2f093b39376625ull,
0x203436373a646920ull,0x735f616475635f5full,0x3636317466656c5full,0x090a3078302b3038ull,
0x09353109636f6c2eull,0x73090a3009303431ull,0x6465726168732e74ull,0x255b09203233662eull,
0x2c5d302b37346472ull,0x2f093b3937662520ull,0x3536373a6469202full,0x5f616475635f5f20ull,
0x3174686769725f73ull,0x3078302b34383532ull,0x6e752e617262090aull,0x325f744c24092069ull,
0x2020203b3330325full,0x2020202020202020ull,0x744c240a202f2f09ull,0x0a3a3430325f325full,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c35353120ull,0x6c6562616c206461ull,0x325f744c24206465ull,0x6c2e090a3930315full,
0x343109353109636full,0x2e7473090a300935ull,0x662e646572616873ull,0x6472255b09203233ull,
0x25202c5d302b3634ull,0x69202f2f093b3966ull,0x5f5f203636373a64ull,0x6c5f735f61647563ull,
0x3038363631746665ull,0x6c2e090a3078302bull,0x343109353109636full,0x2e7473090a300936ull,
0x662e646572616873ull,0x6472255b09203233ull,0x25202c5d302b3734ull,0x202f2f093b323166ull,
0x5f203736373a6469ull,0x5f735f616475635full,0x3532317468676972ull,0x240a3078302b3438ull,
0x3330325f325f744cull,0x5f325f744c240a3aull,0x2f2f200a3a373931ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x353120656e696c20ull,0x2064616568202c35ull,
0x2064656c6562616cull,0x30315f325f744c24ull,0x09636f6c2e090a39ull,0x3009313433093531ull,
0x33752e766f6d090aull,0x2c35337225092032ull,0x20202020203b3020ull,0x2020202020202020ull,
0x7262090a202f2f09ull,0x240920696e752e61ull,0x3730325f325f744cull,0x202020202020203bull,
0x202f2f0920202020ull,0x315f325f744c240aull,0x3c2f2f200a3a3039ull,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x35353120656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3930315f325f744cull,0x3109636f6c2e090aull,0x0a30093439310938ull,
0x3233752e62757309ull,0x202c303872250920ull,0x7225202c39337225ull,0x09202020203b3733ull,
0x766f6d090a202f2full,0x722509203233752eull,0x20203b31202c3138ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x656e2e7074657309ull,0x702509203233752eull,0x30387225202c3633ull,
0x093b31387225202cull,0x702540090a202f2full,0x0920617262203633ull,0x30325f325f744c24ull,
0x2020202020203b38ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c35353120ull,0x6c6562616c206461ull,
0x325f744c24206465ull,0x6c2e090a3930315full,0x333509353109636full,0x2e7473090a300933ull,
0x662e646572616873ull,0x6472255b09203233ull,0x25202c5d302b3634ull,0x202f2f093b303166ull,
0x5f203836373a6469ull,0x5f735f616475635full,0x383636317466656cull,0x2e090a3078302b30ull,
0x3509353109636f6cull,0x7473090a30093433ull,0x2e6465726168732eull,0x72255b0920323366ull,
0x202c5d302b373464ull,0x2f2f093b32316625ull,0x203936373a646920ull,0x735f616475635f5full,
0x323174686769725full,0x0a3078302b343835ull,0x353109636f6c2e09ull,0x090a300935333509ull,
0x65726168732e7473ull,0x5b09203233752e64ull,0x5d302b3834647225ull,0x093b37337225202cull,
0x37373a6469202f2full,0x616475635f5f2030ull,0x5f7466656c5f735full,0x373831746e756f63ull,
0x090a3078302b3832ull,0x09353109636f6c2eull,0x73090a3009363335ull,0x6465726168732e74ull,
0x255b09203233752eull,0x2c5d302b39346472ull,0x2f093b3933722520ull,0x3137373a6469202full,
0x5f616475635f5f20ull,0x5f74686769725f73ull,0x363431746e756f63ull,0x090a3078302b3233ull,
0x09353109636f6c2eull,0x6d090a3009303435ull,0x09203233752e766full,0x3b30202c32387225ull,
0x2020202020202020ull,0x2f2f092020202020ull,0x68732e7473090a20ull,0x3233752e64657261ull,
0x35346472255b0920ull,0x387225202c5d342bull,0x6469202f2f093b32ull,0x635f5f203237373aull,
0x6f635f735f616475ull,0x6e6f69746361706dull,0x3530317473696c5full,0x090a3078302b3233ull,
0x203233752e766f6dull,0x30202c3533722509ull,0x202020202020203bull,0x2f09202020202020ull,
0x2e617262090a202full,0x744c240920696e75ull,0x203b3730325f325full,0x2020202020202020ull,
0x240a202f2f092020ull,0x3830325f325f744cull,0x6f6c3c2f2f200a3aull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c35353120656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x090a3930315f325full,0x09353109636f6c2eull,0x73090a3009353435ull,
0x09203233752e7268ull,0x7225202c33387225ull,0x20203b31202c3038ull,0x2f2f092020202020ull,
0x752e646461090a20ull,0x3438722509203233ull,0x202c33387225202cull,0x2020203b37337225ull,
0x6d090a202f2f0920ull,0x09203233732e766full,0x7225202c34367225ull,0x20202020203b3438ull,
0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x3009383435093531ull,0x6168732e7473090aull,
0x203233662e646572ull,0x2b36346472255b09ull,0x30316625202c5d30ull,0x3a6469202f2f093bull,
0x75635f5f20333737ull,0x66656c5f735f6164ull,0x302b303836363174ull,0x636f6c2e090a3078ull,
0x0939343509353109ull,0x68732e7473090a30ull,0x3233662e64657261ull,0x37346472255b0920ull,
0x316625202c5d302bull,0x6469202f2f093b32ull,0x635f5f203437373aull,0x69725f735f616475ull,
0x3438353231746867ull,0x6c2e090a3078302bull,0x353509353109636full,0x2e7473090a300930ull,
0x752e646572616873ull,0x6472255b09203233ull,0x25202c5d302b3834ull,0x202f2f093b373372ull,
0x5f203537373a6469ull,0x5f735f616475635full,0x756f635f7466656cull,0x2b3832373831746eull,
0x6f6c2e090a307830ull,0x3135350935310963ull,0x732e7473090a3009ull,0x33752e6465726168ull,
0x346472255b092032ull,0x7225202c5d302b39ull,0x69202f2f093b3438ull,0x5f5f203637373a64ull,
0x725f735f61647563ull,0x756f635f74686769ull,0x2b3233363431746eull,0x6f6c2e090a307830ull,
0x3335350935310963ull,0x2e766f6d090a3009ull,0x3966250920323366ull,0x203b30316625202cull,
0x2020202020202020ull,0x090a202f2f092020ull,0x09353109636f6c2eull,0x6d090a3009373535ull,
0x09203233752e766full,0x3b31202c35387225ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x68732e7473090a20ull,0x3233752e64657261ull,0x35346472255b0920ull,0x387225202c5d342bull,
0x6469202f2f093b35ull,0x635f5f203737373aull,0x6f635f735f616475ull,0x6e6f69746361706dull,
0x3530317473696c5full,0x090a3078302b3233ull,0x09353109636f6c2eull,0x6d090a3009383535ull,
0x09203233752e766full,0x3b31202c36387225ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x68732e7473090a20ull,0x3233752e64657261ull,0x61706d6f635b0920ull,0x6e6f6365735f7463ull,
0x5d6b6e7568635f64ull,0x093b36387225202cull,0x32373a6469202f2full,0x6361706d6f632033ull,
0x646e6f6365735f74ull,0x302b6b6e7568635full,0x2e766f6d090a3078ull,0x3372250920323375ull,
0x2020203b31202c35ull,0x2020202020202020ull,0x240a202f2f092020ull,0x3730325f325f744cull,
0x5f325f744c240a3aull,0x744c240a3a393831ull,0x0a3a3738315f325full,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c35353120ull,
0x6c6562616c206461ull,0x325f744c24206465ull,0x6c2e090a3930315full,0x303209383109636full,
0x726162090a300934ull,0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x726168732e646c09ull,0x09203233752e6465ull,0x635b202c37387225ull,
0x735f746361706d6full,0x68635f646e6f6365ull,0x2f2f093b5d6b6e75ull,0x203332373a646920ull,
0x5f746361706d6f63ull,0x635f646e6f636573ull,0x3078302b6b6e7568ull,0x33752e766f6d090aull,
0x2c38387225092032ull,0x20202020203b3120ull,0x2020202020202020ull,0x6573090a202f2f09ull,
0x33752e656e2e7074ull,0x2c37337025092032ull,0x25202c3738722520ull,0x202f2f093b383872ull,
0x203733702540090aull,0x744c240920617262ull,0x203b3332325f325full,0x2020202020202020ull,
0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x353120656e696c20ull,0x2064616568202c35ull,0x2064656c6562616cull,0x30315f325f744c24ull,
0x09636f6c2e090a39ull,0x3009303132093831ull,0x6168732e646c090aull,0x203233752e646572ull,
0x5b202c3938722509ull,0x657268745f6d756eull,0x706d6f635f736461ull,0x3b5d6e6f69746361ull,
0x373a6469202f2f09ull,0x745f6d756e203132ull,0x635f736461657268ull,0x6f69746361706d6full,
0x2e090a3078302b6eull,0x3309353109636f6cull,0x6873090a30093736ull,0x2509203233752e72ull,
0x387225202c303972ull,0x2020203b31202c39ull,0x202f2f0920202020ull,0x33732e766f6d090aull,
0x2c31397225092032ull,0x20203b3039722520ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,
0x2509203233752e76ull,0x203b30202c323972ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x6c2e70746573090aull,0x2509203233732e65ull,0x397225202c383370ull,0x3b32397225202c30ull,
0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x203b31202c333972ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x203833702540090aull,0x744c240920617262ull,0x203b3533325f325full,
0x2020202020202020ull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x353120656e696c20ull,0x2064616568202c35ull,0x2064656c6562616cull,
0x30315f325f744c24ull,0x752e646461090a39ull,0x3564722509203436ull,0x3732647225202c30ull,
0x202020203b34202cull,0x4c240a202f2f0920ull,0x3a3331325f325f74ull,0x6f6f6c3c2f2f200aull,
0x20706f6f4c203e70ull,0x6e696c2079646f62ull,0x2e090a3936332065ull,0x3309353109636f6cull,
0x6162090a30093936ull,0x0920636e79732e72ull,0x2020202020203b30ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x6c2e70746573090aull,0x2509203233752e65ull,0x397225202c393370ull,
0x203b317225202c31ull,0x2540090a202f2f09ull,0x2061726220393370ull,0x325f325f744c2409ull,
0x20202020203b3431ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3936332065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x2e090a3331325f32ull,0x3309353109636f6cull,0x756d090a30093637ull,
0x752e6f6c2e34326cull,0x3439722509203233ull,0x32202c317225202cull,0x202f2f092020203bull,
0x33752e646461090aull,0x2c35397225092032ull,0x32202c3439722520ull,0x202020202020203bull,
0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,0x202c363972250920ull,0x7225202c35397225ull,
0x202f2f09203b3339ull,0x36752e747663090aull,0x2509203233752e34ull,0x7225202c31356472ull,
0x20202020203b3639ull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x2c32356472250920ull,
0x202c313564722520ull,0x202f2f0920203b34ull,0x36752e646461090aull,0x3335647225092034ull,
0x2c3732647225202cull,0x203b323564722520ull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x7225202c34356472ull,0x313731202c333564ull,0x3438313936383937ull,0x6c090a202f2f093bull,
0x6465726168732e64ull,0x722509203233752eull,0x6472255b202c3739ull,0x2f093b5d302b3435ull,
0x3937373a6469202full,0x5f616475635f5f20ull,0x6361706d6f635f73ull,0x73696c5f6e6f6974ull,
0x302b323335303174ull,0x2e646461090a3078ull,0x3972250920323375ull,0x2c34397225202c38ull,
0x20202020203b3120ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3939722509203233ull,
0x202c33397225202cull,0x2f09203b38397225ull,0x2e747663090a202full,0x203233752e343675ull,
0x202c353564722509ull,0x2020203b39397225ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,
0x3564722509203436ull,0x3535647225202c36ull,0x2f0920203b34202cull,0x2e646461090a202full,
0x6472250920343675ull,0x32647225202c3735ull,0x3635647225202c37ull,0x090a202f2f09203bull,
0x203436752e646461ull,0x202c383564722509ull,0x31202c3735647225ull,0x3139363839373137ull,
0x0a202f2f093b3438ull,0x726168732e646c09ull,0x09203233752e6465ull,0x5b202c3030317225ull,
0x5d302b3835647225ull,0x3a6469202f2f093bull,0x75635f5f20383737ull,0x6d6f635f735f6164ull,
0x5f6e6f6974636170ull,0x333530317473696cull,0x61090a3078302b32ull,0x09203233752e6464ull,
0x25202c3130317225ull,0x317225202c373972ull,0x2f2f0920203b3030ull,0x68732e7473090a20ull,
0x3233752e64657261ull,0x34356472255b0920ull,0x317225202c5d302bull,0x69202f2f093b3130ull,
0x5f5f203038373a64ull,0x635f735f61647563ull,0x6f69746361706d6full,0x30317473696c5f6eull,
0x0a3078302b323335ull,0x31325f325f744c24ull,0x6c3c2f2f200a3a34ull,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c39363320656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x0a3331325f325f74ull,0x353109636f6c2e09ull,0x090a300930383309ull,
0x203233622e6c6873ull,0x25202c3339722509ull,0x203b31202c333972ull,0x2f09202020202020ull,
0x636f6c2e090a202full,0x0937363309353109ull,0x732e726873090a30ull,0x3139722509203233ull,
0x202c31397225202cull,0x2020202020203b31ull,0x6d090a202f2f0920ull,0x09203233752e766full,
0x30202c3230317225ull,0x202020202020203bull,0x2f2f092020202020ull,0x2e70746573090a20ull,
0x09203233732e7467ull,0x7225202c30347025ull,0x30317225202c3139ull,0x090a202f2f093b32ull,
0x7262203034702540ull,0x325f744c24092061ull,0x2020203b3331325full,0x2f09202020202020ull,
0x6c3c2f2f200a202full,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c35353120656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x0a3930315f325f74ull,
0x696e752e61726209ull,0x5f325f744c240920ull,0x202020203b313132ull,0x0920202020202020ull,
0x5f744c240a202f2full,0x200a3a3533325f32ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c353531ull,0x656c6562616c2064ull,
0x5f325f744c242064ull,0x5f744c240a393031ull,0x200a3a3131325f32ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c353531ull,
0x656c6562616c2064ull,0x5f325f744c242064ull,0x766f6d090a393031ull,0x722509203233752eull,
0x203b32202c333031ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x656c2e7074657309ull,
0x702509203233752eull,0x39387225202c3134ull,0x3b3330317225202cull,0x2540090a202f2f09ull,
0x2061726220313470ull,0x325f325f744c2409ull,0x20202020203b3731ull,0x202f2f0920202020ull,
0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,
0x68202c3535312065ull,0x6562616c20646165ull,0x5f744c242064656cull,0x61090a3930315f32ull,
0x09203436752e6464ull,0x25202c3935647225ull,0x3b34202c37326472ull,0x2f2f092020202020ull,
0x732e766f6d090a20ull,0x3031722509203233ull,0x2020203b32202c34ull,0x2020202020202020ull,
0x4c240a202f2f0920ull,0x3a3931325f325f74ull,0x6f6f6c3c2f2f200aull,0x20706f6f4c203e70ull,
0x6e696c2079646f62ull,0x6e202c3736332065ull,0x6420676e69747365ull,0x2c31203a68747065ull,
0x74616d6974736520ull,0x6172657469206465ull,0x75203a736e6f6974ull,0x090a6e776f6e6b6eull,
0x09353109636f6c2eull,0x73090a3009363833ull,0x09203233752e7268ull,0x7225202c33397225ull,
0x20203b31202c3339ull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x3009373833093531ull,
0x79732e726162090aull,0x20203b300920636eull,0x2020202020202020ull,0x2020202020202020ull,
0x7573090a202f2f09ull,0x2509203233752e62ull,0x7225202c35303172ull,0x203b31202c343031ull,
0x202f2f0920202020ull,0x672e70746573090aull,0x2509203233752e65ull,0x317225202c323470ull,
0x3b3530317225202cull,0x2540090a202f2f09ull,0x2061726220323470ull,0x325f325f744c2409ull,
0x20202020203b3032ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3736332065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x2e090a3931325f32ull,0x3309353109636f6cull,0x6873090a30093439ull,
0x2509203233752e72ull,0x7225202c36303172ull,0x20203b31202c3339ull,0x202f2f0920202020ull,
0x33752e646461090aull,0x3730317225092032ull,0x31202c317225202cull,0x202020202020203bull,
0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,0x2c38303172250920ull,0x202c373031722520ull,
0x2f2f093b33397225ull,0x752e646461090a20ull,0x3031722509203233ull,0x3630317225202c39ull,
0x3b3830317225202cull,0x63090a202f2f0920ull,0x752e3436752e7476ull,0x3664722509203233ull,
0x3930317225202c30ull,0x2f2f09202020203bull,0x6c2e6c756d090a20ull,0x2509203436752e6full,
0x7225202c31366472ull,0x203b34202c303664ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x25202c3236647225ull,0x7225202c37326472ull,0x2f2f09203b313664ull,0x752e646461090a20ull,
0x3664722509203436ull,0x3236647225202c33ull,0x383937313731202cull,0x2f093b3438313936ull,
0x732e646c090a202full,0x33752e6465726168ull,0x3031317225092032ull,0x33366472255b202cull,
0x202f2f093b5d302bull,0x5f203138373a6469ull,0x5f735f616475635full,0x69746361706d6f63ull,
0x317473696c5f6e6full,0x3078302b32333530ull,0x36752e747663090aull,0x2509203233752e34ull,
0x7225202c34366472ull,0x202020203b383031ull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,
0x2c35366472250920ull,0x202c343664722520ull,0x202f2f0920203b34ull,0x36752e646461090aull,
0x3636647225092034ull,0x2c3732647225202cull,0x203b353664722520ull,0x6461090a202f2f09ull,
0x2509203436752e64ull,0x7225202c37366472ull,0x313731202c363664ull,0x3438313936383937ull,
0x6c090a202f2f093bull,0x6465726168732e64ull,0x722509203233752eull,0x72255b202c313131ull,
0x093b5d302b373664ull,0x38373a6469202f2full,0x616475635f5f2032ull,0x61706d6f635f735full,
0x696c5f6e6f697463ull,0x2b32333530317473ull,0x646461090a307830ull,0x722509203233752eull,
0x317225202c323131ull,0x31317225202c3031ull,0x0a202f2f09203b31ull,0x726168732e747309ull,
0x09203233752e6465ull,0x302b33366472255bull,0x3231317225202c5dull,0x3a6469202f2f093bull,
0x75635f5f20333837ull,0x6d6f635f735f6164ull,0x5f6e6f6974636170ull,0x333530317473696cull,
0x4c240a3078302b32ull,0x3a3032325f325f74ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3736332065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x2e090a3931325f32ull,0x3309353109636f6cull,0x6873090a30093438ull,
0x2509203233622e6cull,0x7225202c34303172ull,0x203b31202c343031ull,0x202f2f0920202020ull,
0x6c2e70746573090aull,0x2509203233752e74ull,0x317225202c333470ull,0x39387225202c3430ull,
0x40090a202f2f093bull,0x6172622033347025ull,0x5f325f744c240920ull,0x202020203b393132ull,
0x2f2f092020202020ull,0x5f325f744c240a20ull,0x2f2f200a3a373132ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x353120656e696c20ull,0x2064616568202c35ull,
0x2064656c6562616cull,0x30315f325f744c24ull,0x09636f6c2e090a39ull,0x3009393933093531ull,
0x79732e726162090aull,0x20203b300920636eull,0x2020202020202020ull,0x2020202020202020ull,
0x6c2e090a202f2f09ull,0x313209383109636full,0x2e646c090a300932ull,0x752e646572616873ull,
0x3131722509203233ull,0x5f6d756e5b202c33ull,0x5f73646165726874ull,0x3b5d657669746361ull,
0x373a6469202f2f09ull,0x745f6d756e203930ull,0x615f736461657268ull,0x78302b6576697463ull,
0x752e766f6d090a30ull,0x3131722509203233ull,0x2020203b31202c34ull,0x2020202020202020ull,
0x73090a202f2f0920ull,0x33752e71652e7465ull,0x2509203233752e32ull,0x7225202c35313172ull,
0x31317225202c3533ull,0x090a202f2f093b34ull,0x203233732e67656eull,0x202c363131722509ull,
0x20203b3531317225ull,0x2f09202020202020ull,0x2e746573090a202full,0x752e3233752e7467ull,
0x3131722509203233ull,0x3331317225202c37ull,0x2f093b317225202cull,0x2e67656e090a202full,
0x3172250920323373ull,0x31317225202c3831ull,0x2020202020203b37ull,0x090a202f2f092020ull,
0x203233622e646e61ull,0x202c393131722509ull,0x25202c3631317225ull,0x2f09203b38313172ull,
0x2e766f6d090a202full,0x3172250920323375ull,0x20203b30202c3032ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x2e71652e70746573ull,0x3470250920323373ull,0x3931317225202c34ull,
0x3b3032317225202cull,0x2540090a202f2f09ull,0x2061726220343470ull,0x325f325f744c2409ull,
0x20202020203b3332ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3535312065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x2e090a3930315f32ull,0x3409353109636f6cull,0x646c090a30093733ull,
0x2e6465726168732eull,0x3172250920323375ull,0x6472255b202c3132ull,0x2f093b5d302b3534ull,
0x3438373a6469202full,0x5f616475635f5f20ull,0x6361706d6f635f73ull,0x73696c5f6e6f6974ull,
0x302b323335303174ull,0x636f6c2e090a3078ull,0x0932313209383109ull,0x68732e646c090a30ull,
0x3233752e64657261ull,0x2c33313172250920ull,0x68745f6d756e5b20ull,0x63615f7364616572ull,
0x2f093b5d65766974ull,0x636f6c2e090a202full,0x0937333409353109ull,0x752e646461090a30ull,
0x3231722509203233ull,0x3132317225202c32ull,0x3b3331317225202cull,0x2e090a202f2f0920ull,
0x3409353109636f6cull,0x7663090a30093933ull,0x33752e3436752e74ull,0x3836647225092032ull,
0x3b3232317225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,
0x647225202c393664ull,0x20203b34202c3836ull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x7225202c30376472ull,0x647225202c393664ull,0x202f2f0920203b39ull,0x6168732e7473090aull,
0x203233662e646572ull,0x2b30376472255b09ull,0x3b396625202c5d30ull,0x373a6469202f2f09ull,
0x6475635f5f203538ull,0x7466656c5f735f61ull,0x78302b3038363631ull,0x09636f6c2e090a30ull,
0x3009303434093531ull,0x33662e766f6d090aull,0x2c30386625092032ull,0x20203b3331662520ull,
0x2020202020202020ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c31376472ull,
0x647225202c393664ull,0x202f2f0920203b37ull,0x6168732e7473090aull,0x203233662e646572ull,
0x2b31376472255b09ull,0x30386625202c5d30ull,0x3a6469202f2f093bull,0x75635f5f20363837ull,
0x6769725f735f6164ull,0x2b34383532317468ull,0x6f6c2e090a307830ull,0x3134340935310963ull,
0x2e646461090a3009ull,0x6472250920343675ull,0x36647225202c3237ull,0x3031647225202c39ull,
0x090a202f2f09203bull,0x65726168732e7473ull,0x5b09203233752e64ull,0x5d302b3237647225ull,
0x093b34367225202cull,0x38373a6469202f2full,0x616475635f5f2037ull,0x5f7466656c5f735full,
0x373831746e756f63ull,0x090a3078302b3832ull,0x09353109636f6c2eull,0x6d090a3009323434ull,
0x09203233732e766full,0x25202c3332317225ull,0x202020203b303472ull,0x2f2f092020202020ull,
0x752e646461090a20ull,0x3764722509203436ull,0x3936647225202c33ull,0x203b38647225202cull,
0x73090a202f2f0920ull,0x6465726168732e74ull,0x255b09203233752eull,0x2c5d302b33376472ull,
0x093b333231722520ull,0x38373a6469202f2full,0x616475635f5f2038ull,0x74686769725f735full,
0x3431746e756f635full,0x0a3078302b323336ull,0x32325f325f744c24ull,0x325f744c240a3a33ull,
0x2f200a3a3930325full,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3120656e696c2079ull,0x64616568202c3535ull,0x64656c6562616c20ull,0x315f325f744c2420ull,
0x636f6c2e090a3930ull,0x0938313209383109ull,0x732e726162090a30ull,0x203b300920636e79ull,
0x2020202020202020ull,0x2020202020202020ull,0x40090a202f2f0920ull,0x6172622031702521ull,
0x5f325f744c240920ull,0x202020203b353232ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c35353120656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x090a3930315f325full,0x09383109636f6c2eull,
0x6c090a3009323232ull,0x6465726168732e64ull,0x722509203233752eull,0x756e5b202c333131ull,
0x6461657268745f6dull,0x6576697463615f73ull,0x6469202f2f093b5dull,0x6d756e203930373aull,
0x736461657268745full,0x2b6576697463615full,0x747663090a307830ull,0x3233752e3436752eull,
0x2c34376472250920ull,0x203b333131722520ull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,
0x6472250920343675ull,0x37647225202c3537ull,0x0920203b34202c34ull,0x646461090a202f2full,
0x722509203436752eull,0x647225202c363764ull,0x37647225202c3732ull,0x0a202f2f09203b35ull,
0x726168732e646c09ull,0x09203233752e6465ull,0x5b202c3432317225ull,0x5d302b3637647225ull,
0x3a6469202f2f093bull,0x75635f5f20393837ull,0x6d6f635f735f6164ull,0x5f6e6f6974636170ull,
0x333530317473696cull,0x61090a3078302b32ull,0x09203233752e6464ull,0x25202c3331317225ull,
0x7225202c34323172ull,0x2f2f09203b333131ull,0x68732e7473090a20ull,0x3233752e64657261ull,
0x745f6d756e5b0920ull,0x615f736461657268ull,0x202c5d6576697463ull,0x2f093b3331317225ull,
0x3930373a6469202full,0x7268745f6d756e20ull,0x7463615f73646165ull,0x0a3078302b657669ull,
0x383109636f6c2e09ull,0x090a300933323209ull,0x203233732e627573ull,0x202c353231722509ull,
0x31202c3331317225ull,0x2f0920202020203bull,0x2e646e61090a202full,0x3172250920323362ull,
0x31317225202c3632ull,0x3532317225202c33ull,0x090a202f2f09203bull,0x203233752e766f6dull,
0x202c373231722509ull,0x2020202020203b30ull,0x2f09202020202020ull,0x70746573090a202full,
0x203233732e656e2eull,0x25202c3534702509ull,0x7225202c36323172ull,0x202f2f093b373231ull,
0x203534702540090aull,0x744c240920617262ull,0x203b3732325f325full,0x2020202020202020ull,
0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x353120656e696c20ull,0x2064616568202c35ull,0x2064656c6562616cull,0x30315f325f744c24ull,
0x732e766f6d090a39ull,0x3231722509203233ull,0x3331317225202c38ull,0x202020202020203bull,
0x62090a202f2f0920ull,0x0920696e752e6172ull,0x3b325f325f744c24ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x5f325f744c240a20ull,0x2f2f200a3a373232ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x353120656e696c20ull,0x2064616568202c35ull,
0x2064656c6562616cull,0x30315f325f744c24ull,0x09636f6c2e090a39ull,0x3009303932093931ull,
0x6e722e747663090aull,0x3233732e3233662eull,0x202c313866250920ull,0x20203b3331317225ull,
0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x31386625202c3266ull,0x202020202020203bull,
0x202f2f0920202020ull,0x3209636f6c2e090aull,0x3009323833320932ull,0x33662e736261090aull,
0x2c32386625092032ull,0x20203b3138662520ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,
0x2509203233662e76ull,0x306630202c333866ull,0x3b30303030303830ull,0x202f2f0920202020ull,
0x6539343537312e31ull,0x746573090a38332dull,0x3233662e746c2e70ull,0x202c363470250920ull,
0x6625202c32386625ull,0x0a202f2f093b3338ull,0x2036347025214009ull,0x744c240920617262ull,
0x203b3033325f325full,0x0920202020202020ull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x35353120656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3930315f325f744cull,0x3209636f6c2e090aull,0x3009373833320932ull,
0x33662e766f6d090aull,0x2c34386625092032ull,0x3030386234663020ull,0x202020203b303030ull,
0x37362e31202f2f09ull,0x0a37302b65323737ull,0x3233662e6c756d09ull,0x25202c3266250920ull,
0x386625202c313866ull,0x0920202020203b34ull,0x766f6d090a202f2full,0x722509203233752eull,
0x203b3432202c3331ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x696e752e61726209ull,
0x5f325f744c240920ull,0x202020203b393232ull,0x0920202020202020ull,0x5f744c240a202f2full,
0x200a3a3033325f32ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c353531ull,0x656c6562616c2064ull,0x5f325f744c242064ull,
0x6f6c2e090a393031ull,0x3933320932320963ull,0x766f6d090a300930ull,0x722509203233752eull,
0x20203b30202c3331ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x32325f325f744c24ull,
0x6c3c2f2f200a3a39ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c35353120656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x0a3930315f325f74ull,
0x353109636f6c2e09ull,0x6d090a3009373709ull,0x09203233622e766full,0x25202c3932317225ull,
0x20202020203b3266ull,0x2f2f092020202020ull,0x732e726873090a20ull,0x3331722509203233ull,
0x3932317225202c30ull,0x2020203b3332202cull,0x61090a202f2f0920ull,0x09203233622e646eull,
0x25202c3133317225ull,0x3532202c30333172ull,0x2f2f092020203b35ull,0x752e766f6d090a20ull,
0x3331722509203233ull,0x2020203b30202c32ull,0x2020202020202020ull,0x73090a202f2f0920ull,
0x09203233752e6275ull,0x25202c3333317225ull,0x7225202c31333172ull,0x2f2f0920203b3331ull,
0x752e627573090a20ull,0x3331722509203233ull,0x3333317225202c34ull,0x20203b363231202cull,
0x6d090a202f2f0920ull,0x09203233752e766full,0x32202c3533317225ull,0x20202020203b3535ull,
0x2f2f092020202020ull,0x652e746573090a20ull,0x33752e3233752e71ull,0x3633317225092032ull,
0x2c3133317225202cull,0x093b353331722520ull,0x67656e090a202f2full,0x722509203233732eull,
0x317225202c373331ull,0x20202020203b3633ull,0x0a202f2f09202020ull,0x3233662e766f6d09ull,
0x202c353866250920ull,0x3030303030306630ull,0x09202020203b3030ull,0x6573090a30202f2full,
0x3233752e71652e74ull,0x722509203233662eull,0x386625202c383331ull,0x3b35386625202c32ull,
0x656e090a202f2f09ull,0x2509203233732e67ull,0x7225202c39333172ull,0x202020203b383331ull,
0x202f2f0920202020ull,0x3233622e726f090aull,0x2c30343172250920ull,0x202c373331722520ull,
0x20203b3933317225ull,0x656e090a202f2f09ull,0x2509203233732e67ull,0x7225202c31343172ull,
0x202020203b303431ull,0x202f2f0920202020ull,0x752e74636c73090aull,0x09203233732e3233ull,
0x25202c3234317225ull,0x7225202c34333172ull,0x317225202c323331ull,0x0a202f2f093b3134ull,
0x3233622e6c687309ull,0x2c38323172250920ull,0x34317225202c3120ull,0x0920202020203b32ull,
0x5f744c240a202f2full,0x2f2f200a3a325f32ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x353120656e696c20ull,0x2064616568202c35ull,0x2064656c6562616cull,
0x30315f325f744c24ull,0x09636f6c2e090a39ull,0x3009333232093831ull,0x6168732e7473090aull,
0x203233752e646572ull,0x68745f6d756e5b09ull,0x6f635f7364616572ull,0x6e6f69746361706dull,
0x3832317225202c5dull,0x3a6469202f2f093bull,0x5f6d756e20313237ull,0x5f73646165726874ull,
0x69746361706d6f63ull,0x090a3078302b6e6full,0x09383109636f6c2eull,0x6d090a3009353232ull,
0x09203233752e766full,0x30202c3334317225ull,0x202020202020203bull,0x2f2f092020202020ull,
0x68732e7473090a20ull,0x3233752e64657261ull,0x61706d6f635b0920ull,0x6e6f6365735f7463ull,
0x5d6b6e7568635f64ull,0x3b3334317225202cull,0x373a6469202f2f09ull,0x61706d6f63203332ull,
0x6e6f6365735f7463ull,0x2b6b6e7568635f64ull,0x6f6c2e090a307830ull,0x3632320938310963ull,
0x2e766f6d090a3009ull,0x3172250920323375ull,0x20203b31202c3434ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233752e64ull,0x657268745f6c6c61ull,
0x766e6f635f736461ull,0x202c5d6465677265ull,0x2f093b3434317225ull,0x3232373a6469202full,
0x7268745f6c6c6120ull,0x6e6f635f73646165ull,0x302b646567726576ull,0x325f744c240a3078ull,
0x2f200a3a3532325full,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3120656e696c2079ull,0x64616568202c3535ull,0x64656c6562616c20ull,0x315f325f744c2420ull,
0x636f6c2e090a3930ull,0x0939323209383109ull,0x732e726162090a30ull,0x203b300920636e79ull,
0x2020202020202020ull,0x2020202020202020ull,0x2e090a202f2f0920ull,0x3209383109636f6cull,
0x6f6d090a30093233ull,0x2509203233752e76ull,0x3b30202c35343172ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x6168732e7473090aull,0x203233752e646572ull,0x2b35346472255b09ull,
0x34317225202c5d34ull,0x6469202f2f093b35ull,0x635f5f203039373aull,0x6f635f735f616475ull,
0x6e6f69746361706dull,0x3530317473696c5full,0x090a3078302b3233ull,0x09383109636f6c2eull,
0x6d090a3009333332ull,0x09203233752e766full,0x30202c3634317225ull,0x202020202020203bull,
0x2f2f092020202020ull,0x752e646461090a20ull,0x3431722509203233ull,0x2c34357225202c37ull,
0x2020203b31722520ull,0x63090a202f2f0920ull,0x752e3436752e7476ull,0x3764722509203233ull,
0x3734317225202c37ull,0x2f2f09202020203bull,0x6c2e6c756d090a20ull,0x2509203436752e6full,
0x7225202c38376472ull,0x203b34202c373764ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x25202c3937647225ull,0x7225202c37326472ull,0x2f2f09203b383764ull,0x68732e7473090a20ull,
0x3233752e64657261ull,0x39376472255b0920ull,0x317225202c5d342bull,0x69202f2f093b3634ull,
0x5f5f203139373a64ull,0x635f735f61647563ull,0x6f69746361706d6full,0x30317473696c5f6eull,
0x0a3078302b323335ull,0x383109636f6c2e09ull,0x090a300935333209ull,0x636e79732e726162ull,
0x202020203b300920ull,0x2020202020202020ull,0x2f09202020202020ull,0x636f6c2e090a202full,
0x0939323209383109ull,0x752e617262090a30ull,0x5f744c240920696eull,0x20203b3930315f32ull,
0x2020202020202020ull,0x4c240a202f2f0920ull,0x090a3a315f325f74ull,0x09383109636f6c2eull,
0x6c090a3009373332ull,0x6465726168732e64ull,0x722509203233752eull,0x756e5b202c383431ull,
0x6461657268745f6dull,0x6576697463615f73ull,0x6469202f2f093b5dull,0x6d756e203930373aull,
0x736461657268745full,0x2b6576697463615full,0x746573090a307830ull,0x3233752e656c2e70ull,
0x202c373470250920ull,0x25202c3834317225ull,0x0a202f2f093b3172ull,0x6220373470254009ull,
0x5f744c2409206172ull,0x20203b3133325f32ull,0x0920202020202020ull,0x6f6c2e090a202f2full,
0x3434320938310963ull,0x2e747663090a3009ull,0x203233752e343675ull,0x202c313164722509ull,
0x202020203b317225ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3164722509203436ull,
0x3131647225202c32ull,0x2f0920203b34202cull,0x732e646c090a202full,0x33752e6465726168ull,
0x3934317225092032ull,0x6f6c625f635b202cull,0x657366666f5f6b63ull,0x74757074756f5f74ull,
0x6469202f2f093b5dull,0x625f63203931373aull,0x66666f5f6b636f6cull,0x7074756f5f746573ull,
0x090a3078302b7475ull,0x203233752e646461ull,0x202c303531722509ull,0x25202c3934317225ull,
0x2f092020203b3172ull,0x2e747663090a202full,0x203233752e343675ull,0x202c303864722509ull,
0x20203b3035317225ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3864722509203436ull,
0x3038647225202c31ull,0x2f0920203b34202cull,0x2e646461090a202full,0x6472250920343675ull,
0x31647225202c3238ull,0x3b39647225202c32ull,0x090a202f2f092020ull,0x65726168732e646cull,
0x2509203233662e64ull,0x72255b202c363866ull,0x093b5d302b323864ull,0x39373a6469202f2full,
0x616475635f5f2032ull,0x317466656c5f735full,0x3078302b30383636ull,0x7261702e646c090aull,
0x09203436752e6d61ull,0x5b202c3338647225ull,0x6170616475635f5full,0x6231335a5f5f6d72ull,
0x72654b7463657369ull,0x656772614c6c656eull,0x746e49746c754d5full,0x6650736c61767265ull,
0x5f30536a506a5f53ull,0x535f30535f535f53ull,0x665f30535f535f30ull,0x64626d616c5f675full,
0x69202f2f093b5d61ull,0x5f5f203339373a64ull,0x6d72617061647563ull,0x73696231335a5f5full,
0x656e72654b746365ull,0x4d5f656772614c6cull,0x7265746e49746c75ull,0x5f536650736c6176ull,
0x5f535f30536a506aull,0x5f30535f30535f53ull,0x675f665f30535f53ull,0x2b6164626d616c5full,
0x646461090a307830ull,0x722509203436752eull,0x647225202c343864ull,0x38647225202c3338ull,
0x0a202f2f09203b31ull,0x626f6c672e747309ull,0x09203233662e6c61ull,0x302b34386472255bull,
0x3b36386625202c5dull,0x373a6469202f2f09ull,0x636f6c2e090a3439ull,0x0935343209383109ull,
0x752e646461090a30ull,0x3864722509203436ull,0x3231647225202c35ull,0x203b38647225202cull,
0x6c090a202f2f0920ull,0x6465726168732e64ull,0x722509203233752eull,0x72255b202c313531ull,
0x093b5d302b353864ull,0x39373a6469202f2full,0x616475635f5f2035ull,0x74686769725f735full,
0x3431746e756f635full,0x0a3078302b323336ull,0x617261702e646c09ull,0x2509203436752e6dull,
0x5f5b202c36386472ull,0x726170616475635full,0x696231335a5f5f6dull,0x6e72654b74636573ull,
0x5f656772614c6c65ull,0x65746e49746c754dull,0x536650736c617672ull,0x535f30536a506a5full,
0x30535f30535f535full,0x5f665f30535f535full,0x093b5d736f705f67ull,0x39373a6469202f2full,
0x616475635f5f2036ull,0x335a5f5f6d726170ull,0x4b74636573696231ull,0x72614c6c656e7265ull,
0x49746c754d5f6567ull,0x736c61767265746eull,0x536a506a5f536650ull,0x30535f535f535f30ull,
0x30535f535f30535full,0x736f705f675f665full,0x6461090a3078302bull,0x2509203436752e64ull,
0x7225202c37386472ull,0x647225202c363864ull,0x202f2f09203b3138ull,0x6f6c672e7473090aull,
0x203233752e6c6162ull,0x2b37386472255b09ull,0x35317225202c5d30ull,0x6469202f2f093b31ull,
0x744c240a3739373aull,0x0a3a3133325f325full,0x383109636f6c2e09ull,0x090a300937343209ull,
0x2020203b74697865ull,0x2020202020202020ull,0x2020202020202020ull,0x2f09202020202020ull,
0x6557444c240a202full,0x6231335a5f5f646eull,0x72654b7463657369ull,0x656772614c6c656eull,
0x746e49746c754d5full,0x6650736c61767265ull,0x5f30536a506a5f53ull,0x535f30535f535f53ull,
0x665f30535f535f30ull,0x202f2f207d090a3aull,0x6573696231335a5full,0x6c656e72654b7463ull,
0x754d5f656772614cull,0x767265746e49746cull,0x6a5f536650736c61ull,0x535f535f30536a50ull,
0x535f30535f30535full,0x000a0a665f30535full
};


}


static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_13",(char*)__deviceText_$compute_13$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{(char*)"sm_13",(char*)__deviceText_$sm_13$},{0,0}};
static __cudaFatDebugEntry __debugEntries[] = {{0,0}};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000003,0x8ecc680c,(char*)"babe8f216d2ccff7",(char*)"bisect_large.cu",(char*)" ",__ptxEntries,__cubinEntries,__debugEntries,0,0,0,0,0};
# 5 "/tmp/tmpxft_00000eb0_00000000-13_bisect_large.cudafe1.stub.c" 2
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
# 6 "/tmp/tmpxft_00000eb0_00000000-13_bisect_large.cudafe1.stub.c" 2
struct __T20;
struct __T21;
struct __T22;
struct __T20 {float *__par0;float *__par1;unsigned __par2;float __par3;float __par4;unsigned __par5;unsigned __par6;float __par7;unsigned *__par8;unsigned *__par9;float *__par10;float *__par11;unsigned *__par12;float *__par13;float *__par14;unsigned *__par15;unsigned *__par16;unsigned *__par17;unsigned *__par18;int __dummy_field;volatile char __dummy[4];};
struct __T21 {float *__par0;float *__par1;unsigned __par2;unsigned __par3;float *__par4;float *__par5;unsigned *__par6;float __par7;int __dummy_field;};
struct __T22 {float *__par0;float *__par1;unsigned __par2;unsigned *__par3;unsigned *__par4;float *__par5;float *__par6;unsigned *__par7;unsigned *__par8;float *__par9;unsigned *__par10;float __par11;int __dummy_field;};
# 21 "/tmp/tmpxft_00000eb0_00000000-13_bisect_large.cudafe1.stub.c"
static void __sti____cudaRegisterAll_48_tmpxft_00000eb0_00000000_53_bisect_large_cpp1_ii_c14de7b3(void) __attribute__((__constructor__));
void __device_stub__Z17bisectKernelLargePfS_jffjjfPjS0_S_S_S0_S_S_S0_S0_S0_S0_(float *__par0, float *__par1, const unsigned __par2, const float __par3, const float __par4, const unsigned __par5, const unsigned __par6, float __par7, unsigned *__par8, unsigned *__par9, float *__par10, float *__par11, unsigned *__par12, float *__par13, float *__par14, unsigned *__par15, unsigned *__par16, unsigned *__par17, unsigned *__par18){auto struct __T20 *__T24;
char __[256]; *(char**)&__T24 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T24->__par0 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T24->__par1 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T24->__par2 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T24->__par3 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T24->__par4 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T24->__par5 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T24->__par6 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T24->__par7 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T24->__par8 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T24->__par9 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T24->__par10 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par11, sizeof(__par11), (size_t)&__T24->__par11 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par12, sizeof(__par12), (size_t)&__T24->__par12 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par13, sizeof(__par13), (size_t)&__T24->__par13 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par14, sizeof(__par14), (size_t)&__T24->__par14 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par15, sizeof(__par15), (size_t)&__T24->__par15 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par16, sizeof(__par16), (size_t)&__T24->__par16 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par17, sizeof(__par17), (size_t)&__T24->__par17 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par18, sizeof(__par18), (size_t)&__T24->__par18 - (size_t)__T24) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)__device_stub__Z17bisectKernelLargePfS_jffjjfPjS0_S_S_S0_S_S_S0_S0_S0_S0_); (void)cudaLaunch(((char *)__device_stub__Z17bisectKernelLargePfS_jffjjfPjS0_S_S_S0_S_S_S0_S0_S0_S0_)); };}
void __device_stub__Z30bisectKernelLarge_OneIntervalsPfS_jjS_S_Pjf(float *__par0, float *__par1, const unsigned __par2, unsigned __par3, float *__par4, float *__par5, unsigned *__par6, float __par7){auto struct __T21 *__T28;
char __[256]; *(char**)&__T28 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T28->__par0 - (size_t)__T28) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T28->__par1 - (size_t)__T28) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T28->__par2 - (size_t)__T28) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T28->__par3 - (size_t)__T28) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T28->__par4 - (size_t)__T28) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T28->__par5 - (size_t)__T28) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T28->__par6 - (size_t)__T28) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T28->__par7 - (size_t)__T28) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)__device_stub__Z30bisectKernelLarge_OneIntervalsPfS_jjS_S_Pjf); (void)cudaLaunch(((char *)__device_stub__Z30bisectKernelLarge_OneIntervalsPfS_jjS_S_Pjf)); };}
void __device_stub__Z31bisectKernelLarge_MultIntervalsPfS_jPjS0_S_S_S0_S0_S_S0_f(float *__par0, float *__par1, const unsigned __par2, unsigned *__par3, unsigned *__par4, float *__par5, float *__par6, unsigned *__par7, unsigned *__par8, float *__par9, unsigned *__par10, float __par11){auto struct __T22 *__T29;
char __[256]; *(char**)&__T29 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T29->__par0 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T29->__par1 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T29->__par2 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T29->__par3 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T29->__par4 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T29->__par5 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T29->__par6 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T29->__par7 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T29->__par8 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T29->__par9 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T29->__par10 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par11, sizeof(__par11), (size_t)&__T29->__par11 - (size_t)__T29) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)__device_stub__Z31bisectKernelLarge_MultIntervalsPfS_jPjS0_S_S_S0_S0_S_S0_f); (void)cudaLaunch(((char *)__device_stub__Z31bisectKernelLarge_MultIntervalsPfS_jPjS0_S_S_S0_S0_S_S0_f)); };}
# 37 "/tmp/tmpxft_00000eb0_00000000-13_bisect_large.cudafe1.stub.c"
static void __sti____cudaRegisterAll_48_tmpxft_00000eb0_00000000_53_bisect_large_cpp1_ii_c14de7b3(void){__cudaFatCubinHandle = __cudaRegisterFatBinary((void*)(&__fatDeviceText)); atexit(__cudaUnregisterBinaryUtil);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)__device_stub__Z31bisectKernelLarge_MultIntervalsPfS_jPjS0_S_S_S0_S0_S_S0_f, (char*)"_Z31bisectKernelLarge_MultIntervalsPfS_jPjS0_S_S_S0_S0_S_S0_f", "_Z31bisectKernelLarge_MultIntervalsPfS_jPjS0_S_S_S0_S0_S_S0_f", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)__device_stub__Z30bisectKernelLarge_OneIntervalsPfS_jjS_S_Pjf, (char*)"_Z30bisectKernelLarge_OneIntervalsPfS_jjS_S_Pjf", "_Z30bisectKernelLarge_OneIntervalsPfS_jjS_S_Pjf", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)__device_stub__Z17bisectKernelLargePfS_jffjjfPjS0_S_S_S0_S_S_S0_S0_S0_S0_, (char*)"_Z17bisectKernelLargePfS_jffjjfPjS0_S_S_S0_S_S_S0_S0_S0_S0_", "_Z17bisectKernelLargePfS_jffjjfPjS0_S_S_S0_S_S_S0_S0_S0_S0_", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);}

}
# 394 "bisect_large.cu" 2
