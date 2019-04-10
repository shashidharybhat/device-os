/*
 * Copyright (c) 2019 Particle Industries, Inc.  All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <stdint.h>

/**
 * API version number.
 */
#define LOG_CONFIG_API_VERSION 1

/**
 * Configuration commands.
 */
typedef enum log_config_command {
    LOG_CONFIG_ADD_HANDLER = 1, ///< Add a log handler.
    LOG_CONFIG_REMOVE_HANDLER = 2, ///< Remove a log handler.
    LOG_CONFIG_GET_HANDLERS = 3 ///< Get the list of active log handlers.
} log_config_command;

/**
 * Log handler types.
 */
typedef enum log_config_handler_type {
    LOG_CONFIG_DEFAULT_STREAM_HANDLER = 1, ///< `StreamLogHandler`
    LOG_CONFIG_JSON_STREAM_HANDLER = 2 ///< `JSONStreamLogHandler`
} log_config_handler_type;

/**
 * Stream types.
 */
typedef enum log_config_stream_type {
    LOG_CONFIG_USB_SERIAL_STREAM = 1, ///< USB serial (`Serial`, `USBSerial1`, etc.)
    LOG_CONFIG_HW_SERIAL_STREAM = 2 ///< Hardware serial (`Serial1`, `Serial2`, etc.)
} log_config_stream_type;

/**
 * Serial stream parameters.
 */
typedef struct log_config_serial_stream_params {
    uint8_t index; ///< Interface index.
    uint8_t reserved1;
    uint16_t reserved2;
    uint32_t baud_rate; ///< Baud rate.
} log_config_serial_stream_params;

/**
 * Category filter.
 */
typedef struct log_filter {
    const char* category; ///< Category name.
    uint8_t level; ///< Logging level (a value defined by the `LogLevel` enum).
} log_filter;

/**
 * Parameters of the `LOG_CONFIG_ADD_HANDLER` command.
 */
typedef struct log_config_add_handler_command {
    uint8_t version; ///< API version number.
    uint8_t handler_type; ///< Handler type (a value defined by the `log_config_handler_type` enum).
    uint8_t stream_type; ///< Stream type (a value defined by the `log_config_stream_type` enum).
    uint8_t level; ///< Default logging level (a value defined by the `LogLevel` enum).
    uint16_t filter_count; ///< Number of elements in the `filters` array.
    uint16_t reserved;
    const char* id; ///< Handler ID.
    const void* handler_params; ///< Handler parameters.
    const void* stream_params; ///< Stream parameters.
    const log_filter* filters; ///< Category filters.
} log_config_add_handler_command;

/**
 * Parameters of the `LOG_CONFIG_REMOVE_HANDLER` command.
 */
typedef struct log_config_remove_handler_command {
    uint8_t version; ///< API version number.
    uint8_t reserved1;
    uint16_t reserved2;
    const char* id; ///< Handler ID.
} log_config_remove_handler_command;

/**
 * Parameters of the `LOG_CONFIG_GET_HANDLERS` command.
 */
typedef struct log_config_get_handlers_command {
    uint8_t version; ///< API version number.
    uint8_t reserved1;
    uint16_t reserved2;
} log_config_get_handlers_command;

/**
 * An element of a log handler list.
 */
typedef struct log_config_handler_list_item {
    char* id; ///< Handler ID. This string is allocated dynamically.
} log_config_handler_list_item;

/**
 * Result of a `LOG_CONFIG_GET_HANDLERS` command.
 */
typedef struct log_config_get_handlers_result {
    uint16_t handler_count; ///< Number of elements in the `handlers` array.
    uint16_t reserved;
    log_config_handler_list_item* handlers; ///< Active handlers. This array is allocated dynamically.
} log_config_get_handlers_result;

/**
 * Configuration callback.
 *
 * @param cmd Command type (a value defined by the `log_config_command` enum).
 * @param cmd_data Command data.
 * @param result Command result.
 * @param user_data User data.
 * @return `0` on success, or a negative result code in case of an error.
 */
typedef int(*log_config_callback_type)(int cmd, const void* cmd_data, void* result, void* user_data);

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Set the configuration callback.
 *
 * @param callback A callback.
 * @param user_data User data.
 * @param reserved This argument should be set to NULL.
 */
void log_config_set_callback(log_config_callback_type callback, void* user_data, void* reserved);

// Invoke the configuration callback. This function is internal to the system module
int log_config(int cmd, const void* cmd_data, void* result);

#ifdef __cplusplus
} // extern "C"
#endif
