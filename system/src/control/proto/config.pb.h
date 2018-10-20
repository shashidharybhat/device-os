/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Fri Oct 19 19:15:44 2018. */

#ifndef PB_PARTICLE_CTRL_CONFIG_PB_H_INCLUDED
#define PB_PARTICLE_CTRL_CONFIG_PB_H_INCLUDED
#include <pb.h>

#include "extensions.pb.h"

#include "common.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _particle_ctrl_SecurityKeyType {
    particle_ctrl_SecurityKeyType_INVALID_SECURITY_KEY = 0,
    particle_ctrl_SecurityKeyType_TCP_DEVICE_PRIVATE_KEY = 1,
    particle_ctrl_SecurityKeyType_TCP_DEVICE_PUBLIC_KEY = 2,
    particle_ctrl_SecurityKeyType_TCP_SERVER_PUBLIC_KEY = 3,
    particle_ctrl_SecurityKeyType_UDP_DEVICE_PRIVATE_KEY = 4,
    particle_ctrl_SecurityKeyType_UDP_DEVICE_PUBLIC_KEY = 5,
    particle_ctrl_SecurityKeyType_UDP_SERVER_PUBLIC_KEY = 6
} particle_ctrl_SecurityKeyType;
#define _particle_ctrl_SecurityKeyType_MIN particle_ctrl_SecurityKeyType_INVALID_SECURITY_KEY
#define _particle_ctrl_SecurityKeyType_MAX particle_ctrl_SecurityKeyType_UDP_SERVER_PUBLIC_KEY
#define _particle_ctrl_SecurityKeyType_ARRAYSIZE ((particle_ctrl_SecurityKeyType)(particle_ctrl_SecurityKeyType_UDP_SERVER_PUBLIC_KEY+1))

typedef enum _particle_ctrl_ServerProtocolType {
    particle_ctrl_ServerProtocolType_INVALID_PROTOCOL = 0,
    particle_ctrl_ServerProtocolType_TCP_PROTOCOL = 1,
    particle_ctrl_ServerProtocolType_UDP_PROTOCOL = 2
} particle_ctrl_ServerProtocolType;
#define _particle_ctrl_ServerProtocolType_MIN particle_ctrl_ServerProtocolType_INVALID_PROTOCOL
#define _particle_ctrl_ServerProtocolType_MAX particle_ctrl_ServerProtocolType_UDP_PROTOCOL
#define _particle_ctrl_ServerProtocolType_ARRAYSIZE ((particle_ctrl_ServerProtocolType)(particle_ctrl_ServerProtocolType_UDP_PROTOCOL+1))

typedef enum _particle_ctrl_DeviceMode {
    particle_ctrl_DeviceMode_NORMAL_MODE = 0,
    particle_ctrl_DeviceMode_LISTENING_MODE = 1
} particle_ctrl_DeviceMode;
#define _particle_ctrl_DeviceMode_MIN particle_ctrl_DeviceMode_NORMAL_MODE
#define _particle_ctrl_DeviceMode_MAX particle_ctrl_DeviceMode_LISTENING_MODE
#define _particle_ctrl_DeviceMode_ARRAYSIZE ((particle_ctrl_DeviceMode)(particle_ctrl_DeviceMode_LISTENING_MODE+1))

typedef enum _particle_ctrl_SystemCapabilityFlag {
    particle_ctrl_SystemCapabilityFlag_NO_SYSTEM_CAPABILITY_FLAGS = 0,
    particle_ctrl_SystemCapabilityFlag_COMPRESSED_OTA = 1
} particle_ctrl_SystemCapabilityFlag;
#define _particle_ctrl_SystemCapabilityFlag_MIN particle_ctrl_SystemCapabilityFlag_NO_SYSTEM_CAPABILITY_FLAGS
#define _particle_ctrl_SystemCapabilityFlag_MAX particle_ctrl_SystemCapabilityFlag_COMPRESSED_OTA
#define _particle_ctrl_SystemCapabilityFlag_ARRAYSIZE ((particle_ctrl_SystemCapabilityFlag)(particle_ctrl_SystemCapabilityFlag_COMPRESSED_OTA+1))

typedef enum _particle_ctrl_Feature {
    particle_ctrl_Feature_INVALID_FEATURE = 0,
    particle_ctrl_Feature_ETHERNET_DETECTION = 1
} particle_ctrl_Feature;
#define _particle_ctrl_Feature_MIN particle_ctrl_Feature_INVALID_FEATURE
#define _particle_ctrl_Feature_MAX particle_ctrl_Feature_ETHERNET_DETECTION
#define _particle_ctrl_Feature_ARRAYSIZE ((particle_ctrl_Feature)(particle_ctrl_Feature_ETHERNET_DETECTION+1))

/* Struct definitions */
typedef struct _particle_ctrl_GetDeviceIdRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_GetDeviceIdRequest) */
} particle_ctrl_GetDeviceIdRequest;

typedef struct _particle_ctrl_GetDeviceModeRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_GetDeviceModeRequest) */
} particle_ctrl_GetDeviceModeRequest;

typedef struct _particle_ctrl_GetNcpFirmwareVersionRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_GetNcpFirmwareVersionRequest) */
} particle_ctrl_GetNcpFirmwareVersionRequest;

typedef struct _particle_ctrl_GetSecurityKeyReply {
    pb_callback_t data;
/* @@protoc_insertion_point(struct:particle_ctrl_GetSecurityKeyReply) */
} particle_ctrl_GetSecurityKeyReply;

typedef struct _particle_ctrl_GetSerialNumberRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_GetSerialNumberRequest) */
} particle_ctrl_GetSerialNumberRequest;

typedef struct _particle_ctrl_GetServerProtocolRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_GetServerProtocolRequest) */
} particle_ctrl_GetServerProtocolRequest;

typedef struct _particle_ctrl_GetSystemCapabilitiesRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_GetSystemCapabilitiesRequest) */
} particle_ctrl_GetSystemCapabilitiesRequest;

typedef struct _particle_ctrl_GetSystemVersionReply {
    pb_callback_t version;
/* @@protoc_insertion_point(struct:particle_ctrl_GetSystemVersionReply) */
} particle_ctrl_GetSystemVersionReply;

typedef struct _particle_ctrl_GetSystemVersionRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_GetSystemVersionRequest) */
} particle_ctrl_GetSystemVersionRequest;

typedef struct _particle_ctrl_IsClaimedRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_IsClaimedRequest) */
} particle_ctrl_IsClaimedRequest;

typedef struct _particle_ctrl_IsDeviceSetupDoneRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_IsDeviceSetupDoneRequest) */
} particle_ctrl_IsDeviceSetupDoneRequest;

typedef struct _particle_ctrl_SetClaimCodeReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_SetClaimCodeReply) */
} particle_ctrl_SetClaimCodeReply;

typedef struct _particle_ctrl_SetDeviceSetupDoneReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_SetDeviceSetupDoneReply) */
} particle_ctrl_SetDeviceSetupDoneReply;

typedef struct _particle_ctrl_SetFeatureReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_SetFeatureReply) */
} particle_ctrl_SetFeatureReply;

typedef struct _particle_ctrl_SetSecurityKeyReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_SetSecurityKeyReply) */
} particle_ctrl_SetSecurityKeyReply;

typedef struct _particle_ctrl_SetServerAddressReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_SetServerAddressReply) */
} particle_ctrl_SetServerAddressReply;

typedef struct _particle_ctrl_SetServerProtocolReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_SetServerProtocolReply) */
} particle_ctrl_SetServerProtocolReply;

typedef struct _particle_ctrl_SetSoftApSsidReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_SetSoftApSsidReply) */
} particle_ctrl_SetSoftApSsidReply;

typedef struct _particle_ctrl_SetStartupModeReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_SetStartupModeReply) */
} particle_ctrl_SetStartupModeReply;

typedef struct _particle_ctrl_StartListeningModeReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_StartListeningModeReply) */
} particle_ctrl_StartListeningModeReply;

typedef struct _particle_ctrl_StartListeningModeRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_StartListeningModeRequest) */
} particle_ctrl_StartListeningModeRequest;

typedef struct _particle_ctrl_StopListeningModeReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_StopListeningModeReply) */
} particle_ctrl_StopListeningModeReply;

typedef struct _particle_ctrl_StopListeningModeRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_StopListeningModeRequest) */
} particle_ctrl_StopListeningModeRequest;

typedef struct _particle_ctrl_SystemResetReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_SystemResetReply) */
} particle_ctrl_SystemResetReply;

typedef struct _particle_ctrl_SystemResetRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_SystemResetRequest) */
} particle_ctrl_SystemResetRequest;

typedef struct _particle_ctrl_GetDeviceIdReply {
    char id[24];
/* @@protoc_insertion_point(struct:particle_ctrl_GetDeviceIdReply) */
} particle_ctrl_GetDeviceIdReply;

typedef struct _particle_ctrl_GetDeviceModeReply {
    particle_ctrl_DeviceMode mode;
/* @@protoc_insertion_point(struct:particle_ctrl_GetDeviceModeReply) */
} particle_ctrl_GetDeviceModeReply;

typedef struct _particle_ctrl_GetFeatureReply {
    bool enabled;
/* @@protoc_insertion_point(struct:particle_ctrl_GetFeatureReply) */
} particle_ctrl_GetFeatureReply;

typedef struct _particle_ctrl_GetFeatureRequest {
    particle_ctrl_Feature feature;
/* @@protoc_insertion_point(struct:particle_ctrl_GetFeatureRequest) */
} particle_ctrl_GetFeatureRequest;

typedef struct _particle_ctrl_GetNcpFirmwareVersionReply {
    pb_callback_t version;
    uint32_t module_version;
/* @@protoc_insertion_point(struct:particle_ctrl_GetNcpFirmwareVersionReply) */
} particle_ctrl_GetNcpFirmwareVersionReply;

typedef struct _particle_ctrl_GetSecurityKeyRequest {
    particle_ctrl_SecurityKeyType type;
/* @@protoc_insertion_point(struct:particle_ctrl_GetSecurityKeyRequest) */
} particle_ctrl_GetSecurityKeyRequest;

typedef struct _particle_ctrl_GetSerialNumberReply {
    char serial[16];
/* @@protoc_insertion_point(struct:particle_ctrl_GetSerialNumberReply) */
} particle_ctrl_GetSerialNumberReply;

typedef struct _particle_ctrl_GetServerAddressReply {
    pb_callback_t address;
    int32_t port;
/* @@protoc_insertion_point(struct:particle_ctrl_GetServerAddressReply) */
} particle_ctrl_GetServerAddressReply;

typedef struct _particle_ctrl_GetServerAddressRequest {
    particle_ctrl_ServerProtocolType protocol;
/* @@protoc_insertion_point(struct:particle_ctrl_GetServerAddressRequest) */
} particle_ctrl_GetServerAddressRequest;

typedef struct _particle_ctrl_GetServerProtocolReply {
    particle_ctrl_ServerProtocolType protocol;
/* @@protoc_insertion_point(struct:particle_ctrl_GetServerProtocolReply) */
} particle_ctrl_GetServerProtocolReply;

typedef struct _particle_ctrl_GetSystemCapabilitiesReply {
    uint32_t flags;
/* @@protoc_insertion_point(struct:particle_ctrl_GetSystemCapabilitiesReply) */
} particle_ctrl_GetSystemCapabilitiesReply;

typedef struct _particle_ctrl_IsClaimedReply {
    bool claimed;
/* @@protoc_insertion_point(struct:particle_ctrl_IsClaimedReply) */
} particle_ctrl_IsClaimedReply;

typedef struct _particle_ctrl_IsDeviceSetupDoneReply {
    bool done;
/* @@protoc_insertion_point(struct:particle_ctrl_IsDeviceSetupDoneReply) */
} particle_ctrl_IsDeviceSetupDoneReply;

typedef struct _particle_ctrl_SetClaimCodeRequest {
    char code[64];
/* @@protoc_insertion_point(struct:particle_ctrl_SetClaimCodeRequest) */
} particle_ctrl_SetClaimCodeRequest;

typedef struct _particle_ctrl_SetDeviceSetupDoneRequest {
    bool done;
/* @@protoc_insertion_point(struct:particle_ctrl_SetDeviceSetupDoneRequest) */
} particle_ctrl_SetDeviceSetupDoneRequest;

typedef struct _particle_ctrl_SetFeatureRequest {
    particle_ctrl_Feature feature;
    bool enabled;
/* @@protoc_insertion_point(struct:particle_ctrl_SetFeatureRequest) */
} particle_ctrl_SetFeatureRequest;

typedef struct _particle_ctrl_SetSecurityKeyRequest {
    particle_ctrl_SecurityKeyType type;
    pb_callback_t data;
/* @@protoc_insertion_point(struct:particle_ctrl_SetSecurityKeyRequest) */
} particle_ctrl_SetSecurityKeyRequest;

typedef struct _particle_ctrl_SetServerAddressRequest {
    particle_ctrl_ServerProtocolType protocol;
    char address[64];
    int32_t port;
/* @@protoc_insertion_point(struct:particle_ctrl_SetServerAddressRequest) */
} particle_ctrl_SetServerAddressRequest;

typedef struct _particle_ctrl_SetServerProtocolRequest {
    particle_ctrl_ServerProtocolType protocol;
/* @@protoc_insertion_point(struct:particle_ctrl_SetServerProtocolRequest) */
} particle_ctrl_SetServerProtocolRequest;

typedef struct _particle_ctrl_SetSoftApSsidRequest {
    char prefix[32];
    char suffix[16];
/* @@protoc_insertion_point(struct:particle_ctrl_SetSoftApSsidRequest) */
} particle_ctrl_SetSoftApSsidRequest;

typedef struct _particle_ctrl_SetStartupModeRequest {
    particle_ctrl_DeviceMode mode;
/* @@protoc_insertion_point(struct:particle_ctrl_SetStartupModeRequest) */
} particle_ctrl_SetStartupModeRequest;

/* Default values for struct fields */

/* Initializer values for message structs */
#define particle_ctrl_GetDeviceIdRequest_init_default {0}
#define particle_ctrl_GetDeviceIdReply_init_default {""}
#define particle_ctrl_GetSerialNumberRequest_init_default {0}
#define particle_ctrl_GetSerialNumberReply_init_default {""}
#define particle_ctrl_GetSystemVersionRequest_init_default {0}
#define particle_ctrl_GetSystemVersionReply_init_default {{{NULL}, NULL}}
#define particle_ctrl_GetNcpFirmwareVersionRequest_init_default {0}
#define particle_ctrl_GetNcpFirmwareVersionReply_init_default {{{NULL}, NULL}, 0}
#define particle_ctrl_GetSystemCapabilitiesRequest_init_default {0}
#define particle_ctrl_GetSystemCapabilitiesReply_init_default {0}
#define particle_ctrl_SetClaimCodeRequest_init_default {""}
#define particle_ctrl_SetClaimCodeReply_init_default {0}
#define particle_ctrl_IsClaimedRequest_init_default {0}
#define particle_ctrl_IsClaimedReply_init_default {0}
#define particle_ctrl_SetSecurityKeyRequest_init_default {(particle_ctrl_SecurityKeyType)0, {{NULL}, NULL}}
#define particle_ctrl_SetSecurityKeyReply_init_default {0}
#define particle_ctrl_GetSecurityKeyRequest_init_default {(particle_ctrl_SecurityKeyType)0}
#define particle_ctrl_GetSecurityKeyReply_init_default {{{NULL}, NULL}}
#define particle_ctrl_SetServerAddressRequest_init_default {(particle_ctrl_ServerProtocolType)0, "", 0}
#define particle_ctrl_SetServerAddressReply_init_default {0}
#define particle_ctrl_GetServerAddressRequest_init_default {(particle_ctrl_ServerProtocolType)0}
#define particle_ctrl_GetServerAddressReply_init_default {{{NULL}, NULL}, 0}
#define particle_ctrl_SetServerProtocolRequest_init_default {(particle_ctrl_ServerProtocolType)0}
#define particle_ctrl_SetServerProtocolReply_init_default {0}
#define particle_ctrl_GetServerProtocolRequest_init_default {0}
#define particle_ctrl_GetServerProtocolReply_init_default {(particle_ctrl_ServerProtocolType)0}
#define particle_ctrl_SetSoftApSsidRequest_init_default {"", ""}
#define particle_ctrl_SetSoftApSsidReply_init_default {0}
#define particle_ctrl_StartListeningModeRequest_init_default {0}
#define particle_ctrl_StartListeningModeReply_init_default {0}
#define particle_ctrl_StopListeningModeRequest_init_default {0}
#define particle_ctrl_StopListeningModeReply_init_default {0}
#define particle_ctrl_GetDeviceModeRequest_init_default {0}
#define particle_ctrl_GetDeviceModeReply_init_default {(particle_ctrl_DeviceMode)0}
#define particle_ctrl_SetDeviceSetupDoneRequest_init_default {0}
#define particle_ctrl_SetDeviceSetupDoneReply_init_default {0}
#define particle_ctrl_IsDeviceSetupDoneRequest_init_default {0}
#define particle_ctrl_IsDeviceSetupDoneReply_init_default {0}
#define particle_ctrl_SetStartupModeRequest_init_default {(particle_ctrl_DeviceMode)0}
#define particle_ctrl_SetStartupModeReply_init_default {0}
#define particle_ctrl_SystemResetRequest_init_default {0}
#define particle_ctrl_SystemResetReply_init_default {0}
#define particle_ctrl_SetFeatureRequest_init_default {(particle_ctrl_Feature)0, 0}
#define particle_ctrl_SetFeatureReply_init_default {0}
#define particle_ctrl_GetFeatureRequest_init_default {(particle_ctrl_Feature)0}
#define particle_ctrl_GetFeatureReply_init_default {0}
#define particle_ctrl_GetDeviceIdRequest_init_zero {0}
#define particle_ctrl_GetDeviceIdReply_init_zero {""}
#define particle_ctrl_GetSerialNumberRequest_init_zero {0}
#define particle_ctrl_GetSerialNumberReply_init_zero {""}
#define particle_ctrl_GetSystemVersionRequest_init_zero {0}
#define particle_ctrl_GetSystemVersionReply_init_zero {{{NULL}, NULL}}
#define particle_ctrl_GetNcpFirmwareVersionRequest_init_zero {0}
#define particle_ctrl_GetNcpFirmwareVersionReply_init_zero {{{NULL}, NULL}, 0}
#define particle_ctrl_GetSystemCapabilitiesRequest_init_zero {0}
#define particle_ctrl_GetSystemCapabilitiesReply_init_zero {0}
#define particle_ctrl_SetClaimCodeRequest_init_zero {""}
#define particle_ctrl_SetClaimCodeReply_init_zero {0}
#define particle_ctrl_IsClaimedRequest_init_zero {0}
#define particle_ctrl_IsClaimedReply_init_zero   {0}
#define particle_ctrl_SetSecurityKeyRequest_init_zero {(particle_ctrl_SecurityKeyType)0, {{NULL}, NULL}}
#define particle_ctrl_SetSecurityKeyReply_init_zero {0}
#define particle_ctrl_GetSecurityKeyRequest_init_zero {(particle_ctrl_SecurityKeyType)0}
#define particle_ctrl_GetSecurityKeyReply_init_zero {{{NULL}, NULL}}
#define particle_ctrl_SetServerAddressRequest_init_zero {(particle_ctrl_ServerProtocolType)0, "", 0}
#define particle_ctrl_SetServerAddressReply_init_zero {0}
#define particle_ctrl_GetServerAddressRequest_init_zero {(particle_ctrl_ServerProtocolType)0}
#define particle_ctrl_GetServerAddressReply_init_zero {{{NULL}, NULL}, 0}
#define particle_ctrl_SetServerProtocolRequest_init_zero {(particle_ctrl_ServerProtocolType)0}
#define particle_ctrl_SetServerProtocolReply_init_zero {0}
#define particle_ctrl_GetServerProtocolRequest_init_zero {0}
#define particle_ctrl_GetServerProtocolReply_init_zero {(particle_ctrl_ServerProtocolType)0}
#define particle_ctrl_SetSoftApSsidRequest_init_zero {"", ""}
#define particle_ctrl_SetSoftApSsidReply_init_zero {0}
#define particle_ctrl_StartListeningModeRequest_init_zero {0}
#define particle_ctrl_StartListeningModeReply_init_zero {0}
#define particle_ctrl_StopListeningModeRequest_init_zero {0}
#define particle_ctrl_StopListeningModeReply_init_zero {0}
#define particle_ctrl_GetDeviceModeRequest_init_zero {0}
#define particle_ctrl_GetDeviceModeReply_init_zero {(particle_ctrl_DeviceMode)0}
#define particle_ctrl_SetDeviceSetupDoneRequest_init_zero {0}
#define particle_ctrl_SetDeviceSetupDoneReply_init_zero {0}
#define particle_ctrl_IsDeviceSetupDoneRequest_init_zero {0}
#define particle_ctrl_IsDeviceSetupDoneReply_init_zero {0}
#define particle_ctrl_SetStartupModeRequest_init_zero {(particle_ctrl_DeviceMode)0}
#define particle_ctrl_SetStartupModeReply_init_zero {0}
#define particle_ctrl_SystemResetRequest_init_zero {0}
#define particle_ctrl_SystemResetReply_init_zero {0}
#define particle_ctrl_SetFeatureRequest_init_zero {(particle_ctrl_Feature)0, 0}
#define particle_ctrl_SetFeatureReply_init_zero  {0}
#define particle_ctrl_GetFeatureRequest_init_zero {(particle_ctrl_Feature)0}
#define particle_ctrl_GetFeatureReply_init_zero  {0}

/* Field tags (for use in manual encoding/decoding) */
#define particle_ctrl_GetSecurityKeyReply_data_tag 1
#define particle_ctrl_GetSystemVersionReply_version_tag 1
#define particle_ctrl_GetDeviceIdReply_id_tag    1
#define particle_ctrl_GetDeviceModeReply_mode_tag 1
#define particle_ctrl_GetFeatureReply_enabled_tag 1
#define particle_ctrl_GetFeatureRequest_feature_tag 1
#define particle_ctrl_GetNcpFirmwareVersionReply_version_tag 1
#define particle_ctrl_GetNcpFirmwareVersionReply_module_version_tag 2
#define particle_ctrl_GetSecurityKeyRequest_type_tag 1
#define particle_ctrl_GetSerialNumberReply_serial_tag 1
#define particle_ctrl_GetServerAddressReply_address_tag 1
#define particle_ctrl_GetServerAddressReply_port_tag 2
#define particle_ctrl_GetServerAddressRequest_protocol_tag 1
#define particle_ctrl_GetServerProtocolReply_protocol_tag 1
#define particle_ctrl_GetSystemCapabilitiesReply_flags_tag 1
#define particle_ctrl_IsClaimedReply_claimed_tag 1
#define particle_ctrl_IsDeviceSetupDoneReply_done_tag 1
#define particle_ctrl_SetClaimCodeRequest_code_tag 1
#define particle_ctrl_SetDeviceSetupDoneRequest_done_tag 1
#define particle_ctrl_SetFeatureRequest_feature_tag 1
#define particle_ctrl_SetFeatureRequest_enabled_tag 2
#define particle_ctrl_SetSecurityKeyRequest_type_tag 1
#define particle_ctrl_SetSecurityKeyRequest_data_tag 2
#define particle_ctrl_SetServerAddressRequest_protocol_tag 1
#define particle_ctrl_SetServerAddressRequest_address_tag 2
#define particle_ctrl_SetServerAddressRequest_port_tag 3
#define particle_ctrl_SetServerProtocolRequest_protocol_tag 1
#define particle_ctrl_SetSoftApSsidRequest_prefix_tag 1
#define particle_ctrl_SetSoftApSsidRequest_suffix_tag 2
#define particle_ctrl_SetStartupModeRequest_mode_tag 1

/* Struct field encoding specification for nanopb */
extern const pb_field_t particle_ctrl_GetDeviceIdRequest_fields[1];
extern const pb_field_t particle_ctrl_GetDeviceIdReply_fields[2];
extern const pb_field_t particle_ctrl_GetSerialNumberRequest_fields[1];
extern const pb_field_t particle_ctrl_GetSerialNumberReply_fields[2];
extern const pb_field_t particle_ctrl_GetSystemVersionRequest_fields[1];
extern const pb_field_t particle_ctrl_GetSystemVersionReply_fields[2];
extern const pb_field_t particle_ctrl_GetNcpFirmwareVersionRequest_fields[1];
extern const pb_field_t particle_ctrl_GetNcpFirmwareVersionReply_fields[3];
extern const pb_field_t particle_ctrl_GetSystemCapabilitiesRequest_fields[1];
extern const pb_field_t particle_ctrl_GetSystemCapabilitiesReply_fields[2];
extern const pb_field_t particle_ctrl_SetClaimCodeRequest_fields[2];
extern const pb_field_t particle_ctrl_SetClaimCodeReply_fields[1];
extern const pb_field_t particle_ctrl_IsClaimedRequest_fields[1];
extern const pb_field_t particle_ctrl_IsClaimedReply_fields[2];
extern const pb_field_t particle_ctrl_SetSecurityKeyRequest_fields[3];
extern const pb_field_t particle_ctrl_SetSecurityKeyReply_fields[1];
extern const pb_field_t particle_ctrl_GetSecurityKeyRequest_fields[2];
extern const pb_field_t particle_ctrl_GetSecurityKeyReply_fields[2];
extern const pb_field_t particle_ctrl_SetServerAddressRequest_fields[4];
extern const pb_field_t particle_ctrl_SetServerAddressReply_fields[1];
extern const pb_field_t particle_ctrl_GetServerAddressRequest_fields[2];
extern const pb_field_t particle_ctrl_GetServerAddressReply_fields[3];
extern const pb_field_t particle_ctrl_SetServerProtocolRequest_fields[2];
extern const pb_field_t particle_ctrl_SetServerProtocolReply_fields[1];
extern const pb_field_t particle_ctrl_GetServerProtocolRequest_fields[1];
extern const pb_field_t particle_ctrl_GetServerProtocolReply_fields[2];
extern const pb_field_t particle_ctrl_SetSoftApSsidRequest_fields[3];
extern const pb_field_t particle_ctrl_SetSoftApSsidReply_fields[1];
extern const pb_field_t particle_ctrl_StartListeningModeRequest_fields[1];
extern const pb_field_t particle_ctrl_StartListeningModeReply_fields[1];
extern const pb_field_t particle_ctrl_StopListeningModeRequest_fields[1];
extern const pb_field_t particle_ctrl_StopListeningModeReply_fields[1];
extern const pb_field_t particle_ctrl_GetDeviceModeRequest_fields[1];
extern const pb_field_t particle_ctrl_GetDeviceModeReply_fields[2];
extern const pb_field_t particle_ctrl_SetDeviceSetupDoneRequest_fields[2];
extern const pb_field_t particle_ctrl_SetDeviceSetupDoneReply_fields[1];
extern const pb_field_t particle_ctrl_IsDeviceSetupDoneRequest_fields[1];
extern const pb_field_t particle_ctrl_IsDeviceSetupDoneReply_fields[2];
extern const pb_field_t particle_ctrl_SetStartupModeRequest_fields[2];
extern const pb_field_t particle_ctrl_SetStartupModeReply_fields[1];
extern const pb_field_t particle_ctrl_SystemResetRequest_fields[1];
extern const pb_field_t particle_ctrl_SystemResetReply_fields[1];
extern const pb_field_t particle_ctrl_SetFeatureRequest_fields[3];
extern const pb_field_t particle_ctrl_SetFeatureReply_fields[1];
extern const pb_field_t particle_ctrl_GetFeatureRequest_fields[2];
extern const pb_field_t particle_ctrl_GetFeatureReply_fields[2];

/* Maximum encoded size of messages (where known) */
#define particle_ctrl_GetDeviceIdRequest_size    0
#define particle_ctrl_GetDeviceIdReply_size      26
#define particle_ctrl_GetSerialNumberRequest_size 0
#define particle_ctrl_GetSerialNumberReply_size  18
#define particle_ctrl_GetSystemVersionRequest_size 0
/* particle_ctrl_GetSystemVersionReply_size depends on runtime parameters */
#define particle_ctrl_GetNcpFirmwareVersionRequest_size 0
/* particle_ctrl_GetNcpFirmwareVersionReply_size depends on runtime parameters */
#define particle_ctrl_GetSystemCapabilitiesRequest_size 0
#define particle_ctrl_GetSystemCapabilitiesReply_size 5
#define particle_ctrl_SetClaimCodeRequest_size   66
#define particle_ctrl_SetClaimCodeReply_size     0
#define particle_ctrl_IsClaimedRequest_size      0
#define particle_ctrl_IsClaimedReply_size        2
/* particle_ctrl_SetSecurityKeyRequest_size depends on runtime parameters */
#define particle_ctrl_SetSecurityKeyReply_size   0
#define particle_ctrl_GetSecurityKeyRequest_size 2
/* particle_ctrl_GetSecurityKeyReply_size depends on runtime parameters */
#define particle_ctrl_SetServerAddressRequest_size 79
#define particle_ctrl_SetServerAddressReply_size 0
#define particle_ctrl_GetServerAddressRequest_size 2
/* particle_ctrl_GetServerAddressReply_size depends on runtime parameters */
#define particle_ctrl_SetServerProtocolRequest_size 2
#define particle_ctrl_SetServerProtocolReply_size 0
#define particle_ctrl_GetServerProtocolRequest_size 0
#define particle_ctrl_GetServerProtocolReply_size 2
#define particle_ctrl_SetSoftApSsidRequest_size  52
#define particle_ctrl_SetSoftApSsidReply_size    0
#define particle_ctrl_StartListeningModeRequest_size 0
#define particle_ctrl_StartListeningModeReply_size 0
#define particle_ctrl_StopListeningModeRequest_size 0
#define particle_ctrl_StopListeningModeReply_size 0
#define particle_ctrl_GetDeviceModeRequest_size  0
#define particle_ctrl_GetDeviceModeReply_size    2
#define particle_ctrl_SetDeviceSetupDoneRequest_size 2
#define particle_ctrl_SetDeviceSetupDoneReply_size 0
#define particle_ctrl_IsDeviceSetupDoneRequest_size 0
#define particle_ctrl_IsDeviceSetupDoneReply_size 2
#define particle_ctrl_SetStartupModeRequest_size 2
#define particle_ctrl_SetStartupModeReply_size   0
#define particle_ctrl_SystemResetRequest_size    0
#define particle_ctrl_SystemResetReply_size      0
#define particle_ctrl_SetFeatureRequest_size     4
#define particle_ctrl_SetFeatureReply_size       0
#define particle_ctrl_GetFeatureRequest_size     2
#define particle_ctrl_GetFeatureReply_size       2

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define CONFIG_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
