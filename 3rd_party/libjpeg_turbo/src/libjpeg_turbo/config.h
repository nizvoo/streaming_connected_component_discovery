#define VERSION "1.3.0"
#define BUILD "1"
#define PACKAGE_NAME "streaming_connected_component_discovery"

#ifndef INLINE
#if defined(__GNUC__)
#define INLINE __attribute__((always_inline))
#elif defined(_MSC_VER)
#define INLINE __forceinline
#else
#define INLINE
#endif
#endif
