#ifndef XNUSPY_CACHE
#define XNUSPY_CACHE

#define SYSCTL__KERN_CHILDREN_PTR                       (0x0)
#define SYSCTL_REGISTER_OID                             (0x8)
#define SYSCTL_HANDLE_LONG                              (0x10)
#define NAME2OID                                        (0x18)
#define SYSCTL_GEOMETRY_LOCK_PTR                        (0x20)
#define LCK_RW_LOCK_SHARED                              (0x28)
#define LCK_RW_DONE                                     (0x30)
#define DID_REGISTER_SYSCTL                             (0x38)
#define H_S_C_SBN_EPILOGUE_ADDR                         (0x40)
#define STALKER_TABLE_PTR                               (0x48)
#define XNUSPY_SYSCTL_NAME_PTR                          (0x50)
#define XNUSPY_SYSCTL_DESCR_PTR                         (0x58)
#define XNUSPY_SYSCTL_FMT_PTR                           (0x60)
#define XNUSPY_SYSCTL_MIB_PTR                           (0x68)
#define XNUSPY_SYSCTL_MIB_COUNT_PTR                     (0x70)
#define XNUSPY_CTL_CALLNUM                              (0x78)
#define IOS_VERSION                                     (0x80)
#define COMPILED_C_CODE_ADDR                            (0x88)
#define COMPILED_C_CODE_SIZE                            (0x90)

#define iOS_13_x                                        (19)
#define iOS_14_x                                        (20)

#endif
