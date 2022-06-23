/*
 * domain_options.h
 *
 * 
 */

#ifndef _domain_options_H_
#define _domain_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_options_t domain_options_t;

#include "trial_extension.h"



typedef struct domain_options_t {
    int totp_required; //boolean
    struct trial_extension_t *trial_extension; //model

    int _library_owned; // Is the library responsible for freeing this object?
} domain_options_t;

__attribute__((deprecated)) domain_options_t *domain_options_create(
    int totp_required,
    trial_extension_t *trial_extension
);

void domain_options_free(domain_options_t *domain_options);

domain_options_t *domain_options_parseFromJSON(cJSON *domain_optionsJSON);

cJSON *domain_options_convertToJSON(domain_options_t *domain_options);

#endif /* _domain_options_H_ */

