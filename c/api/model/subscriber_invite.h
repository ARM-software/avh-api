/*
 * subscriber_invite.h
 *
 * Subscriber Invite
 */

#ifndef _subscriber_invite_H_
#define _subscriber_invite_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subscriber_invite_t subscriber_invite_t;

#include "coupon_options.h"
#include "plan.h"
#include "trial.h"



typedef struct subscriber_invite_t {
    struct coupon_options_t *coupon_options; //model
    struct plan_t *plan; //model
    struct trial_t *trial; //model
    char *name; // string
    char *email; // string
    char *coupon_code; // string
    char *domain; // string
    char *aggregate; // string
    char *use_by; // string
    int active; //boolean
    int reusable; //boolean
    char *created_at; // string
    char *updated_at; // string

    int _library_owned; // Is the library responsible for freeing this object?
} subscriber_invite_t;

__attribute__((deprecated)) subscriber_invite_t *subscriber_invite_create(
    coupon_options_t *coupon_options,
    plan_t *plan,
    trial_t *trial,
    char *name,
    char *email,
    char *coupon_code,
    char *domain,
    char *aggregate,
    char *use_by,
    int active,
    int reusable,
    char *created_at,
    char *updated_at
);

void subscriber_invite_free(subscriber_invite_t *subscriber_invite);

subscriber_invite_t *subscriber_invite_parseFromJSON(cJSON *subscriber_inviteJSON);

cJSON *subscriber_invite_convertToJSON(subscriber_invite_t *subscriber_invite);

#endif /* _subscriber_invite_H_ */

