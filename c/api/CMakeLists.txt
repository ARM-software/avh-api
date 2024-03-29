cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator C)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    message (STATUS "OPENSSL found")

    set(CMAKE_C_FLAGS "-DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()

    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
    message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "arm_api")

# this default version can be overridden in PreTarget.cmake
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

if( (DEFINED CURL_INCLUDE_DIR) AND (DEFINED CURL_LIBRARIES))
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else()
    find_package(CURL 7.58.0 REQUIRED)
    if(CURL_FOUND)
        include_directories(${CURL_INCLUDE_DIR})
        set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
    else(CURL_FOUND)
        message(FATAL_ERROR "Could not find the CURL library and development files.")
    endif()
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/address.c
    model/agent_app.c
    model/agent_app_ready_response.c
    model/agent_app_status.c
    model/agent_apps_list.c
    model/agent_apps_status_list.c
    model/agent_error.c
    model/agent_icons.c
    model/agent_install_body.c
    model/agent_profiles_return.c
    model/agent_system_adb_auth.c
    model/agent_system_get_prop_body.c
    model/agent_value_return.c
    model/agreed_ack.c
    model/api_conflict_error.c
    model/api_error.c
    model/api_internal_consistency_error.c
    model/api_not_found_error.c
    model/api_token.c
    model/bit.c
    model/btrace_enable_options.c
    model/button.c
    model/coupon_options.c
    model/create_team.c
    model/created_by.c
    model/credentials.c
    model/domain_options.c
    model/extension.c
    model/features.c
    model/file_changes.c
    model/firmware.c
    model/gpio_state_definition.c
    model/gpios_state.c
    model/grant_trial_request_response.c
    model/hook.c
    model/image.c
    model/instance.c
    model/instance_agent_state.c
    model/instance_boot_options.c
    model/instance_boot_options_additional_tag.c
    model/instance_console_endpoint.c
    model/instance_create_options.c
    model/instance_input.c
    model/instance_netmon_state.c
    model/instance_return.c
    model/instance_services.c
    model/instance_start_options.c
    model/instance_state.c
    model/instance_stop_options.c
    model/invitation.c
    model/invite_revoke_params.c
    model/invite_revoke_params_ids.c
    model/kcrange.c
    model/kernel_task.c
    model/kernel_thread.c
    model/media_play_body.c
    model/model.c
    model/model_software.c
    model/password_change_body.c
    model/password_reset_body.c
    model/patch_instance_options.c
    model/peripherals_data.c
    model/plan.c
    model/project.c
    model/project_key.c
    model/project_quota.c
    model/project_settings.c
    model/project_usage.c
    model/rate_info.c
    model/reset_link_body.c
    model/role.c
    model/rotate_body.c
    model/snapshot.c
    model/snapshot_creation_options.c
    model/snapshot_status.c
    model/subscriber_invite.c
    model/team.c
    model/team_create.c
    model/text_input.c
    model/token.c
    model/touch_curve_input.c
    model/touch_input.c
    model/trial.c
    model/trial_extension.c
    model/trial_request_metadata.c
    model/trial_request_options.c
    model/update_extension.c
    model/user.c
    model/user_error.c
    model/v1_create_hook_parameters.c
    model/v1_load_extension_parameters.c
    model/v1_set_state_body.c
    model/validation_error.c
    model/volume_options.c
    model/vpn_definition.c
    model/web_player_create_session_request.c
    model/web_player_session.c
    api/ArmAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/any_type.h
    model/address.h
    model/agent_app.h
    model/agent_app_ready_response.h
    model/agent_app_status.h
    model/agent_apps_list.h
    model/agent_apps_status_list.h
    model/agent_error.h
    model/agent_icons.h
    model/agent_install_body.h
    model/agent_profiles_return.h
    model/agent_system_adb_auth.h
    model/agent_system_get_prop_body.h
    model/agent_value_return.h
    model/agreed_ack.h
    model/api_conflict_error.h
    model/api_error.h
    model/api_internal_consistency_error.h
    model/api_not_found_error.h
    model/api_token.h
    model/bit.h
    model/btrace_enable_options.h
    model/button.h
    model/coupon_options.h
    model/create_team.h
    model/created_by.h
    model/credentials.h
    model/domain_options.h
    model/extension.h
    model/features.h
    model/file_changes.h
    model/firmware.h
    model/gpio_state_definition.h
    model/gpios_state.h
    model/grant_trial_request_response.h
    model/hook.h
    model/image.h
    model/instance.h
    model/instance_agent_state.h
    model/instance_boot_options.h
    model/instance_boot_options_additional_tag.h
    model/instance_console_endpoint.h
    model/instance_create_options.h
    model/instance_input.h
    model/instance_netmon_state.h
    model/instance_return.h
    model/instance_services.h
    model/instance_start_options.h
    model/instance_state.h
    model/instance_stop_options.h
    model/invitation.h
    model/invite_revoke_params.h
    model/invite_revoke_params_ids.h
    model/kcrange.h
    model/kernel_task.h
    model/kernel_thread.h
    model/media_play_body.h
    model/model.h
    model/model_software.h
    model/password_change_body.h
    model/password_reset_body.h
    model/patch_instance_options.h
    model/peripherals_data.h
    model/plan.h
    model/project.h
    model/project_key.h
    model/project_quota.h
    model/project_settings.h
    model/project_usage.h
    model/rate_info.h
    model/reset_link_body.h
    model/role.h
    model/rotate_body.h
    model/snapshot.h
    model/snapshot_creation_options.h
    model/snapshot_status.h
    model/subscriber_invite.h
    model/team.h
    model/team_create.h
    model/text_input.h
    model/token.h
    model/touch_curve_input.h
    model/touch_input.h
    model/trial.h
    model/trial_extension.h
    model/trial_request_metadata.h
    model/trial_request_options.h
    model/update_extension.h
    model/user.h
    model/user_error.h
    model/v1_create_hook_parameters.h
    model/v1_load_extension_parameters.h
    model/v1_set_state_body.h
    model/validation_error.h
    model/volume_options.h
    model/vpn_definition.h
    model/web_player_create_session_request.h
    model/web_player_session.h
    api/ArmAPI.h

)

include(PreTarget.cmake OPTIONAL)

set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION lib)
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION lib EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${pkgName}/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${PROJECT_VERSION_STRING}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# make installation packages
include(Packing.cmake OPTIONAL)

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-ArmAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
